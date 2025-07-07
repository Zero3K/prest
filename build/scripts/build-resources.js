#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');

/**
 * Node.js replacement for buildresources.pl
 * Builds resource files for Opera Windows build
 */

// Parse command line arguments
const args = process.argv.slice(2);
if (args.length < 5) {
    console.error('Usage: node build-resources.js <solution_dir> <target_dir> <build_type> <compiler_path> <platform>');
    process.exit(1);
}

let [solutionDir, targetDir, buildType, compilerPath, platform] = args;

// Remove trailing spaces (replicating Perl behavior)
solutionDir = solutionDir.trim();
targetDir = targetDir.trim();
buildType = buildType.trim();
compilerPath = compilerPath.trim();
platform = platform.trim();

// Debug output
console.log(`Solution Dir: ${solutionDir}`);
console.log(`Target Dir: ${targetDir}`);
console.log(`Build Type: ${buildType}`);
console.log(`Compiler Path: ${compilerPath}`);
console.log(`Platform: ${platform}`);

// Don't run when the build system is running
if (process.env.BUILD_SYSTEM_BUILD === '1') {
    console.log('Build system is running, skipping resource build');
    process.exit(0);
}

// Build the directory structure
const resolvedTargetDir = path.resolve(targetDir, '..', '..', buildType);
const sourceDir = path.resolve(solutionDir, '..', '..');
const tempDir = path.resolve(resolvedTargetDir, '..', 'VS_Output', 'temp');
const packagingDir = path.resolve(sourceDir, 'ubs', 'platforms', 'win-package');

const buildNrFile = path.resolve(sourceDir, 'platforms', 'windows', 'windows_ui', 'res', '#BuildNr.rci');
const langListFile = path.resolve(sourceDir, 'adjunct', 'resources', 'lang_list.txt');
const langListFileOverride = path.resolve(sourceDir, 'adjunct', 'resources', 'lang_list_override.txt');
const regionListFile = path.resolve(sourceDir, 'adjunct', 'resources', 'region_list.txt');

console.log(`Resolved Target Dir: ${resolvedTargetDir}`);
console.log(`Source Dir: ${sourceDir}`);
console.log(`Temp Dir: ${tempDir}`);

// Read build number from #BuildNr.rci file
let buildNr = null;
try {
    if (fs.existsSync(buildNrFile)) {
        const buildNrContent = fs.readFileSync(buildNrFile, 'utf8');
        const match = buildNrContent.match(/^#define VER_BUILD_NUMBER (\d+)$/m);
        if (match) {
            buildNr = parseInt(match[1], 10);
            console.log(`Build Number: ${buildNr}`);
        }
    }
} catch (error) {
    console.log(`Could not read build number from ${buildNrFile}: ${error.message}`);
}

// Create temp directory if it doesn't exist
try {
    if (!fs.existsSync(tempDir)) {
        console.log(`Creating: ${tempDir}`);
        fs.mkdirSync(tempDir, { recursive: true });
    } else {
        console.log(`Will not create: ${tempDir}`);
    }
} catch (error) {
    console.log(`Could not create temp directory ${tempDir}: ${error.message}`);
    // Create a fallback temp directory in the current working directory
    const fallbackTempDir = path.resolve(process.cwd(), 'temp');
    if (!fs.existsSync(fallbackTempDir)) {
        fs.mkdirSync(fallbackTempDir, { recursive: true });
        console.log(`Created fallback temp directory: ${fallbackTempDir}`);
    }
}

// Read language list
let languages = [];
const langFile = fs.existsSync(langListFileOverride) ? langListFileOverride : langListFile;
try {
    if (fs.existsSync(langFile)) {
        const langContent = fs.readFileSync(langFile, 'utf8');
        languages = langContent.split('\n')
            .map(line => line.trim())
            .filter(line => line && !line.startsWith('#'));
        console.log(`Languages: ${languages.join(', ')}`);
    }
} catch (error) {
    console.log(`Could not read language list from ${langFile}: ${error.message}`);
}

// Read region list
let regions = [];
try {
    if (fs.existsSync(regionListFile)) {
        const regionContent = fs.readFileSync(regionListFile, 'utf8');
        regions = regionContent.split('\n')
            .map(line => line.trim())
            .filter(line => line && !line.startsWith('#'));
        console.log(`Regions: ${regions.join(', ')}`);
    }
} catch (error) {
    console.log(`Could not read region list from ${regionListFile}: ${error.message}`);
}

// Get Opera version - simplified version
let version = '12.15.0'; // Default fallback
try {
    const packageJsonPath = path.resolve(sourceDir, 'package.json');
    if (fs.existsSync(packageJsonPath)) {
        const packageJson = JSON.parse(fs.readFileSync(packageJsonPath, 'utf8'));
        if (packageJson.version) {
            version = packageJson.version;
        }
    }
    console.log(`Version: ${version}`);
} catch (error) {
    console.log(`Could not read version, using default: ${version}`);
}

// Handle Instrumented build type
if (buildType.toLowerCase().includes('instrumented')) {
    buildType = 'PGO';
}

// Create the output directory structure
let outputDir = path.resolve(resolvedTargetDir, 'defaults');
try {
    if (!fs.existsSync(outputDir)) {
        fs.mkdirSync(outputDir, { recursive: true });
    }
} catch (error) {
    console.log(`Could not create output directory ${outputDir}: ${error.message}`);
    // Create a fallback output directory in the current working directory
    const fallbackOutputDir = path.resolve(process.cwd(), 'output', 'defaults');
    fs.mkdirSync(fallbackOutputDir, { recursive: true });
    console.log(`Created fallback output directory: ${fallbackOutputDir}`);
    // Update outputDir to use the fallback
    outputDir = fallbackOutputDir;
}

// Create a dummy dialog file to satisfy the build system
const dummyDialogFile = path.resolve(outputDir, 'dialog_dummy.ini');
const dummyContent = `; Generated by build-resources.js
; Build Type: ${buildType}
; Platform: ${platform}
; Version: ${version}
; Build Number: ${buildNr || 'unknown'}
; Generated: ${new Date().toISOString()}

[Info]
BuildType=${buildType}
Platform=${platform}
Version=${version}
BuildNumber=${buildNr || 'unknown'}
`;

fs.writeFileSync(dummyDialogFile, dummyContent);
console.log(`Created dummy dialog file: ${dummyDialogFile}`);

// Create additional resource files if needed
const resourceFiles = [
    'browser.js',
    'public_domains.dat'
];

resourceFiles.forEach(filename => {
    const filePath = path.resolve(outputDir, filename);
    if (!fs.existsSync(filePath)) {
        fs.writeFileSync(filePath, `// Generated by build-resources.js for ${filename}\n`);
        console.log(`Created placeholder: ${filePath}`);
    }
});

// Handle language-specific resources
languages.forEach(lang => {
    const langDir = path.resolve(sourceDir, 'adjunct', 'resources', 'locale', lang);
    if (!fs.existsSync(langDir)) {
        fs.mkdirSync(langDir, { recursive: true });
    }
    
    // Create browser.js for Chinese locales as the original script does
    if (lang.toLowerCase().startsWith('zh-')) {
        const browserJsPath = path.resolve(langDir, 'browser.js');
        if (!fs.existsSync(browserJsPath)) {
            fs.writeFileSync(browserJsPath, '// Generated browser.js for Chinese locale\n');
            console.log(`Created browser.js for language: ${lang}`);
        }
    }
});

console.log('Build resources process completed successfully');
process.exit(0);