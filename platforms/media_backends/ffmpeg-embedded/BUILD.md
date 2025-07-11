# Building Opera with Embedded FFmpeg

This guide shows how to build Opera with embedded FFmpeg instead of using system libraries.

## Configuration Options

### Static Linking (Default)
Compiles FFmpeg directly into Opera:
```bash
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1 MEDIA_BACKEND_FFMPEG_STATIC=1
```

### Dynamic Library
Builds FFmpeg as a separate DLL/shared library:
```bash
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1
```

## Platform-Specific Instructions

### Windows
For static linking:
```bash
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1 MEDIA_BACKEND_FFMPEG_STATIC=1
```

For DLL build:
```bash
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1
# Creates ffmpeg-embedded.dll
```

### Linux/Unix
For static linking:
```bash
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1 MEDIA_BACKEND_FFMPEG_STATIC=1
```

For shared library:
```bash
make MEDIA_BACKEND_FFMPEG_EMBEDDED=1
# Creates libffmpeg-embedded.so
```

## Benefits

✅ **No External Dependencies**: Opera bundles its own FFmpeg  
✅ **Version Control**: Guaranteed compatibility with specific FFmpeg version  
✅ **Distribution**: Easier deployment without system library requirements  
✅ **Security**: Control over which codecs and features are included  
✅ **Performance**: Optimized build specifically for Opera's needs  

## Codec Support

The embedded FFmpeg includes essential codecs for web multimedia:

**Video Codecs:**
- H.264 (AVC)
- VP8
- VP9 
- AV1

**Audio Codecs:**
- AAC
- MP3
- Vorbis
- Opus

**Container Formats:**
- MP4
- WebM
- Ogg
- HLS
- DASH

## Testing

To test the embedded FFmpeg:
```bash
cd platforms/media_backends/ffmpeg-embedded
make test_embedded
./test_embedded
```

This will verify codec detection and basic functionality.