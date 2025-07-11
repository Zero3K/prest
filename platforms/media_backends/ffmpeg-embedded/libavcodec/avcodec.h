/*
 * FFmpeg embedded - avcodec.h
 * Copyright (c) 2024 Opera Software ASA
 * Based on FFmpeg source code
 */

#ifndef AVCODEC_H
#define AVCODEC_H

#include "libavutil/avutil.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Codec IDs */
enum AVCodecID {
    AV_CODEC_ID_NONE,
    
    /* Video codecs */
    AV_CODEC_ID_H264,
    AV_CODEC_ID_VP8,
    AV_CODEC_ID_VP9,
    AV_CODEC_ID_AV1,
    
    /* Audio codecs */
    AV_CODEC_ID_AAC,
    AV_CODEC_ID_MP3,
    AV_CODEC_ID_VORBIS,
    AV_CODEC_ID_OPUS,
};

/* Media types */
enum AVMediaType {
    AVMEDIA_TYPE_UNKNOWN = -1,
    AVMEDIA_TYPE_VIDEO,
    AVMEDIA_TYPE_AUDIO,
    AVMEDIA_TYPE_DATA,
    AVMEDIA_TYPE_SUBTITLE,
    AVMEDIA_TYPE_ATTACHMENT,
};

/* Sample formats */
enum AVSampleFormat {
    AV_SAMPLE_FMT_NONE = -1,
    AV_SAMPLE_FMT_U8,
    AV_SAMPLE_FMT_S16,
    AV_SAMPLE_FMT_S32,
    AV_SAMPLE_FMT_FLT,
    AV_SAMPLE_FMT_DBL,
};

/* Rational number */
typedef struct AVRational {
    int num; ///< Numerator
    int den; ///< Denominator
} AVRational;

/* Codec structure */
typedef struct AVCodec {
    const char *name;
    const char *long_name;
    enum AVMediaType type;
    enum AVCodecID id;
    int capabilities;
    const struct AVProfile *profiles;
} AVCodec;

/* Codec context */
typedef struct AVCodecContext {
    const AVCodec *codec;
    enum AVMediaType codec_type;
    enum AVCodecID codec_id;
    
    /* Video */
    int width, height;
    int bit_rate;
    AVRational time_base;
    int gop_size;
    
    /* Audio */
    int sample_rate;
    int channels;
    uint64_t channel_layout;
    enum AVSampleFormat sample_fmt;
    
    /* Private data */
    void *priv_data;
    void *internal;
} AVCodecContext;

/* Core codec functions */
const AVCodec *avcodec_find_decoder(enum AVCodecID id);
const AVCodec *avcodec_find_decoder_by_name(const char *name);

AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);
void avcodec_free_context(AVCodecContext **avctx);

int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
int avcodec_close(AVCodecContext *avctx);

int avcodec_send_packet(AVCodecContext *avctx, const AVPacket *avpkt);
int avcodec_receive_frame(AVCodecContext *avctx, AVFrame *frame);

/* Legacy function for compatibility */
#if LIBAVCODEC_VERSION_MAJOR < 59
void avcodec_register_all(void);
#endif

#ifdef __cplusplus
}
#endif

#endif /* AVCODEC_H */