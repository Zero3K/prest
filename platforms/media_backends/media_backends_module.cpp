/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2009-2011 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#include "core/pch_system_includes.h"

#ifdef MEDIA_BACKEND_FFMPEG

#include "platforms/media_backends/ffmpeg/ffmpegmediamanager.h"

MediaBackendsModule::MediaBackendsModule() :
	ffmpeg_thread_manager(NULL)
{
}

void MediaBackendsModule::InitL(const OperaInitInfo& info)
{
    // Initialize FFmpeg libraries
    FFmpegLibs::Init();
    
    // Initialize FFmpeg thread manager
    if (OpStatus::IsSuccess(FFmpegThreadManager::Init()))
    {
        ffmpeg_thread_manager = OP_NEW(FFmpegThreadManager, ());
    }
}

void MediaBackendsModule::Destroy()
{
	OP_DELETE(ffmpeg_thread_manager);
	FFmpegLibs::Destroy();
}

#endif // MEDIA_BACKEND_FFMPEG
