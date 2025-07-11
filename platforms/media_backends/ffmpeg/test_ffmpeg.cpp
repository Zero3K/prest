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
#include "platforms/media_backends/ffmpeg/ffmpegmediamanager.h"
#include "modules/pi/OpMediaPlayer.h"

// Simple test function to verify FFmpeg backend functionality
void TestFFmpegBackend()
{
    // Test library loading
    if (OpStatus::IsSuccess(FFmpegLibs::Init()))
    {
        printf("FFmpeg libraries loaded successfully\n");
        
        // Test media manager creation
        FFmpegMediaManager manager;
        
        // Test codec support
        OpVector<OpStringC8> codecs;
        OpStringC8 h264_codec("h264");
        codecs.Add(&h264_codec);
        
        OpStringC8 mp4_type("video/mp4");
        BOOL3 result = manager.CanPlayType(mp4_type, codecs);
        
        printf("H.264 in MP4 support: %s\n", 
               result == YES ? "YES" : 
               result == NO ? "NO" : "MAYBE");
        
        // Test VP8 support  
        OpVector<OpStringC8> vp8_codecs;
        OpStringC8 vp8_codec("vp8");
        vp8_codecs.Add(&vp8_codec);
        
        OpStringC8 webm_type("video/webm");
        result = manager.CanPlayType(webm_type, vp8_codecs);
        
        printf("VP8 in WebM support: %s\n",
               result == YES ? "YES" : 
               result == NO ? "NO" : "MAYBE");
        
        // Test streaming URL support
        BOOL url_support = manager.CanPlayURL(UNI_L("rtsp://example.com/stream"));
        printf("RTSP streaming support: %s\n", url_support ? "YES" : "NO");
        
        FFmpegLibs::Destroy();
    }
    else
    {
        printf("Failed to load FFmpeg libraries\n");
    }
}

#endif // MEDIA_BACKEND_FFMPEG