#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const crypto = require('crypto');
const { DOMParser, XMLSerializer } = require('xmldom');

class SourcesCollection {
    constructor(config) {
        this.sources = this.loadSourcesConfigurations(config.baseDir);
        this.sourcesConfig = this.sources[config.noJumbo ? 'plain' : 'jumbo'];
        
        if (config.noJumbo) {
            this.sourcesAll = [...new Set(this.sources['plain']['all'])].sort();
        } else {
            this.sourcesAll = [...new Set([...this.sources['plain']['all'], ...this.sources['jumbo']['all']])].sort();
        }
    }

    loadSourcesConfigurations(rootDir) {
        const sources = {};
        for (const type of ['plain', 'jumbo']) {
            sources[type] = {};
            const configurations = ['all', 'component_framework', 'component_plugin', 'component_mapi', 
                                  'nopch', 'pch', 'pch_jumbo', 'pch_system_includes', 'component_opera_autoupdatechecker'];
            for (const configuration of configurations) {
                sources[type][configuration] = this.loadSourcesFile(rootDir, type, configuration);
            }
        }
        return sources;
    }

    loadSourcesFile(root, type, name) {
        // First try the build directory (generated files)
        let filename = path.join(root, 'build', 'src', 'modules', 'hardcore', 'setup', type, 'sources', `sources.${name}`);
        
        if (!fs.existsSync(filename)) {
            // Fallback to original location
            filename = path.join(root, 'modules', 'hardcore', 'setup', type, 'sources', `sources.${name}`);
        }
        
        if (!fs.existsSync(filename)) {
            console.log(`Opening '${filename}' failed. Possibly checkout hook is outdated. Problem should resolve itself the next time solution is built.`);
            return [];
        }

        try {
            const content = fs.readFileSync(filename, 'utf8');
            return content.split('\n').map(line => line.trim()).filter(line => line.length > 0);
        } catch (error) {
            console.log(`Error reading ${filename}: ${error.message}`);
            return [];
        }
    }

    getSourceComponent(source) {
        if (this.sourcesConfig['component_framework'].includes(source)) {
            return "component_framework";
        }
        if (this.sourcesConfig['component_plugin'].includes(source)) {
            return "component_plugin";
        }
        if (this.sourcesConfig['component_mapi'].includes(source)) {
            return "component_mapi";
        }
        if (this.sourcesConfig['component_opera_autoupdatechecker'].includes(source)) {
            return "component_opera_autoupdatechecker";
        }
        return null;
    }

    getSourcePch(source) {
        if (this.sourcesConfig['pch'].includes(source)) {
            return "core/pch.h";
        }
        if (this.sourcesConfig['nopch'].includes(source)) {
            return null;
        }
        if (this.sourcesConfig['pch_jumbo'].includes(source)) {
            return "core/pch_jumbo.h";
        }
        if (this.sourcesConfig['pch_system_includes'].includes(source)) {
            return "core/pch_system_includes.h";
        }
        return "core/pch.h";
    }

    isSourceIncludedInBuild(source) {
        return (this.sourcesConfig['pch'].includes(source) ||
                this.sourcesConfig['nopch'].includes(source) ||
                this.sourcesConfig['pch_jumbo'].includes(source) ||
                this.sourcesConfig['pch_system_includes'].includes(source));
    }
}

class ProjectDocument {
    constructor(projectFile, projectFilters) {
        const projectXml = fs.readFileSync(projectFile, 'utf8');
        const filtersXml = fs.readFileSync(projectFilters, 'utf8');
        
        this.vcxdom = new DOMParser().parseFromString(projectXml, 'text/xml');
        this.filterdom = new DOMParser().parseFromString(filtersXml, 'text/xml');
        this.projectFile = projectFile;
        this.projectFiltersFile = projectFilters;
        this.filterList = [];
    }

    preprocessTemplate(projectName) {
        const elements = this.vcxdom.getElementsByTagName('*');
        const toRemove = [];

        for (let i = 0; i < elements.length; i++) {
            const element = elements[i];
            if (element.hasAttribute && element.hasAttribute('exclude_from')) {
                if (element.getAttribute('exclude_from') === projectName) {
                    toRemove.push(element);
                }
                element.removeAttribute('exclude_from');
            }
        }

        toRemove.forEach(element => {
            if (element.parentNode) {
                element.parentNode.removeChild(element);
            }
        });
    }

    addFile(srcNode, filterNode, fileName, pchName, excludeFromBuild, optimizeSpeed) {
        const OPTIMIZE_SPEED_CONDITION = "'$(Configuration)'=='Release'";

        let relName = fileName;
        if (path.sep !== '\\') {
            relName = relName.replace(/\//g, '\\');
        }

        const fnode = this.vcxdom.createElement("ClCompile");
        fnode.setAttribute("Include", relName);

        if (pchName !== "core/pch.h") {
            if (pchName === null) {
                const preproc = this.vcxdom.createElement("PreprocessorDefinitions");
                preproc.appendChild(this.vcxdom.createTextNode("ALLOW_SYSTEM_INCLUDES;%(PreprocessorDefinitions)"));
                fnode.appendChild(preproc);
            }

            if (pchName === null || pchName === "core/pch_system_includes.h") {
                const pchnode = this.vcxdom.createElement("PrecompiledHeader");
                pchnode.appendChild(this.vcxdom.createTextNode(""));
                fnode.appendChild(pchnode);
            } else if (pchName === "core/pch_jumbo.h") {
                const pchfilenode = this.vcxdom.createElement("PrecompiledHeaderFile");
                pchfilenode.appendChild(this.vcxdom.createTextNode(pchName));
                fnode.appendChild(pchfilenode);
            }
        }

        if (!excludeFromBuild && optimizeSpeed) {
            const optnode = this.vcxdom.createElement("Optimization");
            optnode.setAttribute("Condition", OPTIMIZE_SPEED_CONDITION);
            optnode.appendChild(this.vcxdom.createTextNode("MaxSpeed"));
            fnode.appendChild(optnode);
        }

        if (excludeFromBuild) {
            const excludefilenode = this.vcxdom.createElement("ExcludedFromBuild");
            excludefilenode.appendChild(this.vcxdom.createTextNode("true"));
            fnode.appendChild(excludefilenode);
        }

        srcNode.appendChild(fnode);

        // Update filter
        let filter = relName.replace("src\\", "").replace("..\\", "");
        const idx = filter.lastIndexOf("\\");
        if (idx > 0) {
            let idxTemp = idx;
            let filterTemp = filter;
            while (idxTemp > 0) {
                filterTemp = filterTemp.substring(0, idxTemp);
                this.filterList.push("Source Files\\" + filterTemp);
                idxTemp = filterTemp.lastIndexOf("\\");
            }
            filter = filter.substring(0, idx);
            filter = "Source Files\\" + filter;
        } else {
            filter = "Source Files";
        }

        const fnodeFilter = this.filterdom.createElement("ClCompile");
        fnodeFilter.setAttribute("Include", relName);
        const fnamenode = this.filterdom.createElement("Filter");
        fnamenode.appendChild(this.filterdom.createTextNode(filter));
        fnodeFilter.appendChild(fnamenode);

        filterNode.appendChild(fnodeFilter);
    }

    toXml() {
        const serializer = new XMLSerializer();
        return '<?xml version="1.0" encoding="utf-8"?>\n' + serializer.serializeToString(this.vcxdom.documentElement);
    }

    filtersToXml() {
        const serializer = new XMLSerializer();
        return '<?xml version="1.0" encoding="utf-8"?>\n' + serializer.serializeToString(this.filterdom.documentElement);
    }
}

class ProjectTask {
    constructor(options) {
        this.name = options.name || null;
        this.template = options.template || null;
        this.includeNonComponent = options.include_non_component || false;
        this.components = options.components || [];
        this.updateVcxprojAndFilters = options.update_vcxproj_and_filters !== false;
        this.updateDotuser = options.update_dotuser !== false;
        this.preprocessTemplate = options.preprocess_template !== false;
    }

    updateProjectAndFilters(config, project, sourcesCollection) {
        const vcxitems = project.vcxdom.getElementsByTagName("ItemGroup");
        const filteritems = project.filterdom.getElementsByTagName("ItemGroup");

        // Clear existing files
        if (vcxitems.length > 1 && vcxitems[1]) {
            while (vcxitems[1].firstChild) {
                vcxitems[1].removeChild(vcxitems[1].firstChild);
            }
        }

        if (filteritems.length > 1 && filteritems[1]) {
            while (filteritems[1].firstChild) {
                filteritems[1].removeChild(filteritems[1].firstChild);
            }
        }

        // Add source files
        for (const source of sourcesCollection.sourcesAll) {
            const moduleParts = source.split('/');
            if (moduleParts.length < 2) continue;
            
            const moduleGroup = moduleParts[0];
            const moduleName = moduleParts[1];
            const fullModuleName = path.join(moduleGroup, moduleName);

            if (!config.isDisabledModule(moduleName)) {
                const component = sourcesCollection.getSourceComponent(source);
                
                if (component === null && !this.includeNonComponent) {
                    continue;
                }
                if (component !== null && this.components.length > 0 && !this.components.includes(component)) {
                    continue;
                }

                const filePath = path.join(config.REL_PATH_PREFIX, ...source.split('/'));
                const pch = sourcesCollection.getSourcePch(source);
                const excludeFromBuild = !sourcesCollection.isSourceIncludedInBuild(source);
                const optimizeSpeed = config.optimizeSpeedModules.includes(fullModuleName);

                if (vcxitems.length > 1 && filteritems.length > 1) {
                    project.addFile(vcxitems[1], filteritems[1], filePath, pch, excludeFromBuild, optimizeSpeed);
                }
            }
        }

        // Write updated files
        let changed = false;
        const projfileData = project.toXml();
        
        try {
            const currentData = fs.readFileSync(project.projectFile, 'utf8');
            if (currentData !== projfileData) {
                changed = true;
            }
        } catch (error) {
            changed = true;
        }

        if (changed) {
            console.log(`Writing ${project.projectFile}...`);
            fs.writeFileSync(project.projectFile, projfileData, 'utf8');
            console.log(`Writing ${project.projectFiltersFile}...`);
            fs.writeFileSync(project.projectFiltersFile, project.filtersToXml(), 'utf8');
            console.log(`ALERT: a new version of ${project.projectFile} has been created and must be reloaded into Visual Studio`);
        }
    }

    process(config, sourcesCollection) {
        const projectFile = path.join(config.projectDir, this.name + ".vcxproj");
        const projectFilters = projectFile + ".filters";
        const projectDotuser = projectFile + ".user";

        const projectTemplate = path.join(config.projectDir, this.template + ".vcxproj.template");
        const projectFiltersTemplate = path.join(config.projectDir, this.template + ".vcxproj.filters.template");
        const projectDotuserTemplate = path.join(config.projectDir, this.template + ".vcxproj.user.template");

        // Create project files from templates
        if (this.updateVcxprojAndFilters) {
            if (fs.existsSync(projectTemplate) && !fs.existsSync(projectFile)) {
                fs.copyFileSync(projectTemplate, projectFile);
                console.log(`Created ${projectFile} from template`);
            }
            if (fs.existsSync(projectFiltersTemplate) && (!fs.existsSync(projectFilters) || fs.statSync(projectFilters).size === 0)) {
                fs.copyFileSync(projectFiltersTemplate, projectFilters);
                console.log(`Created ${projectFilters} from template`);
            }
        }

        if (this.updateDotuser && fs.existsSync(projectDotuserTemplate) && !fs.existsSync(projectDotuser)) {
            fs.copyFileSync(projectDotuserTemplate, projectDotuser);
            console.log(`Created ${projectDotuser} from template`);
            
            // Touch solution file to force reload
            const solutionFile = path.join(config.projectDir, 'Opera_vs2019.sln');
            if (fs.existsSync(solutionFile)) {
                const now = new Date();
                fs.utimesSync(solutionFile, now, now);
            }
        }

        // Update project files with sources
        if (fs.existsSync(projectFile) && fs.existsSync(projectFilters)) {
            const project = new ProjectDocument(projectFile, projectFilters);
            
            if (this.preprocessTemplate) {
                project.preprocessTemplate(this.name);
            }

            if (this.updateVcxprojAndFilters) {
                this.updateProjectAndFilters(config, project, sourcesCollection);
            }
        }
    }
}

class Config {
    constructor() {
        this.REL_PATH_PREFIX = "..\\..\\";
        this.projectDir = path.join(__dirname, '..', '..', 'platforms', 'windows');
        this.baseDir = path.resolve(__dirname, '..', '..');
        
        this.noJumbo = false;
        this.solutionFile = path.join(this.projectDir, "Opera_vs2019.sln");
        this.optimizeSpeedModules = this.loadOptimizeSpeedModules();
        
        this.parseOptions();
    }

    parseOptions() {
        const args = process.argv.slice(2);
        for (const arg of args) {
            if (arg === '--no_jumbo') {
                this.noJumbo = true;
            }
        }
    }

    isDisabledModule(moduleName) {
        const disabledModules = ["coredoc", "build", "mac", "paxage", "posix", "quix", "unix", "utilix", "viewix", "x11api", "posix_ipc"];
        return disabledModules.includes(moduleName);
    }

    loadOptimizeSpeedModules() {
        const optimizeTxt = path.join(this.projectDir, "optimize_speed.txt");
        if (!fs.existsSync(optimizeTxt)) {
            return [];
        }
        try {
            const content = fs.readFileSync(optimizeTxt, 'utf8');
            return content.split('\n').map(line => line.trim()).filter(line => line.length > 0);
        } catch (error) {
            console.log(`Error reading optimize_speed.txt: ${error.message}`);
            return [];
        }
    }

    checkAndInstallCheckoutHook() {
        const hookDirPath = path.join(this.baseDir, '.git', 'hooks');
        const checkoutHookPath = path.join(hookDirPath, 'post-checkout');
        let isUpdate = false;

        if (fs.existsSync(checkoutHookPath)) {
            const content = fs.readFileSync(checkoutHookPath, 'utf8');
            const hash = crypto.createHash('md5').update(content).digest('hex');
            
            if (hash === 'c9639203583f173f7719f5aa599c61b1' || hash === '9f86c113c51f762a01530130d9ebd2b5') {
                fs.unlinkSync(checkoutHookPath);
                isUpdate = true;
            }
        }

        if (fs.existsSync(hookDirPath) && !fs.existsSync(checkoutHookPath)) {
            const gitCheckoutHook = path.join(this.projectDir, 'git_checkout_hook.sh');
            if (fs.existsSync(gitCheckoutHook)) {
                fs.copyFileSync(gitCheckoutHook, checkoutHookPath);
                if (isUpdate) {
                    console.log('Git checkout hook updated.');
                } else {
                    console.log('Git checkout hook installed.');
                }
            }
        }
    }
}

class VcxprojUpdater {
    run() {
        const config = new Config();
        
        config.checkAndInstallCheckoutHook();

        const projects = [
            new ProjectTask({
                name: "Opera",
                template: "Opera",
                include_non_component: true,
                components: ["component_framework", "component_mapi"],
                preprocess_template: false
            }),
            new ProjectTask({
                name: "plugin_wrapper",
                template: "plugin_wrapper",
                components: ["component_framework", "component_plugin"]
            }),
            new ProjectTask({
                name: "plugin_wrapper_32",
                template: "plugin_wrapper",
                components: ["component_framework", "component_plugin"]
            }),
            new ProjectTask({
                name: "OperaMAPI",
                template: "OperaMAPI",
                components: ["component_mapi", "component_framework"]
            }),
            new ProjectTask({
                name: "OperaMAPI_32",
                template: "OperaMAPI",
                components: ["component_mapi", "component_framework"]
            }),
            new ProjectTask({
                name: "desktop_starter/desktop_starter",
                template: "desktop_starter/desktop_starter",
                update_vcxproj_and_filters: false,
                preprocess_template: false
            })
        ];

        const sourcesCollection = new SourcesCollection(config);
        
        for (const task of projects) {
            try {
                task.process(config, sourcesCollection);
            } catch (error) {
                console.error(`Error processing project ${task.name}: ${error.message}`);
            }
        }

        console.log('Project update completed.');
    }
}

// Run the updater
if (require.main === module) {
    const updater = new VcxprojUpdater();
    updater.run();
}