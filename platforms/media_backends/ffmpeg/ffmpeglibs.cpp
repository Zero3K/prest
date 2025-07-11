/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#include "core/pch_system_includes.h"

#ifdef MEDIA_BACKEND_FFMPEG

#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"

// Static member definitions
OpDLL* FFmpegLibs::dll_libavformat = NULL;
OpDLL* FFmpegLibs::dll_libavcodec = NULL;
OpDLL* FFmpegLibs::dll_libavutil = NULL;
OpDLL* FFmpegLibs::dll_libswscale = NULL;
OpDLL* FFmpegLibs::dll_libswresample = NULL;
BOOL FFmpegLibs::loaded = FALSE;

// Function pointers
av_register_all_func FFmpegLibs::av_register_all = NULL;
avformat_network_init_func FFmpegLibs::avformat_network_init = NULL;
avformat_open_input_func FFmpegLibs::avformat_open_input = NULL;
avformat_find_stream_info_func FFmpegLibs::avformat_find_stream_info = NULL;
avformat_close_input_func FFmpegLibs::avformat_close_input = NULL;
av_read_frame_func FFmpegLibs::av_read_frame = NULL;

avcodec_find_decoder_func FFmpegLibs::avcodec_find_decoder = NULL;
avcodec_open2_func FFmpegLibs::avcodec_open2 = NULL;
avcodec_close_func FFmpegLibs::avcodec_close = NULL;
avcodec_send_packet_func FFmpegLibs::avcodec_send_packet = NULL;
avcodec_receive_frame_func FFmpegLibs::avcodec_receive_frame = NULL;

av_frame_alloc_func FFmpegLibs::av_frame_alloc = NULL;
av_frame_free_func FFmpegLibs::av_frame_free = NULL;
av_packet_alloc_func FFmpegLibs::av_packet_alloc = NULL;
av_packet_free_func FFmpegLibs::av_packet_free = NULL;
av_packet_unref_func FFmpegLibs::av_packet_unref = NULL;
av_frame_unref_func FFmpegLibs::av_frame_unref = NULL;

OP_STATUS FFmpegLibs::Init()
{
    if (loaded)
        return OpStatus::OK;

    // Try to load FFmpeg libraries
#ifdef MSWIN
    const char* libavformat_name = "avformat-60.dll";
    const char* libavcodec_name = "avcodec-60.dll";
    const char* libavutil_name = "avutil-58.dll";
    const char* libswscale_name = "swscale-7.dll";
    const char* libswresample_name = "swresample-4.dll";
#elif defined(UNIX)
    const char* libavformat_name = "libavformat.so.60";
    const char* libavcodec_name = "libavcodec.so.60";
    const char* libavutil_name = "libavutil.so.58";
    const char* libswscale_name = "libswscale.so.7";
    const char* libswresample_name = "libswresample.so.4";
#else
    const char* libavformat_name = "libavformat.60";
    const char* libavcodec_name = "libavcodec.60";
    const char* libavutil_name = "libavutil.58";
    const char* libswscale_name = "libswscale.7";
    const char* libswresample_name = "libswresample.4";
#endif

    // Load libraries
    RETURN_IF_ERROR(OpDLL::Create(&dll_libavutil, libavutil_name));
    RETURN_IF_ERROR(OpDLL::Create(&dll_libavcodec, libavcodec_name));
    RETURN_IF_ERROR(OpDLL::Create(&dll_libavformat, libavformat_name));
    RETURN_IF_ERROR(OpDLL::Create(&dll_libswscale, libswscale_name));
    RETURN_IF_ERROR(OpDLL::Create(&dll_libswresample, libswresample_name));

    // Load function pointers from libavutil
    if (!dll_libavutil->GetSymbolAddress("av_frame_alloc", (void**)&av_frame_alloc) ||
        !dll_libavutil->GetSymbolAddress("av_frame_free", (void**)&av_frame_free) ||
        !dll_libavutil->GetSymbolAddress("av_packet_alloc", (void**)&av_packet_alloc) ||
        !dll_libavutil->GetSymbolAddress("av_packet_free", (void**)&av_packet_free) ||
        !dll_libavutil->GetSymbolAddress("av_packet_unref", (void**)&av_packet_unref) ||
        !dll_libavutil->GetSymbolAddress("av_frame_unref", (void**)&av_frame_unref))
    {
        Destroy();
        return OpStatus::ERR;
    }

    // Load function pointers from libavcodec
    if (!dll_libavcodec->GetSymbolAddress("avcodec_find_decoder", (void**)&avcodec_find_decoder) ||
        !dll_libavcodec->GetSymbolAddress("avcodec_open2", (void**)&avcodec_open2) ||
        !dll_libavcodec->GetSymbolAddress("avcodec_close", (void**)&avcodec_close) ||
        !dll_libavcodec->GetSymbolAddress("avcodec_send_packet", (void**)&avcodec_send_packet) ||
        !dll_libavcodec->GetSymbolAddress("avcodec_receive_frame", (void**)&avcodec_receive_frame))
    {
        Destroy();
        return OpStatus::ERR;
    }

    // Load function pointers from libavformat
    if (!dll_libavformat->GetSymbolAddress("avformat_network_init", (void**)&avformat_network_init) ||
        !dll_libavformat->GetSymbolAddress("avformat_open_input", (void**)&avformat_open_input) ||
        !dll_libavformat->GetSymbolAddress("avformat_find_stream_info", (void**)&avformat_find_stream_info) ||
        !dll_libavformat->GetSymbolAddress("avformat_close_input", (void**)&avformat_close_input) ||
        !dll_libavformat->GetSymbolAddress("av_read_frame", (void**)&av_read_frame))
    {
        Destroy();
        return OpStatus::ERR;
    }

    // Try to load av_register_all for older FFmpeg versions (deprecated in 4.0)
    dll_libavformat->GetSymbolAddress("av_register_all", (void**)&av_register_all);

    // Initialize FFmpeg
    if (av_register_all)
        av_register_all();
    
    if (avformat_network_init)
        avformat_network_init();

    loaded = TRUE;
    return OpStatus::OK;
}

void FFmpegLibs::Destroy()
{
    if (dll_libavformat)
    {
        OP_DELETE(dll_libavformat);
        dll_libavformat = NULL;
    }
    if (dll_libavcodec)
    {
        OP_DELETE(dll_libavcodec);
        dll_libavcodec = NULL;
    }
    if (dll_libavutil)
    {
        OP_DELETE(dll_libavutil);
        dll_libavutil = NULL;
    }
    if (dll_libswscale)
    {
        OP_DELETE(dll_libswscale);
        dll_libswscale = NULL;
    }
    if (dll_libswresample)
    {
        OP_DELETE(dll_libswresample);
        dll_libswresample = NULL;
    }

    // Reset function pointers
    av_register_all = NULL;
    avformat_network_init = NULL;
    avformat_open_input = NULL;
    avformat_find_stream_info = NULL;
    avformat_close_input = NULL;
    av_read_frame = NULL;
    avcodec_find_decoder = NULL;
    avcodec_open2 = NULL;
    avcodec_close = NULL;
    avcodec_send_packet = NULL;
    avcodec_receive_frame = NULL;
    av_frame_alloc = NULL;
    av_frame_free = NULL;
    av_packet_alloc = NULL;
    av_packet_free = NULL;
    av_packet_unref = NULL;
    av_frame_unref = NULL;

    loaded = FALSE;
}

BOOL FFmpegLibs::IsLoaded()
{
    return loaded;
}

#endif // MEDIA_BACKEND_FFMPEG