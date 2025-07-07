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

// Generated from ../../modules/ns4plugins/component/messages.proto

#include "core/pch.h"






#include "modules/ns4plugins/src/generated/g_proto_ns4plugins_messages.h"
#include "modules/ns4plugins/src/generated/g_proto_descriptor_ns4plugins_messages.h"
#include "modules/ns4plugins/src/generated/g_proto_descriptor_ns4plugins_messages.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpNs4pluginsMessages_MessageSet

OpNs4pluginsMessages_MessageSet::OpNs4pluginsMessages_MessageSet()
{
}

/*virtual*/
OpNs4pluginsMessages_MessageSet::~OpNs4pluginsMessages_MessageSet()
{
}

// END: OpNs4pluginsMessages_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Argument
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginNew_Argument::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_new_argument_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew_Argument,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew_Argument,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_new_argument_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNew_Argument, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNew_Argument, encoded_size_),
					"Argument",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpNs4pluginsMessages_MessageSet::PluginNew::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PluginNew.Argument: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNew_Argument::SetName(const UniString & v) 
{
	_name = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNew_Argument::SetName(const uni_char * v, int l) 
{
	return _name.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNew_Argument::SetValue(const UniString & v) 
{
	has_bits_.Reference().SetBit(1);
	_value = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNew_Argument::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _value.SetCopyData(v, l);
}

// END: PluginNew.Argument: Implementation

//   END: Message: Argument

//   BEGIN: Message: ContentType
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_probe_response_content_type_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("contentType"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("description"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("extensions"),
						OpProtobufField::Repeated
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType,
						_contentType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType,
						_description
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType,
						_extensions
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_probe_response_content_type_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType, encoded_size_),
					"ContentType",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PluginProbeResponse.ContentType: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::SetContentType(const UniString & v) 
{
	_contentType = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::SetContentType(const uni_char * v, int l) 
{
	return _contentType.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::SetDescription(const UniString & v) 
{
	_description = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::SetDescription(const uni_char * v, int l) 
{
	return _description.SetCopyData(v, l);
}


OpProtobufValueVector<UniString> &
OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType::GetExtensionsRef() 
{
	has_bits_.Reference().SetBit(2);
	return _extensions;
}

// END: PluginProbeResponse.ContentType: Implementation

//   END: Message: ContentType

//   BEGIN: Message: LibraryPath
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_enumerate_response_library_path_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("path"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath,
						_path
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath,
						_type
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_enumerate_response_library_path_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath, encoded_size_),
					"LibraryPath",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PluginEnumerateResponse.LibraryPath: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath::SetPath(const UniString & v) 
{
	_path = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath::SetPath(const uni_char * v, int l) 
{
	return _path.SetCopyData(v, l);
}

// END: PluginEnumerateResponse.LibraryPath: Implementation

//   END: Message: LibraryPath

//   BEGIN: Message: MessageAddress
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::MessageAddress::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_message_address_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("manager"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("component"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("channel"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::MessageAddress,
						_manager
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::MessageAddress,
						_component
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::MessageAddress,
						_channel
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_message_address_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::MessageAddress, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::MessageAddress, encoded_size_),
					"MessageAddress",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::MessageAddress>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::MessageAddress>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MessageAddress: Implementation


// END: MessageAddress: Implementation

//   END: Message: MessageAddress

//   BEGIN: Message: PluginCallback
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginCallback::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_callback_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint64,
						1,
						UNI_L("func"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint64,
						2,
						UNI_L("data"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginCallback,
						_func
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginCallback,
						_data
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_callback_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginCallback, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginCallback, encoded_size_),
					"PluginCallback",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginCallback>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginCallback>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginCallback: Implementation


// END: PluginCallback: Implementation

//   END: Message: PluginCallback

//   BEGIN: Message: PluginClearSiteData
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginClearSiteData::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_clear_site_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("site"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint64,
						2,
						UNI_L("flags"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint64,
						3,
						UNI_L("maxAge"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginClearSiteData,
						_site
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginClearSiteData,
						_flags
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginClearSiteData,
						_maxAge
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_clear_site_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginClearSiteData, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginClearSiteData, encoded_size_),
					"PluginClearSiteData",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginClearSiteData>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginClearSiteData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginClearSiteData: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginClearSiteData::SetSite(const UniString & v) 
{
	_site = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginClearSiteData::SetSite(const uni_char * v, int l) 
{
	return _site.SetCopyData(v, l);
}

// END: PluginClearSiteData: Implementation

//   END: Message: PluginClearSiteData

//   BEGIN: Message: PluginCreateObject
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginCreateObject::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_create_object_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_create_object_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginCreateObject, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginCreateObject, encoded_size_),
					"PluginCreateObject",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginCreateObject>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginCreateObject>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginCreateObject: Implementation


// END: PluginCreateObject: Implementation

//   END: Message: PluginCreateObject

//   BEGIN: Message: PluginCreateObjectResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_create_object_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_create_object_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse, encoded_size_),
					"PluginCreateObjectResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginCreateObjectResponse: Implementation

// Setters

void
OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse::SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_object);
	_object = v;
}

// END: PluginCreateObjectResponse: Implementation

//   END: Message: PluginCreateObjectResponse

//   BEGIN: Message: PluginDestroy
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginDestroy::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_destroy_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_destroy_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginDestroy, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginDestroy, encoded_size_),
					"PluginDestroy",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginDestroy>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginDestroy>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginDestroy: Implementation


// END: PluginDestroy: Implementation

//   END: Message: PluginDestroy

//   BEGIN: Message: PluginDestroyResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginDestroyResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_destroy_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						2,
						UNI_L("saved"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginDestroyResponse,
						_npError
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginDestroyResponse,
						_saved
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_destroy_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginDestroyResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginDestroyResponse, encoded_size_),
					"PluginDestroyResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginDestroyResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginDestroyResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginDestroyResponse: Implementation


// END: PluginDestroyResponse: Implementation

//   END: Message: PluginDestroyResponse

//   BEGIN: Message: PluginDestroyStream
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginDestroyStream::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_destroy_stream_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("stream"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("reason"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginDestroyStream,
						_stream
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginDestroyStream,
						_reason
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_destroy_stream_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginDestroyStream, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginDestroyStream, encoded_size_),
					"PluginDestroyStream",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginDestroyStream>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginDestroyStream>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginStream::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginDestroyStream: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginStream &
OpNs4pluginsMessages_MessageSet::PluginDestroyStream::GetStreamRef() 
{
	return _stream;
}

// END: PluginDestroyStream: Implementation

//   END: Message: PluginDestroyStream

//   BEGIN: Message: PluginEnumerate
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginEnumerate::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_enumerate_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("searchPaths"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEnumerate,
						_searchPaths
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_enumerate_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEnumerate, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEnumerate, encoded_size_),
					"PluginEnumerate",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerate>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerate>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginEnumerate: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginEnumerate::SetSearchPaths(const UniString & v) 
{
	_searchPaths = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginEnumerate::SetSearchPaths(const uni_char * v, int l) 
{
	return _searchPaths.SetCopyData(v, l);
}

// END: PluginEnumerate: Implementation

//   END: Message: PluginEnumerate

//   BEGIN: Message: PluginEnumerateResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_enumerate_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("libraryPaths"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse,
						_libraryPaths
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_enumerate_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse, encoded_size_),
					"PluginEnumerateResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginEnumerateResponse_LibraryPath::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginEnumerateResponse: Implementation


// Setters

OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> &
OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetLibraryPathsRef() 
{
	has_bits_.Reference().SetBit(0);
	return _libraryPaths;
}

// END: PluginEnumerateResponse: Implementation

//   END: Message: PluginEnumerateResponse

//   BEGIN: Message: PluginError
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginError::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_error_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginError,
						_npError
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_error_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginError, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginError, encoded_size_),
					"PluginError",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginError>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginError>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginError: Implementation


// END: PluginError: Implementation

//   END: Message: PluginError

//   BEGIN: Message: PluginEvaluate
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginEvaluate::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_evaluate_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("script"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("object"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEvaluate,
						_script
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEvaluate,
						_object
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginEvaluate,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_evaluate_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEvaluate, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginEvaluate, encoded_size_),
					"PluginEvaluate",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEvaluate>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEvaluate>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginEvaluate: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginEvaluate::SetScript(const UniString & v) 
{
	_script = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginEvaluate::SetScript(const uni_char * v, int l) 
{
	return _script.SetCopyData(v, l);
}


void
OpNs4pluginsMessages_MessageSet::PluginEvaluate::SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_object);
	_object = v;
}

// END: PluginEvaluate: Implementation

//   END: Message: PluginEvaluate

//   BEGIN: Message: PluginException
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginException::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_exception_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("message"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginException,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginException,
						_message
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_exception_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginException, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginException, encoded_size_),
					"PluginException",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginException>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginException>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginException: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginException::GetObjectRef() 
{
	return _object;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginException::SetMessage(const UniString & v) 
{
	_message = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginException::SetMessage(const uni_char * v, int l) 
{
	return _message.SetCopyData(v, l);
}

// END: PluginException: Implementation

//   END: Message: PluginException

//   BEGIN: Message: PluginFocusEvent
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginFocusEvent::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_focus_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("focus"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("reason"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginFocusEvent,
						_focus
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginFocusEvent,
						_reason
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_focus_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginFocusEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginFocusEvent, encoded_size_),
					"PluginFocusEvent",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginFocusEvent>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginFocusEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginFocusEvent: Implementation


// END: PluginFocusEvent: Implementation

//   END: Message: PluginFocusEvent

//   BEGIN: Message: PluginGetAuthenticationInfo
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_authentication_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("protocol"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("host"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("port"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("scheme"),
						OpProtobufField::Required
						);
	fields[3].SetStringDataType(OpProtobufField::String_UniString);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("realm"),
						OpProtobufField::Required
						);
	fields[4].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo,
						_protocol
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo,
						_host
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo,
						_port
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo,
						_scheme
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo,
						_realm
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_authentication_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo, encoded_size_),
					"PluginGetAuthenticationInfo",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetAuthenticationInfo: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetProtocol(const UniString & v) 
{
	_protocol = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetProtocol(const uni_char * v, int l) 
{
	return _protocol.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetHost(const UniString & v) 
{
	_host = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetHost(const uni_char * v, int l) 
{
	return _host.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetScheme(const UniString & v) 
{
	_scheme = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetScheme(const uni_char * v, int l) 
{
	return _scheme.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetRealm(const UniString & v) 
{
	_realm = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::SetRealm(const uni_char * v, int l) 
{
	return _realm.SetCopyData(v, l);
}

// END: PluginGetAuthenticationInfo: Implementation

//   END: Message: PluginGetAuthenticationInfo

//   BEGIN: Message: PluginGetAuthenticationInfoResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_authentication_info_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("username"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("password"),
						OpProtobufField::Required
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse,
						_npError
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse,
						_username
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse,
						_password
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_authentication_info_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse, encoded_size_),
					"PluginGetAuthenticationInfoResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetAuthenticationInfoResponse: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::SetUsername(const UniString & v) 
{
	_username = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::SetUsername(const uni_char * v, int l) 
{
	return _username.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::SetPassword(const UniString & v) 
{
	_password = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::SetPassword(const uni_char * v, int l) 
{
	return _password.SetCopyData(v, l);
}

// END: PluginGetAuthenticationInfoResponse: Implementation

//   END: Message: PluginGetAuthenticationInfoResponse

//   BEGIN: Message: PluginGetIntIdentifier
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_int_identifier_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("number"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier,
						_number
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_int_identifier_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier, encoded_size_),
					"PluginGetIntIdentifier",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetIntIdentifier: Implementation


// END: PluginGetIntIdentifier: Implementation

//   END: Message: PluginGetIntIdentifier

//   BEGIN: Message: PluginGetProperty
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_property_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("property"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetProperty,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetProperty,
						_property
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetProperty,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_property_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetProperty, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetProperty, encoded_size_),
					"PluginGetProperty",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetProperty>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetProperty>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginGetProperty: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetObjectRef() 
{
	return _object;
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetPropertyRef() 
{
	return _property;
}

// END: PluginGetProperty: Implementation

//   END: Message: PluginGetProperty

//   BEGIN: Message: PluginGetSitesWithData
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_sites_with_data_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_sites_with_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData, encoded_size_),
					"PluginGetSitesWithData",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetSitesWithData: Implementation


// END: PluginGetSitesWithData: Implementation

//   END: Message: PluginGetSitesWithData

//   BEGIN: Message: PluginGetSitesWithDataResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_sites_with_data_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("sites"),
						OpProtobufField::Repeated
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse,
						_sites
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_sites_with_data_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse, encoded_size_),
					"PluginGetSitesWithDataResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetSitesWithDataResponse: Implementation

// Setters

OpProtobufValueVector<UniString> &
OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse::GetSitesRef() 
{
	has_bits_.Reference().SetBit(0);
	return _sites;
}

// END: PluginGetSitesWithDataResponse: Implementation

//   END: Message: PluginGetSitesWithDataResponse

//   BEGIN: Message: PluginGetStringIdentifiers
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_string_identifiers_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("names"),
						OpProtobufField::Repeated
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers,
						_names
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_string_identifiers_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers, encoded_size_),
					"PluginGetStringIdentifiers",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetStringIdentifiers: Implementation

// Setters

OpProtobufValueVector<UniString> &
OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers::GetNamesRef() 
{
	has_bits_.Reference().SetBit(0);
	return _names;
}

// END: PluginGetStringIdentifiers: Implementation

//   END: Message: PluginGetStringIdentifiers

//   BEGIN: Message: PluginGetURL
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetURL::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_url_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[0].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("window"),
						OpProtobufField::Optional
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetURL,
						_URL
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetURL,
						_window
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_url_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetURL, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetURL, encoded_size_),
					"PluginGetURL",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetURL>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetURL>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetURL: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURL::SetURL(const OpData & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURL::SetURL(const char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURL::SetWindow(const OpData & v) 
{
	has_bits_.Reference().SetBit(1);
	_window = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURL::SetWindow(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _window.SetCopyData(v, l);
}

// END: PluginGetURL: Implementation

//   END: Message: PluginGetURL

//   BEGIN: Message: PluginGetURLNotify
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_url_notify_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[0].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("window"),
						OpProtobufField::Optional
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						3,
						UNI_L("notifyData"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetURLNotify,
						_URL
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetURLNotify,
						_window
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetURLNotify,
						_notifyData
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_url_notify_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetURLNotify, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetURLNotify, encoded_size_),
					"PluginGetURLNotify",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetURLNotify>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetURLNotify>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetURLNotify: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::SetURL(const OpData & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::SetURL(const char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::SetWindow(const OpData & v) 
{
	has_bits_.Reference().SetBit(1);
	_window = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::SetWindow(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _window.SetCopyData(v, l);
}

// END: PluginGetURLNotify: Implementation

//   END: Message: PluginGetURLNotify

//   BEGIN: Message: PluginGetValue
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetValue::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("variable"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValue,
						_variable
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValue, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValue, encoded_size_),
					"PluginGetValue",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValue>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValue>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetValue: Implementation


// END: PluginGetValue: Implementation

//   END: Message: PluginGetValue

//   BEGIN: Message: PluginGetValueForURL
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_value_for_url_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("variable"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueForURL,
						_variable
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueForURL,
						_URL
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_value_for_url_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValueForURL, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValueForURL, encoded_size_),
					"PluginGetValueForURL",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValueForURL>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValueForURL>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetValueForURL: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::SetURL(const UniString & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::SetURL(const uni_char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}

// END: PluginGetValueForURL: Implementation

//   END: Message: PluginGetValueForURL

//   BEGIN: Message: PluginGetValueForURLResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_value_for_url_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse,
						_npError
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_value_for_url_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse, encoded_size_),
					"PluginGetValueForURLResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginGetValueForURLResponse: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::SetValue(const UniString & v) 
{
	_value = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::SetValue(const uni_char * v, int l) 
{
	return _value.SetCopyData(v, l);
}

// END: PluginGetValueForURLResponse: Implementation

//   END: Message: PluginGetValueForURLResponse

//   BEGIN: Message: PluginGetValueResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_get_value_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("booleanValue"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int64,
						4,
						UNI_L("integerValue"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("stringValue"),
						OpProtobufField::Optional
						);
	fields[4].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueResponse,
						_npError
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueResponse,
						_objectValue
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueResponse,
						_booleanValue
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueResponse,
						_integerValue
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginGetValueResponse,
						_stringValue
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_get_value_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValueResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginGetValueResponse, encoded_size_),
					"PluginGetValueResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValueResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginGetValueResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginGetValueResponse: Implementation

// Setters

void
OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_objectValue);
	_objectValue = v;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::SetStringValue(const UniString & v) 
{
	has_bits_.Reference().SetBit(4);
	_stringValue = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::SetStringValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _stringValue.SetCopyData(v, l);
}

// END: PluginGetValueResponse: Implementation

//   END: Message: PluginGetValueResponse

//   BEGIN: Message: PluginHasMethod
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_has_method_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("method"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginHasMethod,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginHasMethod,
						_method
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginHasMethod,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_has_method_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginHasMethod, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginHasMethod, encoded_size_),
					"PluginHasMethod",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginHasMethod>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginHasMethod>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginHasMethod: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetObjectRef() 
{
	return _object;
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetMethodRef() 
{
	return _method;
}

// END: PluginHasMethod: Implementation

//   END: Message: PluginHasMethod

//   BEGIN: Message: PluginHasProperty
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_has_property_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("property"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginHasProperty,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginHasProperty,
						_property
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginHasProperty,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_has_property_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginHasProperty, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginHasProperty, encoded_size_),
					"PluginHasProperty",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginHasProperty>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginHasProperty>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginHasProperty: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetObjectRef() 
{
	return _object;
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetPropertyRef() 
{
	return _property;
}

// END: PluginHasProperty: Implementation

//   END: Message: PluginHasProperty

//   BEGIN: Message: PluginIdentifier
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginIdentifier::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_identifier_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						1,
						UNI_L("identifier"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isString"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("intValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginIdentifier,
						_identifier
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginIdentifier,
						_isString
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginIdentifier,
						_intValue
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_identifier_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginIdentifier, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginIdentifier, encoded_size_),
					"PluginIdentifier",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginIdentifier: Implementation


// END: PluginIdentifier: Implementation

//   END: Message: PluginIdentifier

//   BEGIN: Message: PluginIdentifiers
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginIdentifiers::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_identifiers_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("identifiers"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginIdentifiers,
						_identifiers
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_identifiers_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginIdentifiers, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginIdentifiers, encoded_size_),
					"PluginIdentifiers",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifiers>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifiers>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginIdentifiers: Implementation

// Setters

OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> &
OpNs4pluginsMessages_MessageSet::PluginIdentifiers::GetIdentifiersRef() 
{
	has_bits_.Reference().SetBit(0);
	return _identifiers;
}

// END: PluginIdentifiers: Implementation

//   END: Message: PluginIdentifiers

//   BEGIN: Message: PluginInitialize
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginInitialize::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_initialize_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_initialize_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInitialize, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInitialize, encoded_size_),
					"PluginInitialize",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInitialize>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInitialize>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginInitialize: Implementation


// END: PluginInitialize: Implementation

//   END: Message: PluginInitialize

//   BEGIN: Message: PluginInitializeResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginInitializeResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_initialize_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInitializeResponse,
						_npError
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_initialize_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInitializeResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInitializeResponse, encoded_size_),
					"PluginInitializeResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInitializeResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInitializeResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginInitializeResponse: Implementation


// END: PluginInitializeResponse: Implementation

//   END: Message: PluginInitializeResponse

//   BEGIN: Message: PluginInvalidate
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginInvalidate::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_invalidate_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("rect"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvalidate,
						_rect
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_invalidate_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInvalidate, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInvalidate, encoded_size_),
					"PluginInvalidate",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInvalidate>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInvalidate>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginRect::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginInvalidate: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginRect &
OpNs4pluginsMessages_MessageSet::PluginInvalidate::GetRectRef() 
{
	return _rect;
}

// END: PluginInvalidate: Implementation

//   END: Message: PluginInvalidate

//   BEGIN: Message: PluginInvoke
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginInvoke::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_invoke_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("method"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("arguments"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						4,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvoke,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvoke,
						_method
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvoke,
						_arguments
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvoke,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_invoke_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInvoke, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInvoke, encoded_size_),
					"PluginInvoke",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInvoke>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInvoke>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(PluginVariant::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginInvoke: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginInvoke::GetObjectRef() 
{
	return _object;
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginInvoke::GetMethodRef() 
{
	return _method;
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> &
OpNs4pluginsMessages_MessageSet::PluginInvoke::GetArgumentsRef() 
{
	has_bits_.Reference().SetBit(2);
	return _arguments;
}

// END: PluginInvoke: Implementation

//   END: Message: PluginInvoke

//   BEGIN: Message: PluginInvokeDefault
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_invoke_default_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("arguments"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvokeDefault,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvokeDefault,
						_arguments
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginInvokeDefault,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_invoke_default_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInvokeDefault, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginInvokeDefault, encoded_size_),
					"PluginInvokeDefault",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInvokeDefault>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginInvokeDefault>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginVariant::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginInvokeDefault: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetObjectRef() 
{
	return _object;
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> &
OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetArgumentsRef() 
{
	has_bits_.Reference().SetBit(1);
	return _arguments;
}

// END: PluginInvokeDefault: Implementation

//   END: Message: PluginInvokeDefault

//   BEGIN: Message: PluginLoad
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginLoad::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_load_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("path"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginLoad,
						_path
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_load_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLoad, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLoad, encoded_size_),
					"PluginLoad",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLoad>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLoad>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginLoad: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginLoad::SetPath(const UniString & v) 
{
	_path = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginLoad::SetPath(const uni_char * v, int l) 
{
	return _path.SetCopyData(v, l);
}

// END: PluginLoad: Implementation

//   END: Message: PluginLoad

//   BEGIN: Message: PluginLoadResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginLoadResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_load_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("status"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginLoadResponse,
						_status
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_load_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLoadResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLoadResponse, encoded_size_),
					"PluginLoadResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLoadResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLoadResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginLoadResponse: Implementation


// END: PluginLoadResponse: Implementation

//   END: Message: PluginLoadResponse

//   BEGIN: Message: PluginLookupIdentifier
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_lookup_identifier_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("identifier"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier,
						_identifier
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_lookup_identifier_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier, encoded_size_),
					"PluginLookupIdentifier",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginLookupIdentifier: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier::GetIdentifierRef() 
{
	return _identifier;
}

// END: PluginLookupIdentifier: Implementation

//   END: Message: PluginLookupIdentifier

//   BEGIN: Message: PluginLookupIdentifierResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_lookup_identifier_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("stringValue"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse,
						_stringValue
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_lookup_identifier_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse, encoded_size_),
					"PluginLookupIdentifierResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginLookupIdentifierResponse: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::SetStringValue(const UniString & v) 
{
	_stringValue = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::SetStringValue(const uni_char * v, int l) 
{
	return _stringValue.SetCopyData(v, l);
}

// END: PluginLookupIdentifierResponse: Implementation

//   END: Message: PluginLookupIdentifierResponse

//   BEGIN: Message: PluginNew
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginNew::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_new_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("contentType"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("mode"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("arguments"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						4,
						UNI_L("saved"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("adapterAddress"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew,
						_contentType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew,
						_mode
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew,
						_arguments
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew,
						_saved
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNew,
						_adapterAddress
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_new_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNew, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNew, encoded_size_),
					"PluginNew",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(PluginNew_Argument::GetMessageDescriptor(descriptors));
	fields[4].SetMessage(MessageAddress::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginNew: Implementation


// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNew::SetContentType(const UniString & v) 
{
	_contentType = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNew::SetContentType(const uni_char * v, int l) 
{
	return _contentType.SetCopyData(v, l);
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> &
OpNs4pluginsMessages_MessageSet::PluginNew::GetArgumentsRef() 
{
	has_bits_.Reference().SetBit(2);
	return _arguments;
}


void
OpNs4pluginsMessages_MessageSet::PluginNew::SetAdapterAddress(OpNs4pluginsMessages_MessageSet::MessageAddress * v) 
{
	has_bits_.Reference().SetBit(4);
	OP_DELETE(_adapterAddress);
	_adapterAddress = v;
}

// END: PluginNew: Implementation

//   END: Message: PluginNew

//   BEGIN: Message: PluginNewResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginNewResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_new_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewResponse,
						_npError
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_new_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNewResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNewResponse, encoded_size_),
					"PluginNewResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNewResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNewResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginNewResponse: Implementation


// END: PluginNewResponse: Implementation

//   END: Message: PluginNewResponse

//   BEGIN: Message: PluginNewStream
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginNewStream::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_new_stream_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("contentType"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("stream"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("seekable"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("streamType"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewStream,
						_contentType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewStream,
						_stream
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewStream,
						_seekable
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewStream,
						_streamType
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_new_stream_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNewStream, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNewStream, encoded_size_),
					"PluginNewStream",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNewStream>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNewStream>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginStream::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginNewStream: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNewStream::SetContentType(const UniString & v) 
{
	_contentType = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNewStream::SetContentType(const uni_char * v, int l) 
{
	return _contentType.SetCopyData(v, l);
}


OpNs4pluginsMessages_MessageSet::PluginStream &
OpNs4pluginsMessages_MessageSet::PluginNewStream::GetStreamRef() 
{
	return _stream;
}

// END: PluginNewStream: Implementation

//   END: Message: PluginNewStream

//   BEGIN: Message: PluginNewStreamResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_new_stream_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("npError"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("streamType"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse,
						_npError
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse,
						_streamType
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_new_stream_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse, encoded_size_),
					"PluginNewStreamResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginNewStreamResponse: Implementation


// END: PluginNewStreamResponse: Implementation

//   END: Message: PluginNewStreamResponse

//   BEGIN: Message: PluginNotify
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginNotify::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_notify_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("reason"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						3,
						UNI_L("notifyData"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNotify,
						_URL
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNotify,
						_reason
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginNotify,
						_notifyData
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_notify_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNotify, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginNotify, encoded_size_),
					"PluginNotify",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNotify>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNotify>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginNotify: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNotify::SetURL(const UniString & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginNotify::SetURL(const uni_char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}

// END: PluginNotify: Implementation

//   END: Message: PluginNotify

//   BEGIN: Message: PluginObject
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObject::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("referenceCount"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObject,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObject,
						_referenceCount
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObject, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObject, encoded_size_),
					"PluginObject",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObject>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObject>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginObject: Implementation


// END: PluginObject: Implementation

//   END: Message: PluginObject

//   BEGIN: Message: PluginObjectConstruct
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_construct_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("arguments"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectConstruct,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectConstruct,
						_arguments
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectConstruct,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_construct_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectConstruct, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectConstruct, encoded_size_),
					"PluginObjectConstruct",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectConstruct>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectConstruct>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginVariant::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginObjectConstruct: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetObjectRef() 
{
	return _object;
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> &
OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetArgumentsRef() 
{
	has_bits_.Reference().SetBit(1);
	return _arguments;
}

// END: PluginObjectConstruct: Implementation

//   END: Message: PluginObjectConstruct

//   BEGIN: Message: PluginObjectDeallocate
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_deallocate_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_deallocate_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate, encoded_size_),
					"PluginObjectDeallocate",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginObjectDeallocate: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate::GetObjectRef() 
{
	return _object;
}

// END: PluginObjectDeallocate: Implementation

//   END: Message: PluginObjectDeallocate

//   BEGIN: Message: PluginObjectEnumerate
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_enumerate_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						2,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_enumerate_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate, encoded_size_),
					"PluginObjectEnumerate",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginObjectEnumerate: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate::GetObjectRef() 
{
	return _object;
}

// END: PluginObjectEnumerate: Implementation

//   END: Message: PluginObjectEnumerate

//   BEGIN: Message: PluginObjectEnumerateResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_enumerate_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("success"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("properties"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse,
						_success
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse,
						_properties
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_enumerate_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse, encoded_size_),
					"PluginObjectEnumerateResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginObjectEnumerateResponse: Implementation

// Setters

OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> &
OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse::GetPropertiesRef() 
{
	has_bits_.Reference().SetBit(1);
	return _properties;
}

// END: PluginObjectEnumerateResponse: Implementation

//   END: Message: PluginObjectEnumerateResponse

//   BEGIN: Message: PluginObjectInvalidate
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_invalidate_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_invalidate_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate, encoded_size_),
					"PluginObjectInvalidate",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginObjectInvalidate: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate::GetObjectRef() 
{
	return _object;
}

// END: PluginObjectInvalidate: Implementation

//   END: Message: PluginObjectInvalidate

//   BEGIN: Message: PluginObjectState
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginObjectState::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_object_state_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginObjectState,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_object_state_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectState, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginObjectState, encoded_size_),
					"PluginObjectState",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectState>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginObjectState>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginObjectState: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginObjectState::GetObjectRef() 
{
	return _object;
}

// END: PluginObjectState: Implementation

//   END: Message: PluginObjectState

//   BEGIN: Message: PluginPlatformEvent
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginPlatformEvent::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_platform_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint64,
						1,
						UNI_L("event"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPlatformEvent,
						_event
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_platform_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPlatformEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPlatformEvent, encoded_size_),
					"PluginPlatformEvent",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPlatformEvent>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPlatformEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginPlatformEvent: Implementation


// END: PluginPlatformEvent: Implementation

//   END: Message: PluginPlatformEvent

//   BEGIN: Message: PluginPoint
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginPoint::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_point_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("y"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPoint,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPoint,
						_y
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_point_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPoint, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPoint, encoded_size_),
					"PluginPoint",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPoint>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPoint>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginPoint: Implementation


// END: PluginPoint: Implementation

//   END: Message: PluginPoint

//   BEGIN: Message: PluginPopPopupsEnabled
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_pop_popups_enabled_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_pop_popups_enabled_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled, encoded_size_),
					"PluginPopPopupsEnabled",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginPopPopupsEnabled: Implementation


// END: PluginPopPopupsEnabled: Implementation

//   END: Message: PluginPopPopupsEnabled

//   BEGIN: Message: PluginPostURL
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginPostURL::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_post_url_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[0].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("data"),
						OpProtobufField::Required
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("isFile"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bytes,
						4,
						UNI_L("window"),
						OpProtobufField::Optional
						);
	fields[3].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURL,
						_URL
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURL,
						_data
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURL,
						_isFile
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURL,
						_window
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_post_url_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPostURL, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPostURL, encoded_size_),
					"PluginPostURL",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPostURL>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPostURL>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginPostURL: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURL::SetURL(const OpData & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURL::SetURL(const char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURL::SetData(const OpData & v) 
{
	_data = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURL::SetData(const char * v, int l) 
{
	return _data.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURL::SetWindow(const OpData & v) 
{
	has_bits_.Reference().SetBit(3);
	_window = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURL::SetWindow(const char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _window.SetCopyData(v, l);
}

// END: PluginPostURL: Implementation

//   END: Message: PluginPostURL

//   BEGIN: Message: PluginPostURLNotify
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_post_url_notify_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[0].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("data"),
						OpProtobufField::Required
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("isFile"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						4,
						UNI_L("notifyData"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bytes,
						5,
						UNI_L("window"),
						OpProtobufField::Optional
						);
	fields[4].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURLNotify,
						_URL
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURLNotify,
						_data
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURLNotify,
						_isFile
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURLNotify,
						_notifyData
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPostURLNotify,
						_window
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_post_url_notify_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPostURLNotify, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPostURLNotify, encoded_size_),
					"PluginPostURLNotify",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPostURLNotify>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPostURLNotify>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginPostURLNotify: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::SetURL(const OpData & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::SetURL(const char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::SetData(const OpData & v) 
{
	_data = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::SetData(const char * v, int l) 
{
	return _data.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::SetWindow(const OpData & v) 
{
	has_bits_.Reference().SetBit(4);
	_window = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::SetWindow(const char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _window.SetCopyData(v, l);
}

// END: PluginPostURLNotify: Implementation

//   END: Message: PluginPostURLNotify

//   BEGIN: Message: PluginProbe
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginProbe::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_probe_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("path"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbe,
						_path
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_probe_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginProbe, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginProbe, encoded_size_),
					"PluginProbe",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbe>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbe>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginProbe: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbe::SetPath(const UniString & v) 
{
	_path = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbe::SetPath(const uni_char * v, int l) 
{
	return _path.SetCopyData(v, l);
}

// END: PluginProbe: Implementation

//   END: Message: PluginProbe

//   BEGIN: Message: PluginProbeResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_probe_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("path"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("description"),
						OpProtobufField::Required
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("version"),
						OpProtobufField::Required
						);
	fields[3].SetStringDataType(OpProtobufField::String_UniString);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("contentTypes"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse,
						_path
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse,
						_name
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse,
						_description
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse,
						_version
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginProbeResponse,
						_contentTypes
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_probe_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginProbeResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginProbeResponse, encoded_size_),
					"PluginProbeResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[4].SetMessage(PluginProbeResponse_ContentType::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginProbeResponse: Implementation


// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetPath(const UniString & v) 
{
	_path = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetPath(const uni_char * v, int l) 
{
	return _path.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetName(const UniString & v) 
{
	_name = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetName(const uni_char * v, int l) 
{
	return _name.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetDescription(const UniString & v) 
{
	_description = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetDescription(const uni_char * v, int l) 
{
	return _description.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetVersion(const UniString & v) 
{
	_version = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::SetVersion(const uni_char * v, int l) 
{
	return _version.SetCopyData(v, l);
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> &
OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetContentTypesRef() 
{
	has_bits_.Reference().SetBit(4);
	return _contentTypes;
}

// END: PluginProbeResponse: Implementation

//   END: Message: PluginProbeResponse

//   BEGIN: Message: PluginPushPopupsEnabled
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_push_popups_enabled_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("enabled"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled,
						_enabled
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_push_popups_enabled_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled, encoded_size_),
					"PluginPushPopupsEnabled",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginPushPopupsEnabled: Implementation


// END: PluginPushPopupsEnabled: Implementation

//   END: Message: PluginPushPopupsEnabled

//   BEGIN: Message: PluginRect
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginRect::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_rect_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("y"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("width"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("height"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRect,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRect,
						_y
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRect,
						_width
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRect,
						_height
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_rect_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginRect, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginRect, encoded_size_),
					"PluginRect",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginRect>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginRect>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginRect: Implementation


// END: PluginRect: Implementation

//   END: Message: PluginRect

//   BEGIN: Message: PluginReleaseObject
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginReleaseObject::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_release_object_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginReleaseObject,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_release_object_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginReleaseObject, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginReleaseObject, encoded_size_),
					"PluginReleaseObject",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginReleaseObject>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginReleaseObject>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginReleaseObject: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginReleaseObject::GetObjectRef() 
{
	return _object;
}

// END: PluginReleaseObject: Implementation

//   END: Message: PluginReleaseObject

//   BEGIN: Message: PluginReload
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginReload::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_reload_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("reloadPages"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginReload,
						_reloadPages
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_reload_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginReload, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginReload, encoded_size_),
					"PluginReload",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginReload>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginReload>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginReload: Implementation


// END: PluginReload: Implementation

//   END: Message: PluginReload

//   BEGIN: Message: PluginRemoveProperty
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_remove_property_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("property"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRemoveProperty,
						_object
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRemoveProperty,
						_property
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRemoveProperty,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_remove_property_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginRemoveProperty, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginRemoveProperty, encoded_size_),
					"PluginRemoveProperty",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginRemoveProperty>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginRemoveProperty>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginRemoveProperty: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetObjectRef() 
{
	return _object;
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetPropertyRef() 
{
	return _property;
}

// END: PluginRemoveProperty: Implementation

//   END: Message: PluginRemoveProperty

//   BEGIN: Message: PluginResult
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginResult::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_result_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("success"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("result"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginResult,
						_success
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginResult,
						_result
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginResult, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginResult, encoded_size_),
					"PluginResult",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginResult>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginVariant::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginResult: Implementation

// Setters

void
OpNs4pluginsMessages_MessageSet::PluginResult::SetResult(OpNs4pluginsMessages_MessageSet::PluginVariant * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_result);
	_result = v;
}

// END: PluginResult: Implementation

//   END: Message: PluginResult

//   BEGIN: Message: PluginRetainObject
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginRetainObject::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_retain_object_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("object"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginRetainObject,
						_object
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_retain_object_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginRetainObject, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginRetainObject, encoded_size_),
					"PluginRetainObject",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginRetainObject>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginRetainObject>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginRetainObject: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginRetainObject::GetObjectRef() 
{
	return _object;
}

// END: PluginRetainObject: Implementation

//   END: Message: PluginRetainObject

//   BEGIN: Message: PluginSetProperty
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_set_property_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("property"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("object"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						4,
						UNI_L("context"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetProperty,
						_property
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetProperty,
						_object
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetProperty,
						_value
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetProperty,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_set_property_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginSetProperty, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginSetProperty, encoded_size_),
					"PluginSetProperty",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginSetProperty>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginSetProperty>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginIdentifier::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(PluginObject::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(PluginVariant::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginSetProperty: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetPropertyRef() 
{
	return _property;
}


OpNs4pluginsMessages_MessageSet::PluginObject &
OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetObjectRef() 
{
	return _object;
}


OpNs4pluginsMessages_MessageSet::PluginVariant &
OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetValueRef() 
{
	return _value;
}

// END: PluginSetProperty: Implementation

//   END: Message: PluginSetProperty

//   BEGIN: Message: PluginSetValue
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginSetValue::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_set_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("variable"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int64,
						3,
						UNI_L("integerValue"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("booleanValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValue,
						_variable
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValue,
						_objectValue
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValue,
						_integerValue
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValue,
						_booleanValue
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_set_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginSetValue, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginSetValue, encoded_size_),
					"PluginSetValue",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginSetValue>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginSetValue>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginSetValue: Implementation

// Setters

void
OpNs4pluginsMessages_MessageSet::PluginSetValue::SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_objectValue);
	_objectValue = v;
}

// END: PluginSetValue: Implementation

//   END: Message: PluginSetValue

//   BEGIN: Message: PluginSetValueForURL
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_set_value_for_url_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("variable"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValueForURL,
						_variable
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValueForURL,
						_URL
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginSetValueForURL,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_set_value_for_url_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginSetValueForURL, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginSetValueForURL, encoded_size_),
					"PluginSetValueForURL",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginSetValueForURL>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginSetValueForURL>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginSetValueForURL: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::SetURL(const UniString & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::SetURL(const uni_char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::SetValue(const UniString & v) 
{
	_value = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::SetValue(const uni_char * v, int l) 
{
	return _value.SetCopyData(v, l);
}

// END: PluginSetValueForURL: Implementation

//   END: Message: PluginSetValueForURL

//   BEGIN: Message: PluginShutdown
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginShutdown::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_shutdown_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_shutdown_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginShutdown, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginShutdown, encoded_size_),
					"PluginShutdown",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginShutdown>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginShutdown>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginShutdown: Implementation


// END: PluginShutdown: Implementation

//   END: Message: PluginShutdown

//   BEGIN: Message: PluginStatusText
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginStatusText::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_status_text_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStatusText,
						_text
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_status_text_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginStatusText, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginStatusText, encoded_size_),
					"PluginStatusText",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginStatusText>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginStatusText>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginStatusText: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStatusText::SetText(const UniString & v) 
{
	_text = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStatusText::SetText(const uni_char * v, int l) 
{
	return _text.SetCopyData(v, l);
}

// END: PluginStatusText: Implementation

//   END: Message: PluginStatusText

//   BEGIN: Message: PluginStream
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginStream::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_stream_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						1,
						UNI_L("identifier"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("URL"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("end"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("lastModified"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						5,
						UNI_L("notifyData"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("headers"),
						OpProtobufField::Required
						);
	fields[5].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStream,
						_identifier
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStream,
						_URL
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStream,
						_end
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStream,
						_lastModified
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStream,
						_notifyData
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStream,
						_headers
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_stream_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginStream, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginStream, encoded_size_),
					"PluginStream",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginStream>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginStream>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginStream: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStream::SetURL(const UniString & v) 
{
	_URL = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStream::SetURL(const uni_char * v, int l) 
{
	return _URL.SetCopyData(v, l);
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStream::SetHeaders(const UniString & v) 
{
	_headers = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStream::SetHeaders(const uni_char * v, int l) 
{
	return _headers.SetCopyData(v, l);
}

// END: PluginStream: Implementation

//   END: Message: PluginStream

//   BEGIN: Message: PluginStreamAsFile
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_stream_as_file_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("stream"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("fname"),
						OpProtobufField::Optional
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStreamAsFile,
						_stream
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginStreamAsFile,
						_fname
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_stream_as_file_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginStreamAsFile, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginStreamAsFile, encoded_size_),
					"PluginStreamAsFile",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginStreamAsFile>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginStreamAsFile>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginStream::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginStreamAsFile: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginStream &
OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::GetStreamRef() 
{
	return _stream;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::SetFname(const OpData & v) 
{
	has_bits_.Reference().SetBit(1);
	_fname = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::SetFname(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _fname.SetCopyData(v, l);
}

// END: PluginStreamAsFile: Implementation

//   END: Message: PluginStreamAsFile

//   BEGIN: Message: PluginTimer
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginTimer::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_timer_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("timerID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginTimer,
						_timerID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_timer_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginTimer, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginTimer, encoded_size_),
					"PluginTimer",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginTimer>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginTimer>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginTimer: Implementation


// END: PluginTimer: Implementation

//   END: Message: PluginTimer

//   BEGIN: Message: PluginUserAgent
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginUserAgent::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_user_agent_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_user_agent_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginUserAgent, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginUserAgent, encoded_size_),
					"PluginUserAgent",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginUserAgent>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginUserAgent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginUserAgent: Implementation


// END: PluginUserAgent: Implementation

//   END: Message: PluginUserAgent

//   BEGIN: Message: PluginUserAgentResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_user_agent_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("userAgent"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse,
						_userAgent
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_user_agent_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse, encoded_size_),
					"PluginUserAgentResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginUserAgentResponse: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::SetUserAgent(const UniString & v) 
{
	_userAgent = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::SetUserAgent(const uni_char * v, int l) 
{
	return _userAgent.SetCopyData(v, l);
}

// END: PluginUserAgentResponse: Implementation

//   END: Message: PluginUserAgentResponse

//   BEGIN: Message: PluginVariant
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginVariant::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_variant_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("voidValue"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("nullValue"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("boolValue"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int64,
						4,
						UNI_L("intValue"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Double,
						5,
						UNI_L("doubleValue"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("stringValue"),
						OpProtobufField::Optional
						);
	fields[5].SetStringDataType(OpProtobufField::String_UniString);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("objectValue"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_voidValue
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_nullValue
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_boolValue
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_intValue
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_doubleValue
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_stringValue
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginVariant,
						_objectValue
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_variant_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginVariant, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginVariant, encoded_size_),
					"PluginVariant",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[6].SetMessage(PluginObject::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginVariant: Implementation

// Setters

OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginVariant::SetStringValue(const UniString & v) 
{
	has_bits_.Reference().SetBit(5);
	_stringValue = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginVariant::SetStringValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _stringValue.SetCopyData(v, l);
}


void
OpNs4pluginsMessages_MessageSet::PluginVariant::SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	has_bits_.Reference().SetBit(6);
	OP_DELETE(_objectValue);
	_objectValue = v;
}

// END: PluginVariant: Implementation

//   END: Message: PluginVariant

//   BEGIN: Message: PluginWindow
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWindow::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_window_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint64,
						1,
						UNI_L("window"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("rect"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("clipRect"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("windowType"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						5,
						UNI_L("context"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindow,
						_window
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindow,
						_rect
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindow,
						_clipRect
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindow,
						_windowType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindow,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_window_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindow, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindow, encoded_size_),
					"PluginWindow",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindow>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindow>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginRect::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(PluginRect::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginWindow: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginRect &
OpNs4pluginsMessages_MessageSet::PluginWindow::GetRectRef() 
{
	return _rect;
}


OpNs4pluginsMessages_MessageSet::PluginRect &
OpNs4pluginsMessages_MessageSet::PluginWindow::GetClipRectRef() 
{
	return _clipRect;
}

// END: PluginWindow: Implementation

//   END: Message: PluginWindow

//   BEGIN: Message: PluginWindowlessHandleEventResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_windowless_handle_event_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("isEventHandled"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse,
						_isEventHandled
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_windowless_handle_event_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse, encoded_size_),
					"PluginWindowlessHandleEventResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginWindowlessHandleEventResponse: Implementation


// END: PluginWindowlessHandleEventResponse: Implementation

//   END: Message: PluginWindowlessHandleEventResponse

//   BEGIN: Message: PluginWindowlessKeyEvent
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_windowless_key_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("key"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("keyValue"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("keyState"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("shiftKeyState"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint64,
						5,
						UNI_L("platformData1"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint64,
						6,
						UNI_L("platformData2"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent,
						_key
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent,
						_keyValue
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent,
						_keyState
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent,
						_shiftKeyState
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent,
						_platformData1
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent,
						_platformData2
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_windowless_key_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent, encoded_size_),
					"PluginWindowlessKeyEvent",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginWindowlessKeyEvent: Implementation


// END: PluginWindowlessKeyEvent: Implementation

//   END: Message: PluginWindowlessKeyEvent

//   BEGIN: Message: PluginWindowlessMouseEvent
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_windowless_mouse_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("eventType"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("point"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("button"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("modifiers"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent,
						_eventType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent,
						_point
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent,
						_button
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent,
						_modifiers
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_windowless_mouse_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent, encoded_size_),
					"PluginWindowlessMouseEvent",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(PluginPoint::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginWindowlessMouseEvent: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginPoint &
OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent::GetPointRef() 
{
	return _point;
}

// END: PluginWindowlessMouseEvent: Implementation

//   END: Message: PluginWindowlessMouseEvent

//   BEGIN: Message: PluginWindowlessPaint
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_windowless_paint_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint64,
						1,
						UNI_L("opPluginImageGlobalIdentifier"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint64,
						2,
						UNI_L("opPluginBackgroundGlobalIdentifier"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("paintRect"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						4,
						UNI_L("context"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint,
						_opPluginImageGlobalIdentifier
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint,
						_opPluginBackgroundGlobalIdentifier
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint,
						_paintRect
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint,
						_context
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_windowless_paint_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint, encoded_size_),
					"PluginWindowlessPaint",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(PluginRect::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginWindowlessPaint: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginRect &
OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint::GetPaintRectRef() 
{
	return _paintRect;
}

// END: PluginWindowlessPaint: Implementation

//   END: Message: PluginWindowlessPaint

//   BEGIN: Message: PluginWrite
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWrite::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_write_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("stream"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("offset"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						4,
						UNI_L("buffer"),
						OpProtobufField::Required
						);
	fields[2].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWrite,
						_stream
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWrite,
						_offset
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWrite,
						_buffer
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_write_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWrite, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWrite, encoded_size_),
					"PluginWrite",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWrite>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWrite>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginStream::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginWrite: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginStream &
OpNs4pluginsMessages_MessageSet::PluginWrite::GetStreamRef() 
{
	return _stream;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginWrite::SetBuffer(const OpData & v) 
{
	_buffer = v;
	return OpStatus::OK;
}


OP_STATUS
OpNs4pluginsMessages_MessageSet::PluginWrite::SetBuffer(const char * v, int l) 
{
	return _buffer.SetCopyData(v, l);
}

// END: PluginWrite: Implementation

//   END: Message: PluginWrite

//   BEGIN: Message: PluginWriteReady
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWriteReady::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_write_ready_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("stream"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWriteReady,
						_stream
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_write_ready_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWriteReady, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWriteReady, encoded_size_),
					"PluginWriteReady",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWriteReady>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWriteReady>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PluginStream::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PluginWriteReady: Implementation

// Setters

OpNs4pluginsMessages_MessageSet::PluginStream &
OpNs4pluginsMessages_MessageSet::PluginWriteReady::GetStreamRef() 
{
	return _stream;
}

// END: PluginWriteReady: Implementation

//   END: Message: PluginWriteReady

//   BEGIN: Message: PluginWriteReadyResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_write_ready_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("bytes"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse,
						_bytes
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_write_ready_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse, encoded_size_),
					"PluginWriteReadyResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginWriteReadyResponse: Implementation


// END: PluginWriteReadyResponse: Implementation

//   END: Message: PluginWriteReadyResponse

//   BEGIN: Message: PluginWriteResponse
/*static*/
const OpProtobufMessage *
OpNs4pluginsMessages_MessageSet::PluginWriteResponse::GetMessageDescriptor(OpNs4pluginsMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpNs4pluginsMessages_Descriptors::_gen_MessageOffs_plugin_write_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("bytes"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpNs4pluginsMessages_MessageSet::PluginWriteResponse,
						_bytes
						);

	message = OP_NEW(OpProtobufMessage,
					(OpNs4pluginsMessages_Descriptors::_gen_MsgID_plugin_write_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWriteResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpNs4pluginsMessages_MessageSet::PluginWriteResponse, encoded_size_),
					"PluginWriteResponse",
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWriteResponse>::Make,
					OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginWriteResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PluginWriteResponse: Implementation


// END: PluginWriteResponse: Implementation

//   END: Message: PluginWriteResponse


// END: Messages






