# Compiling FFmpeg with Opera using Visual Studio 2010

This guide explains how to compile Opera with embedded FFmpeg using Visual Studio 2010 instead of the standard makefile build system.

## Prerequisites

- Visual Studio 2010 (Professional, Express, or Community)
- Opera source code with FFmpeg integration
- Windows 7/Vista/8 with development environment

## Project Structure

The Visual Studio 2010 solution is located at:
```
platforms/media_backends/ffmpeg-embedded/build/msvc2010/ffmpeg.sln
```

### Projects Included

1. **libavutil** - Core utility library (avutil-58.dll or avutil.lib)
2. **libavcodec** - Codec library (avcodec-60.dll or avcodec.lib)  
3. **libavformat** - Format/container library (avformat-60.dll or avformat.lib)
4. **ffmpeg-combined** - All libraries combined for static Opera build

## Build Configurations

### DLL Build (Default)
Builds separate DLL files that can be distributed with Opera:

**Debug Configurations:**
- Debug|Win32 - 32-bit debug DLLs
- Debug|x64 - 64-bit debug DLLs

**Release Configurations:**
- Release|Win32 - 32-bit optimized DLLs  
- Release|x64 - 64-bit optimized DLLs

**Output:** `avutil-58.dll`, `avcodec-60.dll`, `avformat-60.dll`

### Static Build (For Opera Integration)
Builds static libraries that are compiled directly into Opera:

**Static Configurations:**
- Static Debug|Win32 - 32-bit debug static libraries
- Static Debug|x64 - 64-bit debug static libraries
- Static Release|Win32 - 32-bit optimized static libraries
- Static Release|x64 - 64-bit optimized static libraries

**Output:** `avutil.lib`, `avcodec.lib`, `avformat.lib`, or `ffmpeg-combined.lib`

## Step-by-Step Compilation

### Option 1: Build as DLLs

1. **Open Visual Studio 2010**
   ```
   File → Open → Project/Solution
   Navigate to: platforms/media_backends/ffmpeg-embedded/build/msvc2010/ffmpeg.sln
   ```

2. **Select Build Configuration**
   - For development: `Debug|Win32` or `Debug|x64`
   - For release: `Release|Win32` or `Release|x64`

3. **Build Solution**
   ```
   Build → Build Solution (Ctrl+Shift+B)
   ```

4. **Output Location**
   - DLLs will be created in `Debug/` or `Release/` folder
   - Copy DLLs to Opera's executable directory

### Option 2: Build Static Libraries for Opera

1. **Open the Solution** (same as above)

2. **Select Static Configuration**
   - Choose `Static Release|Win32` for 32-bit Opera
   - Choose `Static Release|x64` for 64-bit Opera

3. **Build the ffmpeg-combined Project**
   - Right-click "ffmpeg-combined" project
   - Select "Build" 
   - This creates a single `ffmpeg-combined.lib` file

4. **Link with Opera**
   - Add `ffmpeg-combined.lib` to Opera's linker dependencies
   - Ensure `MEDIA_BACKEND_FFMPEG_EMBEDDED=1` and `MEDIA_BACKEND_FFMPEG_STATIC=1` are defined

## Integration with Opera Build System

### Method 1: Standalone FFmpeg Build

Build FFmpeg first, then link with Opera:

```bash
# Build FFmpeg using Visual Studio
devenv platforms/media_backends/ffmpeg-embedded/build/msvc2010/ffmpeg.sln /build "Static Release|Win32"

# Build Opera with FFmpeg static libraries
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1 MEDIA_BACKEND_FFMPEG_STATIC=1
```

### Method 2: Combined Visual Studio Solution

Create a master solution that includes both Opera and FFmpeg projects:

1. Create new solution: `opera-with-ffmpeg.sln`
2. Add existing Opera projects
3. Add FFmpeg projects from `ffmpeg.sln`
4. Set project dependencies (Opera depends on ffmpeg-combined)
5. Build entire solution at once

## Build Customization

### Codec Selection

Edit the `.vcxproj` files to include/exclude specific codecs:

**For H.264 only:**
```xml
<!-- Remove these lines from ClCompile items -->
<ClCompile Include="..\..\libavcodec\vp8.c" />
<ClCompile Include="..\..\libavcodec\vp9.c" />
<ClCompile Include="..\..\libavcodec\av1_decoder.c" />
```

**For WebM/VP8 only:**
```xml
<!-- Remove these lines -->
<ClCompile Include="..\..\libavcodec\h264_decoder.c" />
<ClCompile Include="..\..\libavcodec\h264_parser.c" />
```

### Optimization Settings

**For Maximum Performance:**
1. Select Release configuration
2. Project Properties → C/C++ → Optimization
3. Set to "Maximize Speed (/O2)"
4. Enable "Favor fast code (/Ot)"

**For Minimum Size:**
1. Project Properties → C/C++ → Optimization  
2. Set to "Minimize Size (/O1)"
3. Enable "Favor small code (/Os)"

## Troubleshooting

### Common Build Issues

**Error: Cannot find libavutil.h**
- Ensure include directories are set correctly in project properties
- Verify: `..\..\;..\..\libavutil;..\..\libavcodec;..\..\libavformat`

**Error: Unresolved external symbols**
- Check that all required .c files are included in ClCompile items
- Verify project dependencies are set correctly
- Ensure proper preprocessor definitions

**Error: LNK1104: cannot open file 'avutil-58.lib'**
- Build projects in correct order: libavutil → libavcodec → libavformat
- Check output directories match linker input directories

### Performance Tips

1. **Use Release configurations** for production builds
2. **Enable Link Time Code Generation** for better optimization
3. **Use 64-bit builds** when possible for better performance
4. **Profile-Guided Optimization (PGO)** for maximum performance:
   ```
   Build → PGO → Instrument
   (Run Opera with test content)
   Build → PGO → Optimize
   ```

## Testing the Build

### Verify FFmpeg Integration

1. **Check Library Loading**
   ```cpp
   // In Opera code
   #ifdef MEDIA_BACKEND_FFMPEG_EMBEDDED
   bool ffmpeg_available = av_version_info() != nullptr;
   #endif
   ```

2. **Test Video Playback**
   - Load a webpage with HTML5 video
   - Check that FFmpeg codecs are detected
   - Verify smooth playback

3. **Performance Testing**
   - Compare playback performance vs system FFmpeg
   - Test multiple codec formats (H.264, VP8, VP9)
   - Monitor memory usage

## Distribution

### DLL Distribution
Copy these files with Opera:
- `avutil-58.dll`
- `avcodec-60.dll` 
- `avformat-60.dll`

### Static Distribution
No additional files needed - FFmpeg is compiled into Opera executable.

## Benefits of Visual Studio Build

✅ **IDE Integration** - Full debugging and IntelliSense support  
✅ **Project Management** - Easy source file organization  
✅ **Build Configurations** - Multiple targets in one solution  
✅ **Optimization Control** - Fine-grained compiler settings  
✅ **Windows Integration** - Native Windows build environment  
✅ **Team Development** - Source control integration  

This Visual Studio 2010 build system provides a Windows-native alternative to the makefile-based build, making it easier to develop, debug, and optimize FFmpeg integration with Opera.