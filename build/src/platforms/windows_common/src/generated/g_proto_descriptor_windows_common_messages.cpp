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

// Generated from ../../platforms/windows_common/messages.proto

#include "core/pch.h"




#ifdef _WIN32

#include "platforms/windows_common/src/generated/g_proto_descriptor_windows_common_messages.h"
#include "platforms/windows_common/src/generated/g_proto_windows_common_messages.h"



// BEGIN: OpWindows_commonMessages_Descriptors

OpWindows_commonMessages_Descriptors::OpWindows_commonMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpWindows_commonMessages_Descriptors::~OpWindows_commonMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpWindows_commonMessages_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpWindows_commonMessages_Descriptors::Get(unsigned id) const
{
	OpWindows_commonMessages_Descriptors *descriptors = const_cast<OpWindows_commonMessages_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_windows_plugin_window_info_:
		return OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_windows_plugin_window_info_response_:
		return OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpWindows_commonMessages_Descriptors



#endif // _WIN32


