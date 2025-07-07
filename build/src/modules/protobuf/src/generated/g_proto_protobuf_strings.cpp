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

// Generated from ../../modules/protobuf/selftest/strings.proto

#include "core/pch.h"




#ifdef SELFTEST

#include "modules/protobuf/src/generated/g_proto_protobuf_strings.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_strings.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_strings.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpProtobufStrings_MessageSet

OpProtobufStrings_MessageSet::OpProtobufStrings_MessageSet()
{
}

/*virtual*/
OpProtobufStrings_MessageSet::~OpProtobufStrings_MessageSet()
{
}

// END: OpProtobufStrings_MessageSet

// BEGIN: Messages

//   BEGIN: Message: TestString
/*static*/
const OpProtobufMessage *
OpProtobufStrings_MessageSet::TestString::GetMessageDescriptor(OpProtobufStrings_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpProtobufStrings_Descriptors::_gen_MessageOffs_test_string_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name1"),
						OpProtobufField::Required
						);
	fields[0].SetStringDataType(OpProtobufField::String_UniString);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name2"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("name3"),
						OpProtobufField::Optional
						);
	fields[2].SetStringDataType(OpProtobufField::String_UniString);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("name4"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("name5"),
						OpProtobufField::Repeated
						);
	fields[4].SetStringDataType(OpProtobufField::String_UniString);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("name6"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpProtobufStrings_MessageSet::TestString,
						_name1
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpProtobufStrings_MessageSet::TestString,
						_name2
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpProtobufStrings_MessageSet::TestString,
						_name3
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpProtobufStrings_MessageSet::TestString,
						_name4
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpProtobufStrings_MessageSet::TestString,
						_name5
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpProtobufStrings_MessageSet::TestString,
						_name6
						);

	message = OP_NEW(OpProtobufMessage,
					(OpProtobufStrings_Descriptors::_gen_MsgID_test_string_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpProtobufStrings_MessageSet::TestString, has_bits_),
					OP_PROTO_OFFSETOF(OpProtobufStrings_MessageSet::TestString, encoded_size_),
					"TestString",
					OpProtobufMessageVector<OpProtobufStrings_MessageSet::TestString>::Make,
					OpProtobufMessageVector<OpProtobufStrings_MessageSet::TestString>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: TestString: Implementation

// Setters

UniString &
OpProtobufStrings_MessageSet::TestString::GetName1Ref() 
{
	return _name1;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName1(const UniString & v) 
{
	_name1 = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName1(const uni_char * v, int l) 
{
	return _name1.SetCopyData(v, l);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName1(const char * v, int l) 
{
	{
		TempBuffer buf;
		RETURN_IF_ERROR(buf.Append(v, l));
		return _name1.SetCopyData(buf.GetStorage(), buf.Length());
	}
}


OpString &
OpProtobufStrings_MessageSet::TestString::GetName2Ref() 
{
	return _name2;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName2(const OpString & v) 
{
	return _name2.Set(v);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName2(const uni_char * v, int l) 
{
	return _name2.Set(v, l);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName2(const char * v, int l) 
{
	return _name2.Set(v, l);
}


UniString &
OpProtobufStrings_MessageSet::TestString::GetName3Ref() 
{
	has_bits_.Reference().SetBit(2);
	return _name3;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName3(const UniString & v) 
{
	has_bits_.Reference().SetBit(2);
	_name3 = v;
	return OpStatus::OK;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName3(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _name3.SetCopyData(v, l);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName3(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	{
		TempBuffer buf;
		RETURN_IF_ERROR(buf.Append(v, l));
		return _name3.SetCopyData(buf.GetStorage(), buf.Length());
	}
}


OpString &
OpProtobufStrings_MessageSet::TestString::GetName4Ref() 
{
	has_bits_.Reference().SetBit(3);
	return _name4;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName4(const OpString & v) 
{
	has_bits_.Reference().SetBit(3);
	return _name4.Set(v);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName4(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _name4.Set(v, l);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::SetName4(const char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _name4.Set(v, l);
}


OpProtobufValueVector<UniString> &
OpProtobufStrings_MessageSet::TestString::GetName5Ref() 
{
	has_bits_.Reference().SetBit(4);
	return _name5;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::AppendToName5(const UniString &v) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendUniString(_name5, v);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::AppendToName5(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendUniString(_name5, v, l);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::AppendToName5(const char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendUniString(_name5, v, l);
}


OpAutoVector<OpString> &
OpProtobufStrings_MessageSet::TestString::GetName6Ref() 
{
	has_bits_.Reference().SetBit(5);
	return _name6;
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::AppendToName6(const OpString &v) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_name6, v);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::AppendToName6(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_name6, v, l);
}


OP_STATUS
OpProtobufStrings_MessageSet::TestString::AppendToName6(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_name6, v, l);
}


OpString *
OpProtobufStrings_MessageSet::TestString::AppendNewName6() 
{
	has_bits_.Reference().SetBit(5);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_name6.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: TestString: Implementation

//   END: Message: TestString


// END: Messages



#endif // SELFTEST


