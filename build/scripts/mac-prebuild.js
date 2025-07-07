#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const { execSync } = require('child_process');

// Command line arguments
const projectDir = process.argv[2];
const targetBuildDir = process.argv[3];
const buildType = process.argv[4];
const useJumboCompile = process.argv[5];
const archs = process.argv[6];

const rootFolder = path.join(projectDir, '../../');
const scriptsDir = path.join(projectDir, 'scripts/');

console.log(`project_dir: ${projectDir}`);
console.log(`target_build_dir: ${targetBuildDir}`);
console.log(`build_type: ${buildType}`);
console.log(`use_jumbo_compile: ${useJumboCompile}`);
console.log(`archs: ${archs}`);

function runCommand(cmd) {
    try {
        console.log(`Running: ${cmd}`);
        execSync(cmd, { stdio: 'inherit' });
        return true;
    } catch (error) {
        console.error(`Command failed: ${cmd}`);
        console.error(error.message);
        return false;
    }
}

// Build opera_autoupdatechecker for different architectures
const updateCheckerDir = "../../adjunct/autoupdate/autoupdate_checker/platforms/mac/";

if (archs === "i386") {
    console.log("Build opera_autoupdatechecker for i386");
    runCommand(`make -C "${updateCheckerDir}" -f Makefile.m32`);
} else if (archs === "x86_64") {
    console.log("Build opera_autoupdatechecker for x86_64");
    runCommand(`make -C "${updateCheckerDir}" -f Makefile.m64`);
} else {
    console.log("Build opera_autoupdatechecker for i386 and x86_64");
    runCommand(`make -C "${updateCheckerDir}" -f Makefile.m64`);
    runCommand(`mv "${updateCheckerDir}build/opera_autoupdate" "${updateCheckerDir}build/opera_autoupdate64"`);
    runCommand(`make clean -C "${updateCheckerDir}" -f Makefile.m64`);
    runCommand(`make -C "${updateCheckerDir}" -f Makefile.m32`);
    runCommand(`mv "${updateCheckerDir}build/opera_autoupdate" "${updateCheckerDir}build/opera_autoupdate32"`);
    runCommand(`lipo "${updateCheckerDir}build/opera_autoupdate32" "${updateCheckerDir}build/opera_autoupdate64" -create -output "${updateCheckerDir}build/opera_autoupdate"`);
}

// Create default files (this would replace the Perl script call)
runCommand(`cd "${scriptsDir}"; node createdefaultfiles.js "${projectDir}"`);

// Clean up old framework headers
runCommand(`rm -rf "${targetBuildDir}/Opera.app/Contents/Frameworks/Opera.framework/Versions/A/Headers"`);
runCommand(`rm -rf "${targetBuildDir}/Opera.app/Contents/Frameworks/Opera.framework/Headers"`);

// Create new framework structure
runCommand(`mkdir -p "${targetBuildDir}/Opera.app/Contents/Frameworks/Opera.framework/Versions/A/Headers"`);
runCommand(`ln -fs "Versions/A/Headers" "${targetBuildDir}/Opera.app/Contents/Frameworks/Opera.framework/Headers"`);
runCommand(`cp -f "${projectDir}/embrowser/EmBrowserInit.h" "${targetBuildDir}/Opera.app/Contents/Frameworks/Opera.framework/Versions/A/Headers/"`);

// Build command for operasetup.py (now using Node.js equivalent)
let cmd = `cd "${targetBuildDir}"; node ../../build/scripts/operasetup.js -D_MACINTOSH_ -DSIXTY_FOUR_BIT`;
if (buildType.toLowerCase() === 'debug') {
    cmd += ' -D_DEBUG -DFEATURE_SELFTEST=YES';
} else {
    cmd += ' -DFEATURE_SELFTEST=NO';
}
cmd += ' --mainline_configuration=current --platform_product_config=platforms/mac/product_config.h -I../.. --generate_pch';

let status = runCommand(cmd);
if (!status) {
    process.exit(1);
}

// Generate hardcoded searches (now using Node.js equivalent)
status = runCommand(`node "${rootFolder}build/scripts/generate_hardcoded_searches.js"`);
if (!status) {
    process.exit(1);
}

// Build project (now using Node.js equivalent)
status = runCommand(`node "${scriptsDir}buildproject.js" "${rootFolder}" "${scriptsDir}project-skeleton.txt" ${useJumboCompile}`);
if (!status) {
    process.exit(1);
}

console.log("Prebuild script completed successfully");