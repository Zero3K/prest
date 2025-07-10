/* GStreamer
 * Copyright (C) 2025 Igalia, S.L.
 *               Author: Victor Jaquez <vjaquez@igalia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "gsty4mformat.h"

gboolean
gst_y4m_video_unpadded_info (GstVideoInfo * y4m_info,
    const GstVideoInfo * vinfo)
{
  g_return_val_if_fail (y4m_info && vinfo, FALSE);

  gsize cr_h;
  guint width, height;
  GstVideoFormat format;
  GstVideoInfo out_info;

  format = GST_VIDEO_INFO_FORMAT (vinfo);
  width = GST_VIDEO_INFO_WIDTH (vinfo);
  height = GST_VIDEO_INFO_HEIGHT (vinfo);

  out_info = *vinfo;

  switch (format) {
    case GST_VIDEO_FORMAT_I420:
      out_info.stride[0] = width;
      out_info.stride[1] = GST_ROUND_UP_2 (width) / 2;
      out_info.stride[2] = out_info.stride[1];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      cr_h = GST_ROUND_UP_2 (height) / 2;
      if (GST_VIDEO_INFO_IS_INTERLACED (vinfo))
        cr_h = GST_ROUND_UP_2 (height);
      out_info.offset[2] = out_info.offset[1] + out_info.stride[1] * cr_h;
      out_info.size = out_info.offset[2] + out_info.stride[2] * cr_h;
      break;
    case GST_VIDEO_FORMAT_Y42B:
      out_info.stride[0] = width;
      out_info.stride[1] = GST_ROUND_UP_2 (width) / 2;
      out_info.stride[2] = out_info.stride[1];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      out_info.offset[2] = out_info.offset[1] + out_info.stride[1] * height;
      /* simplification of ROUNDUP4(w)*h + 2*(ROUNDUP8(w)/2)*h */
      out_info.size = out_info.offset[2] + out_info.stride[2] * height;
      break;
    case GST_VIDEO_FORMAT_Y41B:
      out_info.stride[0] = width;
      out_info.stride[1] = GST_ROUND_UP_2 (width) / 4;
      out_info.stride[2] = out_info.stride[1];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      out_info.offset[2] = out_info.offset[1] + out_info.stride[1] * height;
      /* simplification of ROUNDUP4(w)*h + 2*((ROUNDUP16(w)/4)*h */
      out_info.size = (width + (GST_ROUND_UP_2 (width) / 2)) * height;
      break;
    case GST_VIDEO_FORMAT_Y444:
      out_info.stride[0] = width;
      out_info.stride[1] = out_info.stride[0];
      out_info.stride[2] = out_info.stride[0];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      out_info.offset[2] = out_info.offset[1] * 2;
      out_info.size = out_info.stride[0] * height * 3;
      break;
    case GST_VIDEO_FORMAT_GRAY8:
      out_info.stride[0] = width;
      out_info.stride[1] = 0;
      out_info.offset[0] = 0;
      out_info.size = width * height;
      break;
    case GST_VIDEO_FORMAT_GRAY16_LE:
    case GST_VIDEO_FORMAT_GRAY10_LE16:
      out_info.stride[0] = width * 2;
      out_info.offset[0] = 0;
      out_info.size = out_info.stride[0] * height;
      break;
    case GST_VIDEO_FORMAT_A444:
      out_info.stride[0] = width;
      out_info.stride[1] = out_info.stride[0];
      out_info.stride[2] = out_info.stride[0];
      out_info.stride[3] = out_info.stride[0];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      out_info.offset[2] = out_info.offset[1] + out_info.stride[1] * height;
      out_info.offset[3] = out_info.offset[2] + out_info.stride[2] * height;
      out_info.size = out_info.offset[3] + out_info.stride[0] * height;
      break;
    case GST_VIDEO_FORMAT_I420_10LE:
    case GST_VIDEO_FORMAT_I420_12LE:
      out_info.stride[0] = width * 2;
      out_info.stride[1] = width;
      out_info.stride[2] = out_info.stride[1];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      cr_h = GST_ROUND_UP_2 (height) / 2;
      if (GST_VIDEO_INFO_IS_INTERLACED (vinfo))
        cr_h = GST_ROUND_UP_2 (cr_h);
      out_info.offset[2] = out_info.offset[1] + out_info.stride[1] * cr_h;
      out_info.size = out_info.offset[2] + out_info.stride[2] * cr_h;
      break;
    case GST_VIDEO_FORMAT_I422_10LE:
    case GST_VIDEO_FORMAT_I422_12LE:
      out_info.stride[0] = width * 2;
      out_info.stride[1] = width;
      out_info.stride[2] = out_info.stride[1];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      out_info.offset[2] = out_info.offset[1] + out_info.stride[1] * height;
      out_info.size = out_info.offset[2] + out_info.stride[2] * height;
      break;
    case GST_VIDEO_FORMAT_Y444_10LE:
    case GST_VIDEO_FORMAT_Y444_12LE:
      out_info.stride[0] = width * 2;
      out_info.stride[1] = out_info.stride[0];
      out_info.stride[2] = out_info.stride[0];
      out_info.offset[0] = 0;
      out_info.offset[1] = out_info.stride[0] * height;
      out_info.offset[2] = out_info.offset[1] * 2;
      out_info.size = out_info.stride[0] * height * 3;
      break;
    default:
      GST_FIXME ("%s is not supported", gst_video_format_to_string (format));
      return FALSE;
  }

  *y4m_info = out_info;

  return TRUE;
}

/*
 * Parse non-standard (i.e., unknown to mjpegtools) streams that are
 * generated by FFmpeg:
 * https://wiki.multimedia.cx/index.php/YUV4MPEG2
 * https://github.com/FFmpeg/FFmpeg/blob/eee3b7e2/libavformat/yuv4mpegenc.c#L74-L166
 * Will assume little-endian because this is an on-disk serialization format.
 */

/* *INDENT-OFF* */
static const struct {
  const char *chroma_tag;
  const char *yscss_tag;
  GstVideoFormat format;
  GstVideoChromaSite chroma_site;
} ChromaSubsamplingMap[] = {
  { "420jpeg", "420JPEG", GST_VIDEO_FORMAT_I420, GST_VIDEO_CHROMA_SITE_JPEG },
  { "420mpeg2", "420MPEG2", GST_VIDEO_FORMAT_I420, GST_VIDEO_CHROMA_SITE_MPEG2 },
  { "420paldv", "420PALDV", GST_VIDEO_FORMAT_I420, GST_VIDEO_CHROMA_SITE_DV },
  /* { "420p16", "420P16", GST_VIDEO_FORMAT_I420_16LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "422p16", "422P16", GST_VIDEO_FORMAT_I422_16LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "444p16", "444P16", GST_VIDEO_FORMAT_Y444_16LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "420p14", "420P14", GST_VIDEO_FORMAT_I420_14LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "422p14", "422P14", GST_VIDEO_FORMAT_I422_14LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "444p14", "444P14", GST_VIDEO_FORMAT_Y444_14LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  { "420p12", "420P12", GST_VIDEO_FORMAT_I420_12LE, GST_VIDEO_CHROMA_SITE_NONE },
  { "422p12", "422P12", GST_VIDEO_FORMAT_I422_12LE, GST_VIDEO_CHROMA_SITE_NONE },
  { "444p12", "444P12", GST_VIDEO_FORMAT_Y444_12LE, GST_VIDEO_CHROMA_SITE_NONE },
  { "420p10", "420P10", GST_VIDEO_FORMAT_I420_10LE, GST_VIDEO_CHROMA_SITE_NONE },
  { "422p10", "422P10", GST_VIDEO_FORMAT_I422_10LE, GST_VIDEO_CHROMA_SITE_NONE },
  { "444p10", "444P10", GST_VIDEO_FORMAT_Y444_10LE, GST_VIDEO_CHROMA_SITE_NONE },
  /* { "420p9", GST_VIDEO_FORMAT_I420_9LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "422p9", GST_VIDEO_FORMAT_I422_9LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  /* { "444p9", GST_VIDEO_FORMAT_Y444_9LE, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  { "420", NULL, GST_VIDEO_FORMAT_I420, GST_VIDEO_CHROMA_SITE_NONE },
  { "411", "411", GST_VIDEO_FORMAT_Y41B, GST_VIDEO_CHROMA_SITE_NONE },
  { "422", "422", GST_VIDEO_FORMAT_Y42B, GST_VIDEO_CHROMA_SITE_NONE },
  { "444alpha", NULL, GST_VIDEO_FORMAT_A444, GST_VIDEO_CHROMA_SITE_NONE },
  { "444", "444", GST_VIDEO_FORMAT_Y444, GST_VIDEO_CHROMA_SITE_NONE },
  { "mono16", NULL, GST_VIDEO_FORMAT_GRAY16_LE, GST_VIDEO_CHROMA_SITE_UNKNOWN },
  /* { "mono12", AV_PIX_FMT_GRAY12, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  { "mono10", NULL, GST_VIDEO_FORMAT_GRAY10_LE16, GST_VIDEO_CHROMA_SITE_UNKNOWN },
  /* { "mono9", AV_PIX_FMT_GRAY9, GST_VIDEO_CHROMA_SITE_UNKNOWN }, */
  { "mono", NULL, GST_VIDEO_FORMAT_GRAY8, GST_VIDEO_CHROMA_SITE_UNKNOWN },
};
/* *INDENT-ON* */

gboolean
gst_y4m_video_get_format_from_chroma_tag (const char *chroma_tag,
    GstVideoFormat * format, GstVideoChromaSite * chroma_site)
{
  for (guint i = 0; i < G_N_ELEMENTS (ChromaSubsamplingMap); i++) {
    if (g_strcmp0 (ChromaSubsamplingMap[i].chroma_tag, chroma_tag) == 0) {
      if (format)
        *format = ChromaSubsamplingMap[i].format;
      if (chroma_site)
        *chroma_site = ChromaSubsamplingMap[i].chroma_site;
      return TRUE;
    }
  }

  return FALSE;
}

const char *
gst_y4m_video_get_chroma_tag_from_format (GstVideoFormat format,
    GstVideoChromaSite chroma_site)
{
  for (guint i = 0; i < G_N_ELEMENTS (ChromaSubsamplingMap); i++) {
    if (ChromaSubsamplingMap[i].format == format
        && ChromaSubsamplingMap[i].chroma_site == chroma_site)
      return ChromaSubsamplingMap[i].chroma_tag;
  }

  return NULL;
}

gboolean
gst_y4m_video_get_format_from_yscss_tag (const char *yscss_tag,
    GstVideoFormat * format, GstVideoChromaSite * chroma_site)
{
  for (guint i = 0; i < G_N_ELEMENTS (ChromaSubsamplingMap); i++) {
    if (g_strcmp0 (ChromaSubsamplingMap[i].chroma_tag, yscss_tag) == 0) {
      if (format)
        *format = ChromaSubsamplingMap[i].format;
      if (chroma_site)
        *chroma_site = ChromaSubsamplingMap[i].chroma_site;
      return TRUE;
    }
  }

  return FALSE;
}

const char *
gst_y4m_video_get_yscss_tag_from_format (GstVideoFormat format,
    GstVideoChromaSite chroma_site)
{
  for (guint i = 0; i < G_N_ELEMENTS (ChromaSubsamplingMap); i++) {
    if (ChromaSubsamplingMap[i].format == format
        && ChromaSubsamplingMap[i].chroma_site == chroma_site)
      return ChromaSubsamplingMap[i].yscss_tag;
  }

  return NULL;
}

/* *INDENT-OFF* */
static const struct {
  const char *range_tag;
  GstVideoColorRange range;
} ColorRangeMap[] = {
  { "FULL", GST_VIDEO_COLOR_RANGE_0_255 },
  { "LIMITED", GST_VIDEO_COLOR_RANGE_16_235 },
};
/* *INDENT-ON* */

GstVideoColorRange
gst_y4m_video_get_color_range_from_range_tag (const char *range_tag)
{
  for (guint i = 0; i < G_N_ELEMENTS (ColorRangeMap); i++) {
    if (g_strcmp0 (range_tag, ColorRangeMap[i].range_tag) == 0) {
      return ColorRangeMap[i].range;
    }
  }

  return GST_VIDEO_COLOR_RANGE_UNKNOWN;
}

const char *
gst_y4m_video_get_range_tag_from_color_range (GstVideoColorRange range)
{
  for (guint i = 0; i < G_N_ELEMENTS (ColorRangeMap); i++) {
    if (range == ColorRangeMap[i].range) {
      return ColorRangeMap[i].range_tag;
    }
  }

  return NULL;
}
