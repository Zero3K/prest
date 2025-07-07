#!/usr/bin/env node

const fs = require('fs');
const path = require('path');

// Define the root directory
const ROOT = path.join(__dirname, '..', '..');

// Define the scripts and their output files
const generators = [
    {
        script: 'es_instruction_h.js',
        output: path.join(ROOT, 'modules/ecmascript/carakan/src/vm/es_instruction.h')
    },
    {
        script: 'es_instructionhandlers_cpp.js',
        output: path.join(ROOT, 'modules/ecmascript/carakan/src/vm/es_instructionhandlers.cpp')
    },
    {
        script: 'es_instruction_string_h.js',
        output: path.join(ROOT, 'modules/ecmascript/carakan/src/util/es_instruction_string.h')
    },
    {
        script: 'es_instruction_data_h.js',
        output: path.join(ROOT, 'modules/ecmascript/carakan/src/compiler/es_instruction_data.h')
    },
    {
        script: 'es_process_instr_cpp.js',
        output: path.join(ROOT, 'modules/ecmascript/carakan/src/compiler/es_process_instr.cpp')
    },
    {
        script: 'es_disassemble_instr_cpp.js',
        output: path.join(ROOT, 'modules/ecmascript/carakan/src/compiler/es_disassemble_instr.cpp')
    }
];

console.log('Building ECMAScript instruction files...');

// Run each generator
for (const gen of generators) {
    const scriptPath = path.join(__dirname, gen.script);
    const outputPath = gen.output;
    
    console.log(`Generating ${path.basename(outputPath)}...`);
    
    try {
        // Change to the scripts directory so relative paths work
        process.chdir(__dirname);
        
        // Execute the script and capture output
        const { execSync } = require('child_process');
        const output = execSync(`node ${scriptPath}`, { encoding: 'utf8' });
        
        // Ensure output directory exists
        const outputDir = path.dirname(outputPath);
        if (!fs.existsSync(outputDir)) {
            fs.mkdirSync(outputDir, { recursive: true });
        }
        
        // Write the output to the file
        fs.writeFileSync(outputPath, output);
        
        console.log(`  ✓ Generated ${outputPath}`);
    } catch (error) {
        console.error(`  ✗ Error generating ${outputPath}:`, error.message);
        process.exit(1);
    }
}

console.log('ECMAScript instruction files built successfully!');