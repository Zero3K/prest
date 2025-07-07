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

// Generated from ../../modules/hardcore/component/messages.proto

#include "core/pch.h"






#include "modules/hardcore/src/generated/g_proto_hardcore_messages.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_messages.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_messages.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpHardcoreMessages_MessageSet

OpHardcoreMessages_MessageSet::OpHardcoreMessages_MessageSet()
{
}

/*virtual*/
OpHardcoreMessages_MessageSet::~OpHardcoreMessages_MessageSet()
{
}

// END: OpHardcoreMessages_MessageSet

// BEGIN: Messages

//   BEGIN: Message: ComponentManagerResponse
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::ComponentManagerResponse::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_component_manager_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("request"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("componentType"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpHardcoreMessages_MessageSet::ComponentManagerResponse,
						_request
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpHardcoreMessages_MessageSet::ComponentManagerResponse,
						_componentType
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_component_manager_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::ComponentManagerResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::ComponentManagerResponse, encoded_size_),
					"ComponentManagerResponse",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::ComponentManagerResponse>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::ComponentManagerResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ComponentManagerResponse: Implementation


// END: ComponentManagerResponse: Implementation

//   END: Message: ComponentManagerResponse

//   BEGIN: Message: ComponentRequest
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::ComponentRequest::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_component_request_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("componentType"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpHardcoreMessages_MessageSet::ComponentRequest,
						_componentType
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_component_request_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::ComponentRequest, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::ComponentRequest, encoded_size_),
					"ComponentRequest",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::ComponentRequest>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::ComponentRequest>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ComponentRequest: Implementation


// END: ComponentRequest: Implementation

//   END: Message: ComponentRequest

//   BEGIN: Message: MessageAddress
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::MessageAddress::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_message_address_];
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
						OpHardcoreMessages_MessageSet::MessageAddress,
						_manager
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpHardcoreMessages_MessageSet::MessageAddress,
						_component
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpHardcoreMessages_MessageSet::MessageAddress,
						_channel
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_message_address_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::MessageAddress, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::MessageAddress, encoded_size_),
					"MessageAddress",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::MessageAddress>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::MessageAddress>::Destroy));
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

//   BEGIN: Message: Number
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::Number::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_number_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int64,
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
						OpHardcoreMessages_MessageSet::Number,
						_number
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_number_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::Number, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::Number, encoded_size_),
					"Number",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::Number>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::Number>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Number: Implementation


// END: Number: Implementation

//   END: Message: Number

//   BEGIN: Message: PeerConnected
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::PeerConnected::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_peer_connected_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_peer_connected_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::PeerConnected, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::PeerConnected, encoded_size_),
					"PeerConnected",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::PeerConnected>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::PeerConnected>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PeerConnected: Implementation


// END: PeerConnected: Implementation

//   END: Message: PeerConnected

//   BEGIN: Message: PeerDisconnected
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::PeerDisconnected::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_peer_disconnected_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_peer_disconnected_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::PeerDisconnected, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::PeerDisconnected, encoded_size_),
					"PeerDisconnected",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::PeerDisconnected>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::PeerDisconnected>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PeerDisconnected: Implementation


// END: PeerDisconnected: Implementation

//   END: Message: PeerDisconnected

//   BEGIN: Message: PeerPending
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::PeerPending::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_peer_pending_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_peer_pending_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::PeerPending, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::PeerPending, encoded_size_),
					"PeerPending",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::PeerPending>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::PeerPending>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PeerPending: Implementation


// END: PeerPending: Implementation

//   END: Message: PeerPending

//   BEGIN: Message: Status
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::Status::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_status_];
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
						OpHardcoreMessages_MessageSet::Status,
						_status
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_status_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::Status, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::Status, encoded_size_),
					"Status",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::Status>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::Status>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Status: Implementation


// END: Status: Implementation

//   END: Message: Status

//   BEGIN: Message: Text
/*static*/
const OpProtobufMessage *
OpHardcoreMessages_MessageSet::Text::GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreMessages_Descriptors::_gen_MessageOffs_text_];
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
						OpHardcoreMessages_MessageSet::Text,
						_text
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreMessages_Descriptors::_gen_MsgID_text_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::Text, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreMessages_MessageSet::Text, encoded_size_),
					"Text",
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::Text>::Make,
					OpProtobufMessageVector<OpHardcoreMessages_MessageSet::Text>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Text: Implementation

// Setters

OP_STATUS
OpHardcoreMessages_MessageSet::Text::SetText(const UniString & v) 
{
	_text = v;
	return OpStatus::OK;
}


OP_STATUS
OpHardcoreMessages_MessageSet::Text::SetText(const uni_char * v, int l) 
{
	return _text.SetCopyData(v, l);
}

// END: Text: Implementation

//   END: Message: Text


// END: Messages






