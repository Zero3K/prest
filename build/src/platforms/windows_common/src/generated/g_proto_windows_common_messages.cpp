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

#include "platforms/windows_common/src/generated/g_proto_windows_common_messages.h"
#include "platforms/windows_common/src/generated/g_proto_descriptor_windows_common_messages.h"
#include "platforms/windows_common/src/generated/g_proto_descriptor_windows_common_messages.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpWindows_commonMessages_MessageSet

OpWindows_commonMessages_MessageSet::OpWindows_commonMessages_MessageSet()
{
}

/*virtual*/
OpWindows_commonMessages_MessageSet::~OpWindows_commonMessages_MessageSet()
{
}

// END: OpWindows_commonMessages_MessageSet

// BEGIN: Messages

//   BEGIN: Message: WindowsPluginWindowInfo
/*static*/
const OpProtobufMessage *
OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo::GetMessageDescriptor(OpWindows_commonMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpWindows_commonMessages_Descriptors::_gen_MessageOffs_windows_plugin_window_info_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpWindows_commonMessages_Descriptors::_gen_MsgID_windows_plugin_window_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo, encoded_size_),
					"WindowsPluginWindowInfo",
					OpProtobufMessageVector<OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo>::Make,
					OpProtobufMessageVector<OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WindowsPluginWindowInfo: Implementation


// END: WindowsPluginWindowInfo: Implementation

//   END: Message: WindowsPluginWindowInfo

//   BEGIN: Message: WindowsPluginWindowInfoResponse
/*static*/
const OpProtobufMessage *
OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse::GetMessageDescriptor(OpWindows_commonMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpWindows_commonMessages_Descriptors::_gen_MessageOffs_windows_plugin_window_info_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						1,
						UNI_L("window"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						2,
						UNI_L("renderContext"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse,
						_window
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse,
						_renderContext
						);

	message = OP_NEW(OpProtobufMessage,
					(OpWindows_commonMessages_Descriptors::_gen_MsgID_windows_plugin_window_info_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse, encoded_size_),
					"WindowsPluginWindowInfoResponse",
					OpProtobufMessageVector<OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse>::Make,
					OpProtobufMessageVector<OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WindowsPluginWindowInfoResponse: Implementation


// END: WindowsPluginWindowInfoResponse: Implementation

//   END: Message: WindowsPluginWindowInfoResponse


// END: Messages



#endif // _WIN32


