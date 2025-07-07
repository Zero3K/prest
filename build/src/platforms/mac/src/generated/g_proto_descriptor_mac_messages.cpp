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

// Generated from ../../platforms/mac/pi/messages.proto

#include "core/pch.h"




#ifdef _MACINTOSH_

#include "platforms/mac/src/generated/g_proto_descriptor_mac_messages.h"
#include "platforms/mac/src/generated/g_proto_mac_messages.h"



// BEGIN: OpMacMessages_Descriptors

OpMacMessages_Descriptors::OpMacMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpMacMessages_Descriptors::~OpMacMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpMacMessages_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpMacMessages_Descriptors::Get(unsigned id) const
{
	OpMacMessages_Descriptors *descriptors = const_cast<OpMacMessages_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_mac_plugin_context_menu_shown_:
		return OpMacMessages_MessageSet::MacPluginContextMenuShown::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_cursor_shown_:
		return OpMacMessages_MessageSet::MacPluginCursorShown::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_desktop_window_movement_:
		return OpMacMessages_MessageSet::MacPluginDesktopWindowMovement::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_fullscreen_:
		return OpMacMessages_MessageSet::MacPluginFullscreen::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_ime_text_:
		return OpMacMessages_MessageSet::MacPluginIMEText::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_info_:
		return OpMacMessages_MessageSet::MacPluginInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_info_response_:
		return OpMacMessages_MessageSet::MacPluginInfoResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_update_view_:
		return OpMacMessages_MessageSet::MacPluginUpdateView::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_visibility_:
		return OpMacMessages_MessageSet::MacPluginVisibility::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mac_plugin_window_shown_:
		return OpMacMessages_MessageSet::MacPluginWindowShown::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpMacMessages_Descriptors



#endif // _MACINTOSH_


