const fs = require('fs');
const path = require('path');

class SelftestParser {
    constructor() {
        this.prefix = path.resolve(__dirname, '..', '..');
        this.outroot = this.prefix;
        this.cachedir = path.join(this.outroot, 'modules', 'selftest', 'parser', 'cache');
        this.outputdir = path.join(this.outroot, 'modules', 'selftest', 'generated');
        this.moduleFilterFile = path.join(this.prefix, 'modules', 'selftest', 'selftest.modules');
        this.testFilesListing = path.join(this.outroot, 'modules', 'selftest', 'selftest_data');
        this.quiet = false;
        this.writeDeps = false;
    }

    log(message) {
        if (!this.quiet) {
            console.log(message);
        }
    }

    async ensureDirectories() {
        await fs.promises.mkdir(this.cachedir, { recursive: true });
        await fs.promises.mkdir(this.outputdir, { recursive: true });
    }

    async parseTestFile(filePath) {
        try {
            const content = await fs.promises.readFile(filePath, 'utf-8');
            const lines = content.split('\n');
            
            const tests = [];
            let currentTest = null;
            let inTest = false;
            
            for (let i = 0; i < lines.length; i++) {
                const line = lines[i].trim();
                
                // Look for test definitions
                if (line.startsWith('test(') || line.includes('test(')) {
                    inTest = true;
                    currentTest = {
                        name: this.extractTestName(line),
                        line: i + 1,
                        file: filePath,
                        code: [],
                        options: this.extractTestOptions(line)
                    };
                    continue;
                }
                
                // End of test
                if (inTest && line === '}') {
                    if (currentTest) {
                        tests.push(currentTest);
                        currentTest = null;
                    }
                    inTest = false;
                    continue;
                }
                
                // Collect test code
                if (inTest && currentTest) {
                    currentTest.code.push(lines[i]);
                }
            }
            
            return tests;
        } catch (error) {
            console.error(`Error parsing test file ${filePath}:`, error.message);
            return [];
        }
    }

    extractTestName(line) {
        const match = line.match(/test\(\s*["`']([^"`']+)["`']/);
        return match ? match[1] : 'unnamed_test';
    }

    extractTestOptions(line) {
        const options = {
            async: line.includes('async'),
            manual: line.includes('manual'),
            disabled: line.includes('disabled'),
            timeout: null,
            repeat: 1
        };
        
        // Extract timeout
        const timeoutMatch = line.match(/timeout\s*:\s*(\d+)/);
        if (timeoutMatch) {
            options.timeout = parseInt(timeoutMatch[1]);
        }
        
        // Extract repeat
        const repeatMatch = line.match(/repeat\s*:\s*(\d+)/);
        if (repeatMatch) {
            options.repeat = parseInt(repeatMatch[1]);
        }
        
        return options;
    }

    generateTestCode(test) {
        const safeName = test.name.replace(/[^a-zA-Z0-9_]/g, '_');
        const testCode = test.code.join('\n');
        
        return `
// Test: ${test.name} (${test.file}:${test.line})
void ST_${safeName}()
{
    // Test options: ${JSON.stringify(test.options)}
    ${testCode}
}`;
    }

    async generateSelftestHeader(tests) {
        const header = `
/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) Opera Software ASA  2002 - 2011
 *
 * Automatically generated selftest definitions
 *
 * @author build/scripts/selftest-parser.js
 */

#ifndef SELFTEST_GENERATED_H
#define SELFTEST_GENERATED_H

// Generated test function declarations
${tests.map(test => {
    const safeName = test.name.replace(/[^a-zA-Z0-9_]/g, '_');
    return `void ST_${safeName}();`;
}).join('\n')}

// Test registry
struct SelftestEntry {
    const char* name;
    const char* file;
    int line;
    void (*func)();
    bool manual;
    bool async;
    bool disabled;
};

static const SelftestEntry g_selftests[] = {
${tests.map(test => {
    const safeName = test.name.replace(/[^a-zA-Z0-9_]/g, '_');
    return `    { "${test.name}", "${test.file}", ${test.line}, ST_${safeName}, ${test.options.manual}, ${test.options.async}, ${test.options.disabled} },`;
}).join('\n')}
    { NULL, NULL, 0, NULL, false, false, false } // Sentinel
};

#endif // SELFTEST_GENERATED_H
`;
        return header;
    }

    async generateSelftestSource(tests) {
        const source = `
/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) Opera Software ASA  2002 - 2011
 *
 * Automatically generated selftest implementations
 *
 * @author build/scripts/selftest-parser.js
 */

#include "core/pch.h"

#ifdef SELFTEST

#include "modules/selftest/generated/selftest_generated.h"

${tests.map(test => this.generateTestCode(test)).join('\n\n')}

#endif // SELFTEST
`;
        return source;
    }

    async findTestFiles() {
        const testFiles = [];
        
        async function scanDirectory(dir) {
            try {
                const entries = await fs.promises.readdir(dir, { withFileTypes: true });
                
                for (const entry of entries) {
                    const fullPath = path.join(dir, entry.name);
                    
                    if (entry.isDirectory()) {
                        await scanDirectory(fullPath);
                    } else if (entry.name.endsWith('.ot') || entry.name.includes('selftest')) {
                        testFiles.push(fullPath);
                    }
                }
            } catch (error) {
                // Ignore directories we can't read
            }
        }
        
        await scanDirectory(this.prefix);
        return testFiles;
    }

    async run() {
        this.log("Starting selftest generation...");
        
        await this.ensureDirectories();
        
        // Find all test files
        const testFiles = await this.findTestFiles();
        this.log(`Found ${testFiles.length} potential test files`);
        
        // Parse all tests
        const allTests = [];
        for (const file of testFiles) {
            const tests = await this.parseTestFile(file);
            allTests.push(...tests);
        }
        
        this.log(`Parsed ${allTests.length} tests`);
        
        // Generate output files
        const headerContent = await this.generateSelftestHeader(allTests);
        const sourceContent = await this.generateSelftestSource(allTests);
        
        const headerPath = path.join(this.outputdir, 'selftest_generated.h');
        const sourcePath = path.join(this.outputdir, 'selftest_generated.cpp');
        
        await fs.promises.writeFile(headerPath, headerContent);
        await fs.promises.writeFile(sourcePath, sourceContent);
        
        this.log(`Generated ${headerPath}`);
        this.log(`Generated ${sourcePath}`);
        this.log("Selftest generation completed successfully!");
    }
}

module.exports = SelftestParser;

// CLI usage
if (require.main === module) {
    const parser = new SelftestParser();
    
    // Parse command line arguments
    if (process.argv.includes('--quiet')) {
        parser.quiet = true;
    }
    
    if (process.argv.includes('--write-deps')) {
        parser.writeDeps = true;
    }
    
    parser.run().catch(error => {
        console.error('Selftest generation failed:', error);
        process.exit(1);
    });
}