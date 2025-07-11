/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#ifndef FFMPEGLIBS_H
#define FFMPEGLIBS_H

#ifdef MEDIA_BACKEND_FFMPEG

#include "modules/pi/system/OpDLL.h"

// FFmpeg major version detection
#ifndef FFMPEG_VERSION_MAJOR
#define FFMPEG_VERSION_MAJOR 6
#endif

#ifndef FFMPEG_VERSION_MINOR  
#define FFMPEG_VERSION_MINOR 1
#endif

#ifndef FFMPEG_VERSION_MICRO
#define FFMPEG_VERSION_MICRO 1
#endif

// Version check macro
#define FFMPEG_CHECK_VERSION(major, minor, micro) \
    (FFMPEG_VERSION_MAJOR > (major) || \
     (FFMPEG_VERSION_MAJOR == (major) && FFMPEG_VERSION_MINOR > (minor)) || \
     (FFMPEG_VERSION_MAJOR == (major) && FFMPEG_VERSION_MINOR == (minor) && FFMPEG_VERSION_MICRO >= (micro)))

// Forward declarations for FFmpeg types
struct AVFormatContext;
struct AVCodecContext;
struct AVCodec;
struct AVFrame;
struct AVPacket;
struct AVDictionary;
struct AVStream;
struct SwsContext;
struct SwrContext;

// FFmpeg function pointer types
typedef int (*av_register_all_func)(void);
typedef void (*avformat_network_init_func)(void);
typedef int (*avformat_open_input_func)(AVFormatContext**, const char*, struct AVInputFormat*, AVDictionary**);
typedef int (*avformat_find_stream_info_func)(AVFormatContext*, AVDictionary**);
typedef void (*avformat_close_input_func)(AVFormatContext**);
typedef struct AVCodec* (*avcodec_find_decoder_func)(int);
typedef int (*avcodec_open2_func)(AVCodecContext*, const struct AVCodec*, AVDictionary**);
typedef int (*avcodec_close_func)(AVCodecContext*);
typedef struct AVFrame* (*av_frame_alloc_func)(void);
typedef void (*av_frame_free_func)(AVFrame**);
typedef struct AVPacket* (*av_packet_alloc_func)(void);
typedef void (*av_packet_free_func)(AVPacket**);
typedef int (*av_read_frame_func)(AVFormatContext*, AVPacket*);
typedef int (*avcodec_send_packet_func)(AVCodecContext*, const AVPacket*);
typedef int (*avcodec_receive_frame_func)(AVCodecContext*, AVFrame*);
typedef void (*av_packet_unref_func)(AVPacket*);
typedef void (*av_frame_unref_func)(AVFrame*);

// FFmpeg library interface
class FFmpegLibs
{
public:
    static OP_STATUS Init();
    static void Destroy();
    static BOOL IsLoaded();

    // libavformat functions
    static av_register_all_func av_register_all;
    static avformat_network_init_func avformat_network_init;
    static avformat_open_input_func avformat_open_input;
    static avformat_find_stream_info_func avformat_find_stream_info;
    static avformat_close_input_func avformat_close_input;
    static av_read_frame_func av_read_frame;

    // libavcodec functions
    static avcodec_find_decoder_func avcodec_find_decoder;
    static avcodec_open2_func avcodec_open2;
    static avcodec_close_func avcodec_close;
    static avcodec_send_packet_func avcodec_send_packet;
    static avcodec_receive_frame_func avcodec_receive_frame;

    // libavutil functions  
    static av_frame_alloc_func av_frame_alloc;
    static av_frame_free_func av_frame_free;
    static av_packet_alloc_func av_packet_alloc;
    static av_packet_free_func av_packet_free;
    static av_packet_unref_func av_packet_unref;
    static av_frame_unref_func av_frame_unref;

private:
    static OpDLL* dll_libavformat;
    static OpDLL* dll_libavcodec;
    static OpDLL* dll_libavutil;
    static OpDLL* dll_libswscale;
    static OpDLL* dll_libswresample;
    
    static BOOL loaded;
};

#endif // MEDIA_BACKEND_FFMPEG

#endif // FFMPEGLIBS_H