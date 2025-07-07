/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
** Note: This file is generated, any modifications to this file will
**       be overwritten when the file is regenerated. See modules/protobuf/cpp.conf for
**       details on how this file is generated.
*/

// Generated from proto files in the system

#include "core/pch.h"



#include "modules/hardcore/src/generated/OpTypedMessageBase.h"
#include "adjunct/m2/src/generated/g_message_m2_mapimessage.h"
#include "modules/hardcore/src/generated/g_message_hardcore_legacy.h"
#include "modules/hardcore/src/generated/g_message_hardcore_messages.h"
#include "modules/ns4plugins/src/generated/g_message_ns4plugins_messages.h"
#include "modules/protobuf/src/generated/g_message_protobuf_order.h"
#include "modules/windowcommander/src/generated/g_message_windowcommander_messages.h"
#include "platforms/mac/src/generated/g_message_mac_messages.h"
#include "platforms/windows_common/src/generated/g_message_windows_common_messages.h"
#include "platforms/x11api/src/generated/g_message_x11api_messages.h"


/*static*/ BOOL
OpTypedMessageBase::VerifyType(int type)
{
	switch(type)
	{
		case OpCreateNewMailMessage::Type:
		// /home/baka/Build/browser/adjunct/m2/src/mapi/mapimessage.proto: CreateNewMail

		case OpLegacyMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/legacy.proto: Legacy

		case OpComponentManagerResponseMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: ComponentManagerResponse

		case OpComponentRequestMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: ComponentRequest

		case OpNumberMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: Number

		case OpPeerConnectedMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: PeerConnected

		case OpPeerDisconnectedMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: PeerDisconnected

		case OpPeerPendingMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: PeerPending

		case OpStatusMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: Status

		case OpTextMessage::Type:
		// /home/baka/Build/browser/modules/hardcore/component/messages.proto: Text

		case OpPluginCallbackMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginCallback

		case OpPluginClearSiteDataMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginClearSiteData

		case OpPluginCreateObjectMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginCreateObject

		case OpPluginCreateObjectResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginCreateObjectResponse

		case OpPluginDestroyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginDestroy

		case OpPluginDestroyResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginDestroyResponse

		case OpPluginDestroyStreamMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginDestroyStream

		case OpPluginEnumerateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginEnumerate

		case OpPluginEnumerateResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginEnumerateResponse

		case OpPluginErrorMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginError

		case OpPluginEvaluateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginEvaluate

		case OpPluginExceptionMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginException

		case OpPluginFocusEventMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginFocusEvent

		case OpPluginGetAuthenticationInfoMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetAuthenticationInfo

		case OpPluginGetAuthenticationInfoResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetAuthenticationInfoResponse

		case OpPluginGetIntIdentifierMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetIntIdentifier

		case OpPluginGetPropertyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetProperty

		case OpPluginGetSitesWithDataMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetSitesWithData

		case OpPluginGetSitesWithDataResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetSitesWithDataResponse

		case OpPluginGetStringIdentifiersMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetStringIdentifiers

		case OpPluginGetURLMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetURL

		case OpPluginGetURLNotifyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetURLNotify

		case OpPluginGetValueMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValue

		case OpPluginGetValueForURLMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValueForURL

		case OpPluginGetValueForURLResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValueForURLResponse

		case OpPluginGetValueResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValueResponse

		case OpPluginHasMethodMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginHasMethod

		case OpPluginHasPropertyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginHasProperty

		case OpPluginIdentifiersMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginIdentifiers

		case OpPluginInitializeMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInitialize

		case OpPluginInitializeResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInitializeResponse

		case OpPluginInvalidateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInvalidate

		case OpPluginInvokeMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInvoke

		case OpPluginInvokeDefaultMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInvokeDefault

		case OpPluginLoadMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLoad

		case OpPluginLoadResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLoadResponse

		case OpPluginLookupIdentifierMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLookupIdentifier

		case OpPluginLookupIdentifierResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLookupIdentifierResponse

		case OpPluginNewMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNew

		case OpPluginNewResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNewResponse

		case OpPluginNewStreamMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNewStream

		case OpPluginNewStreamResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNewStreamResponse

		case OpPluginNotifyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNotify

		case OpPluginObjectConstructMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectConstruct

		case OpPluginObjectDeallocateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectDeallocate

		case OpPluginObjectEnumerateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectEnumerate

		case OpPluginObjectEnumerateResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectEnumerateResponse

		case OpPluginObjectInvalidateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectInvalidate

		case OpPluginObjectStateMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectState

		case OpPluginPlatformEventMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPlatformEvent

		case OpPluginPopPopupsEnabledMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPopPopupsEnabled

		case OpPluginPostURLMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPostURL

		case OpPluginPostURLNotifyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPostURLNotify

		case OpPluginProbeMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginProbe

		case OpPluginProbeResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginProbeResponse

		case OpPluginPushPopupsEnabledMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPushPopupsEnabled

		case OpPluginReleaseObjectMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginReleaseObject

		case OpPluginReloadMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginReload

		case OpPluginRemovePropertyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginRemoveProperty

		case OpPluginResultMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginResult

		case OpPluginRetainObjectMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginRetainObject

		case OpPluginSetPropertyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginSetProperty

		case OpPluginSetValueMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginSetValue

		case OpPluginSetValueForURLMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginSetValueForURL

		case OpPluginShutdownMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginShutdown

		case OpPluginStatusTextMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginStatusText

		case OpPluginStreamAsFileMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginStreamAsFile

		case OpPluginTimerMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginTimer

		case OpPluginUserAgentMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginUserAgent

		case OpPluginUserAgentResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginUserAgentResponse

		case OpPluginWindowMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindow

		case OpPluginWindowlessHandleEventResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessHandleEventResponse

		case OpPluginWindowlessKeyEventMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessKeyEvent

		case OpPluginWindowlessMouseEventMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessMouseEvent

		case OpPluginWindowlessPaintMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessPaint

		case OpPluginWriteMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWrite

		case OpPluginWriteReadyMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWriteReady

		case OpPluginWriteReadyResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWriteReadyResponse

		case OpPluginWriteResponseMessage::Type:
		// /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWriteResponse

#ifdef SELFTEST
		case OpTestOpStringOrderMessage::Type:
		// /home/baka/Build/browser/modules/protobuf/selftest/order.proto: TestOpStringOrder

#endif // SELFTEST
#ifdef SELFTEST
		case OpTestOrderMessage::Type:
		// /home/baka/Build/browser/modules/protobuf/selftest/order.proto: TestOrder

#endif // SELFTEST
		case OpPopupMenuRequestMessage::Type:
		// /home/baka/Build/browser/modules/windowcommander/component/messages.proto: PopupMenuRequest

#ifdef _MACINTOSH_
		case OpMacPluginContextMenuShownMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginContextMenuShown

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginCursorShownMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginCursorShown

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginDesktopWindowMovementMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginDesktopWindowMovement

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginFullscreenMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginFullscreen

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginIMETextMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginIMEText

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginInfoMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginInfo

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginInfoResponseMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginInfoResponse

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginUpdateViewMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginUpdateView

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginVisibilityMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginVisibility

#endif // _MACINTOSH_
#ifdef _MACINTOSH_
		case OpMacPluginWindowShownMessage::Type:
		// /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginWindowShown

#endif // _MACINTOSH_
#ifdef _WIN32
		case OpWindowsPluginWindowInfoMessage::Type:
		// /home/baka/Build/browser/platforms/windows_common/messages.proto: WindowsPluginWindowInfo

#endif // _WIN32
#ifdef _WIN32
		case OpWindowsPluginWindowInfoResponseMessage::Type:
		// /home/baka/Build/browser/platforms/windows_common/messages.proto: WindowsPluginWindowInfoResponse

#endif // _WIN32
#ifdef NS4P_UNIX_PLATFORM
		case OpBrowserWindowInformationMessage::Type:
		// /home/baka/Build/browser/platforms/x11api/messages.proto: BrowserWindowInformation

#endif // NS4P_UNIX_PLATFORM
#ifdef NS4P_UNIX_PLATFORM
		case OpBrowserWindowInformationResponseMessage::Type:
		// /home/baka/Build/browser/platforms/x11api/messages.proto: BrowserWindowInformationResponse

#endif // NS4P_UNIX_PLATFORM
#ifdef NS4P_UNIX_PLATFORM
		case OpPluginGtkPlugAddedMessage::Type:
		// /home/baka/Build/browser/platforms/x11api/messages.proto: PluginGtkPlugAdded

#endif // NS4P_UNIX_PLATFORM
#ifdef NS4P_UNIX_PLATFORM
		case OpPluginParentChangedMessage::Type:
		// /home/baka/Build/browser/platforms/x11api/messages.proto: PluginParentChanged

#endif // NS4P_UNIX_PLATFORM

			return TRUE;

		default:
			return FALSE;
	}
}


/*static*/ OpTypedMessage*
OpTypedMessageBase::DeserializeData(
    int type,
    const OpMessageAddress& src,
    const OpMessageAddress& dst,
    double delay,
    const OpData& data)
{
	// Decode the serialized data by matching @a type against the Type in one of the sub-classes of OpTypedMessage
	switch(type)
	{
		case OpCreateNewMailMessage::Type:
		    // /home/baka/Build/browser/adjunct/m2/src/mapi/mapimessage.proto: CreateNewMail
		    return OpCreateNewMailMessage::Deserialize(src, dst, delay, data);

		case OpLegacyMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/legacy.proto: Legacy
		    return OpLegacyMessage::Deserialize(src, dst, delay, data);

		case OpComponentManagerResponseMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: ComponentManagerResponse
		    return OpComponentManagerResponseMessage::Deserialize(src, dst, delay, data);

		case OpComponentRequestMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: ComponentRequest
		    return OpComponentRequestMessage::Deserialize(src, dst, delay, data);

		case OpNumberMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: Number
		    return OpNumberMessage::Deserialize(src, dst, delay, data);

		case OpPeerConnectedMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: PeerConnected
		    return OpPeerConnectedMessage::Deserialize(src, dst, delay, data);

		case OpPeerDisconnectedMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: PeerDisconnected
		    return OpPeerDisconnectedMessage::Deserialize(src, dst, delay, data);

		case OpPeerPendingMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: PeerPending
		    return OpPeerPendingMessage::Deserialize(src, dst, delay, data);

		case OpStatusMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: Status
		    return OpStatusMessage::Deserialize(src, dst, delay, data);

		case OpTextMessage::Type:
		    // /home/baka/Build/browser/modules/hardcore/component/messages.proto: Text
		    return OpTextMessage::Deserialize(src, dst, delay, data);

		case OpPluginCallbackMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginCallback
		    return OpPluginCallbackMessage::Deserialize(src, dst, delay, data);

		case OpPluginClearSiteDataMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginClearSiteData
		    return OpPluginClearSiteDataMessage::Deserialize(src, dst, delay, data);

		case OpPluginCreateObjectMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginCreateObject
		    return OpPluginCreateObjectMessage::Deserialize(src, dst, delay, data);

		case OpPluginCreateObjectResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginCreateObjectResponse
		    return OpPluginCreateObjectResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginDestroyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginDestroy
		    return OpPluginDestroyMessage::Deserialize(src, dst, delay, data);

		case OpPluginDestroyResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginDestroyResponse
		    return OpPluginDestroyResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginDestroyStreamMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginDestroyStream
		    return OpPluginDestroyStreamMessage::Deserialize(src, dst, delay, data);

		case OpPluginEnumerateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginEnumerate
		    return OpPluginEnumerateMessage::Deserialize(src, dst, delay, data);

		case OpPluginEnumerateResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginEnumerateResponse
		    return OpPluginEnumerateResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginErrorMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginError
		    return OpPluginErrorMessage::Deserialize(src, dst, delay, data);

		case OpPluginEvaluateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginEvaluate
		    return OpPluginEvaluateMessage::Deserialize(src, dst, delay, data);

		case OpPluginExceptionMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginException
		    return OpPluginExceptionMessage::Deserialize(src, dst, delay, data);

		case OpPluginFocusEventMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginFocusEvent
		    return OpPluginFocusEventMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetAuthenticationInfoMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetAuthenticationInfo
		    return OpPluginGetAuthenticationInfoMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetAuthenticationInfoResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetAuthenticationInfoResponse
		    return OpPluginGetAuthenticationInfoResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetIntIdentifierMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetIntIdentifier
		    return OpPluginGetIntIdentifierMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetPropertyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetProperty
		    return OpPluginGetPropertyMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetSitesWithDataMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetSitesWithData
		    return OpPluginGetSitesWithDataMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetSitesWithDataResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetSitesWithDataResponse
		    return OpPluginGetSitesWithDataResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetStringIdentifiersMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetStringIdentifiers
		    return OpPluginGetStringIdentifiersMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetURLMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetURL
		    return OpPluginGetURLMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetURLNotifyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetURLNotify
		    return OpPluginGetURLNotifyMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetValueMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValue
		    return OpPluginGetValueMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetValueForURLMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValueForURL
		    return OpPluginGetValueForURLMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetValueForURLResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValueForURLResponse
		    return OpPluginGetValueForURLResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginGetValueResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginGetValueResponse
		    return OpPluginGetValueResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginHasMethodMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginHasMethod
		    return OpPluginHasMethodMessage::Deserialize(src, dst, delay, data);

		case OpPluginHasPropertyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginHasProperty
		    return OpPluginHasPropertyMessage::Deserialize(src, dst, delay, data);

		case OpPluginIdentifiersMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginIdentifiers
		    return OpPluginIdentifiersMessage::Deserialize(src, dst, delay, data);

		case OpPluginInitializeMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInitialize
		    return OpPluginInitializeMessage::Deserialize(src, dst, delay, data);

		case OpPluginInitializeResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInitializeResponse
		    return OpPluginInitializeResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginInvalidateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInvalidate
		    return OpPluginInvalidateMessage::Deserialize(src, dst, delay, data);

		case OpPluginInvokeMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInvoke
		    return OpPluginInvokeMessage::Deserialize(src, dst, delay, data);

		case OpPluginInvokeDefaultMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginInvokeDefault
		    return OpPluginInvokeDefaultMessage::Deserialize(src, dst, delay, data);

		case OpPluginLoadMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLoad
		    return OpPluginLoadMessage::Deserialize(src, dst, delay, data);

		case OpPluginLoadResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLoadResponse
		    return OpPluginLoadResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginLookupIdentifierMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLookupIdentifier
		    return OpPluginLookupIdentifierMessage::Deserialize(src, dst, delay, data);

		case OpPluginLookupIdentifierResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginLookupIdentifierResponse
		    return OpPluginLookupIdentifierResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginNewMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNew
		    return OpPluginNewMessage::Deserialize(src, dst, delay, data);

		case OpPluginNewResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNewResponse
		    return OpPluginNewResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginNewStreamMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNewStream
		    return OpPluginNewStreamMessage::Deserialize(src, dst, delay, data);

		case OpPluginNewStreamResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNewStreamResponse
		    return OpPluginNewStreamResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginNotifyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginNotify
		    return OpPluginNotifyMessage::Deserialize(src, dst, delay, data);

		case OpPluginObjectConstructMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectConstruct
		    return OpPluginObjectConstructMessage::Deserialize(src, dst, delay, data);

		case OpPluginObjectDeallocateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectDeallocate
		    return OpPluginObjectDeallocateMessage::Deserialize(src, dst, delay, data);

		case OpPluginObjectEnumerateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectEnumerate
		    return OpPluginObjectEnumerateMessage::Deserialize(src, dst, delay, data);

		case OpPluginObjectEnumerateResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectEnumerateResponse
		    return OpPluginObjectEnumerateResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginObjectInvalidateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectInvalidate
		    return OpPluginObjectInvalidateMessage::Deserialize(src, dst, delay, data);

		case OpPluginObjectStateMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginObjectState
		    return OpPluginObjectStateMessage::Deserialize(src, dst, delay, data);

		case OpPluginPlatformEventMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPlatformEvent
		    return OpPluginPlatformEventMessage::Deserialize(src, dst, delay, data);

		case OpPluginPopPopupsEnabledMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPopPopupsEnabled
		    return OpPluginPopPopupsEnabledMessage::Deserialize(src, dst, delay, data);

		case OpPluginPostURLMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPostURL
		    return OpPluginPostURLMessage::Deserialize(src, dst, delay, data);

		case OpPluginPostURLNotifyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPostURLNotify
		    return OpPluginPostURLNotifyMessage::Deserialize(src, dst, delay, data);

		case OpPluginProbeMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginProbe
		    return OpPluginProbeMessage::Deserialize(src, dst, delay, data);

		case OpPluginProbeResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginProbeResponse
		    return OpPluginProbeResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginPushPopupsEnabledMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginPushPopupsEnabled
		    return OpPluginPushPopupsEnabledMessage::Deserialize(src, dst, delay, data);

		case OpPluginReleaseObjectMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginReleaseObject
		    return OpPluginReleaseObjectMessage::Deserialize(src, dst, delay, data);

		case OpPluginReloadMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginReload
		    return OpPluginReloadMessage::Deserialize(src, dst, delay, data);

		case OpPluginRemovePropertyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginRemoveProperty
		    return OpPluginRemovePropertyMessage::Deserialize(src, dst, delay, data);

		case OpPluginResultMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginResult
		    return OpPluginResultMessage::Deserialize(src, dst, delay, data);

		case OpPluginRetainObjectMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginRetainObject
		    return OpPluginRetainObjectMessage::Deserialize(src, dst, delay, data);

		case OpPluginSetPropertyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginSetProperty
		    return OpPluginSetPropertyMessage::Deserialize(src, dst, delay, data);

		case OpPluginSetValueMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginSetValue
		    return OpPluginSetValueMessage::Deserialize(src, dst, delay, data);

		case OpPluginSetValueForURLMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginSetValueForURL
		    return OpPluginSetValueForURLMessage::Deserialize(src, dst, delay, data);

		case OpPluginShutdownMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginShutdown
		    return OpPluginShutdownMessage::Deserialize(src, dst, delay, data);

		case OpPluginStatusTextMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginStatusText
		    return OpPluginStatusTextMessage::Deserialize(src, dst, delay, data);

		case OpPluginStreamAsFileMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginStreamAsFile
		    return OpPluginStreamAsFileMessage::Deserialize(src, dst, delay, data);

		case OpPluginTimerMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginTimer
		    return OpPluginTimerMessage::Deserialize(src, dst, delay, data);

		case OpPluginUserAgentMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginUserAgent
		    return OpPluginUserAgentMessage::Deserialize(src, dst, delay, data);

		case OpPluginUserAgentResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginUserAgentResponse
		    return OpPluginUserAgentResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginWindowMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindow
		    return OpPluginWindowMessage::Deserialize(src, dst, delay, data);

		case OpPluginWindowlessHandleEventResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessHandleEventResponse
		    return OpPluginWindowlessHandleEventResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginWindowlessKeyEventMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessKeyEvent
		    return OpPluginWindowlessKeyEventMessage::Deserialize(src, dst, delay, data);

		case OpPluginWindowlessMouseEventMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessMouseEvent
		    return OpPluginWindowlessMouseEventMessage::Deserialize(src, dst, delay, data);

		case OpPluginWindowlessPaintMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWindowlessPaint
		    return OpPluginWindowlessPaintMessage::Deserialize(src, dst, delay, data);

		case OpPluginWriteMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWrite
		    return OpPluginWriteMessage::Deserialize(src, dst, delay, data);

		case OpPluginWriteReadyMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWriteReady
		    return OpPluginWriteReadyMessage::Deserialize(src, dst, delay, data);

		case OpPluginWriteReadyResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWriteReadyResponse
		    return OpPluginWriteReadyResponseMessage::Deserialize(src, dst, delay, data);

		case OpPluginWriteResponseMessage::Type:
		    // /home/baka/Build/browser/modules/ns4plugins/component/messages.proto: PluginWriteResponse
		    return OpPluginWriteResponseMessage::Deserialize(src, dst, delay, data);

#	ifdef SELFTEST
		case OpTestOpStringOrderMessage::Type:
		    // /home/baka/Build/browser/modules/protobuf/selftest/order.proto: TestOpStringOrder
		    return OpTestOpStringOrderMessage::Deserialize(src, dst, delay, data);

#	endif // SELFTEST
#	ifdef SELFTEST
		case OpTestOrderMessage::Type:
		    // /home/baka/Build/browser/modules/protobuf/selftest/order.proto: TestOrder
		    return OpTestOrderMessage::Deserialize(src, dst, delay, data);

#	endif // SELFTEST
		case OpPopupMenuRequestMessage::Type:
		    // /home/baka/Build/browser/modules/windowcommander/component/messages.proto: PopupMenuRequest
		    return OpPopupMenuRequestMessage::Deserialize(src, dst, delay, data);

#	ifdef _MACINTOSH_
		case OpMacPluginContextMenuShownMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginContextMenuShown
		    return OpMacPluginContextMenuShownMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginCursorShownMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginCursorShown
		    return OpMacPluginCursorShownMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginDesktopWindowMovementMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginDesktopWindowMovement
		    return OpMacPluginDesktopWindowMovementMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginFullscreenMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginFullscreen
		    return OpMacPluginFullscreenMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginIMETextMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginIMEText
		    return OpMacPluginIMETextMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginInfoMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginInfo
		    return OpMacPluginInfoMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginInfoResponseMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginInfoResponse
		    return OpMacPluginInfoResponseMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginUpdateViewMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginUpdateView
		    return OpMacPluginUpdateViewMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginVisibilityMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginVisibility
		    return OpMacPluginVisibilityMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _MACINTOSH_
		case OpMacPluginWindowShownMessage::Type:
		    // /home/baka/Build/browser/platforms/mac/pi/messages.proto: MacPluginWindowShown
		    return OpMacPluginWindowShownMessage::Deserialize(src, dst, delay, data);

#	endif // _MACINTOSH_
#	ifdef _WIN32
		case OpWindowsPluginWindowInfoMessage::Type:
		    // /home/baka/Build/browser/platforms/windows_common/messages.proto: WindowsPluginWindowInfo
		    return OpWindowsPluginWindowInfoMessage::Deserialize(src, dst, delay, data);

#	endif // _WIN32
#	ifdef _WIN32
		case OpWindowsPluginWindowInfoResponseMessage::Type:
		    // /home/baka/Build/browser/platforms/windows_common/messages.proto: WindowsPluginWindowInfoResponse
		    return OpWindowsPluginWindowInfoResponseMessage::Deserialize(src, dst, delay, data);

#	endif // _WIN32
#	ifdef NS4P_UNIX_PLATFORM
		case OpBrowserWindowInformationMessage::Type:
		    // /home/baka/Build/browser/platforms/x11api/messages.proto: BrowserWindowInformation
		    return OpBrowserWindowInformationMessage::Deserialize(src, dst, delay, data);

#	endif // NS4P_UNIX_PLATFORM
#	ifdef NS4P_UNIX_PLATFORM
		case OpBrowserWindowInformationResponseMessage::Type:
		    // /home/baka/Build/browser/platforms/x11api/messages.proto: BrowserWindowInformationResponse
		    return OpBrowserWindowInformationResponseMessage::Deserialize(src, dst, delay, data);

#	endif // NS4P_UNIX_PLATFORM
#	ifdef NS4P_UNIX_PLATFORM
		case OpPluginGtkPlugAddedMessage::Type:
		    // /home/baka/Build/browser/platforms/x11api/messages.proto: PluginGtkPlugAdded
		    return OpPluginGtkPlugAddedMessage::Deserialize(src, dst, delay, data);

#	endif // NS4P_UNIX_PLATFORM
#	ifdef NS4P_UNIX_PLATFORM
		case OpPluginParentChangedMessage::Type:
		    // /home/baka/Build/browser/platforms/x11api/messages.proto: PluginParentChanged
		    return OpPluginParentChangedMessage::Deserialize(src, dst, delay, data);

#	endif // NS4P_UNIX_PLATFORM


		default:
			OP_ASSERT(!"Unknown message type, cannot decode");
			return NULL;
	}
}


