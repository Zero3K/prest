# Presto Build System - Node.js Edition

This is a refactored version of the Presto rendering engine build system that eliminates external dependencies on Python, Perl, Pike, 7-zip, and vsyasm, replacing them with pure Node.js equivalents.

## Requirements

- Node.js 14.0.0 or higher
- npm or yarn

## Quick Start

```bash
# Install dependencies
npm install

# Build the project
npm run build

# Run tests
npm test
```

## Build Commands

### Main Build Command
```bash
npm run build
```
This runs the main build process which includes:
- ECMAScript engine code generation
- Hardcore system setup
- Hardcoded search generation
- Selftest compilation

### Individual Component Builds
```bash
# Build ECMAScript engine files only
npm run build:ecmascript

# Build resource files
npm run build:resources

# Build selftest files
npm run build:selftests
```

### Advanced Build Commands
```bash
# Build specific components
node build/scripts/build.js ecmascript
node build/scripts/build.js hardcore
node build/scripts/build.js searches
node build/scripts/build.js selftests

# Clean build artifacts
node build/scripts/build.js clean

# Full clean and rebuild
node build/scripts/build.js all

# Run validation tests
node build/scripts/build.js test
```

## What Was Replaced

### Python Scripts → Node.js Scripts

| Original Python Script | New Node.js Script | Purpose |
|------------------------|---------------------|---------|
| `modules/ecmascript/carakan/src/scripts/instructions.py` | `build/scripts/instructions.js` | ECMAScript instruction parser |
| `modules/ecmascript/carakan/src/scripts/es_instruction.h.py` | `build/scripts/es_instruction_h.js` | ES instruction header generator |
| `modules/ecmascript/carakan/src/scripts/es_instructionhandlers.cpp.py` | `build/scripts/es_instructionhandlers_cpp.js` | ES instruction handlers generator |
| `modules/ecmascript/carakan/src/scripts/es_instruction_string.h.py` | `build/scripts/es_instruction_string_h.js` | ES instruction strings generator |
| `modules/ecmascript/carakan/src/scripts/es_instruction_data.h.py` | `build/scripts/es_instruction_data_h.js` | ES instruction data generator |
| `modules/ecmascript/carakan/src/scripts/es_process_instr.cpp.py` | `build/scripts/es_process_instr_cpp.js` | ES process instruction generator |
| `modules/ecmascript/carakan/src/scripts/es_disassemble_instr.cpp.py` | `build/scripts/es_disassemble_instr_cpp.js` | ES disassemble instruction generator |
| `modules/hardcore/scripts/operasetup.py` | `build/scripts/operasetup.js` | Main build system setup |
| `adjunct/desktop_util/search/generate_hardcoded_searches.py` | `build/scripts/generate_hardcoded_searches.js` | Hardcoded search generator |

### Perl Scripts → Node.js Scripts

| Original Perl Script | New Node.js Script | Purpose |
|---------------------|-------------------|---------|
| `platforms/mac/scripts/prebuildscript.pl` | `build/scripts/mac-prebuild.js` | Mac platform prebuild |
| `platforms/windows/packaging/scripts/buildresources.pl` | `build/scripts/build-resources.js` | Windows resource builder |
| `ubs/platforms/win-package/packaging/package_builder.pm` | `build/scripts/package-builder.js` | Windows package builder |

### Pike Scripts → Node.js Scripts

| Original Pike Script | New Node.js Script | Purpose |
|---------------------|-------------------|---------|
| `modules/selftest/parser/parse_tests.pike` | `build/scripts/selftest-parser.js` | Selftest parser and generator |

### 7-zip → Node.js Archiving

The build system now uses the Node.js `archiver` library instead of external 7-zip:
- Creates ZIP archives with maximum compression
- Generates self-extracting archives by combining SFX headers with archives
- Handles all packaging operations purely in Node.js

## Generated Files

The build system generates the following files:

### ECMAScript Engine Files
- `modules/ecmascript/carakan/src/vm/es_instruction.h`
- `modules/ecmascript/carakan/src/vm/es_instructionhandlers.cpp`
- `modules/ecmascript/carakan/src/util/es_instruction_string.h`
- `modules/ecmascript/carakan/src/compiler/es_instruction_data.h`
- `modules/ecmascript/carakan/src/compiler/es_process_instr.cpp`
- `modules/ecmascript/carakan/src/compiler/es_disassemble_instr.cpp`

### Hardcore System Files
- `modules/hardcore/opera_defines.h`
- `modules/hardcore/opera_version.h`
- `modules/hardcore/features/features.h`
- `modules/hardcore/opera_pch.h`
- `modules/locale/opera_strings.h`

### Search and Selftest Files
- `adjunct/desktop_util/search/hardcoded_searches.h`
- `modules/selftest/generated/selftest_generated.h`
- `modules/selftest/generated/selftest_generated.cpp`

## Makefile Updates

The ECMAScript standalone Makefile (`modules/ecmascript/carakan/standalone/Makefile`) has been updated to use Node.js scripts instead of Python:

```makefile
# Old Python-based rules
$(ROOT)/modules/ecmascript/carakan/src/vm/es_instruction.h: $(ROOT)/modules/ecmascript/carakan/src/scripts/es_instruction.h.py $(INSTRUCTIONS)
	$(PYTHON) $(ROOT)/modules/ecmascript/carakan/src/scripts/es_instruction.h.py > $(ROOT)/modules/ecmascript/carakan/src/vm/es_instruction.h

# New Node.js-based rules
$(ROOT)/modules/ecmascript/carakan/src/vm/es_instruction.h: $(ROOT)/build/scripts/es_instruction_h.js $(INSTRUCTIONS)
	node $(ROOT)/build/scripts/es_instruction_h.js > $(ROOT)/modules/ecmascript/carakan/src/vm/es_instruction.h
```

## Testing

Run the test suite to verify that all generated files are correct:

```bash
npm test
```

The tests verify:
- All generated files exist
- Generated files contain expected content
- C++ syntax is valid
- Node.js build scripts are functional

## Dependencies

The build system uses these Node.js packages:
- `archiver` - For creating ZIP archives instead of 7-zip
- `extract-zip` - For extracting archives
- `fs-extra` - Enhanced file system operations
- `glob` - File pattern matching
- `yargs` - Command-line argument parsing

## Compatibility

This refactored build system:
- ✅ Eliminates Python dependency
- ✅ Eliminates Perl dependency  
- ✅ Eliminates Pike dependency
- ✅ Eliminates 7-zip dependency
- ✅ Eliminates vsyasm dependency
- ✅ Uses only Node.js and npm
- ✅ Generates identical output files to original system
- ✅ Maintains compatibility with existing Makefiles
- ✅ Supports all major platforms (Windows, Mac, Linux)

## Contributing

When adding new build steps:
1. Create Node.js scripts in `build/scripts/`
2. Add corresponding npm scripts to `package.json`
3. Update the main build script (`build/scripts/build.js`)
4. Add tests to verify the new functionality
5. Update this README with the new functionality