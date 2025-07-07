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

// Generated from ../../modules/protobuf/selftest/order.proto

#include "core/pch.h"




#ifdef SELFTEST

#include "modules/protobuf/src/generated/g_proto_protobuf_order.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_order.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_order.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpProtobufOrder_MessageSet

OpProtobufOrder_MessageSet::OpProtobufOrder_MessageSet()
{
}

/*virtual*/
OpProtobufOrder_MessageSet::~OpProtobufOrder_MessageSet()
{
}

// END: OpProtobufOrder_MessageSet

// BEGIN: Messages

//   BEGIN: Message: TestOpStringOrder
/*static*/
const OpProtobufMessage *
OpProtobufOrder_MessageSet::TestOpStringOrder::GetMessageDescriptor(OpProtobufOrder_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpProtobufOrder_Descriptors::_gen_MessageOffs_test_op_string_order_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("size"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("data"),
						OpProtobufField::Required
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("name"),
						OpProtobufField::Optional
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("orderType"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("kind"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOpStringOrder,
						_size
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOpStringOrder,
						_data
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOpStringOrder,
						_name
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOpStringOrder,
						_orderType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOpStringOrder,
						_kind
						);

	message = OP_NEW(OpProtobufMessage,
					(OpProtobufOrder_Descriptors::_gen_MsgID_test_op_string_order_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpProtobufOrder_MessageSet::TestOpStringOrder, has_bits_),
					OP_PROTO_OFFSETOF(OpProtobufOrder_MessageSet::TestOpStringOrder, encoded_size_),
					"TestOpStringOrder",
					OpProtobufMessageVector<OpProtobufOrder_MessageSet::TestOpStringOrder>::Make,
					OpProtobufMessageVector<OpProtobufOrder_MessageSet::TestOpStringOrder>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: TestOpStringOrder: Implementation

// Setters

OP_STATUS
OpProtobufOrder_MessageSet::TestOpStringOrder::SetData(const OpData & v) 
{
	_data = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOpStringOrder::SetData(const char * v, int l) 
{
	return _data.SetCopyData(v, l);
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOpStringOrder::SetName(const UniString & v) 
{
	has_bits_.Reference().SetBit(2);
	_name = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOpStringOrder::SetName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _name.SetCopyData(v, l);
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOpStringOrder::SetOrderType(const uni_char * v, int l) 
{
	return _orderType.Set(v, l);
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOpStringOrder::SetKind(const uni_char * v, int l) 
{
	return _kind.Set(v, l);
}

// END: TestOpStringOrder: Implementation

//   END: Message: TestOpStringOrder

//   BEGIN: Message: TestOrder
/*static*/
const OpProtobufMessage *
OpProtobufOrder_MessageSet::TestOrder::GetMessageDescriptor(OpProtobufOrder_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpProtobufOrder_Descriptors::_gen_MessageOffs_test_order_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("size"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("data"),
						OpProtobufField::Required
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("name"),
						OpProtobufField::Optional
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("orderType"),
						OpProtobufField::Required
						);
	fields[3].SetStringDataType(OpProtobufField::String_UniString);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("kind"),
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
						OpProtobufOrder_MessageSet::TestOrder,
						_size
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOrder,
						_data
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOrder,
						_name
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOrder,
						_orderType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpProtobufOrder_MessageSet::TestOrder,
						_kind
						);

	message = OP_NEW(OpProtobufMessage,
					(OpProtobufOrder_Descriptors::_gen_MsgID_test_order_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpProtobufOrder_MessageSet::TestOrder, has_bits_),
					OP_PROTO_OFFSETOF(OpProtobufOrder_MessageSet::TestOrder, encoded_size_),
					"TestOrder",
					OpProtobufMessageVector<OpProtobufOrder_MessageSet::TestOrder>::Make,
					OpProtobufMessageVector<OpProtobufOrder_MessageSet::TestOrder>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: TestOrder: Implementation

// Setters

OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetData(const OpData & v) 
{
	_data = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetData(const char * v, int l) 
{
	return _data.SetCopyData(v, l);
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetName(const UniString & v) 
{
	has_bits_.Reference().SetBit(2);
	_name = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _name.SetCopyData(v, l);
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetOrderType(const UniString & v) 
{
	_orderType = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetOrderType(const uni_char * v, int l) 
{
	return _orderType.SetCopyData(v, l);
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetKind(const UniString & v) 
{
	_kind = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufOrder_MessageSet::TestOrder::SetKind(const uni_char * v, int l) 
{
	return _kind.SetCopyData(v, l);
}

// END: TestOrder: Implementation

//   END: Message: TestOrder


// END: Messages



#endif // SELFTEST


