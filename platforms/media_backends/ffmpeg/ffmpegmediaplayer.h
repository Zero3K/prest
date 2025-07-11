/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#ifndef FFMPEGMEDIAPLAYER_H
#define FFMPEGMEDIAPLAYER_H

#ifdef MEDIA_BACKEND_FFMPEG

#include "modules/pi/OpMediaPlayer.h"
#include "modules/windowcommander/OpMediaSource.h"
#include "modules/pi/OpBitmap.h"
#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"

class FFmpegSharedState;

struct FFmpegBufferedTimeRange
{
    double start;
    double end;
};

class FFmpegBufferedTimeRanges :
    public OpMediaTimeRanges
{
public:
    FFmpegBufferedTimeRanges() : ranges(NULL), allocated(0), used(0) {}
    virtual ~FFmpegBufferedTimeRanges() { op_free(ranges); }
    
    virtual UINT32 Length() const { return used; }
    virtual double Start(UINT32 idx) const
    {
        OP_ASSERT(idx < used);
        return ranges[idx].start;
    }
    virtual double End(UINT32 idx) const
    {
        OP_ASSERT(idx < used);
        return ranges[idx].end;
    }
    
    FFmpegBufferedTimeRange* ranges;
    UINT32 allocated;
    UINT32 used;
};

/** FFmpeg-based media player implementation */
class FFmpegMediaPlayer :
    public OpMediaPlayer,
    public OpMediaSourceListener
{
public:
    FFmpegMediaPlayer(OpMediaHandle handle);
    FFmpegMediaPlayer(OpMediaHandle handle, const uni_char* url);
    virtual ~FFmpegMediaPlayer();

    // OpMediaPlayer interface
    virtual OP_STATUS Play();
    virtual OP_STATUS Pause();
    virtual OP_STATUS SetPosition(double position);
    virtual OP_STATUS SetPlaybackRate(double rate);
    virtual OP_STATUS SetVolume(double volume);
    virtual OP_STATUS SetPreload(OpMediaPlayer::Preload preload);
    virtual double GetPosition();
    virtual double GetDuration();
    virtual double GetPlaybackRate();
    virtual double GetVolume();
    virtual BOOL IsPlaying();
    virtual BOOL IsSeekable();
    virtual OP_STATUS GetBuffered(OpMediaTimeRanges** ranges);
    virtual OP_STATUS GetVideoSize(UINT32* width, UINT32* height);
    virtual OP_STATUS GetVideoFrameData(void** frame_data, UINT32* stride, OpBitmap::ColorFormat* format);

    // OpMediaSourceListener interface
    virtual void OnDataAvailable();
    virtual void OnDataFinished();
    virtual void OnDataSeekable();
    virtual void OnDataError();

    void SetListener(OpMediaPlayerListener* listener) { m_listener = listener; }
    OpMediaPlayerListener* GetListener() { return m_listener; }

private:
    OP_STATUS InitializeDecoder();
    OP_STATUS DecodeFrame();
    OP_STATUS ProcessPacket();
    void Cleanup();
    
    OpMediaHandle m_handle;
    OpString m_url;
    OpMediaPlayerListener* m_listener;
    OpMediaSource* m_source;
    
    // FFmpeg context
    AVFormatContext* m_format_context;
    AVCodecContext* m_video_codec_context;
    AVCodecContext* m_audio_codec_context;
    int m_video_stream_index;
    int m_audio_stream_index;
    
    // Frame data
    AVFrame* m_frame;
    AVPacket* m_packet;
    
    // State
    BOOL m_playing;
    BOOL m_seeking;
    BOOL m_decoder_initialized;
    double m_position;
    double m_duration;
    double m_playback_rate;
    double m_volume;
    
    // Video properties
    UINT32 m_video_width;
    UINT32 m_video_height;
    void* m_frame_data;
    UINT32 m_frame_stride;
    
    // Buffering
    FFmpegBufferedTimeRanges m_buffered_ranges;
};

#endif // MEDIA_BACKEND_FFMPEG

#endif // FFMPEGMEDIAPLAYER_H