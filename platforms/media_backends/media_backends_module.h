/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2009-2011 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#ifndef MEDIA_BACKENDS_MODULE_H
#define MEDIA_BACKENDS_MODULE_H

#ifdef MEDIA_BACKEND_FFMPEG

#include "modules/hardcore/opera/module.h"

class FFmpegThreadManager;

class MediaBackendsModule : public OperaModule
{
public:
    MediaBackendsModule();

    void InitL(const OperaInitInfo& info);
    void Destroy();

	FFmpegThreadManager *ffmpeg_thread_manager;
};

#define g_ffmpeg_thread_manager (g_opera->media_backends_module.ffmpeg_thread_manager)

#define MEDIA_BACKENDS_MODULE_REQUIRED

#endif // MEDIA_BACKEND_FFMPEG

#endif // MEDIA_BACKENDS_MODULE_H
