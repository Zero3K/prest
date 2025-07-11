# FFmpeg Media Backend for Opera

This directory contains an FFmpeg-based media backend implementation as an alternative to GStreamer.

## Overview

The FFmpeg backend provides multimedia support using the FFmpeg library suite, offering:

- **Better codec support** than GStreamer
- **Simpler API** without complex pipeline management  
- **More stable ABI/API** between versions
- **Smaller footprint** when statically linked
- **Cross-platform support** (Windows, macOS, Linux)

## Architecture

### Core Components

- **`ffmpeglibs.h/cpp`** - Dynamic library loading and FFmpeg API wrapper
- **`ffmpegmediamanager.h/cpp`** - Implementation of `OpMediaManager` interface
- **`ffmpegmediaplayer.h/cpp`** - Implementation of `OpMediaPlayer` interface
- **`test_ffmpeg.cpp`** - Basic functionality tests

### Integration

- **`media_manager_factory.cpp`** - Factory function that tries FFmpeg first, falls back to GStreamer
- **`module.mk`** - Build system configuration for FFmpeg backend

## Supported Formats

### Video Codecs
- H.264/AVC1 (video/mp4)
- VP8 (video/webm)
- VP9 (video/webm) 
- AV1 (video/webm)
- Theora (video/ogg)

### Audio Codecs
- AAC (audio/mp4)
- MP3 (audio/mpeg)
- Vorbis (audio/ogg, audio/webm)
- Opus (audio/webm)
- PCM (audio/wav)

### Streaming Protocols
- RTSP (rtsp://)
- RTMP (rtmp://)
- RTP (rtp://)

## Configuration

### Preprocessor Defines

- `MEDIA_BACKEND_FFMPEG` - Enable FFmpeg backend
- `MEDIA_BACKEND_FFMPEG_BUNDLE_LIBS` - Use bundled FFmpeg libraries instead of system libraries

### Library Dependencies

**System Libraries (Linux):**
- libavformat.so.60
- libavcodec.so.60  
- libavutil.so.58
- libswscale.so.7
- libswresample.so.4

**Windows Libraries:**
- avformat-60.dll
- avcodec-60.dll
- avutil-58.dll
- swscale-7.dll
- swresample-4.dll

## Usage

The FFmpeg backend is automatically selected if available when `OpMediaManager::Create()` is called. It tries FFmpeg first, then falls back to GStreamer if FFmpeg is not available.

```cpp
OpMediaManager* manager;
OP_STATUS result = OpMediaManager::Create(&manager);
// Will use FFmpeg if available, otherwise GStreamer
```

## Advantages over GStreamer

1. **Simpler API** - Direct decoder/encoder chains vs complex pipelines
2. **Better codec support** - More codecs supported out of the box
3. **Stable API** - Less breaking changes between versions
4. **Performance** - Often faster decoding performance
5. **Size** - Smaller memory footprint
6. **Maintenance** - Easier to debug and maintain

## Current Limitations

1. **Stream-based input** - Currently only supports URL-based playback, not Opera's `OpMediaSource` streams
2. **Threading** - Simple threading model, could be enhanced
3. **Audio output** - No audio output implementation yet
4. **Seeking** - Basic seeking support, needs improvement
5. **Error handling** - Could be more robust

## Future Enhancements

1. Implement custom I/O context for `OpMediaSource` streams
2. Add proper audio output support  
3. Enhance threading and performance
4. Add hardware acceleration support
5. Improve seeking and buffering
6. Add more container format support

## Testing

Run the test function to verify FFmpeg backend functionality:

```cpp
#ifdef MEDIA_BACKEND_FFMPEG
TestFFmpegBackend();
#endif
```

This will test library loading, codec support detection, and streaming URL support.