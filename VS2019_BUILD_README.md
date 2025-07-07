# Building Presto with Visual Studio 2019

This document provides instructions for building the Presto rendering engine using Visual Studio 2019 without external dependencies.

## Prerequisites

- **Visual Studio 2019** (Community, Professional, or Enterprise)
- **Node.js 14.0 or higher** (required for build scripts)
- **Windows 10 SDK** (recommended: 10.0.18362.0 or later)

## Quick Start

1. **Install Node.js dependencies**:
   ```cmd
   cd /path/to/prest
   npm install
   ```

2. **Open Visual Studio 2019**:
   - Open `platforms/windows/Opera_vs2019.sln`
   - Select your desired configuration (Debug, Release, etc.)
   - Select your platform (x86 or x64)

3. **Build the solution**:
   - Right-click on the solution in Solution Explorer
   - Select "Build Solution" or press `Ctrl+Shift+B`

## What's Changed

### Eliminated Dependencies

This build system **no longer requires**:
- ❌ Python 2.7
- ❌ Perl
- ❌ Pike programming language
- ❌ 7-zip
- ❌ vsyasm

### What You Need

✅ **Visual Studio 2019** with C++ workload  
✅ **Node.js 14+** (for build scripts)  
✅ **Windows 10 SDK**  

## Build Configurations

| Configuration | Purpose | Platform |
|---------------|---------|----------|
| Debug | Development build with debug symbols | x86, x64 |
| Release | Optimized release build | x86, x64 |
| Debug no selftests | Debug build without selftests | x86, x64 |
| PGO | Profile-guided optimization build | x86, x64 |
| Instrumented | Build for profiling | x86, x64 |
| vTune | Build optimized for Intel vTune | x86, x64 |

## Build Process Details

### Automatic Code Generation

The build system automatically generates required source files using Node.js:

- **ECMAScript engine files** (from `modules/ecmascript/carakan/`)
- **Resource files** (from `platforms/windows/packaging/`)
- **System configuration files** (from `modules/hardcore/`)

### Resource Building

The `BuildResources` project now uses `build-resources.js` instead of the original Perl script:

```xml
<Command>node "$(SolutionDir)..\..\build\scripts\build-resources.js" "$(SolutionDir) " "$(OutDir) " "$(ConfigurationName) " "$(VCInstallDir) " "$(Platform) "</Command>
```

## Troubleshooting

### Node.js Not Found

If you get an error about `node` not being found:

1. Ensure Node.js is installed and in your PATH
2. Restart Visual Studio after installing Node.js
3. Check that you can run `node --version` from Command Prompt

### Build Dependencies

If the build fails due to missing dependencies:

1. Run `npm install` in the project root directory
2. Ensure all Node.js dependencies are installed
3. Clean and rebuild the solution

### Platform Toolset Issues

If you get platform toolset errors:

1. Ensure you have the v142 toolset installed (Visual Studio 2019)
2. Install the Windows 10 SDK if missing
3. Update Visual Studio to the latest version

## Manual Build Steps

If you prefer to run build steps manually:

```cmd
# Navigate to project root
cd /path/to/prest

# Install Node.js dependencies
npm install

# Run individual build scripts
npm run build:ecmascript
npm run build:resources
npm run build:selftests

# Or run the complete build
npm run build
```

## Output Directory

Build outputs are placed in:
```
VS_Output/
├── Debug/
├── Release/
├── PGO/
└── temp/
```

## Integration with MSBuild

The Node.js build scripts integrate seamlessly with MSBuild:

- **Pre-build events** generate required source files
- **Custom build steps** handle resource compilation
- **Post-build events** package outputs

## Comparison with Legacy Build

| Aspect | Legacy System | New System |
|--------|---------------|------------|
| Dependencies | Python, Perl, Pike, 7-zip, vsyasm | Node.js only |
| Setup Time | 30+ minutes | 5 minutes |
| Build Speed | Varies | Consistent |
| Maintenance | High (multiple languages) | Low (JavaScript only) |
| Windows Integration | External tools | Native MSBuild |

## Performance Tips

- Use **parallel builds** in Visual Studio (`Tools > Options > Projects and Solutions > Build and Run`)
- Consider using **Release** configuration for faster execution
- Enable **incremental linking** for faster debug builds
- Use **x64** platform for better performance on 64-bit systems

## Support

For build issues:

1. Check the **Output** window in Visual Studio for detailed error messages
2. Verify Node.js installation: `node --version`
3. Ensure all npm dependencies are installed: `npm list`
4. Try a clean rebuild: `Build > Clean Solution`, then `Build > Rebuild Solution`

## Legacy Compatibility

The new build system generates **identical output files** to the original system, ensuring full compatibility with existing:

- Makefiles
- External build systems  
- Deployment scripts
- Testing frameworks

---

**Note**: This build system is specifically designed for Visual Studio 2019. For other versions of Visual Studio or different build environments, refer to the main `BUILD_README.md` file.