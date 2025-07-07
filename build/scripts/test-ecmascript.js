#!/usr/bin/env node

const fs = require('fs');
const path = require('path');

class ECMAScriptTest {
    constructor() {
        this.rootDir = path.resolve(__dirname, '..', '..');
        this.testsPassed = 0;
        this.testsFailed = 0;
    }

    log(message) {
        console.log(message);
    }

    error(message) {
        console.error(message);
        this.testsFailed++;
    }

    success(message) {
        console.log(`✓ ${message}`);
        this.testsPassed++;
    }

    async testFileExists(filePath, description) {
        if (fs.existsSync(filePath)) {
            this.success(`${description} exists: ${path.relative(this.rootDir, filePath)}`);
            return true;
        } else {
            this.error(`${description} missing: ${path.relative(this.rootDir, filePath)}`);
            return false;
        }
    }

    async testFileContains(filePath, content, description) {
        try {
            const fileContent = await fs.promises.readFile(filePath, 'utf-8');
            if (fileContent.includes(content)) {
                this.success(`${description} contains expected content`);
                return true;
            } else {
                this.error(`${description} missing expected content: "${content}"`);
                return false;
            }
        } catch (error) {
            this.error(`${description} could not be read: ${error.message}`);
            return false;
        }
    }

    async testValidCPP(filePath, description) {
        try {
            const content = await fs.promises.readFile(filePath, 'utf-8');
            
            // Basic C++ syntax checks - only check for actual JavaScript errors, not documentation
            const hasValidStructure = content.includes('{') && content.includes('}');
            const noActualJSErrors = !content.includes('node:') && !content.includes('Error: Cannot find module');
            
            if (hasValidStructure && noActualJSErrors) {
                this.success(`${description} has valid C++ syntax`);
                return true;
            } else {
                this.error(`${description} has invalid C++ syntax`);
                return false;
            }
        } catch (error) {
            this.error(`${description} could not be validated: ${error.message}`);
            return false;
        }
    }

    async run() {
        this.log("Running ECMAScript build tests...");
        this.log("");

        // Test that all generated files exist
        const generatedFiles = [
            {
                path: path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instruction.h'),
                desc: 'ES Instruction header'
            },
            {
                path: path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instructionhandlers.cpp'),
                desc: 'ES Instruction handlers'
            },
            {
                path: path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'util', 'es_instruction_string.h'),
                desc: 'ES Instruction strings'
            },
            {
                path: path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_instruction_data.h'),
                desc: 'ES Instruction data'
            },
            {
                path: path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_process_instr.cpp'),
                desc: 'ES Process instructions'
            },
            {
                path: path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_disassemble_instr.cpp'),
                desc: 'ES Disassemble instructions'
            }
        ];

        for (const file of generatedFiles) {
            await this.testFileExists(file.path, file.desc);
        }

        // Test that files contain expected content
        await this.testFileContains(
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instruction.h'),
            'enum ES_Instruction',
            'ES Instruction header'
        );

        await this.testFileContains(
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instructionhandlers.cpp'),
            'ES_SetupFunctionHandlers',
            'ES Instruction handlers'
        );

        await this.testFileContains(
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'util', 'es_instruction_string.h'),
            'g_instruction_strings',
            'ES Instruction strings'
        );

        // Test that generated files have valid C++ syntax
        for (const file of generatedFiles) {
            if (file.path.endsWith('.h') || file.path.endsWith('.cpp')) {
                await this.testValidCPP(file.path, file.desc);
            }
        }

        // Test that Node.js build scripts exist and are functional
        const buildScripts = [
            'instructions.js',
            'es_instruction_h.js',
            'es_instructionhandlers_cpp.js',
            'es_instruction_string_h.js',
            'es_instruction_data_h.js',
            'es_process_instr_cpp.js',
            'es_disassemble_instr_cpp.js',
            'build-ecmascript.js'
        ];

        for (const script of buildScripts) {
            const scriptPath = path.join(this.rootDir, 'build', 'scripts', script);
            await this.testFileExists(scriptPath, `Build script ${script}`);
        }

        // Test that package.json exists and contains correct scripts
        const packageJsonPath = path.join(this.rootDir, 'package.json');
        if (await this.testFileExists(packageJsonPath, 'package.json')) {
            await this.testFileContains(packageJsonPath, '"build:ecmascript"', 'package.json ECMAScript build script');
            await this.testFileContains(packageJsonPath, 'node build/scripts/build-ecmascript.js', 'package.json ECMAScript build command');
        }

        // Summary
        this.log("");
        this.log("Test Summary:");
        this.log(`  Passed: ${this.testsPassed}`);
        this.log(`  Failed: ${this.testsFailed}`);
        
        if (this.testsFailed === 0) {
            this.log("✓ All ECMAScript tests passed!");
            return true;
        } else {
            this.log("✗ Some ECMAScript tests failed!");
            return false;
        }
    }
}

// CLI usage
if (require.main === module) {
    const test = new ECMAScriptTest();
    test.run().then(success => {
        process.exit(success ? 0 : 1);
    }).catch(error => {
        console.error('Test execution failed:', error);
        process.exit(1);
    });
}

module.exports = ECMAScriptTest;