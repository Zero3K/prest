#!/usr/bin/env node

const fs = require('fs');
const path = require('path');

class HardcodedSearchGenerator {
    constructor() {
        this.sourceRoot = path.resolve(__dirname, '..', '..');
        this.outputPath = path.join(this.sourceRoot, 'adjunct', 'desktop_util', 'search', 'hardcoded_searches.h');
    }

    log(message) {
        console.log(message);
    }

    async generateHardcodedSearches() {
        this.log("Generating hardcoded searches...");
        
        // Basic hardcoded search engines that were common in Opera 12
        const searchEngines = [
            {
                name: "Google",
                url: "https://www.google.com/search?q=%s",
                encoding: "UTF-8",
                icon: "google.ico"
            },
            {
                name: "Yahoo",
                url: "https://search.yahoo.com/search?p=%s",
                encoding: "UTF-8",
                icon: "yahoo.ico"
            },
            {
                name: "Bing",
                url: "https://www.bing.com/search?q=%s",
                encoding: "UTF-8",
                icon: "bing.ico"
            },
            {
                name: "Wikipedia",
                url: "https://en.wikipedia.org/wiki/Special:Search?search=%s",
                encoding: "UTF-8",
                icon: "wikipedia.ico"
            },
            {
                name: "Amazon",
                url: "https://www.amazon.com/s?k=%s",
                encoding: "UTF-8",
                icon: "amazon.ico"
            }
        ];

        const headerContent = `
/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) Opera Software ASA  2002 - 2011
 *
 * Hardcoded search engine definitions
 *
 * @author build/scripts/generate_hardcoded_searches.js
 */

#ifndef HARDCODED_SEARCHES_H
#define HARDCODED_SEARCHES_H

struct HardcodedSearch {
    const char* name;
    const char* url;
    const char* encoding;
    const char* icon;
};

static const HardcodedSearch g_hardcoded_searches[] = {
${searchEngines.map(engine => 
    `    { "${engine.name}", "${engine.url}", "${engine.encoding}", "${engine.icon}" },`
).join('\n')}
    { NULL, NULL, NULL, NULL } // Sentinel
};

static const int g_hardcoded_searches_count = ${searchEngines.length};

#endif // HARDCODED_SEARCHES_H
`;

        // Ensure output directory exists
        await fs.promises.mkdir(path.dirname(this.outputPath), { recursive: true });
        
        // Write the file
        await fs.promises.writeFile(this.outputPath, headerContent);
        
        this.log(`Generated ${this.outputPath}`);
    }

    async run() {
        await this.generateHardcodedSearches();
        this.log("Hardcoded search generation completed successfully!");
    }
}

// CLI usage
if (require.main === module) {
    const generator = new HardcodedSearchGenerator();
    generator.run().catch(error => {
        console.error('Hardcoded search generation failed:', error);
        process.exit(1);
    });
}

module.exports = HardcodedSearchGenerator;