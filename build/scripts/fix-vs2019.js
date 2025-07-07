#!/usr/bin/env node

const fs = require('fs');
const path = require('path');

console.log('🔧 Fixing Visual Studio 2019 Build Configuration...\n');

const root = path.resolve(__dirname, '../..');
const windowsDir = path.join(root, 'platforms', 'windows');

// Function to read and update a file if needed
function updateFileIfNeeded(filePath, updater, description) {
    if (!fs.existsSync(filePath)) {
        console.log(`❌ File not found: ${filePath}`);
        return false;
    }
    
    const originalContent = fs.readFileSync(filePath, 'utf8');
    const newContent = updater(originalContent);
    
    if (originalContent !== newContent) {
        fs.writeFileSync(filePath, newContent, 'utf8');
        console.log(`✅ Updated ${description}: ${path.basename(filePath)}`);
        return true;
    } else {
        console.log(`✓ Already correct ${description}: ${path.basename(filePath)}`);
        return false;
    }
}

// Function to ensure a project has the correct include paths
function fixProjectIncludePaths(content) {
    // Ensure build\src is in all AdditionalIncludeDirectories
    return content.replace(
        /<AdditionalIncludeDirectories>([^<]*)<\/AdditionalIncludeDirectories>/g,
        (match, dirs) => {
            if (!dirs.includes('build\\src') && !dirs.includes('build/src')) {
                // Add build\src to the front if not present
                const cleanDirs = dirs.replace(/;+$/, ''); // Remove trailing semicolons
                return `<AdditionalIncludeDirectories>..\\..\\build\\src;${cleanDirs}</AdditionalIncludeDirectories>`;
            }
            return match;
        }
    );
}

// Function to ensure proper VS2019 toolset
function fixProjectToolset(content) {
    // Make sure all projects use v142 toolset and VS2019 settings
    let updated = content;
    
    // Update ToolsVersion
    updated = updated.replace(
        /ToolsVersion="[^"]*"/g,
        'ToolsVersion="16.0"'
    );
    
    // Update PlatformToolset
    updated = updated.replace(
        /<PlatformToolset>[^<]*<\/PlatformToolset>/g,
        '<PlatformToolset>v142</PlatformToolset>'
    );
    
    // Ensure WindowsTargetPlatformVersion is set
    if (!updated.includes('<WindowsTargetPlatformVersion>')) {
        updated = updated.replace(
            /<RootNamespace>([^<]*)<\/RootNamespace>/,
            '<RootNamespace>$1</RootNamespace>\n    <WindowsTargetPlatformVersion>10.0</WindowsTargetPlatformVersion>'
        );
    }
    
    return updated;
}

// Function to ensure opera_functions.cpp is included in projects that need it
function ensureOperaFunctions(content, projectName) {
    // Projects that need opera_functions.cpp
    const needsOperaFunctions = ['desktop_starter', 'Opera', 'plugin_wrapper', 'OperaMAPI'];
    
    if (needsOperaFunctions.some(name => projectName.includes(name))) {
        const operaFunctionsInclude = '<ClCompile Include="..\\..\\build\\src\\core\\opera_functions.cpp" />';
        
        if (!content.includes('opera_functions.cpp')) {
            // Add it to the ClCompile ItemGroup
            content = content.replace(
                /(<ItemGroup[^>]*>\s*<ClCompile[^>]*>)/,
                `$1\n    ${operaFunctionsInclude}`
            );
            console.log(`  ➕ Added opera_functions.cpp to ${projectName}`);
        }
    }
    
    return content;
}

// Function to fix specific compilation issues
function fixCompilationIssues(content) {
    // Fix any remaining v100 references
    content = content.replace(/v100/g, 'v142');
    
    // Ensure proper character set
    content = content.replace(
        /<CharacterSet>MultiByte<\/CharacterSet>/g,
        '<CharacterSet>Unicode</CharacterSet>'
    );
    
    return content;
}

// Main fix function for project files
function fixProjectFile(filePath) {
    const projectName = path.basename(filePath, '.vcxproj');
    
    return updateFileIfNeeded(filePath, (content) => {
        let updated = content;
        updated = fixProjectIncludePaths(updated);
        updated = fixProjectToolset(updated);
        updated = ensureOperaFunctions(updated, projectName);
        updated = fixCompilationIssues(updated);
        return updated;
    }, 'VS2019 project');
}

// Function to check and create missing header files
function ensureRequiredHeaders() {
    const requiredHeaders = [
        {
            path: path.join(root, 'build/src/core/pch.h'),
            description: 'Core precompiled header'
        },
        {
            path: path.join(root, 'build/src/core/opera_functions.cpp'), 
            description: 'Opera functions implementation'
        }
    ];
    
    for (const header of requiredHeaders) {
        if (fs.existsSync(header.path)) {
            console.log(`✓ ${header.description} exists`);
        } else {
            console.log(`❌ Missing ${header.description}: ${header.path}`);
        }
    }
}

// Function to check for missing source files in projects
function checkProjectSourceFiles() {
    const projectFiles = [
        'platforms/windows/mapi/OperaMAPI.cpp',
        'platforms/crashlog/src/crashlog.cpp',
        'platforms/windows/pch.cpp'
    ];
    
    for (const file of projectFiles) {
        const fullPath = path.join(root, file);
        if (fs.existsSync(fullPath)) {
            console.log(`✓ Source file exists: ${file}`);
        } else {
            console.log(`❌ Missing source file: ${file}`);
        }
    }
}

// Function to fix the gpu_info.h VEGA3dDevice issue
function fixGpuInfoHeader() {
    const gpuInfoPath = path.join(root, 'platforms/crashlog/gpu_info.h');
    
    updateFileIfNeeded(gpuInfoPath, (content) => {
        // Add forward declaration for VEGA3dDevice if not present
        if (!content.includes('class VEGA3dDevice;') && content.includes('VEGA3dDevice')) {
            const insertion = 'class VEGA3dDevice;\n\n';
            // Insert after includes but before first use
            return content.replace(
                /(#include[^\n]*\n+)/,
                `$1${insertion}`
            );
        }
        return content;
    }, 'GPU info header');
}

// Main execution
async function main() {
    console.log('🔍 Checking required header files...');
    ensureRequiredHeaders();
    
    console.log('\n🔍 Checking project source files...');
    checkProjectSourceFiles();
    
    console.log('\n🔧 Fixing GPU info header...');
    fixGpuInfoHeader();
    
    console.log('\n🔧 Fixing Visual Studio project files...');
    
    // Get all .vcxproj files in the windows directory
    const vcxprojFiles = [];
    
    function findVcxprojFiles(dir) {
        const files = fs.readdirSync(dir);
        for (const file of files) {
            const fullPath = path.join(dir, file);
            const stat = fs.statSync(fullPath);
            
            if (stat.isDirectory()) {
                findVcxprojFiles(fullPath);
            } else if (file.endsWith('.vcxproj')) {
                vcxprojFiles.push(fullPath);
            }
        }
    }
    
    findVcxprojFiles(windowsDir);
    
    let updatedCount = 0;
    for (const projectFile of vcxprojFiles) {
        if (fixProjectFile(projectFile)) {
            updatedCount++;
        }
    }
    
    console.log(`\n📊 Summary:`);
    console.log(`   • Found ${vcxprojFiles.length} project files`);
    console.log(`   • Updated ${updatedCount} project files`);
    
    if (updatedCount > 0) {
        console.log('\n✅ Visual Studio 2019 configuration has been updated!');
        console.log('   Please reload the solution in Visual Studio 2019.');
    } else {
        console.log('\n✅ All Visual Studio 2019 projects are already properly configured.');
    }
}

// Run the script
main().catch(console.error);