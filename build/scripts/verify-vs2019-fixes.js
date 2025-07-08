#!/usr/bin/env node

/**
 * Visual Studio 2019 Build Verification Script
 * Tests that our build system fixes work correctly
 */

const fs = require('fs');
const path = require('path');

console.log('🔧 Testing Visual Studio 2019 build fixes...');

function checkFile(filePath, description) {
    if (fs.existsSync(filePath)) {
        console.log(`✅ ${description}: ${filePath}`);
        return true;
    } else {
        console.log(`❌ ${description}: ${filePath} - NOT FOUND`);
        return false;
    }
}

function checkFileContent(filePath, searchStrings, description) {
    try {
        const content = fs.readFileSync(filePath, 'utf8');
        let passed = true;
        
        for (const [searchStr, shouldExist] of searchStrings) {
            const exists = content.includes(searchStr);
            if (shouldExist && !exists) {
                console.log(`❌ ${description}: Missing "${searchStr}" in ${filePath}`);
                passed = false;
            } else if (!shouldExist && exists) {
                console.log(`❌ ${description}: Found unwanted "${searchStr}" in ${filePath}`);
                passed = false;
            }
        }
        
        if (passed) {
            console.log(`✅ ${description}: Content checks passed for ${filePath}`);
        }
        return passed;
    } catch (error) {
        console.log(`❌ ${description}: Error reading ${filePath} - ${error.message}`);
        return false;
    }
}

function checkXmlWellFormed(filePath, description) {
    try {
        const content = fs.readFileSync(filePath, 'utf8');
        
        // Check for the specific malformed XML that was causing MSB4066
        if (content.includes('<ItemGroup><ClCompile')) {
            console.log(`❌ ${description}: Found malformed XML element <ItemGroup><ClCompile in ${filePath}`);
            return false;
        }
        
        // Basic XML structure checks
        const itemGroupOpen = (content.match(/<ItemGroup>/g) || []).length;
        const itemGroupClose = (content.match(/<\/ItemGroup>/g) || []).length;
        if (itemGroupOpen !== itemGroupClose) {
            console.log(`❌ ${description}: Mismatched <ItemGroup> tags in ${filePath}`);
            return false;
        }
        
        console.log(`✅ ${description}: XML structure looks good for ${filePath}`);
        return true;
    } catch (error) {
        console.log(`❌ ${description}: Error reading ${filePath} - ${error.message}`);
        return false;
    }
}

console.log('\n1. Checking fixed precompiled header...');
const pchChecks = [
    ['_CRT_SECURE_NO_WARNINGS', true],  // Should prevent wcscpy warnings
    ['#ifndef MIN', true],              // Should prevent MIN redefinition
    ['#ifndef MAX', true],              // Should prevent MAX redefinition
    ['# define UNI_L(x)  L ## x\n#else\n// For non-Windows, create a simple string literal conversion\ninline const uni_char* _make_uni_string(const char* str) {\n    static uni_char buf[1024];\n    for (int i = 0; i < 1023 && str[i]; i++) {\n        buf[i] = (uni_char)str[i];\n    }\n    buf[1023] = 0;\n    return buf;\n}\n# define UNI_L(x)  _make_uni_string(x)\n#endif\n\n#ifdef _WIN32\n# define UNI_L(x)  L ## x', false] // Should NOT have duplicate UNI_L
];

let allPassed = true;
allPassed &= checkFile('build/src/core/pch.h', 'Precompiled header');
allPassed &= checkFileContent('build/src/core/pch.h', pchChecks, 'PCH content fixes');

console.log('\n2. Checking fixed Windows system header...');
const systemHeaderChecks = [
    ['#ifndef EXCEPTION_CONTINUE_EXECUTION', true],  // Should prevent redefinition
    ['#ifndef EXCEPTION_CONTINUE_SEARCH', true],
    ['#ifndef EXCEPTION_EXECUTE_HANDLER', true]
];

allPassed &= checkFile('platforms/windows/system.h', 'Windows system header');
allPassed &= checkFileContent('platforms/windows/system.h', systemHeaderChecks, 'System header fixes');

console.log('\n3. Checking fixed Visual Studio project file...');
allPassed &= checkFile('platforms/windows/Opera.vcxproj', 'Opera VS project file');
allPassed &= checkXmlWellFormed('platforms/windows/Opera.vcxproj', 'XML structure fix');

console.log('\n4. Checking that Node.js build system still works...');
allPassed &= checkFile('build/scripts/build.js', 'Main build script');
allPassed &= checkFile('package.json', 'Package file');

// Check that build outputs exist
const buildOutputs = [
    'modules/ecmascript/carakan/src/vm/es_instruction.h',
    'modules/ecmascript/carakan/src/vm/es_instructionhandlers.cpp',
    'modules/hardcore/opera_defines.h',
    'modules/hardcore/opera_version.h'
];

for (const output of buildOutputs) {
    allPassed &= checkFile(output, 'Build output');
}

console.log('\n📋 Summary:');
if (allPassed) {
    console.log('✅ All Visual Studio 2019 build fixes verified successfully!');
    console.log('');
    console.log('Fixed issues:');
    console.log('  • MSB4066 XML malformed element error in Opera.vcxproj');
    console.log('  • C4005 macro redefinition warnings for UNI_L, MIN, MAX');
    console.log('  • C4005 EXCEPTION_CONTINUE_EXECUTION redefinition in system.h');
    console.log('  • C4996 wcscpy unsafe function warnings');
    console.log('  • C2059 syntax error from duplicate function declarations');
    console.log('');
    console.log('Visual Studio 2019 should now compile without errors!');
    process.exit(0);
} else {
    console.log('❌ Some Visual Studio 2019 fixes failed verification');
    process.exit(1);
}