/*
 * FFmpeg embedded - avutil.h
 * Copyright (c) 2024 Opera Software ASA
 * Based on FFmpeg source code
 */

#ifndef AVUTIL_H
#define AVUTIL_H

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Error codes */
#define AVERROR(e) (-(e))
#define AVERROR_EOF        AVERROR(0x454f46)  /* End of file */
#define AVERROR_INVALIDDATA AVERROR(0x494e56) /* Invalid data */

/* Memory management */
typedef struct AVBuffer AVBuffer;
typedef struct AVBufferRef AVBufferRef;

/* Frame structure */
typedef struct AVFrame {
    uint8_t *data[8];        /* Pointer to picture/channel planes */
    int linesize[8];         /* Size in bytes of each picture line */
    uint8_t **extended_data; /* Pointers to data planes/channels */
    int width, height;       /* Video frame width and height */
    int nb_samples;          /* Number of audio samples */
    int format;              /* Pixel format for video or sample format for audio */
    int key_frame;           /* 1 -> keyframe, 0-> not */
    int64_t pts;             /* Presentation timestamp */
    int64_t pkt_dts;         /* DTS copied from packet */
    AVBufferRef *buf[8];     /* AVBuffer references backing the data */
    uint64_t channel_layout; /* Audio channel layout */
    int channels;            /* Number of audio channels */
    int sample_rate;         /* Audio sample rate */
} AVFrame;

/* Packet structure */
typedef struct AVPacket {
    AVBufferRef *buf;        /* Buffer reference */
    int64_t pts;             /* Presentation timestamp */
    int64_t dts;             /* Decompression timestamp */
    uint8_t *data;           /* Packet data */
    int size;                /* Packet size */
    int stream_index;        /* Stream index */
    int flags;               /* Packet flags */
    int64_t duration;        /* Packet duration */
    int64_t pos;             /* Byte position in stream */
} AVPacket;

/* Dictionary for options */
typedef struct AVDictionaryEntry {
    char *key;
    char *value;
} AVDictionaryEntry;

typedef struct AVDictionary AVDictionary;

/* Core functions */
AVFrame *av_frame_alloc(void);
void av_frame_free(AVFrame **frame);
void av_frame_unref(AVFrame *frame);

AVPacket *av_packet_alloc(void);
void av_packet_free(AVPacket **pkt);
void av_packet_unref(AVPacket *pkt);

void *av_malloc(size_t size);
void *av_mallocz(size_t size);
void av_free(void *ptr);

#ifdef __cplusplus
}
#endif

#endif /* AVUTIL_H */