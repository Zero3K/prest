# Embedded FFmpeg for Opera

This directory contains a minimal embedded version of FFmpeg that can be built either:
1. Statically linked into Opera
2. As a separate DLL/shared library

## Structure

- `libavcodec/` - Core codec functionality
- `libavformat/` - Format demuxing/muxing
- `libavutil/` - Utility functions
- `libswscale/` - Video scaling
- `libswresample/` - Audio resampling
- `build/` - Build configuration files

## Configuration

The embedded FFmpeg is configured with essential codecs for web multimedia:
- Video: H.264, VP8, VP9, AV1
- Audio: AAC, MP3, Vorbis, Opus
- Formats: MP4, WebM, Ogg, DASH, HLS

## Building

Use `MEDIA_BACKEND_FFMPEG_EMBEDDED=1` to enable embedded FFmpeg.
Use `MEDIA_BACKEND_FFMPEG_STATIC=1` for static linking.