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

#include "platforms/x11api/src/generated/g_proto_x11api_messages.h"
#include "platforms/x11api/src/generated/g_proto_descriptor_x11api_messages.h"
#include "platforms/x11api/src/generated/g_proto_descriptor_x11api_messages.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpX11apiMessages_MessageSet

OpX11apiMessages_MessageSet::OpX11apiMessages_MessageSet()
{
}

/*virtual*/
OpX11apiMessages_MessageSet::~OpX11apiMessages_MessageSet()
{
}

// END: OpX11apiMessages_MessageSet

// BEGIN: Messages

//   BEGIN: Message: BrowserWindowInformation
/*static*/
const OpProtobufMessage *
OpX11apiMessages_MessageSet::BrowserWindowInformation::GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpX11apiMessages_Descriptors::_gen_MessageOffs_browser_window_information_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpX11apiMessages_Descriptors::_gen_MsgID_browser_window_information_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::BrowserWindowInformation, has_bits_),
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::BrowserWindowInformation, encoded_size_),
					"BrowserWindowInformation",
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::BrowserWindowInformation>::Make,
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::BrowserWindowInformation>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BrowserWindowInformation: Implementation


// END: BrowserWindowInformation: Implementation

//   END: Message: BrowserWindowInformation

//   BEGIN: Message: BrowserWindowInformationResponse
/*static*/
const OpProtobufMessage *
OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpX11apiMessages_Descriptors::_gen_MessageOffs_browser_window_information_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("displayName"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("screenNumber"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("window"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpX11apiMessages_MessageSet::BrowserWindowInformationResponse,
						_displayName
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpX11apiMessages_MessageSet::BrowserWindowInformationResponse,
						_screenNumber
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpX11apiMessages_MessageSet::BrowserWindowInformationResponse,
						_window
						);

	message = OP_NEW(OpProtobufMessage,
					(OpX11apiMessages_Descriptors::_gen_MsgID_browser_window_information_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::BrowserWindowInformationResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::BrowserWindowInformationResponse, encoded_size_),
					"BrowserWindowInformationResponse",
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::BrowserWindowInformationResponse>::Make,
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::BrowserWindowInformationResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BrowserWindowInformationResponse: Implementation

// Setters

OP_STATUS
OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::SetDisplayName(const UniString & v) 
{
	_displayName = v;
	return OpStatus::OK;
}


OP_STATUS
OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::SetDisplayName(const uni_char * v, int l) 
{
	return _displayName.SetCopyData(v, l);
}

// END: BrowserWindowInformationResponse: Implementation

//   END: Message: BrowserWindowInformationResponse

//   BEGIN: Message: PluginGtkPlugAdded
/*static*/
const OpProtobufMessage *
OpX11apiMessages_MessageSet::PluginGtkPlugAdded::GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpX11apiMessages_Descriptors::_gen_MessageOffs_plugin_gtk_plug_added_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint64,
						1,
						UNI_L("plug"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpX11apiMessages_MessageSet::PluginGtkPlugAdded,
						_plug
						);

	message = OP_NEW(OpProtobufMessage,
					(OpX11apiMessages_Descriptors::_gen_MsgID_plugin_gtk_plug_added_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::PluginGtkPlugAdded, has_bits_),
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::PluginGtkPlugAdded, encoded_size_),
					"PluginGtkPlugAdded",
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::PluginGtkPlugAdded>::Make,
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::PluginGtkPlugAdded>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGtkPlugAdded: Implementation


// END: PluginGtkPlugAdded: Implementation

//   END: Message: PluginGtkPlugAdded

//   BEGIN: Message: PluginParentChanged
/*static*/
const OpProtobufMessage *
OpX11apiMessages_MessageSet::PluginParentChanged::GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpX11apiMessages_Descriptors::_gen_MessageOffs_plugin_parent_changed_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint64,
						1,
						UNI_L("parent"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpX11apiMessages_MessageSet::PluginParentChanged,
						_parent
						);

	message = OP_NEW(OpProtobufMessage,
					(OpX11apiMessages_Descriptors::_gen_MsgID_plugin_parent_changed_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::PluginParentChanged, has_bits_),
					OP_PROTO_OFFSETOF(OpX11apiMessages_MessageSet::PluginParentChanged, encoded_size_),
					"PluginParentChanged",
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::PluginParentChanged>::Make,
					OpProtobufMessageVector<OpX11apiMessages_MessageSet::PluginParentChanged>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginParentChanged: Implementation


// END: PluginParentChanged: Implementation

//   END: Message: PluginParentChanged


// END: Messages



#endif // NS4P_UNIX_PLATFORM


