/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#include "core/pch_system_includes.h"

#if defined(MEDIA_BACKEND_GSTREAMER) || defined(MEDIA_BACKEND_FFMPEG)

#include "modules/pi/OpMediaPlayer.h"

#ifdef MEDIA_BACKEND_GSTREAMER
#include "platforms/media_backends/gst/gstmediamanager.h"
#include "platforms/media_backends/gst/gstlibs.h"
#endif

#ifdef MEDIA_BACKEND_FFMPEG
#include "platforms/media_backends/ffmpeg/ffmpegmediamanager.h"
#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"
#endif

/** Create the best available media manager.
 *  Tries FFmpeg first (if available), falls back to GStreamer.
 */
OP_STATUS OpMediaManager::Create(OpMediaManager** manager)
{
    *manager = NULL;

#ifdef MEDIA_BACKEND_FFMPEG
    // Try FFmpeg first
    if (OpStatus::IsSuccess(FFmpegLibs::Init()))
    {
        FFmpegMediaManager* ffmpeg_manager = OP_NEW(FFmpegMediaManager, ());
        if (ffmpeg_manager)
        {
            *manager = ffmpeg_manager;
            return OpStatus::OK;
        }
        FFmpegLibs::Destroy();
    }
#endif

#ifdef MEDIA_BACKEND_GSTREAMER
    // Fall back to GStreamer
    if (OpStatus::IsSuccess(GstLibs::Init()))
    {
        GstMediaManager* gst_manager = OP_NEW(GstMediaManager, ());
        if (gst_manager)
        {
            *manager = gst_manager;
            return OpStatus::OK;
        }
        GstLibs::Destroy();
    }
#endif

    return OpStatus::ERR_NOT_SUPPORTED;
}

#endif // defined(MEDIA_BACKEND_GSTREAMER) || defined(MEDIA_BACKEND_FFMPEG)