/* -*- mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*- */

#ifndef DOM_OPATOM_H
#define DOM_OPATOM_H

#include "modules/dom/src/domdefines.h"

enum OpAtom
{
	OP_ATOM_UNASSIGNED = -1,

	OP_ATOM_AppleDashboardRegion,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_MIMEType,
	OP_ATOM_Multimedia,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_OBorderImage,
#ifdef CSS_MINI_EXTENSIONS
	OP_ATOM_OFocusOpacity,
#endif // CSS_MINI_EXTENSIONS
	OP_ATOM_OLink,
	OP_ATOM_OLinkSource,
#ifdef CSS_MINI_EXTENSIONS
	OP_ATOM_OMiniFold,
#endif // CSS_MINI_EXTENSIONS
	OP_ATOM_OObjectFit,
	OP_ATOM_OObjectPosition,
	OP_ATOM_OTabSize,
	OP_ATOM_OTableBaseline,
#ifdef CSS_TRANSFORMS
	OP_ATOM_OTransform,
	OP_ATOM_OTransformOrigin,
#endif // CSS_TRANSFORMS
#ifdef CSS_TRANSITIONS
	OP_ATOM_OTransition,
	OP_ATOM_OTransitionDelay,
	OP_ATOM_OTransitionDuration,
	OP_ATOM_OTransitionProperty,
	OP_ATOM_OTransitionTimingFunction,
#endif // CSS_TRANSITIONS
	OP_ATOM_URL,
	OP_ATOM_WapAccesskey,
	OP_ATOM_WapInputFormat,
	OP_ATOM_WapInputRequired,
	OP_ATOM_WapMarqueeDir,
	OP_ATOM_WapMarqueeLoop,
	OP_ATOM_WapMarqueeSpeed,
	OP_ATOM_WapMarqueeStyle,
	OP_ATOM_WebkitBackgroundSize,
	OP_ATOM_WebkitBorderBottomLeftRadius,
	OP_ATOM_WebkitBorderBottomRightRadius,
	OP_ATOM_WebkitBorderRadius,
	OP_ATOM_WebkitBorderTopLeftRadius,
	OP_ATOM_WebkitBorderTopRightRadius,
	OP_ATOM_WebkitBoxAlign,
	OP_ATOM_WebkitBoxDirection,
	OP_ATOM_WebkitBoxFlex,
	OP_ATOM_WebkitBoxLines,
	OP_ATOM_WebkitBoxOrdinalGroup,
	OP_ATOM_WebkitBoxOrient,
	OP_ATOM_WebkitBoxPack,
	OP_ATOM_WebkitBoxShadow,
#ifdef CSS_TRANSFORMS
	OP_ATOM_WebkitTransform,
	OP_ATOM_WebkitTransformOrigin,
#endif // CSS_TRANSFORMS
#ifdef CSS_TRANSITIONS
	OP_ATOM_WebkitTransition,
	OP_ATOM_WebkitTransitionDelay,
	OP_ATOM_WebkitTransitionDuration,
	OP_ATOM_WebkitTransitionProperty,
	OP_ATOM_WebkitTransitionTimingFunction,
#endif // CSS_TRANSITIONS
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_a,
#endif // SVG_DOM || CSS_TRANSFORMS
	OP_ATOM_aLink,
	OP_ATOM_abbr,
	OP_ATOM_accept,
	OP_ATOM_acceptCharset,
	OP_ATOM_accessKey,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_accountId,
	OP_ATOM_accountName,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_accuracy,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_action,
#if defined WEBSERVER_SUPPORT || defined GADGET_SUPPORT
	OP_ATOM_active,
#endif // WEBSERVER_SUPPORT || GADGET_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_activeCues,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_activeElement,
	OP_ATOM_addEventListener,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_address,
	OP_ATOM_addressBookItemId,
	OP_ATOM_alarmDate,
	OP_ATOM_alarmed,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_align,
	OP_ATOM_alignContent,
	OP_ATOM_alignItems,
	OP_ATOM_alignSelf,
#ifdef SVG_DOM
	OP_ATOM_alignmentBaseline,
#endif // SVG_DOM
	OP_ATOM_alinkColor,
	OP_ATOM_all,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_allFeeds,
#endif // WEBFEEDS_BACKEND_SUPPORT
#if defined EXTENSION_SUPPORT && defined URL_FILTER
	OP_ATOM_allow,
#endif // EXTENSION_SUPPORT && URL_FILTER
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_alpha,
#endif // CANVAS3D_SUPPORT
	OP_ATOM_alt,
	OP_ATOM_altKey,
#ifdef UPNP_SUPPORT
	OP_ATOM_alternateURL,
#endif // UPNP_SUPPORT
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_altitude,
	OP_ATOM_altitudeAccuracy,
#endif // DOM_GEOLOCATION_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_amplitude,
#endif // SVG_DOM
#ifdef DOM_SELECTION_SUPPORT
	OP_ATOM_anchorNode,
	OP_ATOM_anchorOffset,
#endif // DOM_SELECTION_SUPPORT
	OP_ATOM_anchors,
#ifdef SVG_DOM
	OP_ATOM_angle,
	OP_ATOM_animVal,
	OP_ATOM_animatedInstanceRoot,
	OP_ATOM_animatedNormalizedPathSegList,
	OP_ATOM_animatedPathSegList,
	OP_ATOM_animatedPoints,
#endif // SVG_DOM
#ifdef CSS_ANIMATIONS
	OP_ATOM_animation,
	OP_ATOM_animationDelay,
	OP_ATOM_animationDirection,
	OP_ATOM_animationDuration,
	OP_ATOM_animationFillMode,
	OP_ATOM_animationIterationCount,
	OP_ATOM_animationName,
	OP_ATOM_animationPlayState,
	OP_ATOM_animationTimingFunction,
#endif // CSS_ANIMATIONS
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_antialias,
#endif // CANVAS3D_SUPPORT
	OP_ATOM_appCodeName,
	OP_ATOM_appMinorVersion,
	OP_ATOM_appName,
	OP_ATOM_appVersion,
	OP_ATOM_applets,
#if defined APPLICATION_CACHE_SUPPORT || defined DOM_WEBWORKERS_SUPPORT
	OP_ATOM_applicationCache,
#endif // APPLICATION_CACHE_SUPPORT || DOM_WEBWORKERS_SUPPORT
	OP_ATOM_archive,
	OP_ATOM_areas,
	OP_ATOM_async,
#ifdef INTEGRATED_DEVTOOLS_SUPPORT
	OP_ATOM_attached,
#endif // INTEGRATED_DEVTOOLS_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_attachments,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM2_MUTATION_EVENTS
	OP_ATOM_attrChange,
	OP_ATOM_attrName,
#endif // DOM2_MUTATION_EVENTS
	OP_ATOM_attributes,
#if defined SVG_DOM
	OP_ATOM_audioLevel,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_audioPath,
#endif // DOM_JIL_API_SUPPORT
#ifdef OPERA_AUTH_SUPPORT
	OP_ATOM_authState,
	OP_ATOM_authStatus,
#endif // OPERA_AUTH_SUPPORT
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_authentication,
#endif // WEBSERVER_SUPPORT
#if defined WEBFEEDS_BACKEND_SUPPORT || defined WEBSERVER_SUPPORT || defined GADGET_SUPPORT
	OP_ATOM_author,
#endif // WEBFEEDS_BACKEND_SUPPORT || WEBSERVER_SUPPORT || GADGET_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_authorEmail,
	OP_ATOM_authorHref,
#endif // GADGET_SUPPORT
	OP_ATOM_autocomplete,
	OP_ATOM_autofocus,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_autoplay,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_availHeight,
	OP_ATOM_availWidth,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_availableMemory,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_axis,
	OP_ATOM_azimuth,
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_b,
#endif // SVG_DOM || CSS_TRANSFORMS
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_backLightOn,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_background,
	OP_ATOM_backgroundAttachment,
	OP_ATOM_backgroundClip,
	OP_ATOM_backgroundColor,
	OP_ATOM_backgroundImage,
	OP_ATOM_backgroundOrigin,
	OP_ATOM_backgroundPosition,
	OP_ATOM_backgroundRepeat,
	OP_ATOM_backgroundSize,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_badge,
#endif // EXTENSION_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_baseFrequencyX,
	OP_ATOM_baseFrequencyY,
#endif // SVG_DOM
	OP_ATOM_baseURI,
#ifdef SVG_DOM
	OP_ATOM_baseVal,
	OP_ATOM_baselineShift,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_bccAddress,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_behavior,
	OP_ATOM_bgColor,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_bgProcess,
#endif // EXTENSION_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_bias,
#endif // SVG_DOM
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_binaryType,
#endif // WEBSOCKETS_SUPPORT
#if defined EXTENSION_SUPPORT && defined URL_FILTER
	OP_ATOM_block,
#endif // EXTENSION_SUPPORT && URL_FILTER
#ifdef SVG_DOM
	OP_ATOM_blue,
#endif // SVG_DOM
	OP_ATOM_blur,
	OP_ATOM_body,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_bodyItems,
#endif // WEBSERVER_SUPPORT
#ifdef DOM3_XPATH
	OP_ATOM_booleanValue,
#endif // DOM3_XPATH
	OP_ATOM_border,
	OP_ATOM_borderBottom,
	OP_ATOM_borderBottomColor,
	OP_ATOM_borderBottomLeftRadius,
	OP_ATOM_borderBottomRightRadius,
	OP_ATOM_borderBottomStyle,
	OP_ATOM_borderBottomWidth,
	OP_ATOM_borderCollapse,
	OP_ATOM_borderColor,
	OP_ATOM_borderLeft,
	OP_ATOM_borderLeftColor,
	OP_ATOM_borderLeftStyle,
	OP_ATOM_borderLeftWidth,
	OP_ATOM_borderRadius,
	OP_ATOM_borderRight,
	OP_ATOM_borderRightColor,
	OP_ATOM_borderRightStyle,
	OP_ATOM_borderRightWidth,
	OP_ATOM_borderSpacing,
	OP_ATOM_borderStyle,
	OP_ATOM_borderTop,
	OP_ATOM_borderTopColor,
	OP_ATOM_borderTopLeftRadius,
	OP_ATOM_borderTopRightRadius,
	OP_ATOM_borderTopStyle,
	OP_ATOM_borderTopWidth,
	OP_ATOM_borderWidth,
	OP_ATOM_bottom,
	OP_ATOM_boxDecorationBreak,
	OP_ATOM_boxShadow,
	OP_ATOM_boxSizing,
	OP_ATOM_breakAfter,
	OP_ATOM_breakBefore,
	OP_ATOM_breakInside,
	OP_ATOM_browserLanguage,
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_browserWindow,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_bubbles,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_buffered,
#endif // MEDIA_HTML_SUPPORT
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_bufferedAmount,
#endif // WEBSOCKETS_SUPPORT
	OP_ATOM_bufferedRendering,
	OP_ATOM_busy,
	OP_ATOM_button,
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_bytesAvailable,
#endif // DOM_GADGET_FILE_API_SUPPORT
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_c,
#endif // SVG_DOM || CSS_TRANSFORMS
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_calendarItemId,
	OP_ATOM_callRecordAddress,
	OP_ATOM_callRecordId,
	OP_ATOM_callRecordName,
	OP_ATOM_callRecordType,
	OP_ATOM_callbackNumber,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_cancelBubble,
	OP_ATOM_cancelable,
#ifdef CANVAS_SUPPORT
	OP_ATOM_canvas,
#endif // CANVAS_SUPPORT
	OP_ATOM_caption,
	OP_ATOM_captionSide,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_ccAddress,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_cellIndex,
	OP_ATOM_cellPadding,
	OP_ATOM_cellSpacing,
	OP_ATOM_cells,
	OP_ATOM_ch,
	OP_ATOM_chOff,
	OP_ATOM_challenge,
#ifdef TOUCH_EVENTS_SUPPORT
	OP_ATOM_changedTouches,
#endif // TOUCH_EVENTS_SUPPORT
	OP_ATOM_char,
	OP_ATOM_charCode,
	OP_ATOM_characterSet,
#ifdef CSS_CHARACTER_TYPE_SUPPORT
	OP_ATOM_characterType,
#endif // CSS_CHARACTER_TYPE_SUPPORT
	OP_ATOM_charset,
	OP_ATOM_checked,
	OP_ATOM_childElementCount,
	OP_ATOM_childNodes,
	OP_ATOM_children,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_chunked,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_cite,
	OP_ATOM_class,
	OP_ATOM_classId,
	OP_ATOM_classList,
	OP_ATOM_className,
	OP_ATOM_clear,
	OP_ATOM_clientHeight,
	OP_ATOM_clientLeft,
	OP_ATOM_clientTop,
	OP_ATOM_clientWidth,
	OP_ATOM_clientX,
	OP_ATOM_clientY,
	OP_ATOM_clip,
#ifdef SVG_DOM
	OP_ATOM_clipPath,
	OP_ATOM_clipPathUnits,
	OP_ATOM_clipRule,
#endif // SVG_DOM
#ifdef USE_OP_CLIPBOARD
	OP_ATOM_clipboardData,
#endif // USE_OP_CLIPBOARD
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_clipboardString,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_close,
	OP_ATOM_closed,
	OP_ATOM_code,
	OP_ATOM_codeBase,
	OP_ATOM_codeType,
	OP_ATOM_colSpan,
#ifdef DOM2_RANGE
	OP_ATOM_collapsed,
#endif // DOM2_RANGE
	OP_ATOM_color,
	OP_ATOM_colorDepth,
#ifdef SVG_DOM
	OP_ATOM_colorInterpolation,
	OP_ATOM_colorInterpolationFilters,
	OP_ATOM_colorProfile,
	OP_ATOM_colorRendering,
#endif // SVG_DOM
	OP_ATOM_cols,
	OP_ATOM_columnCount,
	OP_ATOM_columnFill,
	OP_ATOM_columnGap,
	OP_ATOM_columnRule,
	OP_ATOM_columnRuleColor,
	OP_ATOM_columnRuleStyle,
	OP_ATOM_columnRuleWidth,
	OP_ATOM_columnSpan,
	OP_ATOM_columnWidth,
	OP_ATOM_columns,
#ifdef DOM2_RANGE
	OP_ATOM_commonAncestorContainer,
#endif // DOM2_RANGE
	OP_ATOM_compact,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_company,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_compatMode,
	OP_ATOM_complete,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_connection,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_content,
	OP_ATOM_contentDocument,
	OP_ATOM_contentEditable,
#ifdef SVG_DOM
	OP_ATOM_contentScriptType,
	OP_ATOM_contentStyleType,
#endif // SVG_DOM
	OP_ATOM_contentType,
	OP_ATOM_contentWindow,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_contexts,
#endif // EXTENSION_SUPPORT
	OP_ATOM_control,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_controls,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_cookie,
	OP_ATOM_cookieEnabled,
	OP_ATOM_coords,
#ifdef SVG_DOM
	OP_ATOM_correspondingElement,
	OP_ATOM_correspondingUseElement,
#endif // SVG_DOM
#ifdef GADGET_SUPPORT
	OP_ATOM_count,
#endif // GADGET_SUPPORT
	OP_ATOM_counterIncrement,
	OP_ATOM_counterReset,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_createDate,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_createDocumentFragment,
	OP_ATOM_createElement,
	OP_ATOM_createEvent,
	OP_ATOM_createTextNode,
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_created,
#endif // DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_crossOrigin,
	OP_ATOM_cssFloat,
	OP_ATOM_cssRules,
	OP_ATOM_cssText,
	OP_ATOM_ctrlKey,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_cues,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_current,
#ifdef SVG_SUPPORT
	OP_ATOM_currentFps,
#endif // SVG_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_currentIcon,
#endif // GADGET_SUPPORT
#ifdef DOM2_TRAVERSAL
	OP_ATOM_currentNode,
#endif // DOM2_TRAVERSAL
#ifdef PAGED_MEDIA_SUPPORT
	OP_ATOM_currentPage,
#endif // PAGED_MEDIA_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_currentRotate,
	OP_ATOM_currentScale,
#endif // SVG_DOM
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_currentServiceName,
	OP_ATOM_currentServicePath,
#endif // WEBSERVER_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_currentSrc,
#endif // MEDIA_HTML_SUPPORT
#ifdef CURRENT_STYLE_SUPPORT
	OP_ATOM_currentStyle,
#endif // CURRENT_STYLE_SUPPORT
	OP_ATOM_currentTarget,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_currentTime,
#endif // MEDIA_HTML_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_currentTranslate,
#endif // SVG_DOM
	OP_ATOM_cursor,
	OP_ATOM_customError,
#ifdef SVG_DOM
	OP_ATOM_cx,
	OP_ATOM_cy,
#endif // SVG_DOM
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_d,
#endif // SVG_DOM || CSS_TRANSFORMS
	OP_ATOM_data,
#ifdef DRAG_SUPPORT
	OP_ATOM_dataTransfer,
#endif // DRAG_SUPPORT
	OP_ATOM_dataset,
	OP_ATOM_dateTime,
	OP_ATOM_declare,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_default,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_defaultChecked,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_defaultMuted,
	OP_ATOM_defaultPlaybackRate,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_defaultPrevented,
	OP_ATOM_defaultSelected,
	OP_ATOM_defaultStatus,
	OP_ATOM_defaultValue,
	OP_ATOM_defaultView,
	OP_ATOM_defer,
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_depth,
#endif // CANVAS3D_SUPPORT
	OP_ATOM_description,
	OP_ATOM_designMode,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_destinationAddress,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_detail,
#if defined UPNP_SUPPORT || (defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL)
	OP_ATOM_device,
#endif // UPNP_SUPPORT || GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_deviceName,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_devicePixelRatio,
#ifdef ABOUT_HTML_DIALOGS
	OP_ATOM_dialogArguments,
#endif // ABOUT_HTML_DIALOGS
#ifdef SVG_DOM
	OP_ATOM_diffuseConstant,
#endif // SVG_DOM
	OP_ATOM_dir,
	OP_ATOM_dirName,
	OP_ATOM_direction,
	OP_ATOM_disabled,
	OP_ATOM_dispatchEvent,
	OP_ATOM_display,
#ifdef SVG_DOM
	OP_ATOM_displayAlign,
	OP_ATOM_divisor,
#endif // SVG_DOM
	OP_ATOM_doNotTrack,
	OP_ATOM_doctype,
	OP_ATOM_document,
	OP_ATOM_documentElement,
	OP_ATOM_documentURI,
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_documentURL,
	OP_ATOM_documentURLPatterns,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_domConfig,
	OP_ATOM_domain,
#ifdef SVG_DOM
	OP_ATOM_dominantBaseline,
#endif // SVG_DOM
#ifdef DRAG_SUPPORT
	OP_ATOM_draggable,
#endif // DRAG_SUPPORT
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_drawingBufferHeight,
	OP_ATOM_drawingBufferWidth,
#endif // CANVAS3D_SUPPORT
#ifdef DRAG_SUPPORT
	OP_ATOM_dropEffect,
	OP_ATOM_dropzone,
#endif // DRAG_SUPPORT
#ifdef DOM_DSE_DEBUGGING
	OP_ATOM_dseEnabled,
	OP_ATOM_dseRecovered,
#endif // DOM_DSE_DEBUGGING
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_duration,
#endif // MEDIA_HTML_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_durationSeconds,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_dx,
	OP_ATOM_dy,
#endif // SVG_DOM
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_e,
#endif // SVG_DOM || CSS_TRANSFORMS
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_eMail,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_edgeMode,
#endif // SVG_DOM
#ifdef DRAG_SUPPORT
	OP_ATOM_effectAllowed,
#endif // DRAG_SUPPORT
	OP_ATOM_elapsedTime,
	OP_ATOM_element,
	OP_ATOM_elements,
	OP_ATOM_elevation,
	OP_ATOM_embeds,
	OP_ATOM_emptyCells,
#ifdef SVG_DOM
	OP_ATOM_enableBackground,
#endif // SVG_DOM
	OP_ATOM_enabledPlugin,
	OP_ATOM_encoding,
	OP_ATOM_enctype,
#ifdef DOM2_RANGE
	OP_ATOM_endContainer,
	OP_ATOM_endOffset,
#endif // DOM2_RANGE
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_endTime,
	OP_ATOM_ended,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_entities,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_entries,
#endif // WEBFEEDS_BACKEND_SUPPORT
#if defined WEBSERVER_SUPPORT || defined DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_eof,
#endif // WEBSERVER_SUPPORT || DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_error,
	OP_ATOM_event,
#ifdef USER_JAVASCRIPT
	OP_ATOM_eventCancelled,
#endif // USER_JAVASCRIPT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_eventEndTime,
	OP_ATOM_eventName,
	OP_ATOM_eventNotes,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_eventPhase,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_eventRecurrence,
	OP_ATOM_eventStartTime,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_exists,
#endif // DOM_GADGET_FILE_API_SUPPORT
#ifdef DOM2_TRAVERSAL
	OP_ATOM_expandEntityReferences,
#endif // DOM2_TRAVERSAL
#ifdef SVG_DOM
	OP_ATOM_exponent,
#endif // SVG_DOM
#ifdef EXTENSION_SUPPORT
	OP_ATOM_extension,
#endif // EXTENSION_SUPPORT
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_extensions,
#endif // WEBSOCKETS_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_externalResourcesRequired,
#endif // SVG_DOM
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_f,
#endif // SVG_DOM || CSS_TRANSFORMS
	OP_ATOM_face,
#ifdef SVG_DOM
	OP_ATOM_farthestViewportElement,
#endif // SVG_DOM
#ifdef EXTENSION_SUPPORT
	OP_ATOM_favicon,
	OP_ATOM_faviconUrl,
#endif // EXTENSION_SUPPORT
	OP_ATOM_fgColor,
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_fileInstance,
#endif // DOM_GADGET_FILE_API_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_fileName,
	OP_ATOM_filePath,
#endif // DOM_JIL_API_SUPPORT
#if defined DOM_GADGET_FILE_API_SUPPORT || defined DOM_JIL_API_SUPPORT
	OP_ATOM_fileSize,
#endif // DOM_GADGET_FILE_API_SUPPORT || DOM_JIL_API_SUPPORT
	OP_ATOM_filename,
	OP_ATOM_files,
#ifdef SVG_DOM
	OP_ATOM_fill,
	OP_ATOM_fillOpacity,
	OP_ATOM_fillRule,
#endif // SVG_DOM
#ifdef CANVAS_SUPPORT
	OP_ATOM_fillStyle,
#endif // CANVAS_SUPPORT
#if defined DOM2_TRAVERSAL || defined DOM3_LOAD || defined DOM3_SAVE || defined SVG_DOM
	OP_ATOM_filter,
#endif // DOM2_TRAVERSAL || DOM3_LOAD || DOM3_SAVE || SVG_DOM
#ifdef SVG_DOM
	OP_ATOM_filterResX,
	OP_ATOM_filterResY,
	OP_ATOM_filterUnits,
#endif // SVG_DOM
	OP_ATOM_firstChild,
	OP_ATOM_firstElementChild,
	OP_ATOM_flex,
	OP_ATOM_flexBasis,
	OP_ATOM_flexDirection,
	OP_ATOM_flexFlow,
	OP_ATOM_flexGrow,
	OP_ATOM_flexShrink,
	OP_ATOM_flexWrap,
#ifdef SVG_DOM
	OP_ATOM_floodColor,
	OP_ATOM_floodOpacity,
#endif // SVG_DOM
	OP_ATOM_focus,
#ifdef DOM_SELECTION_SUPPORT
	OP_ATOM_focusNode,
	OP_ATOM_focusOffset,
#endif // DOM_SELECTION_SUPPORT
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_focused,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_font,
	OP_ATOM_fontFamily,
	OP_ATOM_fontSize,
	OP_ATOM_fontSizeAdjust,
	OP_ATOM_fontStretch,
	OP_ATOM_fontStyle,
	OP_ATOM_fontVariant,
	OP_ATOM_fontWeight,
	OP_ATOM_for,
	OP_ATOM_form,
	OP_ATOM_formAction,
	OP_ATOM_formEnctype,
	OP_ATOM_formMethod,
	OP_ATOM_formNoValidate,
	OP_ATOM_formTarget,
	OP_ATOM_forms,
	OP_ATOM_frame,
	OP_ATOM_frameBorder,
	OP_ATOM_frameElement,
	OP_ATOM_frames,
	OP_ATOM_fromElement,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_fullName,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM_FULLSCREEN_MODE
	OP_ATOM_fullscreenElement,
	OP_ATOM_fullscreenEnabled,
#endif // DOM_FULLSCREEN_MODE
#ifdef SVG_DOM
	OP_ATOM_fx,
	OP_ATOM_fy,
#endif // SVG_DOM
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_geolocation,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_getElementById,
	OP_ATOM_getElementsByClassName,
	OP_ATOM_getElementsByTagName,
#ifdef CANVAS_SUPPORT
	OP_ATOM_globalAlpha,
	OP_ATOM_globalCompositeOperation,
#endif // CANVAS_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_glyphOrientationHorizontal,
	OP_ATOM_glyphOrientationVertical,
	OP_ATOM_gradientTransform,
	OP_ATOM_gradientUnits,
	OP_ATOM_green,
#endif // SVG_DOM
	OP_ATOM_hash,
	OP_ATOM_head,
	OP_ATOM_headers,
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_heading,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_height,
	OP_ATOM_hidden,
	OP_ATOM_high,
	OP_ATOM_history,
#ifdef ESUTILS_PROFILER_SUPPORT
	OP_ATOM_hits,
#endif // ESUTILS_PROFILER_SUPPORT
	OP_ATOM_home,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_homePhone,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_host,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_hostName,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_hostname,
	OP_ATOM_href,
	OP_ATOM_hreflang,
	OP_ATOM_hspace,
	OP_ATOM_htmlFor,
	OP_ATOM_httpEquiv,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_icon,
#endif // WEBFEEDS_BACKEND_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_icons,
#endif // GADGET_SUPPORT
	OP_ATOM_id,
#if defined GADGET_SUPPORT || defined TOUCH_EVENTS_SUPPORT
	OP_ATOM_identifier,
#endif // GADGET_SUPPORT || TOUCH_EVENTS_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_imageRendering,
#endif // SVG_DOM
	OP_ATOM_images,
	OP_ATOM_implementation,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_implicitFlush,
#endif // WEBSERVER_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_in1,
	OP_ATOM_in2,
#endif // SVG_DOM
	OP_ATOM_indeterminate,
	OP_ATOM_index,
	OP_ATOM_innerHTML,
	OP_ATOM_innerHeight,
	OP_ATOM_innerText,
	OP_ATOM_innerWidth,
	OP_ATOM_input,
	OP_ATOM_inputFormat,
	OP_ATOM_inputMethod,
	OP_ATOM_inputmode,
	OP_ATOM_insertAdjacentHTML,
	OP_ATOM_insertAdjacentText,
#ifdef DATABASE_STORAGE_SUPPORT
	OP_ATOM_insertId,
#endif // DATABASE_STORAGE_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_instanceRoot,
	OP_ATOM_intercept,
#endif // SVG_DOM
	OP_ATOM_internalSubset,
#ifdef DOM3_XPATH
	OP_ATOM_invalidIteratorState,
#endif // DOM3_XPATH
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_ip,
#endif // WEBSERVER_SUPPORT
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_isArchive,
#endif // DOM_GADGET_FILE_API_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_isAudioPlaying,
#endif // DOM_JIL_API_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_isBinary,
#endif // WEBFEEDS_BACKEND_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_isCharging,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM_SELECTION_SUPPORT
	OP_ATOM_isCollapsed,
#endif // DOM_SELECTION_SUPPORT
	OP_ATOM_isContentEditable,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_isDataNetworkConnected,
#endif // DOM_JIL_API_SUPPORT
#if defined DOM_GADGET_FILE_API_SUPPORT || defined DOM_JIL_API_SUPPORT
	OP_ATOM_isDirectory,
#endif // DOM_GADGET_FILE_API_SUPPORT || DOM_JIL_API_SUPPORT
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_isEditable,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_isElementContentWhitespace,
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_isFile,
	OP_ATOM_isHidden,
#endif // DOM_GADGET_FILE_API_SUPPORT
#if defined WEBSERVER_SUPPORT || defined UPNP_SUPPORT
	OP_ATOM_isLocal,
#endif // WEBSERVER_SUPPORT || UPNP_SUPPORT
	OP_ATOM_isMap,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_isMarkup,
#endif // WEBFEEDS_BACKEND_SUPPORT
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_isOwner,
#endif // WEBSERVER_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_isPaused,
#endif // SVG_DOM
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_isPlainText,
#endif // WEBFEEDS_BACKEND_SUPPORT
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_isProxied,
#endif // WEBSERVER_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_isRadioEnabled,
	OP_ATOM_isRead,
	OP_ATOM_isRoaming,
#endif // DOM_JIL_API_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_isSubscribed,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_isTrusted,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_isVideoPlaying,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_item,
	OP_ATOM_itemId,
	OP_ATOM_itemProp,
	OP_ATOM_itemRef,
	OP_ATOM_itemScope,
	OP_ATOM_itemType,
	OP_ATOM_itemValue,
#if defined DRAG_SUPPORT || defined USE_OP_CLIPBOARD
	OP_ATOM_items,
#endif // DRAG_SUPPORT || USE_OP_CLIPBOARD
	OP_ATOM_justifyContent,
#ifdef SVG_DOM
	OP_ATOM_k1,
	OP_ATOM_k2,
	OP_ATOM_k3,
	OP_ATOM_k4,
#endif // SVG_DOM
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_keep,
#endif // WEBFEEDS_BACKEND_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_kernelMatrix,
	OP_ATOM_kernelUnitLengthX,
	OP_ATOM_kernelUnitLengthY,
	OP_ATOM_kerning,
#endif // SVG_DOM
	OP_ATOM_key,
	OP_ATOM_keyCode,
#ifdef CSS_ANIMATIONS
	OP_ATOM_keyText,
#endif // CSS_ANIMATIONS
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_keypadLightOn,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_keytype,
#if defined MEDIA_HTML_SUPPORT || defined DRAG_SUPPORT || defined USE_OP_CLIPBOARD
	OP_ATOM_kind,
#endif // MEDIA_HTML_SUPPORT || DRAG_SUPPORT || USE_OP_CLIPBOARD
	OP_ATOM_label,
	OP_ATOM_labels,
	OP_ATOM_lang,
	OP_ATOM_language,
#ifdef SVG_DOM
	OP_ATOM_largeArcFlag,
#endif // SVG_DOM
	OP_ATOM_lastChild,
	OP_ATOM_lastElementChild,
#if defined DOM_CROSSDOCUMENT_MESSAGING_SUPPORT || defined WEBSOCKETS_SUPPORT
	OP_ATOM_lastEventId,
#endif // DOM_CROSSDOCUMENT_MESSAGING_SUPPORT || WEBSOCKETS_SUPPORT
	OP_ATOM_lastModified,
	OP_ATOM_lastModifiedDate,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_lastModifyDate,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_lastPosition,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_lastUpdate,
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_latitude,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_left,
	OP_ATOM_length,
#ifdef SVG_DOM
	OP_ATOM_lengthAdjust,
#endif // SVG_DOM
#ifdef PROGRESS_EVENTS_SUPPORT
	OP_ATOM_lengthComputable,
#endif // PROGRESS_EVENTS_SUPPORT
	OP_ATOM_letterSpacing,
#ifdef SVG_DOM
	OP_ATOM_lightingColor,
	OP_ATOM_limitingConeAngle,
#endif // SVG_DOM
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_line,
#endif // MEDIA_HTML_SUPPORT
#ifdef CANVAS_SUPPORT
	OP_ATOM_lineCap,
#endif // CANVAS_SUPPORT
	OP_ATOM_lineHeight,
#ifdef SVG_DOM
	OP_ATOM_lineIncrement,
#endif // SVG_DOM
#ifdef CANVAS_SUPPORT
	OP_ATOM_lineJoin,
	OP_ATOM_lineWidth,
#endif // CANVAS_SUPPORT
	OP_ATOM_lineno,
#ifdef ESUTILS_PROFILER_SUPPORT
	OP_ATOM_lines,
#endif // ESUTILS_PROFILER_SUPPORT
	OP_ATOM_link,
	OP_ATOM_linkColor,
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_linkURL,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_links,
	OP_ATOM_list,
	OP_ATOM_listStyle,
	OP_ATOM_listStyleImage,
	OP_ATOM_listStylePosition,
	OP_ATOM_listStyleType,
	OP_ATOM_listener,
#ifdef PROGRESS_EVENTS_SUPPORT
	OP_ATOM_loaded,
#endif // PROGRESS_EVENTS_SUPPORT
#if defined USE_SPDY && defined DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_loadedWithSPDY,
#endif // USE_SPDY && DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_localName,
#ifdef CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_localStorage,
#endif // CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_locale,
	OP_ATOM_location,
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_locked,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_logo,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_longDesc,
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_longitude,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_loop,
	OP_ATOM_low,
	OP_ATOM_lowsrc,
	OP_ATOM_margin,
	OP_ATOM_marginBottom,
	OP_ATOM_marginHeight,
	OP_ATOM_marginLeft,
	OP_ATOM_marginRight,
	OP_ATOM_marginTop,
	OP_ATOM_marginWidth,
#ifdef SVG_DOM
	OP_ATOM_marker,
	OP_ATOM_markerEnd,
	OP_ATOM_markerHeight,
	OP_ATOM_markerMid,
#endif // SVG_DOM
	OP_ATOM_markerOffset,
#ifdef SVG_DOM
	OP_ATOM_markerStart,
	OP_ATOM_markerUnits,
	OP_ATOM_markerWidth,
	OP_ATOM_mask,
	OP_ATOM_maskContentUnits,
	OP_ATOM_maskUnits,
#endif // SVG_DOM
	OP_ATOM_matches,
#ifdef SVG_DOM
	OP_ATOM_matrix,
#endif // SVG_DOM
	OP_ATOM_max,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_maxAge,
	OP_ATOM_maxEntries,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_maxHeight,
	OP_ATOM_maxLength,
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_maxPathLength,
#endif // DOM_GADGET_FILE_API_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_maxSize,
#endif // WEBFEEDS_BACKEND_SUPPORT
#if defined UPNP_SUPPORT || (defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL)
	OP_ATOM_maxUploadRate,
#endif // UPNP_SUPPORT || GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
	OP_ATOM_maxWidth,
	OP_ATOM_maxZoom,
	OP_ATOM_media,
	OP_ATOM_mediaText,
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_mediaType,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_meetOrSlice,
#endif // SVG_DOM
#ifdef EXTENSION_SUPPORT
	OP_ATOM_menu,
#endif // EXTENSION_SUPPORT
	OP_ATOM_menubar,
	OP_ATOM_message,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_messageId,
	OP_ATOM_messagePriority,
	OP_ATOM_messageType,
#endif // DOM_JIL_API_SUPPORT
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_metaData,
#endif // DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_metaKey,
	OP_ATOM_method,
#ifdef ESUTILS_PROFILER_SUPPORT
	OP_ATOM_millisecondsSelf,
	OP_ATOM_millisecondsTotal,
#endif // ESUTILS_PROFILER_SUPPORT
	OP_ATOM_mimeTypes,
	OP_ATOM_min,
	OP_ATOM_minHeight,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_minUpdateInterval,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_minWidth,
	OP_ATOM_minZoom,
#ifdef CANVAS_SUPPORT
	OP_ATOM_miterLimit,
#endif // CANVAS_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_mobilePhone,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_mode,
#endif // SVG_DOM
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_modified,
	OP_ATOM_mountPoints,
#endif // DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_moveBy,
	OP_ATOM_moveTo,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_msgRingtoneVolume,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_multiple,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_muted,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_name,
	OP_ATOM_namedItem,
	OP_ATOM_names,
	OP_ATOM_namespaceURI,
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_nativePath,
#endif // DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_naturalHeight,
	OP_ATOM_naturalWidth,
	OP_ATOM_navDown,
	OP_ATOM_navIndex,
	OP_ATOM_navLeft,
	OP_ATOM_navRight,
	OP_ATOM_navUp,
	OP_ATOM_navigationMode,
	OP_ATOM_navigator,
#ifdef SVG_DOM
	OP_ATOM_nearestViewportElement,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_networkConnectionType,
#endif // DOM_JIL_API_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_networkState,
#endif // MEDIA_HTML_SUPPORT
#ifdef DOM3_LOAD
	OP_ATOM_newDocument,
#endif // DOM3_LOAD
#if defined DOM3_SAVE || defined DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_newLine,
#endif // DOM3_SAVE || DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_newURL,
#if defined DOM2_MUTATION_EVENTS || defined CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_newValue,
#endif // DOM2_MUTATION_EVENTS || CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_next,
	OP_ATOM_nextElementSibling,
	OP_ATOM_nextSibling,
	OP_ATOM_noHref,
	OP_ATOM_noResize,
	OP_ATOM_noShade,
	OP_ATOM_noValidate,
	OP_ATOM_noWrap,
	OP_ATOM_nodeName,
	OP_ATOM_nodeType,
	OP_ATOM_nodeValue,
#ifdef SVG_DOM
	OP_ATOM_normalizedPathSegList,
#endif // SVG_DOM
	OP_ATOM_notationName,
	OP_ATOM_notations,
#ifdef SVG_DOM
	OP_ATOM_numOctaves,
	OP_ATOM_numberOfItems,
	OP_ATOM_numberOfSegments,
#endif // SVG_DOM
#ifdef DOM3_XPATH
	OP_ATOM_numberValue,
#endif // DOM3_XPATH
	OP_ATOM_object,
#ifdef SVG_DOM
	OP_ATOM_offset,
#endif // SVG_DOM
	OP_ATOM_offsetHeight,
	OP_ATOM_offsetLeft,
	OP_ATOM_offsetParent,
	OP_ATOM_offsetTop,
	OP_ATOM_offsetWidth,
	OP_ATOM_offsetX,
	OP_ATOM_offsetY,
	OP_ATOM_oldURL,
#ifdef CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_oldValue,
#endif // CLIENTSIDE_STORAGE_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_onAddressBookItemsFound,
	OP_ATOM_onCalendarItemAlert,
	OP_ATOM_onCalendarItemsFound,
	OP_ATOM_onCallEvent,
	OP_ATOM_onCallRecordsFound,
	OP_ATOM_onCameraCaptured,
	OP_ATOM_onChargeLevelChange,
	OP_ATOM_onChargeStateChange,
	OP_ATOM_onFilesFound,
	OP_ATOM_onFocus,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_onLine,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_onLowBattery,
	OP_ATOM_onMaximize,
	OP_ATOM_onMessageArrived,
	OP_ATOM_onMessageSendingFailure,
	OP_ATOM_onMessagesFound,
	OP_ATOM_onNetworkConnectionChanged,
	OP_ATOM_onPositionRetrieved,
	OP_ATOM_onRestore,
	OP_ATOM_onScreenChangeDimensions,
	OP_ATOM_onSignalSourceChange,
	OP_ATOM_onStateChange,
	OP_ATOM_onVCardExportingFinish,
	OP_ATOM_onWakeup,
#endif // DOM_JIL_API_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_onaddtrack,
#endif // MEDIA_HTML_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_onafterupdate,
#endif // GADGET_SUPPORT
#ifdef OPERA_AUTH_SUPPORT
	OP_ATOM_onauthenticationchange,
#endif // OPERA_AUTH_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_onbeforeupdate,
#endif // GADGET_SUPPORT
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_onclose,
#endif // WEBSOCKETS_SUPPORT
#if defined DOM_WEBWORKERS_SUPPORT || defined DOM_CROSSDOCUMENT_MESSAGING_SUPPORT
	OP_ATOM_onconnect,
#endif // DOM_WEBWORKERS_SUPPORT || DOM_CROSSDOCUMENT_MESSAGING_SUPPORT
#ifdef EXTENSION_SUPPORT
	OP_ATOM_oncreate,
#endif // EXTENSION_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_oncuechange,
#endif // MEDIA_HTML_SUPPORT
#ifdef EXTENSION_SUPPORT
	OP_ATOM_ondisconnect,
#endif // EXTENSION_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_ondragstart,
	OP_ATOM_ondragstop,
#endif // GADGET_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_onenter,
#endif // MEDIA_HTML_SUPPORT
#if defined DOM_WEBWORKERS_SUPPORT || defined DOM_CROSSDOCUMENT_MESSAGING_SUPPORT || defined WEBSOCKETS_SUPPORT
	OP_ATOM_onerror,
#endif // DOM_WEBWORKERS_SUPPORT || DOM_CROSSDOCUMENT_MESSAGING_SUPPORT || WEBSOCKETS_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_onexit,
#endif // MEDIA_HTML_SUPPORT
#ifdef EXTENSION_SUPPORT
	OP_ATOM_onfocus,
#endif // EXTENSION_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_onhide,
#endif // GADGET_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_onload,
#endif // MEDIA_HTML_SUPPORT
#if defined DOM_WEBWORKERS_SUPPORT || defined DOM_CROSSDOCUMENT_MESSAGING_SUPPORT || defined WEBSOCKETS_SUPPORT
	OP_ATOM_onmessage,
#endif // DOM_WEBWORKERS_SUPPORT || DOM_CROSSDOCUMENT_MESSAGING_SUPPORT || WEBSOCKETS_SUPPORT
#ifdef EXTENSION_SUPPORT
	OP_ATOM_onmove,
#endif // EXTENSION_SUPPORT
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_onopen,
#endif // WEBSOCKETS_SUPPORT
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL
	OP_ATOM_onrangechange,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
#ifdef GADGET_SUPPORT
	OP_ATOM_onrefresh,
#endif // GADGET_SUPPORT
#ifdef EXTENSION_SUPPORT
	OP_ATOM_onremove,
#endif // EXTENSION_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_onremovetrack,
#endif // MEDIA_HTML_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_onshow,
#endif // GADGET_SUPPORT
	OP_ATOM_onthread,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_onupdate,
#endif // EXTENSION_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_onviewstatechanged,
#endif // GADGET_SUPPORT
	OP_ATOM_opacity,
	OP_ATOM_opener,
#ifdef CSS_TRANSFORMS
	OP_ATOM_operationType,
#endif // CSS_TRANSFORMS
#ifdef SVG_DOM
	OP_ATOM_operator,
#endif // SVG_DOM
	OP_ATOM_optimum,
	OP_ATOM_options,
	OP_ATOM_order,
#ifdef SVG_DOM
	OP_ATOM_orderX,
	OP_ATOM_orderY,
	OP_ATOM_orientAngle,
	OP_ATOM_orientType,
#endif // SVG_DOM
	OP_ATOM_orientation,
	OP_ATOM_origin,
#if defined(GADGET_SUPPORT) || defined(WEBSERVER_SUPPORT)
	OP_ATOM_originURL,
#endif // GADGET_SUPPORT || WEBSERVER_SUPPORT
	OP_ATOM_orphans,
	OP_ATOM_outerHTML,
	OP_ATOM_outerHeight,
	OP_ATOM_outerText,
	OP_ATOM_outerWidth,
	OP_ATOM_outline,
	OP_ATOM_outlineColor,
	OP_ATOM_outlineOffset,
	OP_ATOM_outlineStyle,
	OP_ATOM_outlineWidth,
	OP_ATOM_output,
	OP_ATOM_overflow,
	OP_ATOM_overflowWrap,
	OP_ATOM_overflowX,
	OP_ATOM_overflowY,
	OP_ATOM_ownerDocument,
	OP_ATOM_ownerElement,
	OP_ATOM_ownerNode,
	OP_ATOM_ownerRule,
#ifdef SVG_DOM
	OP_ATOM_ownerSVGElement,
#endif // SVG_DOM
	OP_ATOM_padding,
	OP_ATOM_paddingBottom,
	OP_ATOM_paddingLeft,
	OP_ATOM_paddingRight,
	OP_ATOM_paddingTop,
	OP_ATOM_page,
	OP_ATOM_pageBreakAfter,
	OP_ATOM_pageBreakBefore,
	OP_ATOM_pageBreakInside,
#ifdef PAGED_MEDIA_SUPPORT
	OP_ATOM_pageCount,
#endif // PAGED_MEDIA_SUPPORT
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_pageURL,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_pageX,
	OP_ATOM_pageXOffset,
	OP_ATOM_pageY,
	OP_ATOM_pageYOffset,
#ifdef SVG_DOM
	OP_ATOM_paintType,
#endif // SVG_DOM
	OP_ATOM_parameterNames,
	OP_ATOM_parent,
	OP_ATOM_parentElement,
	OP_ATOM_parentNode,
	OP_ATOM_parentRule,
	OP_ATOM_parentStyleSheet,
	OP_ATOM_parentWindow,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_passwordProtected,
#endif // WEBSERVER_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_path,
#endif // GADGET_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_pathLength,
	OP_ATOM_pathSegList,
	OP_ATOM_pathSegType,
	OP_ATOM_pathSegTypeAsLetter,
#endif // SVG_DOM
	OP_ATOM_pathname,
	OP_ATOM_pattern,
#ifdef SVG_DOM
	OP_ATOM_patternContentUnits,
#endif // SVG_DOM
	OP_ATOM_patternMismatch,
#ifdef SVG_DOM
	OP_ATOM_patternTransform,
	OP_ATOM_patternUnits,
#endif // SVG_DOM
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_pauseOnExit,
	OP_ATOM_paused,
#endif // MEDIA_HTML_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_percentRemaining,
	OP_ATOM_phoneColorDepthDefault,
	OP_ATOM_phoneFirmware,
	OP_ATOM_phoneMSISDN,
	OP_ATOM_phoneManufacturer,
	OP_ATOM_phoneModel,
	OP_ATOM_phoneOS,
	OP_ATOM_phoneOperatorName,
	OP_ATOM_phoneScreenHeightDefault,
	OP_ATOM_phoneScreenWidthDefault,
	OP_ATOM_phoneSoftware,
	OP_ATOM_phoneUserUniqueId,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_pixelBottom,
	OP_ATOM_pixelDepth,
	OP_ATOM_pixelHeight,
	OP_ATOM_pixelLeft,
	OP_ATOM_pixelRight,
	OP_ATOM_pixelTop,
#ifdef SVG_DOM
	OP_ATOM_pixelUnitToMillimeterX,
	OP_ATOM_pixelUnitToMillimeterY,
#endif // SVG_DOM
	OP_ATOM_pixelWidth,
	OP_ATOM_placeholder,
	OP_ATOM_platform,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_playbackRate,
	OP_ATOM_played,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_plugins,
#ifdef SVG_DOM
	OP_ATOM_pointerEvents,
	OP_ATOM_points,
	OP_ATOM_pointsAtX,
	OP_ATOM_pointsAtY,
	OP_ATOM_pointsAtZ,
#endif // SVG_DOM
#ifdef EXTENSION_SUPPORT
	OP_ATOM_popup,
#endif // EXTENSION_SUPPORT
	OP_ATOM_port,
#ifdef DOM_CROSSDOCUMENT_MESSAGING_SUPPORT
	OP_ATOM_port1,
	OP_ATOM_port2,
	OP_ATOM_ports,
#endif // DOM_CROSSDOCUMENT_MESSAGING_SUPPORT
	OP_ATOM_posBottom,
	OP_ATOM_posHeight,
	OP_ATOM_posLeft,
	OP_ATOM_posRight,
	OP_ATOM_posTop,
	OP_ATOM_posWidth,
	OP_ATOM_position,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_poster,
#endif // MEDIA_HTML_SUPPORT
#ifdef GADGET_SUPPORT
	OP_ATOM_preferences,
#endif // GADGET_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_prefetchPrimaryLink,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_prefix,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_preload,
#endif // MEDIA_HTML_SUPPORT
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_premultipliedAlpha,
#endif // CANVAS3D_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_preserveAlpha,
	OP_ATOM_preserveAspectRatio,
#endif // SVG_DOM
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_preserveDrawingBuffer,
#endif // CANVAS3D_SUPPORT
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_prevPosition,
	OP_ATOM_prevTabGroup,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
#ifdef DOM2_MUTATION_EVENTS
	OP_ATOM_prevValue,
#endif // DOM2_MUTATION_EVENTS
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_prevWindow,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_previous,
	OP_ATOM_previousElementSibling,
	OP_ATOM_previousSibling,
#ifdef SVG_DOM
	OP_ATOM_primitiveUnits,
#endif // SVG_DOM
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_private,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_processorUtilizationPercent,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_prompt,
#ifdef USER_JAVASCRIPT
	OP_ATOM_propagationStopped,
#endif // USER_JAVASCRIPT
	OP_ATOM_properties,
	OP_ATOM_propertyName,
	OP_ATOM_protocol,
	OP_ATOM_prototype,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_proxyName,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_pubDate,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_publicIP,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_publicId,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_publicPort,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_publicationDate,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_queryItems,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_quotes,
#ifdef SVG_DOM
	OP_ATOM_r,
	OP_ATOM_r1,
	OP_ATOM_r2,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_radioSignalSource,
	OP_ATOM_radioSignalStrengthPercent,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_radiusX,
	OP_ATOM_radiusY,
#endif // SVG_DOM
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL
	OP_ATOM_range,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
#ifdef DOM_SELECTION_SUPPORT
	OP_ATOM_rangeCount,
#endif // DOM_SELECTION_SUPPORT
	OP_ATOM_rangeOverflow,
	OP_ATOM_rangeUnderflow,
	OP_ATOM_readOnly,
	OP_ATOM_readyState,
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_reason,
#endif // WEBSOCKETS_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_red,
	OP_ATOM_refX,
	OP_ATOM_refY,
#endif // SVG_DOM
	OP_ATOM_referrer,
	OP_ATOM_rel,
#ifdef DOM2_MUTATION_EVENTS
	OP_ATOM_relatedNode,
#endif // DOM2_MUTATION_EVENTS
	OP_ATOM_relatedTarget,
#ifdef OPERA_AUTH_SUPPORT
	OP_ATOM_rememberMe,
#endif // OPERA_AUTH_SUPPORT
	OP_ATOM_renderingMode,
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL
	OP_ATOM_rendezvous,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
	OP_ATOM_repeat,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_request,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_required,
#ifdef SVG_DOM
	OP_ATOM_requiredExtensions,
	OP_ATOM_requiredFeatures,
#endif // SVG_DOM
	OP_ATOM_resize,
	OP_ATOM_resizeBy,
	OP_ATOM_resizeTo,
	OP_ATOM_response,
	OP_ATOM_responseText,
	OP_ATOM_responseType,
	OP_ATOM_responseXML,
	OP_ATOM_result,
#ifdef DOM3_XPATH
	OP_ATOM_resultType,
#endif // DOM3_XPATH
	OP_ATOM_returnValue,
	OP_ATOM_rev,
	OP_ATOM_reversed,
	OP_ATOM_rgbColor,
	OP_ATOM_right,
	OP_ATOM_rightMargin,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_ringtoneVolume,
#endif // DOM_JIL_API_SUPPORT
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL
	OP_ATOM_robotstxtEnabled,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
	OP_ATOM_root,
#ifdef SVG_DOM
	OP_ATOM_rootElement,
	OP_ATOM_rotate,
#endif // SVG_DOM
#ifdef TOUCH_EVENTS_SUPPORT
	OP_ATOM_rotation,
#endif // TOUCH_EVENTS_SUPPORT
	OP_ATOM_rowIndex,
	OP_ATOM_rowSpan,
	OP_ATOM_rows,
#ifdef DATABASE_STORAGE_SUPPORT
	OP_ATOM_rowsAffected,
#endif // DATABASE_STORAGE_SUPPORT
	OP_ATOM_rules,
#ifdef SVG_DOM
	OP_ATOM_rx,
	OP_ATOM_ry,
#endif // SVG_DOM
#if defined(SVG_DOM) || defined(TOUCH_EVENTS_SUPPORT)
	OP_ATOM_scale,
#endif // SVG_DOM || TOUCH_EVENTS_SUPPORT
	OP_ATOM_scheme,
	OP_ATOM_scope,
#ifdef SCOPE_SUPPORT
	OP_ATOM_scopeListenerAddress,
#endif // SCOPE_SUPPORT
	OP_ATOM_screen,
	OP_ATOM_screenLeft,
#ifdef SVG_DOM
	OP_ATOM_screenPixelToMillimeterX,
	OP_ATOM_screenPixelToMillimeterY,
#endif // SVG_DOM
	OP_ATOM_screenTop,
	OP_ATOM_screenX,
	OP_ATOM_screenY,
	OP_ATOM_scripts,
	OP_ATOM_scroll,
	OP_ATOM_scrollAmount,
	OP_ATOM_scrollBy,
	OP_ATOM_scrollDelay,
	OP_ATOM_scrollHeight,
	OP_ATOM_scrollLeft,
	OP_ATOM_scrollTo,
	OP_ATOM_scrollTop,
	OP_ATOM_scrollWidth,
	OP_ATOM_scrollX,
	OP_ATOM_scrollY,
	OP_ATOM_scrollbar3dlightColor,
	OP_ATOM_scrollbarArrowColor,
	OP_ATOM_scrollbarBaseColor,
	OP_ATOM_scrollbarDarkshadowColor,
	OP_ATOM_scrollbarFaceColor,
	OP_ATOM_scrollbarHighlightColor,
	OP_ATOM_scrollbarShadowColor,
	OP_ATOM_scrollbarTrackColor,
	OP_ATOM_scrolling,
	OP_ATOM_search,
	OP_ATOM_sectionRowIndex,
#ifdef SVG_DOM
	OP_ATOM_seed,
#endif // SVG_DOM
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_seekable,
	OP_ATOM_seeking,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_selected,
	OP_ATOM_selectedIndex,
	OP_ATOM_selectedOptions,
#ifdef DOM_SELECTION_SUPPORT
	OP_ATOM_selectionDirection,
	OP_ATOM_selectionEnd,
	OP_ATOM_selectionStart,
#endif // DOM_SELECTION_SUPPORT
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_selectionText,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_selectorText,
	OP_ATOM_self,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_servicePath,
#endif // WEBSERVER_SUPPORT
#if defined WEBSERVER_SUPPORT || defined UPNP_SUPPORT
	OP_ATOM_services,
#endif // WEBSERVER_SUPPORT || UPNP_SUPPORT
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_session,
#endif // WEBSERVER_SUPPORT
#ifdef CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_sessionStorage,
#endif // CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_setInterval,
#ifdef CANVAS_SUPPORT
	OP_ATOM_shadowBlur,
	OP_ATOM_shadowColor,
	OP_ATOM_shadowOffsetX,
	OP_ATOM_shadowOffsetY,
#endif // CANVAS_SUPPORT
	OP_ATOM_shape,
#ifdef SVG_DOM
	OP_ATOM_shapeRendering,
#endif // SVG_DOM
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT
	OP_ATOM_sharedFolder,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT
	OP_ATOM_sheet,
	OP_ATOM_shiftKey,
#ifdef GADGET_SUPPORT
	OP_ATOM_shortName,
#endif // GADGET_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_showImages,
#endif // WEBFEEDS_BACKEND_SUPPORT
#ifdef DOM3_XPATH
	OP_ATOM_singleNodeValue,
#endif // DOM3_XPATH
	OP_ATOM_size,
#ifdef SVG_DOM
	OP_ATOM_slope,
#endif // SVG_DOM
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_snapToLines,
#endif // MEDIA_HTML_SUPPORT
#ifdef DOM3_XPATH
	OP_ATOM_snapshotLength,
#endif // DOM3_XPATH
#ifdef SVG_DOM
	OP_ATOM_solidColor,
	OP_ATOM_solidOpacity,
#endif // SVG_DOM
	OP_ATOM_source,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_sourceAddress,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_spacing,
#endif // SVG_DOM
	OP_ATOM_span,
	OP_ATOM_speakNumeral,
	OP_ATOM_specified,
#ifdef SVG_DOM
	OP_ATOM_specularConstant,
	OP_ATOM_specularExponent,
#endif // SVG_DOM
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_speed,
#endif // DOM_GEOLOCATION_SUPPORT
#ifdef EXTENSION_SUPPORT
	OP_ATOM_speeddial,
#endif // EXTENSION_SUPPORT
#ifdef INTERNAL_SPELLCHECK_SUPPORT
	OP_ATOM_spellcheck,
#endif // INTERNAL_SPELLCHECK_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_spreadMethod,
#endif // SVG_DOM
	OP_ATOM_src,
	OP_ATOM_srcElement,
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_srcURL,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_srclang,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_standby,
	OP_ATOM_start,
#ifdef DOM2_RANGE
	OP_ATOM_startContainer,
#endif // DOM2_RANGE
#if defined(DOM2_RANGE) || defined(SVG_DOM)
	OP_ATOM_startOffset,
#endif // DOM2_RANGE || SVG_DOM
#if defined(MEDIA_HTML_SUPPORT) || defined(DOM_JIL_API_SUPPORT)
	OP_ATOM_startTime,
#endif // MEDIA_HTML_SUPPORT || DOM_JIL_API_SUPPORT
	OP_ATOM_state,
	OP_ATOM_status,
#ifdef DOM_HTTP_SUPPORT
	OP_ATOM_statusText,
#endif // DOM_HTTP_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_stdDeviationX,
	OP_ATOM_stdDeviationY,
#endif // SVG_DOM
#ifdef CANVAS3D_SUPPORT
	OP_ATOM_stencil,
#endif // CANVAS3D_SUPPORT
	OP_ATOM_step,
	OP_ATOM_stepMismatch,
#ifdef SVG_DOM
	OP_ATOM_stitchTiles,
	OP_ATOM_stopColor,
	OP_ATOM_stopOpacity,
#endif // SVG_DOM
#ifdef CLIENTSIDE_STORAGE_SUPPORT
	OP_ATOM_storageArea,
#endif // CLIENTSIDE_STORAGE_SUPPORT
#ifdef SCOPE_SUPPORT
	OP_ATOM_stpVersion,
#endif // SCOPE_SUPPORT
#ifdef DOM3_XPATH
	OP_ATOM_stringValue,
#endif // DOM3_XPATH
#ifdef SVG_DOM
	OP_ATOM_stroke,
	OP_ATOM_strokeDasharray,
	OP_ATOM_strokeDashoffset,
	OP_ATOM_strokeLinecap,
	OP_ATOM_strokeLinejoin,
	OP_ATOM_strokeMiterlimit,
	OP_ATOM_strokeOpacity,
#endif // SVG_DOM
#ifdef CANVAS_SUPPORT
	OP_ATOM_strokeStyle,
#endif // CANVAS_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_strokeWidth,
#endif // SVG_DOM
	OP_ATOM_style,
	OP_ATOM_styleFloat,
	OP_ATOM_styleSheet,
	OP_ATOM_styleSheets,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_subject,
#endif // DOM_JIL_API_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_subscribedFeeds,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_suffixes,
	OP_ATOM_summary,
#ifdef SVG_DOM
	OP_ATOM_surfaceScale,
	OP_ATOM_sweepFlag,
#endif // SVG_DOM
	OP_ATOM_systemId,
#ifdef SVG_DOM
	OP_ATOM_systemLanguage,
#endif // SVG_DOM
#ifdef DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_systemNewLine,
#endif // DOM_GADGET_FILE_API_SUPPORT
	OP_ATOM_tBodies,
	OP_ATOM_tFoot,
	OP_ATOM_tHead,
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_tab,
	OP_ATOM_tabGroup,
	OP_ATOM_tabGroups,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_tabIndex,
	OP_ATOM_tableLayout,
#ifdef SVG_DOM
	OP_ATOM_tableValues,
#endif // SVG_DOM
#ifdef DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_tabs,
#endif // DOM_EXTENSIONS_TAB_API_SUPPORT
	OP_ATOM_tagName,
	OP_ATOM_target,
#ifdef SVG_DOM
	OP_ATOM_targetElement,
#endif // SVG_DOM
#ifdef SVG_SUPPORT
	OP_ATOM_targetFps,
#endif // SVG_SUPPORT
#ifdef TOUCH_EVENTS_SUPPORT
	OP_ATOM_targetTouches,
#endif // TOUCH_EVENTS_SUPPORT
#ifdef DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
	OP_ATOM_targetURLPatterns,
#endif // DOM_EXTENSIONS_CONTEXT_MENU_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_targetX,
	OP_ATOM_targetY,
#endif // SVG_DOM
	OP_ATOM_text,
	OP_ATOM_textAlign,
#ifdef SVG_DOM
	OP_ATOM_textAnchor,
#endif // SVG_DOM
#ifdef CANVAS_SUPPORT
	OP_ATOM_textBaseline,
#endif // CANVAS_SUPPORT
	OP_ATOM_textContent,
	OP_ATOM_textDecoration,
	OP_ATOM_textIndent,
	OP_ATOM_textLength,
	OP_ATOM_textOverflow,
#ifdef SVG_DOM
	OP_ATOM_textRendering,
#endif // SVG_DOM
	OP_ATOM_textShadow,
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_textTracks,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_textTransform,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_time,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_timeStamp,
#ifdef DOM_HTTP_SUPPORT
	OP_ATOM_timeout,
#endif // DOM_HTTP_SUPPORT
#ifdef DOM_GEOLOCATION_SUPPORT
	OP_ATOM_timestamp,
#endif // DOM_GEOLOCATION_SUPPORT
	OP_ATOM_title,
	OP_ATOM_toElement,
	OP_ATOM_tooLong,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_toolbar,
#endif // EXTENSION_SUPPORT
	OP_ATOM_top,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_topWindow,
#endif // EXTENSION_SUPPORT
	OP_ATOM_total,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_totalMemory,
#endif // DOM_JIL_API_SUPPORT
#ifdef TOUCH_EVENTS_SUPPORT
	OP_ATOM_touches,
#endif // TOUCH_EVENTS_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_track,
#endif // MEDIA_HTML_SUPPORT
#if defined SVG_DOM || defined CSS_TRANSFORMS
	OP_ATOM_transform,
#endif // SVG_DOM || CSS_TRANSFORMS
#ifdef CSS_TRANSFORMS
	OP_ATOM_transformOrigin,
#endif // CSS_TRANSFORMS
#ifdef CSS_TRANSITIONS
	OP_ATOM_transition,
	OP_ATOM_transitionDelay,
	OP_ATOM_transitionDuration,
	OP_ATOM_transitionProperty,
	OP_ATOM_transitionTimingFunction,
#endif // CSS_TRANSITIONS
	OP_ATOM_type,
	OP_ATOM_typeMismatch,
#if defined DRAG_SUPPORT || defined USE_OP_CLIPBOARD
	OP_ATOM_types,
#endif // DRAG_SUPPORT || USE_OP_CLIPBOARD
	OP_ATOM_unicodeBidi,
#ifdef SVG_DOM
	OP_ATOM_unitType,
#endif // SVG_DOM
#if defined WEBSERVER_SUPPORT || defined UPNP_SUPPORT
	OP_ATOM_uniteDeviceName,
#endif // WEBSERVER_SUPPORT || UPNP_SUPPORT
#ifdef UPNP_SUPPORT
	OP_ATOM_uniteServiceName,
#endif // UPNP_SUPPORT
#if defined WEBSERVER_SUPPORT || defined UPNP_SUPPORT
	OP_ATOM_uniteUser,
#endif // WEBSERVER_SUPPORT || UPNP_SUPPORT
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_unread,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_unselectable,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_updateInterval,
#endif // WEBFEEDS_BACKEND_SUPPORT
#if defined DOM_HTTP_SUPPORT && defined PROGRESS_EVENTS_SUPPORT
	OP_ATOM_upload,
#endif // DOM_HTTP_SUPPORT && PROGRESS_EVENTS_SUPPORT
#if defined WEBSERVER_SUPPORT || defined UPNP_SUPPORT
	OP_ATOM_upnpDeviceIcon,
	OP_ATOM_upnpDevicePayload,
#endif // WEBSERVER_SUPPORT || UPNP_SUPPORT
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT && defined OPERAUNITE_URL
	OP_ATOM_upnpEnabled,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT && OPERAUNITE_URL
	OP_ATOM_uri,
#if defined CLIENTSIDE_STORAGE_SUPPORT || defined UPNP_SUPPORT || defined WEBSOCKETS_SUPPORT
	OP_ATOM_url,
#endif // CLIENTSIDE_STORAGE_SUPPORT || UPNP_SUPPORT || WEBSOCKETS_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_useCurrentView,
#endif // SVG_DOM
	OP_ATOM_useMap,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_userAccountBalance,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_userAgent,
#ifdef WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_userDefinedTitle,
#endif // WEBFEEDS_BACKEND_SUPPORT
	OP_ATOM_userLanguage,
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_userName,
#endif // WEBSERVER_SUPPORT
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_userSubscriptionType,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_userZoom,
#ifdef OPERA_AUTH_SUPPORT
	OP_ATOM_username,
#endif // OPERA_AUTH_SUPPORT
#ifdef WEBSERVER_SUPPORT
	OP_ATOM_users,
#endif // WEBSERVER_SUPPORT
	OP_ATOM_vAlign,
	OP_ATOM_vLink,
	OP_ATOM_valid,
	OP_ATOM_validationMessage,
	OP_ATOM_validity,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_validityPeriodHours,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_value,
	OP_ATOM_valueAsDate,
	OP_ATOM_valueAsNumber,
#ifdef SVG_DOM
	OP_ATOM_valueAsString,
	OP_ATOM_valueInSpecifiedUnits,
#endif // SVG_DOM
	OP_ATOM_valueMissing,
	OP_ATOM_valueType,
#ifdef SVG_DOM
	OP_ATOM_values,
	OP_ATOM_vectorEffect,
#endif // SVG_DOM
	OP_ATOM_version,
	OP_ATOM_verticalAlign,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_vibrationSetting,
#endif // DOM_JIL_API_SUPPORT
#ifdef MEDIA_HTML_SUPPORT
	OP_ATOM_videoHeight,
	OP_ATOM_videoWidth,
#endif // MEDIA_HTML_SUPPORT
	OP_ATOM_view,
#ifdef SVG_DOM
	OP_ATOM_viewBox,
	OP_ATOM_viewport,
	OP_ATOM_viewportElement,
	OP_ATOM_viewportFill,
	OP_ATOM_viewportFillOpacity,
#endif // SVG_DOM
	OP_ATOM_visibility,
	OP_ATOM_visibilityState,
#if defined GADGET_SUPPORT && defined WEBSERVER_SUPPORT
	OP_ATOM_visibleToLocalNetwork,
	OP_ATOM_visibleToSearchEngines,
	OP_ATOM_visibleToServiceDiscovery,
#endif // GADGET_SUPPORT && WEBSERVER_SUPPORT
	OP_ATOM_vlinkColor,
	OP_ATOM_volume,
	OP_ATOM_vspace,
#ifdef WEBSOCKETS_SUPPORT
	OP_ATOM_wasClean,
#endif // WEBSOCKETS_SUPPORT
#ifdef DOM2_TRAVERSAL
	OP_ATOM_whatToShow,
#endif // DOM2_TRAVERSAL
	OP_ATOM_wheelDelta,
	OP_ATOM_wheelDeltaX,
	OP_ATOM_wheelDeltaY,
	OP_ATOM_which,
	OP_ATOM_whiteSpace,
	OP_ATOM_wholeText,
	OP_ATOM_widgetMode,
#ifdef GADGET_SUPPORT
	OP_ATOM_widgets,
#endif // GADGET_SUPPORT
	OP_ATOM_widows,
	OP_ATOM_width,
	OP_ATOM_willValidate,
	OP_ATOM_window,
#ifdef EXTENSION_SUPPORT
	OP_ATOM_windows,
#endif // EXTENSION_SUPPORT
#ifdef CORS_SUPPORT
	OP_ATOM_withCredentials,
#endif // CORS_SUPPORT
	OP_ATOM_wordSpacing,
	OP_ATOM_wordWrap,
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_workPhone,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_wrap,
#ifdef SVG_DOM
	OP_ATOM_writingMode,
#endif // SVG_DOM
	OP_ATOM_x,
#ifdef SVG_DOM
	OP_ATOM_x1,
	OP_ATOM_x2,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_xAxis,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_xChannelSelector,
	OP_ATOM_xmlbase,
	OP_ATOM_xmlspace,
#endif // SVG_DOM
	OP_ATOM_y,
#ifdef SVG_DOM
	OP_ATOM_y1,
	OP_ATOM_y2,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_yAxis,
#endif // DOM_JIL_API_SUPPORT
#ifdef SVG_DOM
	OP_ATOM_yChannelSelector,
	OP_ATOM_z,
#endif // SVG_DOM
#ifdef DOM_JIL_API_SUPPORT
	OP_ATOM_zAxis,
#endif // DOM_JIL_API_SUPPORT
	OP_ATOM_zIndex,
	OP_ATOM_zoom,
#ifdef SVG_DOM
	OP_ATOM_zoomAndPan,
#endif // SVG_DOM

	OP_ATOM_ABSOLUTELY_LAST_ENUM
};

extern const unsigned g_DOM_atomData[OP_ATOM_ABSOLUTELY_LAST_ENUM];
extern const unsigned short g_DOM_SVG_atomData[OP_ATOM_ABSOLUTELY_LAST_ENUM];

OpAtom DOM_StringToAtom(const uni_char *string);
const char *DOM_AtomToString(OpAtom atom);

Markup::AttrType DOM_AtomToHtmlAttribute(OpAtom atom);
int DOM_AtomToCssProperty(OpAtom atom);
Markup::AttrType DOM_AtomToSvgAttribute(OpAtom atom);

#endif // DOM_OPATOM_H
