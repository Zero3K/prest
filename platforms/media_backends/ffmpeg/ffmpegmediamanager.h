/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#ifndef FFMPEGMEDIAMANAGER_H
#define FFMPEGMEDIAMANAGER_H

#ifdef MEDIA_BACKEND_FFMPEG

#include "modules/pi/OpMediaPlayer.h"
#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"
#include "modules/hardcore/mh/messobj.h"
#include "modules/util/simset.h"

/** Map a Content-Type to an FFmpeg codec ID.
 * @param type A Content-Type with no parameters, e.g. "video/webm".
 * @return An FFmpeg codec ID, or -1 if type is unknown. */
int FFmpegMapType(const char* type);

/** Map codec parameter to FFmpeg codec ID.
 * @param codec A codec parameter, e.g. "vp8", "h264".
 * @return An FFmpeg codec ID, or -1 if codec is unknown. */
int FFmpegMapCodec(const char* codec);

class FFmpegMediaPlayer;

class FFmpegMediaManager :
    public OpMediaManager
{
public:
    virtual ~FFmpegMediaManager() {}
    virtual BOOL3 CanPlayType(const OpStringC8& type, const OpVector<OpStringC8>& codecs);
    virtual BOOL CanPlayURL(const uni_char* url);
    virtual OP_STATUS CreatePlayer(OpMediaPlayer** player, OpMediaHandle handle);
    virtual OP_STATUS CreatePlayer(OpMediaPlayer** player, OpMediaHandle handle, const uni_char* url);
    virtual void DestroyPlayer(OpMediaPlayer* player);

private:
    /** Check if a specific codec is supported by FFmpeg */
    BOOL IsCodecSupported(int codec_id);
};

class FFmpegThreadManager :
    private MessageObject
{
public:
    static OP_STATUS Init();

    virtual ~FFmpegThreadManager();

    /** Queue a player to be run as soon as possible. */
    void Queue(FFmpegMediaPlayer* player);
    /** Stop a running player. */
    void Stop(FFmpegMediaPlayer* player);

private:
    /** Start as many pending players as possible and keep the rest in
     *  queue for later. */
    void StartPending();
    virtual void HandleCallback(OpMessage msg, MH_PARAM_1 par1, MH_PARAM_2 par2);

    CountedList<FFmpegMediaPlayer> m_running;
    CountedList<FFmpegMediaPlayer> m_pending;
};

#endif // MEDIA_BACKEND_FFMPEG

#endif // FFMPEGMEDIAMANAGER_H