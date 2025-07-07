#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');

class VcxprojUpdater {
    constructor() {
        this.sourceRoot = path.resolve(__dirname, '..', '..');
        this.noJumbo = false;
    }

    log(message) {
        console.log(message);
    }

    error(message) {
        console.error(`error: ${message}`);
        process.exit(1);
    }

    checkAndInstallCheckoutHook(baseDir, projectDir) {
        const hookDirPath = path.join(baseDir, '.git', 'hooks');
        const checkoutHookPath = path.join(hookDirPath, 'post-checkout');
        let isUpdate = false;

        // Remove old version of the hook, if it hasn't been modified
        if (fs.existsSync(checkoutHookPath)) {
            const content = fs.readFileSync(checkoutHookPath, 'utf8');
            const hash = crypto.createHash('md5').update(content).digest('hex');
            
            if (hash === 'c9639203583f173f7719f5aa599c61b1' || hash === '9f86c113c51f762a01530130d9ebd2b5') {
                fs.unlinkSync(checkoutHookPath);
                isUpdate = true;
            }
        }

        if (fs.existsSync(hookDirPath) && !fs.existsSync(checkoutHookPath)) {
            const gitCheckoutHook = path.join(projectDir, 'git_checkout_hook.sh');
            if (fs.existsSync(gitCheckoutHook)) {
                fs.copyFileSync(gitCheckoutHook, checkoutHookPath);
                if (isUpdate) {
                    this.log('Git checkout hook updated.');
                } else {
                    this.log('Git checkout hook installed.');
                }
            }
        }
    }

    loadSourcesFile(root, type, name) {
        const filename = path.join(root, 'modules', 'hardcore', 'setup', type, 'sources', `sources.${name}`);
        
        if (!fs.existsSync(filename)) {
            this.log(`Opening '${filename}' failed. Possibly checkout hook is outdated. Problem should resolve itself the next time solution is built.`);
            return [];
        }

        try {
            const content = fs.readFileSync(filename, 'utf8');
            return content.split('\n').map(line => line.trim()).filter(line => line.length > 0);
        } catch (error) {
            this.log(`Error reading ${filename}: ${error.message}`);
            return [];
        }
    }

    updateProjectFiles() {
        this.log('Updating project files...');
        
        // Check and install git checkout hook
        const baseDir = this.sourceRoot;
        const projectDir = path.join(this.sourceRoot, 'platforms', 'windows');
        this.checkAndInstallCheckoutHook(baseDir, projectDir);

        // Create dummy dependency file to satisfy Visual Studio
        const dummyDepPath = path.join(projectDir, 'dummy.dep');
        fs.writeFileSync(dummyDepPath, `# Project file updated at ${new Date().toISOString()}\n`);

        this.log('Project files updated successfully.');
    }

    parseArguments() {
        const args = process.argv.slice(2);
        
        for (const arg of args) {
            if (arg === '--no_jumbo') {
                this.noJumbo = true;
            }
        }
    }

    run() {
        this.parseArguments();
        this.updateProjectFiles();
    }
}

// Run the updater
const updater = new VcxprojUpdater();
updater.run();