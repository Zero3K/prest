#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');

class OperaBuild {
    constructor() {
        this.rootDir = path.resolve(__dirname, '..', '..');
        this.buildDir = path.join(this.rootDir, 'build');
        this.scriptsDir = path.join(this.buildDir, 'scripts');
        this.quiet = false;
    }

    log(message) {
        if (!this.quiet) {
            console.log(message);
        }
    }

    error(message) {
        console.error(`Error: ${message}`);
        process.exit(1);
    }

    runScript(scriptName, args = []) {
        const scriptPath = path.join(this.scriptsDir, scriptName);
        const command = `node "${scriptPath}" ${args.join(' ')}`;
        
        this.log(`Running: ${command}`);
        
        try {
            execSync(command, { 
                stdio: this.quiet ? 'pipe' : 'inherit',
                cwd: this.rootDir
            });
            return true;
        } catch (error) {
            this.error(`Script ${scriptName} failed: ${error.message}`);
            return false;
        }
    }

    async buildECMAScript() {
        this.log("Building ECMAScript engine files...");
        return this.runScript('build-ecmascript.js');
    }

    async buildHardcore() {
        this.log("Building hardcore system files...");
        return this.runScript('operasetup.js', ['-D_DEBUG', '--generate_pch']);
    }

    async buildSearches() {
        this.log("Building hardcoded searches...");
        return this.runScript('generate_hardcoded_searches.js');
    }

    async buildSelftests() {
        this.log("Building selftest files...");
        return this.runScript('selftest-parser.js');
    }

    async buildResources() {
        this.log("Building resource files...");
        // This would be platform-specific
        this.log("Resource building not yet implemented - skipping");
        return true;
    }

    async packageBuild() {
        this.log("Packaging build...");
        // This would use the package builder
        this.log("Packaging not yet implemented - skipping");
        return true;
    }

    async clean() {
        this.log("Cleaning build artifacts...");
        
        const cleanPaths = [
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instruction.h'),
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instructionhandlers.cpp'),
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'util', 'es_instruction_string.h'),
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_instruction_data.h'),
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_process_instr.cpp'),
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'compiler', 'es_disassemble_instr.cpp'),
            path.join(this.rootDir, 'modules', 'hardcore', 'opera_defines.h'),
            path.join(this.rootDir, 'modules', 'hardcore', 'opera_version.h'),
            path.join(this.rootDir, 'modules', 'hardcore', 'features', 'features.h'),
            path.join(this.rootDir, 'modules', 'hardcore', 'opera_pch.h'),
            path.join(this.rootDir, 'modules', 'locale', 'opera_strings.h'),
            path.join(this.rootDir, 'adjunct', 'desktop_util', 'search', 'hardcoded_searches.h'),
            path.join(this.rootDir, 'modules', 'selftest', 'generated', 'selftest_generated.h'),
            path.join(this.rootDir, 'modules', 'selftest', 'generated', 'selftest_generated.cpp')
        ];

        for (const cleanPath of cleanPaths) {
            try {
                if (fs.existsSync(cleanPath)) {
                    await fs.promises.unlink(cleanPath);
                    this.log(`Removed ${cleanPath}`);
                }
            } catch (error) {
                this.log(`Could not remove ${cleanPath}: ${error.message}`);
            }
        }

        this.log("Clean completed");
        return true;
    }

    async runTests() {
        this.log("Running tests...");
        
        // Check if generated files exist
        const requiredFiles = [
            path.join(this.rootDir, 'modules', 'ecmascript', 'carakan', 'src', 'vm', 'es_instruction.h'),
            path.join(this.rootDir, 'modules', 'hardcore', 'opera_defines.h')
        ];

        for (const file of requiredFiles) {
            if (!fs.existsSync(file)) {
                this.error(`Required file missing: ${file}. Run build first.`);
                return false;
            }
        }

        this.log("Basic validation tests passed");
        return true;
    }

    parseArguments() {
        const args = process.argv.slice(2);
        
        for (const arg of args) {
            if (arg === '--quiet' || arg === '-q') {
                this.quiet = true;
            }
        }

        return args;
    }

    async run() {
        const args = this.parseArguments();
        const command = args[0] || 'build';

        this.log(`Opera Build System - Node.js Edition`);
        this.log(`Root directory: ${this.rootDir}`);
        this.log(`Command: ${command}`);
        this.log('');

        switch (command) {
            case 'build':
                await this.buildECMAScript();
                await this.buildHardcore();
                await this.buildSearches();
                await this.buildSelftests();
                await this.buildResources();
                this.log("Build completed successfully!");
                break;

            case 'ecmascript':
                await this.buildECMAScript();
                break;

            case 'hardcore':
                await this.buildHardcore();
                break;

            case 'searches':
                await this.buildSearches();
                break;

            case 'selftests':
                await this.buildSelftests();
                break;

            case 'resources':
                await this.buildResources();
                break;

            case 'package':
                await this.packageBuild();
                break;

            case 'clean':
                await this.clean();
                break;

            case 'test':
                await this.runTests();
                break;

            case 'all':
                await this.clean();
                await this.buildECMAScript();
                await this.buildHardcore();
                await this.buildSearches();
                await this.buildSelftests();
                await this.buildResources();
                await this.packageBuild();
                this.log("Full build completed successfully!");
                break;

            default:
                console.log(`Usage: node build.js [command]`);
                console.log(`Commands:`);
                console.log(`  build     - Build core components (default)`);
                console.log(`  ecmascript - Build ECMAScript engine files only`);
                console.log(`  hardcore  - Build hardcore system files only`);
                console.log(`  searches  - Build hardcoded searches only`);
                console.log(`  selftests - Build selftest files only`);
                console.log(`  resources - Build resource files only`);
                console.log(`  package   - Package the build`);
                console.log(`  clean     - Clean build artifacts`);
                console.log(`  test      - Run validation tests`);
                console.log(`  all       - Clean and build everything`);
                console.log(`Options:`);
                console.log(`  --quiet   - Suppress output`);
                break;
        }
    }
}

// CLI usage
if (require.main === module) {
    const build = new OperaBuild();
    build.run().catch(error => {
        console.error('Build failed:', error);
        process.exit(1);
    });
}

module.exports = OperaBuild;