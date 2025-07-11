/*
 * FFmpeg embedded - libavcodec implementation
 * Copyright (c) 2024 Opera Software ASA
 * Minimal implementation for Opera
 */

#include "avcodec.h"
#include <stdlib.h>
#include <string.h>

/* Static codec definitions */
static const AVCodec h264_decoder = {
    .name = "h264",
    .long_name = "H.264 / AVC / MPEG-4 AVC / MPEG-4 part 10",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_H264,
    .capabilities = 0,
    .profiles = NULL,
};

static const AVCodec vp8_decoder = {
    .name = "vp8",
    .long_name = "VP8",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_VP8,
    .capabilities = 0,
    .profiles = NULL,
};

static const AVCodec vp9_decoder = {
    .name = "vp9",
    .long_name = "VP9",
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_VP9,
    .capabilities = 0,
    .profiles = NULL,
};

static const AVCodec aac_decoder = {
    .name = "aac",
    .long_name = "AAC (Advanced Audio Coding)",
    .type = AVMEDIA_TYPE_AUDIO,
    .id = AV_CODEC_ID_AAC,
    .capabilities = 0,
    .profiles = NULL,
};

static const AVCodec mp3_decoder = {
    .name = "mp3",
    .long_name = "MP3 (MPEG audio layer 3)",
    .type = AVMEDIA_TYPE_AUDIO,
    .id = AV_CODEC_ID_MP3,
    .capabilities = 0,
    .profiles = NULL,
};

/* Codec finder functions */
const AVCodec *avcodec_find_decoder(enum AVCodecID id)
{
    switch (id) {
        case AV_CODEC_ID_H264:
            return &h264_decoder;
        case AV_CODEC_ID_VP8:
            return &vp8_decoder;
        case AV_CODEC_ID_VP9:
            return &vp9_decoder;
        case AV_CODEC_ID_AAC:
            return &aac_decoder;
        case AV_CODEC_ID_MP3:
            return &mp3_decoder;
        default:
            return NULL;
    }
}

const AVCodec *avcodec_find_decoder_by_name(const char *name)
{
    if (!name)
        return NULL;
    
    if (strcmp(name, "h264") == 0)
        return &h264_decoder;
    if (strcmp(name, "vp8") == 0)
        return &vp8_decoder;
    if (strcmp(name, "vp9") == 0)
        return &vp9_decoder;
    if (strcmp(name, "aac") == 0)
        return &aac_decoder;
    if (strcmp(name, "mp3") == 0)
        return &mp3_decoder;
    
    return NULL;
}

/* Context management */
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec)
{
    AVCodecContext *avctx = (AVCodecContext*)calloc(1, sizeof(AVCodecContext));
    if (!avctx)
        return NULL;
    
    if (codec) {
        avctx->codec = codec;
        avctx->codec_type = codec->type;
        avctx->codec_id = codec->id;
    }
    
    /* Set default values */
    avctx->time_base.num = 1;
    avctx->time_base.den = 25;
    avctx->gop_size = 12;
    avctx->sample_rate = 44100;
    avctx->channels = 2;
    avctx->sample_fmt = AV_SAMPLE_FMT_S16;
    
    return avctx;
}

void avcodec_free_context(AVCodecContext **avctx)
{
    if (!avctx || !*avctx)
        return;
    
    if ((*avctx)->priv_data) {
        free((*avctx)->priv_data);
    }
    
    free(*avctx);
    *avctx = NULL;
}

/* Codec operations */
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options)
{
    if (!avctx || !codec)
        return AVERROR_INVALIDDATA;
    
    /* Minimal implementation - just mark as opened */
    avctx->codec = codec;
    avctx->codec_type = codec->type;
    avctx->codec_id = codec->id;
    
    return 0;
}

int avcodec_close(AVCodecContext *avctx)
{
    if (!avctx)
        return 0;
    
    /* Clean up private data */
    if (avctx->priv_data) {
        free(avctx->priv_data);
        avctx->priv_data = NULL;
    }
    
    return 0;
}

int avcodec_send_packet(AVCodecContext *avctx, const AVPacket *avpkt)
{
    if (!avctx)
        return AVERROR_INVALIDDATA;
    
    /* Minimal implementation - always succeed */
    return 0;
}

int avcodec_receive_frame(AVCodecContext *avctx, AVFrame *frame)
{
    if (!avctx || !frame)
        return AVERROR_INVALIDDATA;
    
    /* Minimal implementation - return EOF to indicate no more frames */
    return AVERROR_EOF;
}

/* Legacy functions */
#if LIBAVCODEC_VERSION_MAJOR < 59
void avcodec_register_all(void)
{
    /* No-op in modern FFmpeg, but kept for compatibility */
}
#endif