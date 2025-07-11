/*
 * FFmpeg embedded - libavformat implementation
 * Copyright (c) 2024 Opera Software ASA
 * Minimal implementation for Opera
 */

#include "avformat.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Static format definitions */
static const AVInputFormat mp4_demuxer = {
    .name = "mp4",
    .long_name = "MP4 (MPEG-4 Part 14)",
    .extensions = "mp4,m4a,3gp,3g2,mj2",
    .mime_type = "video/mp4",
    .flags = 0,
};

static const AVInputFormat webm_demuxer = {
    .name = "webm",
    .long_name = "WebM",
    .extensions = "webm",
    .mime_type = "video/webm",
    .flags = 0,
};

static const AVInputFormat ogg_demuxer = {
    .name = "ogg",
    .long_name = "Ogg",
    .extensions = "ogg,oga,ogv,ogx",
    .mime_type = "application/ogg",
    .flags = 0,
};

/* Format context management */
AVFormatContext *avformat_alloc_context(void)
{
    AVFormatContext *s = (AVFormatContext*)calloc(1, sizeof(AVFormatContext));
    if (!s)
        return NULL;
    
    /* Set default values */
    s->max_delay = -1;
    s->probesize = 5000000;
    s->max_analyze_duration = 0;
    
    return s;
}

void avformat_free_context(AVFormatContext *s)
{
    if (!s)
        return;
    
    /* Free streams */
    if (s->streams) {
        for (unsigned int i = 0; i < s->nb_streams; i++) {
            if (s->streams[i]) {
                if (s->streams[i]->codec)
                    avcodec_free_context(&s->streams[i]->codec);
                free(s->streams[i]);
            }
        }
        free(s->streams);
    }
    
    /* Free private data */
    if (s->priv_data) {
        free(s->priv_data);
    }
    
    free(s);
}

/* Input operations */
int avformat_open_input(AVFormatContext **ps, const char *url, AVInputFormat *fmt, AVDictionary **options)
{
    if (!ps || !url)
        return AVERROR_INVALIDDATA;
    
    AVFormatContext *s = *ps;
    if (!s) {
        s = avformat_alloc_context();
        if (!s)
            return AVERROR_INVALIDDATA;
        *ps = s;
    }
    
    /* Copy filename */
    strncpy(s->filename, url, sizeof(s->filename) - 1);
    s->filename[sizeof(s->filename) - 1] = '\0';
    
    /* Determine format from extension or MIME type */
    if (!fmt) {
        const char *ext = strrchr(url, '.');
        if (ext) {
            ext++; /* Skip the dot */
            if (strcmp(ext, "mp4") == 0 || strcmp(ext, "m4v") == 0 || strcmp(ext, "m4a") == 0) {
                s->iformat = &mp4_demuxer;
            } else if (strcmp(ext, "webm") == 0) {
                s->iformat = &webm_demuxer;
            } else if (strcmp(ext, "ogg") == 0 || strcmp(ext, "ogv") == 0 || strcmp(ext, "oga") == 0) {
                s->iformat = &ogg_demuxer;
            }
        }
    } else {
        s->iformat = fmt;
    }
    
    if (!s->iformat) {
        /* Default to MP4 if unknown */
        s->iformat = &mp4_demuxer;
    }
    
    return 0;
}

void avformat_close_input(AVFormatContext **s)
{
    if (!s || !*s)
        return;
    
    avformat_free_context(*s);
    *s = NULL;
}

int avformat_find_stream_info(AVFormatContext *ic, AVDictionary **options)
{
    if (!ic)
        return AVERROR_INVALIDDATA;
    
    /* Minimal implementation - create dummy streams */
    ic->nb_streams = 2; /* Video + Audio */
    ic->streams = (AVStream**)calloc(ic->nb_streams, sizeof(AVStream*));
    if (!ic->streams)
        return AVERROR_INVALIDDATA;
    
    /* Create video stream */
    ic->streams[0] = (AVStream*)calloc(1, sizeof(AVStream));
    if (ic->streams[0]) {
        ic->streams[0]->index = 0;
        ic->streams[0]->id = 0;
        ic->streams[0]->codec = avcodec_alloc_context3(NULL);
        if (ic->streams[0]->codec) {
            ic->streams[0]->codec->codec_type = AVMEDIA_TYPE_VIDEO;
            ic->streams[0]->codec->codec_id = AV_CODEC_ID_H264;
            ic->streams[0]->codec->width = 1920;
            ic->streams[0]->codec->height = 1080;
        }
        ic->streams[0]->time_base.num = 1;
        ic->streams[0]->time_base.den = 25;
    }
    
    /* Create audio stream */
    ic->streams[1] = (AVStream*)calloc(1, sizeof(AVStream));
    if (ic->streams[1]) {
        ic->streams[1]->index = 1;
        ic->streams[1]->id = 1;
        ic->streams[1]->codec = avcodec_alloc_context3(NULL);
        if (ic->streams[1]->codec) {
            ic->streams[1]->codec->codec_type = AVMEDIA_TYPE_AUDIO;
            ic->streams[1]->codec->codec_id = AV_CODEC_ID_AAC;
            ic->streams[1]->codec->sample_rate = 44100;
            ic->streams[1]->codec->channels = 2;
        }
        ic->streams[1]->time_base.num = 1;
        ic->streams[1]->time_base.den = 44100;
    }
    
    /* Set format duration and bitrate */
    ic->duration = 10000000; /* 10 seconds in microseconds */
    ic->bit_rate = 1000000;   /* 1 Mbps */
    
    return 0;
}

int av_read_frame(AVFormatContext *s, AVPacket *pkt)
{
    if (!s || !pkt)
        return AVERROR_INVALIDDATA;
    
    /* Minimal implementation - return EOF */
    return AVERROR_EOF;
}

int av_seek_frame(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
{
    if (!s)
        return AVERROR_INVALIDDATA;
    
    /* Minimal implementation - always succeed */
    return 0;
}

/* Network functions */
void avformat_network_init(void)
{
    /* Initialize network subsystem (no-op in minimal implementation) */
}

void avformat_network_deinit(void)
{
    /* Cleanup network subsystem (no-op in minimal implementation) */
}

/* Legacy functions */
#if LIBAVFORMAT_VERSION_MAJOR < 59
void av_register_all(void)
{
    /* No-op in modern FFmpeg, but kept for compatibility */
}
#endif