/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4; c-file-style: "stroustrup" -*-
 *
 * Copyright (C) 2024 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.
 * It may not be distributed under any circumstances.
 */

#include "core/pch_system_includes.h"

#ifdef MEDIA_BACKEND_FFMPEG

#include "platforms/media_backends/ffmpeg/ffmpegmediaplayer.h"
#include "platforms/media_backends/ffmpeg/ffmpeglibs.h"
#include "modules/windowcommander/OpWindowCommander.h"

FFmpegMediaPlayer::FFmpegMediaPlayer(OpMediaHandle handle)
    : m_handle(handle)
    , m_listener(NULL)
    , m_source(NULL)
    , m_format_context(NULL)
    , m_video_codec_context(NULL)
    , m_audio_codec_context(NULL)
    , m_video_stream_index(-1)
    , m_audio_stream_index(-1)
    , m_frame(NULL)
    , m_packet(NULL)
    , m_playing(FALSE)
    , m_seeking(FALSE)
    , m_decoder_initialized(FALSE)
    , m_position(0.0)
    , m_duration(0.0)
    , m_playback_rate(1.0)
    , m_volume(1.0)
    , m_video_width(0)
    , m_video_height(0)
    , m_frame_data(NULL)
    , m_frame_stride(0)
{
    // Get media source from windowcommander
    if (m_handle)
    {
        // This would normally get the OpMediaSource from the handle
        // Implementation depends on Opera's internal API
    }
}

FFmpegMediaPlayer::FFmpegMediaPlayer(OpMediaHandle handle, const uni_char* url)
    : m_handle(handle)
    , m_listener(NULL)
    , m_source(NULL)
    , m_format_context(NULL)
    , m_video_codec_context(NULL)
    , m_audio_codec_context(NULL)
    , m_video_stream_index(-1)
    , m_audio_stream_index(-1)
    , m_frame(NULL)
    , m_packet(NULL)
    , m_playing(FALSE)
    , m_seeking(FALSE)
    , m_decoder_initialized(FALSE)
    , m_position(0.0)
    , m_duration(0.0)
    , m_playback_rate(1.0)
    , m_volume(1.0)
    , m_video_width(0)
    , m_video_height(0)
    , m_frame_data(NULL)
    , m_frame_stride(0)
{
    m_url.Set(url);
}

FFmpegMediaPlayer::~FFmpegMediaPlayer()
{
    Cleanup();
}

void FFmpegMediaPlayer::Cleanup()
{
    if (m_frame)
    {
        FFmpegLibs::frame_free(&m_frame);
        m_frame = NULL;
    }
    
    if (m_packet)
    {
        FFmpegLibs::packet_free(&m_packet);
        m_packet = NULL;
    }
    
    if (m_video_codec_context)
    {
        FFmpegLibs::codec_close(m_video_codec_context);
        m_video_codec_context = NULL;
    }
    
    if (m_audio_codec_context)
    {
        FFmpegLibs::codec_close(m_audio_codec_context);
        m_audio_codec_context = NULL;
    }
    
    if (m_format_context)
    {
        FFmpegLibs::close_input(&m_format_context);
        m_format_context = NULL;
    }
    
    m_decoder_initialized = FALSE;
}

OP_STATUS FFmpegMediaPlayer::InitializeDecoder()
{
    if (m_decoder_initialized)
        return OpStatus::OK;

    if (!FFmpegLibs::IsLoaded())
        return OpStatus::ERR_NOT_SUPPORTED;

    // For URL-based playback
    if (!m_url.IsEmpty())
    {
        OpString8 url8;
        RETURN_IF_ERROR(url8.Set(m_url.CStr()));
        
        int result = FFmpegLibs::open_input(&m_format_context, url8.CStr(), NULL, NULL);
        if (result < 0)
            return OpStatus::ERR;
    }
    else
    {
        // For stream-based playback, would need custom I/O context
        // This is more complex and requires implementing FFmpeg's AVIOContext
        return OpStatus::ERR_NOT_SUPPORTED;
    }

    // Find stream information
    if (FFmpegLibs::find_stream_info(m_format_context, NULL) < 0)
    {
        Cleanup();
        return OpStatus::ERR;
    }

    // Find video and audio streams
    for (unsigned int i = 0; i < m_format_context->nb_streams; i++)
    {
        AVStream* stream = m_format_context->streams[i];
        if (stream->codecpar->codec_type == 0 && m_video_stream_index == -1) // AVMEDIA_TYPE_VIDEO
        {
            m_video_stream_index = i;
        }
        else if (stream->codecpar->codec_type == 1 && m_audio_stream_index == -1) // AVMEDIA_TYPE_AUDIO
        {
            m_audio_stream_index = i;
        }
    }

    // Initialize video decoder
    if (m_video_stream_index >= 0)
    {
        AVStream* video_stream = m_format_context->streams[m_video_stream_index];
        struct AVCodec* video_codec = FFmpegLibs::find_decoder(video_stream->codecpar->codec_id);
        
        if (video_codec)
        {
            m_video_codec_context = video_stream->codec; // Simplified - normally would allocate new context
            if (FFmpegLibs::codec_open2(m_video_codec_context, video_codec, NULL) >= 0)
            {
                m_video_width = m_video_codec_context->width;
                m_video_height = m_video_codec_context->height;
            }
        }
    }

    // Initialize audio decoder (similar to video)
    if (m_audio_stream_index >= 0)
    {
        AVStream* audio_stream = m_format_context->streams[m_audio_stream_index];
        struct AVCodec* audio_codec = FFmpegLibs::find_decoder(audio_stream->codecpar->codec_id);
        
        if (audio_codec)
        {
            m_audio_codec_context = audio_stream->codec; // Simplified
            FFmpegLibs::codec_open2(m_audio_codec_context, audio_codec, NULL);
        }
    }

    // Allocate frame and packet
    m_frame = FFmpegLibs::frame_alloc();
    m_packet = FFmpegLibs::packet_alloc();

    if (!m_frame || !m_packet)
    {
        Cleanup();
        return OpStatus::ERR_NO_MEMORY;
    }

    // Get duration
    if (m_format_context->duration != -9223372036854775808LL) // AV_NOPTS_VALUE
    {
        m_duration = (double)m_format_context->duration / 1000000.0; // Convert from microseconds
    }

    m_decoder_initialized = TRUE;

    // Notify duration change
    if (m_listener)
        m_listener->OnDurationChange(this);

    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::Play()
{
    RETURN_IF_ERROR(InitializeDecoder());
    
    m_playing = TRUE;
    
    // Start decoding loop (this would normally be done in a separate thread)
    return DecodeFrame();
}

OP_STATUS FFmpegMediaPlayer::Pause()
{
    m_playing = FALSE;
    
    // If we pause without initializing, decode first frame
    if (!m_decoder_initialized)
    {
        RETURN_IF_ERROR(InitializeDecoder());
        return DecodeFrame();
    }
    
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::DecodeFrame()
{
    if (!m_decoder_initialized)
        return OpStatus::ERR;

    // Read packet from format context
    int result = FFmpegLibs::read_frame(m_format_context, m_packet);
    if (result < 0)
    {
        // End of stream or error
        if (m_listener)
            m_listener->OnPlaybackEnd(this);
        return OpStatus::OK;
    }

    // Process the packet
    if (m_packet->stream_index == m_video_stream_index && m_video_codec_context)
    {
        // Send packet to video decoder
        result = FFmpegLibs::send_packet(m_video_codec_context, m_packet);
        if (result >= 0)
        {
            // Receive decoded frame
            result = FFmpegLibs::receive_frame(m_video_codec_context, m_frame);
            if (result >= 0)
            {
                // Frame decoded successfully
                m_frame_data = m_frame->data[0];
                m_frame_stride = m_frame->linesize[0];
                
                if (m_listener)
                    m_listener->OnFrameUpdate(this);
            }
        }
    }
    else if (m_packet->stream_index == m_audio_stream_index && m_audio_codec_context)
    {
        // Process audio packet (similar to video)
        FFmpegLibs::send_packet(m_audio_codec_context, m_packet);
        FFmpegLibs::receive_frame(m_audio_codec_context, m_frame);
    }

    FFmpegLibs::packet_unref(m_packet);
    return OpStatus::OK;
}

// Implement remaining OpMediaPlayer interface methods
OP_STATUS FFmpegMediaPlayer::SetPosition(double position)
{
    m_position = position;
    m_seeking = TRUE;
    
    // Seeking would require av_seek_frame implementation
    
    m_seeking = FALSE;
    if (m_listener)
        m_listener->OnSeekComplete(this);
    
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::SetPlaybackRate(double rate)
{
    m_playback_rate = rate;
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::SetVolume(double volume)
{
    m_volume = volume;
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::SetPreload(OpMediaPlayer::Preload preload)
{
    return OpStatus::OK;
}

double FFmpegMediaPlayer::GetPosition()
{
    return m_position;
}

double FFmpegMediaPlayer::GetDuration()
{
    return m_duration;
}

double FFmpegMediaPlayer::GetPlaybackRate()
{
    return m_playback_rate;
}

double FFmpegMediaPlayer::GetVolume()
{
    return m_volume;
}

BOOL FFmpegMediaPlayer::IsPlaying()
{
    return m_playing;
}

BOOL FFmpegMediaPlayer::IsSeekable()
{
    return m_decoder_initialized && m_duration > 0.0;
}

OP_STATUS FFmpegMediaPlayer::GetBuffered(OpMediaTimeRanges** ranges)
{
    *ranges = &m_buffered_ranges;
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::GetVideoSize(UINT32* width, UINT32* height)
{
    *width = m_video_width;
    *height = m_video_height;
    return OpStatus::OK;
}

OP_STATUS FFmpegMediaPlayer::GetVideoFrameData(void** frame_data, UINT32* stride, OpBitmap::ColorFormat* format)
{
    *frame_data = m_frame_data;
    *stride = m_frame_stride;
    *format = OpBitmap::RGBA32; // Simplified - would need proper format conversion
    return OpStatus::OK;
}

// OpMediaSourceListener implementation
void FFmpegMediaPlayer::OnDataAvailable()
{
    if (m_playing)
        DecodeFrame();
}

void FFmpegMediaPlayer::OnDataFinished()
{
    if (m_listener)
        m_listener->OnPlaybackEnd(this);
}

void FFmpegMediaPlayer::OnDataSeekable()
{
    // Update seekable status
}

void FFmpegMediaPlayer::OnDataError()
{
    if (m_listener)
        m_listener->OnDecodeError(this);
}

#endif // MEDIA_BACKEND_FFMPEG