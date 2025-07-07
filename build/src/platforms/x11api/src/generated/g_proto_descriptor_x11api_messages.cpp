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

// Generated from ../../platforms/x11api/messages.proto

#include "core/pch.h"




#ifdef NS4P_UNIX_PLATFORM

#include "platforms/x11api/src/generated/g_proto_descriptor_x11api_messages.h"
#include "platforms/x11api/src/generated/g_proto_x11api_messages.h"



// BEGIN: OpX11apiMessages_Descriptors

OpX11apiMessages_Descriptors::OpX11apiMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpX11apiMessages_Descriptors::~OpX11apiMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpX11apiMessages_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpX11apiMessages_Descriptors::Get(unsigned id) const
{
	OpX11apiMessages_Descriptors *descriptors = const_cast<OpX11apiMessages_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_browser_window_information_:
		return OpX11apiMessages_MessageSet::BrowserWindowInformation::GetMessageDescriptor(descriptors);

	case _gen_MsgID_browser_window_information_response_:
		return OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_gtk_plug_added_:
		return OpX11apiMessages_MessageSet::PluginGtkPlugAdded::GetMessageDescriptor(descriptors);

	case _gen_MsgID_plugin_parent_changed_:
		return OpX11apiMessages_MessageSet::PluginParentChanged::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpX11apiMessages_Descriptors



#endif // NS4P_UNIX_PLATFORM


