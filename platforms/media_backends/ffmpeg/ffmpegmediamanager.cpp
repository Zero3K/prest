/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#include "core/pch_system_includes.h"

#ifdef MEDIA_BACKEND_FFMPEG

#include "platforms/media_backends/ffmpeg/ffmpegmediamanager.h"
#include "platforms/media_backends/ffmpeg/ffmpegmediaplayer.h"
#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"

// Codec ID definitions (simplified subset of FFmpeg's enum AVCodecID)
enum {
    FFMPEG_CODEC_ID_NONE = 0,
    // Video codecs
    FFMPEG_CODEC_ID_H264 = 27,
    FFMPEG_CODEC_ID_VP8 = 139,
    FFMPEG_CODEC_ID_VP9 = 167,
    FFMPEG_CODEC_ID_AV1 = 225,
    FFMPEG_CODEC_ID_THEORA = 30,
    // Audio codecs
    FFMPEG_CODEC_ID_MP3 = 86016,
    FFMPEG_CODEC_ID_AAC = 86018,
    FFMPEG_CODEC_ID_VORBIS = 86021,
    FFMPEG_CODEC_ID_OPUS = 86076,
    FFMPEG_CODEC_ID_PCM_S16LE = 65536
};

struct TypeMapping {
    const char* mime_type;
    int codec_id;
};

struct CodecMapping {
    const char* codec_name;
    int codec_id;
};

static const TypeMapping type_mappings[] = {
    {"video/mp4", FFMPEG_CODEC_ID_H264},
    {"video/webm", FFMPEG_CODEC_ID_VP8},
    {"video/ogg", FFMPEG_CODEC_ID_THEORA},
    {"audio/mp4", FFMPEG_CODEC_ID_AAC},
    {"audio/webm", FFMPEG_CODEC_ID_VORBIS},
    {"audio/ogg", FFMPEG_CODEC_ID_VORBIS},
    {"audio/mpeg", FFMPEG_CODEC_ID_MP3},
    {"audio/wav", FFMPEG_CODEC_ID_PCM_S16LE},
    {NULL, FFMPEG_CODEC_ID_NONE}
};

static const CodecMapping codec_mappings[] = {
    {"h264", FFMPEG_CODEC_ID_H264},
    {"avc1", FFMPEG_CODEC_ID_H264},
    {"vp8", FFMPEG_CODEC_ID_VP8},
    {"vp9", FFMPEG_CODEC_ID_VP9},
    {"av01", FFMPEG_CODEC_ID_AV1},
    {"theora", FFMPEG_CODEC_ID_THEORA},
    {"mp3", FFMPEG_CODEC_ID_MP3},
    {"aac", FFMPEG_CODEC_ID_AAC},
    {"mp4a", FFMPEG_CODEC_ID_AAC},
    {"vorbis", FFMPEG_CODEC_ID_VORBIS},
    {"opus", FFMPEG_CODEC_ID_OPUS},
    {NULL, FFMPEG_CODEC_ID_NONE}
};

int FFmpegMapType(const char* type)
{
    for (const TypeMapping* mapping = type_mappings; mapping->mime_type; mapping++)
    {
        if (op_strcmp(type, mapping->mime_type) == 0)
            return mapping->codec_id;
    }
    return FFMPEG_CODEC_ID_NONE;
}

int FFmpegMapCodec(const char* codec)
{
    for (const CodecMapping* mapping = codec_mappings; mapping->codec_name; mapping++)
    {
        if (op_strncmp(codec, mapping->codec_name, op_strlen(mapping->codec_name)) == 0)
            return mapping->codec_id;
    }
    return FFMPEG_CODEC_ID_NONE;
}

BOOL FFmpegMediaManager::IsCodecSupported(int codec_id)
{
    if (!FFmpegLibs::IsLoaded())
        return FALSE;

    if (codec_id == FFMPEG_CODEC_ID_NONE)
        return FALSE;

    // Try to find the decoder
    struct AVCodec* codec = FFmpegLibs::avcodec_find_decoder(codec_id);
    return codec != NULL;
}

BOOL3 FFmpegMediaManager::CanPlayType(const OpStringC8& type, const OpVector<OpStringC8>& codecs)
{
    if (!FFmpegLibs::IsLoaded())
        return MAYBE;

    // Map MIME type to codec
    int type_codec_id = FFmpegMapType(type.CStr());

    // If we have specific codecs, check each one
    if (codecs.GetCount() > 0)
    {
        for (UINT32 i = 0; i < codecs.GetCount(); i++)
        {
            int codec_id = FFmpegMapCodec(codecs.Get(i)->CStr());
            if (!IsCodecSupported(codec_id))
                return NO;
        }
        return YES;
    }

    // No specific codecs, check if we support the container type
    if (type_codec_id != FFMPEG_CODEC_ID_NONE && IsCodecSupported(type_codec_id))
        return MAYBE;

    return NO;
}

BOOL FFmpegMediaManager::CanPlayURL(const uni_char* url)
{
    if (!FFmpegLibs::IsLoaded())
        return FALSE;

    // Check for streaming protocols that FFmpeg can handle directly
    if (uni_strni_eq(url, UNI_L("rtsp://"), 7) ||
        uni_strni_eq(url, UNI_L("rtmp://"), 7) ||
        uni_strni_eq(url, UNI_L("rtp://"), 6))
    {
        return TRUE;
    }

    return FALSE;
}

OP_STATUS FFmpegMediaManager::CreatePlayer(OpMediaPlayer** player, OpMediaHandle handle)
{
    if (!FFmpegLibs::IsLoaded())
        return OpStatus::ERR_NOT_SUPPORTED;

    FFmpegMediaPlayer* ffmpeg_player = OP_NEW(FFmpegMediaPlayer, (handle));
    if (!ffmpeg_player)
        return OpStatus::ERR_NO_MEMORY;

    *player = ffmpeg_player;
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaManager::CreatePlayer(OpMediaPlayer** player, OpMediaHandle handle, const uni_char* url)
{
    if (!FFmpegLibs::IsLoaded())
        return OpStatus::ERR_NOT_SUPPORTED;

    FFmpegMediaPlayer* ffmpeg_player = OP_NEW(FFmpegMediaPlayer, (handle, url));
    if (!ffmpeg_player)
        return OpStatus::ERR_NO_MEMORY;

    *player = ffmpeg_player;
    return OpStatus::OK;
}

void FFmpegMediaManager::DestroyPlayer(OpMediaPlayer* player)
{
    OP_DELETE(player);
}

// Thread manager implementation (simplified)
OP_STATUS FFmpegThreadManager::Init()
{
    // For now, just return OK - thread management can be added later
    return OpStatus::OK;
}

FFmpegThreadManager::~FFmpegThreadManager()
{
    // Clean up any pending operations
}

void FFmpegThreadManager::Queue(FFmpegMediaPlayer* player)
{
    // Simple implementation - could be enhanced with actual threading
    if (player)
    {
        m_running.Add(player);
    }
}

void FFmpegThreadManager::Stop(FFmpegMediaPlayer* player)
{
    if (player)
    {
        m_running.Remove(player);
        m_pending.Remove(player);
    }
}

void FFmpegThreadManager::StartPending()
{
    // Move pending to running (simplified)
    while (m_pending.GetCount() > 0)
    {
        FFmpegMediaPlayer* player = m_pending.Get(0);
        m_pending.Remove(player);
        m_running.Add(player);
    }
}

void FFmpegThreadManager::HandleCallback(OpMessage msg, MH_PARAM_1 par1, MH_PARAM_2 par2)
{
    // Handle timer callbacks for media processing
}

#endif // MEDIA_BACKEND_FFMPEG