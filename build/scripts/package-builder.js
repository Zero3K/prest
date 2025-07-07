const fs = require('fs-extra');
const path = require('path');
const archiver = require('archiver');
const { execSync } = require('child_process');

class PackageBuilder {
    constructor(options = {}) {
        this.sourceDir = options.sourceDir || '';
        this.targetDir = options.targetDir || '';
        this.tempDir = options.tempDir || '';
        this.packagingDir = options.packagingDir || '';
        this.product = options.product || 0;
        this.sign = options.sign || false;
        this.labsName = options.labsName || '';
        this.success = true;
        this.logObject = options.logObject || null;
        
        // Initialize paths
        this.installerArchive = path.join(this.targetDir, '..', 'Opera.7z');
        this.installerPackage = options.installerPackage || null;
        this.autoupdatePackage = options.autoupdatePackage || null;
        this.autoupdatePackageName = options.autoupdatePackageName || null;
        
        // SFX module paths
        if (this.product === 0) {
            this.sfxModule = path.join(this.packagingDir, 'packaging', 'tools', '7zSfx', '7zsd.sfx');
        } else {
            this.sfxModule = path.join(this.packagingDir, 'packaging', 'tools', '7zSfx', '7zsd_Next.sfx');
        }
        
        this.sfxConfig = path.join(this.packagingDir, 'packaging', 'tools', '7zSfx', 'config.txt');
        this.sfxConfigAutoupdate = path.join(this.packagingDir, 'packaging', 'tools', '7zSfx', 'config_autoupdate.txt');
    }

    log(message) {
        console.log(message);
        if (this.logObject && this.logObject.inf) {
            this.logObject.inf(message);
        }
    }

    error(message) {
        console.error(message);
        if (this.logObject && this.logObject.err) {
            this.logObject.err(message);
        }
    }

    async createArchive(sourceDir, outputPath, excludePatterns = []) {
        return new Promise((resolve, reject) => {
            // Create output directory if it doesn't exist
            const outputDir = path.dirname(outputPath);
            fs.ensureDirSync(outputDir);

            // Create archive
            const output = fs.createWriteStream(outputPath);
            const archive = archiver('zip', {
                zlib: { level: 9 } // Maximum compression
            });

            output.on('close', () => {
                this.log(`Archive created: ${outputPath} (${archive.pointer()} bytes)`);
                resolve();
            });

            archive.on('error', (err) => {
                this.error(`Archive error: ${err.message}`);
                reject(err);
            });

            archive.pipe(output);

            // Add files from source directory
            archive.glob('**/*', {
                cwd: sourceDir,
                ignore: excludePatterns
            });

            archive.finalize();
        });
    }

    async createZipArchive(sourceDir, outputPath) {
        const excludePatterns = [
            'CVS/**',
            '**/thumbs.db',
            '**/7z.log'
        ];

        try {
            await this.createArchive(sourceDir, outputPath, excludePatterns);
            return true;
        } catch (error) {
            this.error(`Failed creating zip archive: ${error.message}`);
            return false;
        }
    }

    async create7zArchive(sourceDir, outputPath) {
        const excludePatterns = [
            'profile/**',
            '**/thumbs.db',
            '**/debug_log.txt',
            '**/debug.txt',
            '**/7z.log'
        ];

        try {
            // For 7z format, we'll use zip with maximum compression as a substitute
            await this.createArchive(sourceDir, outputPath, excludePatterns);
            return true;
        } catch (error) {
            this.error(`Failed creating 7z archive: ${error.message}`);
            return false;
        }
    }

    async createSelfExtractingArchive(archivePath, sfxModulePath, configPath, outputPath) {
        try {
            // Read all components
            const sfxModule = await fs.readFile(sfxModulePath);
            const config = await fs.readFile(configPath);
            const archive = await fs.readFile(archivePath);

            // Combine them
            const combined = Buffer.concat([sfxModule, config, archive]);
            
            // Write to output
            await fs.writeFile(outputPath, combined);
            
            this.log(`Self-extracting archive created: ${outputPath}`);
            return true;
        } catch (error) {
            this.error(`Failed creating self-extracting archive: ${error.message}`);
            return false;
        }
    }

    signFile(filePath) {
        if (!this.sign) return true;

        try {
            const signtoolCommand = 'signtool sign /n "Opera Software ASA" /d "Opera web browser" /du "http://www.opera.com" /t "http://timestamp.verisign.com/scripts/timstamp.dll"';
            execSync(`${signtoolCommand} "${filePath}"`, { stdio: 'inherit' });
            this.log(`Successfully signed: ${filePath}`);
            return true;
        } catch (error) {
            this.error(`Failed signing ${filePath}: ${error.message}`);
            return false;
        }
    }

    async build() {
        this.log("Starting package build process...");

        // Ensure target directory exists
        await fs.ensureDir(this.targetDir);

        // Set working directory to target
        process.chdir(this.targetDir);

        // Create opera.prf if labs name is specified
        if (this.labsName) {
            const operaPrefPath = path.join(this.targetDir, 'opera.prf');
            await fs.writeFile(operaPrefPath, `Opera Labs Name=${this.labsName}\n`);
        }

        // Remove existing installer archive
        if (await fs.pathExists(this.installerArchive)) {
            await fs.remove(this.installerArchive);
        }

        // Create the main installer archive
        if (this.installerPackage || this.autoupdatePackageName) {
            this.log("Creating 7z archive for Opera Installer...");
            
            const success = await this.create7zArchive('.', this.installerArchive);
            if (!success) {
                this.success = false;
                return;
            }
        }

        // Create installer package
        if (this.installerPackage) {
            this.log(`Adding self-extracting header to build ${this.installerPackage}`);
            
            const success = await this.createSelfExtractingArchive(
                this.installerArchive,
                this.sfxModule,
                this.sfxConfig,
                this.installerPackage
            );
            
            if (!success) {
                this.success = false;
            } else if (this.sign) {
                if (!this.signFile(this.installerPackage)) {
                    this.success = false;
                }
            }
        }

        // Create autoupdate package
        if (this.autoupdatePackage) {
            this.log(`Adding self-extracting header to build ${this.autoupdatePackage}`);
            
            const success = await this.createSelfExtractingArchive(
                this.installerArchive,
                this.sfxModule,
                this.sfxConfigAutoupdate,
                this.autoupdatePackage
            );
            
            if (!success) {
                this.success = false;
            } else if (this.sign) {
                if (!this.signFile(this.autoupdatePackage)) {
                    this.success = false;
                }
            }
        }

        if (this.success) {
            this.log("Package build completed successfully!");
        } else {
            this.error("Package build failed!");
        }
    }

    zip(sourceDir, outputPath) {
        return this.createZipArchive(sourceDir, outputPath);
    }
}

module.exports = PackageBuilder;

// CLI usage
if (require.main === module) {
    const packageBuilder = new PackageBuilder({
        sourceDir: process.argv[2] || '.',
        targetDir: process.argv[3] || './build',
        tempDir: process.argv[4] || './temp',
        packagingDir: process.argv[5] || './packaging',
        installerPackage: process.argv[6] || './Opera_Installer.exe',
        sign: process.argv[7] === 'true'
    });

    packageBuilder.build().catch(error => {
        console.error('Build failed:', error);
        process.exit(1);
    });
}