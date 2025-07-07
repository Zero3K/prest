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

// Generated from ../../modules/hardcore/component/component.proto

#include "core/pch.h"






#include "modules/hardcore/src/generated/g_proto_hardcore_component.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_component.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_component.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpHardcoreComponent_MessageSet

OpHardcoreComponent_MessageSet::OpHardcoreComponent_MessageSet()
{
}

/*virtual*/
OpHardcoreComponent_MessageSet::~OpHardcoreComponent_MessageSet()
{
}

// END: OpHardcoreComponent_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Address
/*static*/
const OpProtobufMessage *
OpHardcoreComponent_MessageSet::TypedMessage_Address::GetMessageDescriptor(OpHardcoreComponent_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreComponent_Descriptors::_gen_MessageOffs_typed_message_address_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("componentManager"),
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
						OpHardcoreComponent_MessageSet::TypedMessage_Address,
						_componentManager
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage_Address,
						_component
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage_Address,
						_channel
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreComponent_Descriptors::_gen_MsgID_typed_message_address_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreComponent_MessageSet::TypedMessage_Address, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreComponent_MessageSet::TypedMessage_Address, encoded_size_),
					"Address",
					OpProtobufMessageVector<OpHardcoreComponent_MessageSet::TypedMessage_Address>::Make,
					OpProtobufMessageVector<OpHardcoreComponent_MessageSet::TypedMessage_Address>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpHardcoreComponent_MessageSet::TypedMessage::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: TypedMessage.Address: Implementation


// END: TypedMessage.Address: Implementation

//   END: Message: Address

//   BEGIN: Message: TypedMessage
/*static*/
const OpProtobufMessage *
OpHardcoreComponent_MessageSet::TypedMessage::GetMessageDescriptor(OpHardcoreComponent_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreComponent_Descriptors::_gen_MessageOffs_typed_message_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("source"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("destination"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("dueTime"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bytes,
						5,
						UNI_L("data"),
						OpProtobufField::Required
						);
	fields[4].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage,
						_source
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage,
						_destination
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage,
						_dueTime
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage,
						_type
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpHardcoreComponent_MessageSet::TypedMessage,
						_data
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreComponent_Descriptors::_gen_MsgID_typed_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreComponent_MessageSet::TypedMessage, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreComponent_MessageSet::TypedMessage, encoded_size_),
					"TypedMessage",
					OpProtobufMessageVector<OpHardcoreComponent_MessageSet::TypedMessage>::Make,
					OpProtobufMessageVector<OpHardcoreComponent_MessageSet::TypedMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(TypedMessage_Address::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(TypedMessage_Address::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: TypedMessage: Implementation


// Setters

OpHardcoreComponent_MessageSet::TypedMessage_Address &
OpHardcoreComponent_MessageSet::TypedMessage::GetSourceRef() 
{
	return _source;
}


OpHardcoreComponent_MessageSet::TypedMessage_Address &
OpHardcoreComponent_MessageSet::TypedMessage::GetDestinationRef() 
{
	return _destination;
}


OpData &
OpHardcoreComponent_MessageSet::TypedMessage::GetDataRef() 
{
	return _data;
}

// END: TypedMessage: Implementation

//   END: Message: TypedMessage


// END: Messages






