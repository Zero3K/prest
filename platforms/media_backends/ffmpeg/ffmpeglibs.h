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

#ifdef MEDIA_BACKEND_FFMPEG_EMBEDDED
/* Use embedded FFmpeg headers */
#include "platforms/media_backends/ffmpeg-embedded/libavutil/avutil.h"
#include "platforms/media_backends/ffmpeg-embedded/libavcodec/avcodec.h"
#include "platforms/media_backends/ffmpeg-embedded/libavformat/avformat.h"
#include "platforms/media_backends/ffmpeg-embedded/ffmpeg_version.h"
#else
/* Use dynamic loading for system FFmpeg */
#include "modules/pi/system/OpDLL.h"
#endif

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

#ifdef MEDIA_BACKEND_FFMPEG_EMBEDDED
    /* Embedded FFmpeg - direct function calls */
    static inline int call_av_register_all() { 
#if LIBAVCODEC_VERSION_MAJOR < 59
        avcodec_register_all(); 
#endif
        return 0; 
    }
    static inline void call_avformat_network_init() { avformat_network_init(); }
    static inline int call_avformat_open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options) { 
        return avformat_open_input(ps, url, fmt, options); 
    }
    static inline int call_avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options) { 
        return avformat_find_stream_info(ic, options); 
    }
    static inline void call_avformat_close_input(AVFormatContext **s) { avformat_close_input(s); }
    static inline int call_av_read_frame(AVFormatContext *s, AVPacket *pkt) { return av_read_frame(s, pkt); }
    static inline const AVCodec* call_avcodec_find_decoder(enum AVCodecID id) { return avcodec_find_decoder(id); }
    static inline int call_avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options) { 
        return avcodec_open2(avctx, codec, options); 
    }
    static inline int call_avcodec_close(AVCodecContext *avctx) { return avcodec_close(avctx); }
    static inline int call_avcodec_send_packet(AVCodecContext *avctx, const AVPacket *avpkt) { 
        return avcodec_send_packet(avctx, avpkt); 
    }
    static inline int call_avcodec_receive_frame(AVCodecContext *avctx, AVFrame *frame) { 
        return avcodec_receive_frame(avctx, frame); 
    }
    static inline AVFrame* call_av_frame_alloc() { return av_frame_alloc(); }
    static inline void call_av_frame_free(AVFrame **frame) { av_frame_free(frame); }
    static inline AVPacket* call_av_packet_alloc() { return av_packet_alloc(); }
    static inline void call_av_packet_free(AVPacket **pkt) { av_packet_free(pkt); }
    static inline void call_av_packet_unref(AVPacket *pkt) { av_packet_unref(pkt); }
    static inline void call_av_frame_unref(AVFrame *frame) { av_frame_unref(frame); }

    /* Wrapper functions for consistent API */
    static int register_all() { call_av_register_all(); return 0; }
    static void network_init() { call_avformat_network_init(); }
    static int open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options) { 
        return call_avformat_open_input(ps, url, fmt, options); 
    }
    static int find_stream_info(AVFormatContext *ic, AVDictionary **options) { 
        return call_avformat_find_stream_info(ic, options); 
    }
    static void close_input(AVFormatContext **s) { call_avformat_close_input(s); }
    static int read_frame(AVFormatContext *s, AVPacket *pkt) { return call_av_read_frame(s, pkt); }
    static const AVCodec* find_decoder(enum AVCodecID id) { return call_avcodec_find_decoder(id); }
    static int codec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options) { 
        return call_avcodec_open2(avctx, codec, options); 
    }
    static int codec_close(AVCodecContext *avctx) { return call_avcodec_close(avctx); }
    static int send_packet(AVCodecContext *avctx, const AVPacket *avpkt) { 
        return call_avcodec_send_packet(avctx, avpkt); 
    }
    static int receive_frame(AVCodecContext *avctx, AVFrame *frame) { 
        return call_avcodec_receive_frame(avctx, frame); 
    }
    static AVFrame* frame_alloc() { return call_av_frame_alloc(); }
    static void frame_free(AVFrame **frame) { call_av_frame_free(frame); }
    static AVPacket* packet_alloc() { return call_av_packet_alloc(); }
    static void packet_free(AVPacket **pkt) { call_av_packet_free(pkt); }
    static void packet_unref(AVPacket *pkt) { call_av_packet_unref(pkt); }
    static void frame_unref(AVFrame *frame) { call_av_frame_unref(frame); }

#else
    /* Dynamic FFmpeg - function pointers */
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

    /* Wrapper functions for consistent API */
    static int register_all() { if (av_register_all) av_register_all(); return 0; }
    static void network_init() { if (avformat_network_init) avformat_network_init(); }
    static int open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options) { 
        return avformat_open_input ? avformat_open_input(ps, url, fmt, options) : -1; 
    }
    static int find_stream_info(AVFormatContext *ic, AVDictionary **options) { 
        return avformat_find_stream_info ? avformat_find_stream_info(ic, options) : -1; 
    }
    static void close_input(AVFormatContext **s) { if (avformat_close_input) avformat_close_input(s); }
    static int read_frame(AVFormatContext *s, AVPacket *pkt) { 
        return av_read_frame ? av_read_frame(s, pkt) : -1; 
    }
    static const AVCodec* find_decoder(enum AVCodecID id) { 
        return avcodec_find_decoder ? avcodec_find_decoder(id) : NULL; 
    }
    static int codec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options) { 
        return avcodec_open2 ? avcodec_open2(avctx, codec, options) : -1; 
    }
    static int codec_close(AVCodecContext *avctx) { 
        return avcodec_close ? avcodec_close(avctx) : -1; 
    }
    static int send_packet(AVCodecContext *avctx, const AVPacket *avpkt) { 
        return avcodec_send_packet ? avcodec_send_packet(avctx, avpkt) : -1; 
    }
    static int receive_frame(AVCodecContext *avctx, AVFrame *frame) { 
        return avcodec_receive_frame ? avcodec_receive_frame(avctx, frame) : -1; 
    }
    static AVFrame* frame_alloc() { return av_frame_alloc ? av_frame_alloc() : NULL; }
    static void frame_free(AVFrame **frame) { if (av_frame_free) av_frame_free(frame); }
    static AVPacket* packet_alloc() { return av_packet_alloc ? av_packet_alloc() : NULL; }
    static void packet_free(AVPacket **pkt) { if (av_packet_free) av_packet_free(pkt); }
    static void packet_unref(AVPacket *pkt) { if (av_packet_unref) av_packet_unref(pkt); }
    static void frame_unref(AVFrame *frame) { if (av_frame_unref) av_frame_unref(frame); }

private:
    static OpDLL* dll_libavformat;
    static OpDLL* dll_libavcodec;
    static OpDLL* dll_libavutil;
    static OpDLL* dll_libswscale;
    static OpDLL* dll_libswresample;
    
    static BOOL loaded;
#endif /* MEDIA_BACKEND_FFMPEG_EMBEDDED */
};

#endif // MEDIA_BACKEND_FFMPEG

#endif // FFMPEGLIBS_H