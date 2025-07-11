/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#include "core/pch_system_includes.h"

#ifdef MEDIA_BACKEND_FFMPEG

#include "modules/pi/OpMediaPlayer.h"

#include "platforms/media_backends/ffmpeg/ffmpegmediamanager.h"
#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"

/** Create FFmpeg media manager.
 */
OP_STATUS OpMediaManager::Create(OpMediaManager** manager)
{
    *manager = NULL;

    // Use FFmpeg backend
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

    return OpStatus::ERR_NOT_SUPPORTED;
}

#endif // MEDIA_BACKEND_FFMPEG