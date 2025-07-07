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

// Generated from ../../modules/protobuf/selftest/bytes.proto

#include "core/pch.h"




#ifdef SELFTEST

#include "modules/protobuf/src/generated/g_proto_protobuf_bytes.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_bytes.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_bytes.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpProtobufBytes_MessageSet

OpProtobufBytes_MessageSet::OpProtobufBytes_MessageSet()
{
}

/*virtual*/
OpProtobufBytes_MessageSet::~OpProtobufBytes_MessageSet()
{
}

// END: OpProtobufBytes_MessageSet

// BEGIN: Messages

//   BEGIN: Message: TestBytes
/*static*/
const OpProtobufMessage *
OpProtobufBytes_MessageSet::TestBytes::GetMessageDescriptor(OpProtobufBytes_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpProtobufBytes_Descriptors::_gen_MessageOffs_test_bytes_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("bytes1"),
						OpProtobufField::Required
						);
	fields[0].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("bytes2"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("bytes3"),
						OpProtobufField::Optional
						);
	fields[2].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bytes,
						4,
						UNI_L("bytes4"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bytes,
						5,
						UNI_L("bytes5"),
						OpProtobufField::Repeated
						);
	fields[4].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bytes,
						6,
						UNI_L("bytes6"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpProtobufBytes_MessageSet::TestBytes,
						_bytes1
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpProtobufBytes_MessageSet::TestBytes,
						_bytes2
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpProtobufBytes_MessageSet::TestBytes,
						_bytes3
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpProtobufBytes_MessageSet::TestBytes,
						_bytes4
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpProtobufBytes_MessageSet::TestBytes,
						_bytes5
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpProtobufBytes_MessageSet::TestBytes,
						_bytes6
						);

	message = OP_NEW(OpProtobufMessage,
					(OpProtobufBytes_Descriptors::_gen_MsgID_test_bytes_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpProtobufBytes_MessageSet::TestBytes, has_bits_),
					OP_PROTO_OFFSETOF(OpProtobufBytes_MessageSet::TestBytes, encoded_size_),
					"TestBytes",
					OpProtobufMessageVector<OpProtobufBytes_MessageSet::TestBytes>::Make,
					OpProtobufMessageVector<OpProtobufBytes_MessageSet::TestBytes>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: TestBytes: Implementation

// Setters

OpData &
OpProtobufBytes_MessageSet::TestBytes::GetBytes1Ref() 
{
	return _bytes1;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes1(const OpData & v) 
{
	_bytes1 = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes1(const char * v, int l) 
{
	return _bytes1.SetCopyData(v, l);
}


ByteBuffer &
OpProtobufBytes_MessageSet::TestBytes::GetBytes2Ref() 
{
	return _bytes2;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes2(const ByteBuffer & v) 
{
	return OpProtobufAppend(_bytes2, v);
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes2(const char * v, int l) 
{
	_bytes2.Clear();
	return _bytes2.AppendBytes(v, l);
}


OpData &
OpProtobufBytes_MessageSet::TestBytes::GetBytes3Ref() 
{
	has_bits_.Reference().SetBit(2);
	return _bytes3;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes3(const OpData & v) 
{
	has_bits_.Reference().SetBit(2);
	_bytes3 = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes3(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _bytes3.SetCopyData(v, l);
}


ByteBuffer &
OpProtobufBytes_MessageSet::TestBytes::GetBytes4Ref() 
{
	has_bits_.Reference().SetBit(3);
	return _bytes4;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes4(const ByteBuffer & v) 
{
	has_bits_.Reference().SetBit(3);
	return OpProtobufAppend(_bytes4, v);
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::SetBytes4(const char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	_bytes4.Clear();
	return _bytes4.AppendBytes(v, l);
}


OpProtobufValueVector<OpData> &
OpProtobufBytes_MessageSet::TestBytes::GetBytes5Ref() 
{
	has_bits_.Reference().SetBit(4);
	return _bytes5;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::AppendToBytes5(const OpData &v) 
{
	has_bits_.Reference().SetBit(4);
	return _bytes5.Add(v);
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::AppendToBytes5(const char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	OpData tmp;
	RETURN_IF_ERROR(tmp.SetCopyData(v, l));
	return _bytes5.Add(tmp);
}


OpAutoVector<ByteBuffer> &
OpProtobufBytes_MessageSet::TestBytes::GetBytes6Ref() 
{
	has_bits_.Reference().SetBit(5);
	return _bytes6;
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::AppendToBytes6(const ByteBuffer &v) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendBytes(_bytes6, v);
}


OP_STATUS
OpProtobufBytes_MessageSet::TestBytes::AppendToBytes6(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendBytes(_bytes6, v, l);
}


ByteBuffer *
OpProtobufBytes_MessageSet::TestBytes::AppendNewBytes6() 
{
	has_bits_.Reference().SetBit(5);
	OpAutoPtr<ByteBuffer> tmp(OP_NEW(ByteBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_bytes6.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: TestBytes: Implementation

//   END: Message: TestBytes


// END: Messages



#endif // SELFTEST


