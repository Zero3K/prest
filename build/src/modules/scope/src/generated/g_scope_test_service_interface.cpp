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

#include "core/pch.h"

#if defined(SELFTEST) && defined(SCOPE_SUPPORT)

#include "modules/scope/src/generated/g_scope_test_service_interface.h"

// BEGIN: OtScopeTestService_Descriptors

OtScopeTestService_Descriptors::OtScopeTestService_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OtScopeTestService_Descriptors::~OtScopeTestService_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OtScopeTestService_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_EnumData_Type;
	enum_id_list[1] = _gen_EnumID_EnumData_Empty;
	enum_id_list[2] = _gen_EnumID_GlobalType;
	return OpStatus::OK;
}

const OpProtobufMessage *
OtScopeTestService_Descriptors::Get(unsigned id) const
{
	OtScopeTestService_Descriptors *descriptors = const_cast<OtScopeTestService_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_async_args_:
		return OtScopeTestService_MessageSet::AsyncArgs::GetMessageDescriptor(descriptors);

	case _gen_MsgID_async_data_:
		return OtScopeTestService_MessageSet::AsyncData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_bytes_access_:
		return OtScopeTestService_MessageSet::BytesAccess::GetMessageDescriptor(descriptors);

	case _gen_MsgID_enum_data_:
		return OtScopeTestService_MessageSet::EnumData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_:
		return OtScopeTestService_MessageSet::Event::GetMessageDescriptor(descriptors);

	case _gen_MsgID_float_access_:
		return OtScopeTestService_MessageSet::FloatAccess::GetMessageDescriptor(descriptors);

	case _gen_MsgID_float_message_:
		return OtScopeTestService_MessageSet::FloatMessage::GetMessageDescriptor(descriptors);

	case _gen_MsgID_format_error_arg_:
		return OtScopeTestService_MessageSet::FormatErrorArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_repeated_data_arg_:
		return OtScopeTestService_MessageSet::GetRepeatedDataArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_in_add_:
		return OtScopeTestService_MessageSet::InAdd::GetMessageDescriptor(descriptors);

	case _gen_MsgID_in_data_:
		return OtScopeTestService_MessageSet::InData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_missing_trail_inner_:
		return OtScopeTestService_MessageSet::MissingTrail_Inner::GetMessageDescriptor(descriptors);

	case _gen_MsgID_outer_inner_:
		return OtScopeTestService_MessageSet::Outer_Inner::GetMessageDescriptor(descriptors);

	case _gen_MsgID_outer_inner_innermost_:
		return OtScopeTestService_MessageSet::Outer_Inner_Innermost::GetMessageDescriptor(descriptors);

	case _gen_MsgID_inspect_element_arg_:
		return OtScopeTestService_MessageSet::InspectElementArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_int_access_:
		return OtScopeTestService_MessageSet::IntAccess::GetMessageDescriptor(descriptors);

	case _gen_MsgID_integer_message_:
		return OtScopeTestService_MessageSet::IntegerMessage::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_size_problem_:
		return OtScopeTestService_MessageSet::MessageSizeProblem::GetMessageDescriptor(descriptors);

	case _gen_MsgID_missing_input_:
		return OtScopeTestService_MessageSet::MissingInput::GetMessageDescriptor(descriptors);

	case _gen_MsgID_missing_input_sub_:
		return OtScopeTestService_MessageSet::MissingInputSub::GetMessageDescriptor(descriptors);

	case _gen_MsgID_missing_trail_:
		return OtScopeTestService_MessageSet::MissingTrail::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mixed_byte_type_:
		return OtScopeTestService_MessageSet::MixedByteType::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mixed_string_type_:
		return OtScopeTestService_MessageSet::MixedStringType::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_data_nested_more_nested_:
		return OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_data_nested_:
		return OtScopeTestService_MessageSet::RepeatedData_Nested::GetMessageDescriptor(descriptors);

	case _gen_MsgID_ones_and_zeroes_:
		return OtScopeTestService_MessageSet::OnesAndZeroes::GetMessageDescriptor(descriptors);

	case _gen_MsgID_optional_:
		return OtScopeTestService_MessageSet::Optional::GetMessageDescriptor(descriptors);

	case _gen_MsgID_optional_optional_inner_:
		return OtScopeTestService_MessageSet::Optional_OptionalInner::GetMessageDescriptor(descriptors);

	case _gen_MsgID_optional_integer_:
		return OtScopeTestService_MessageSet::OptionalInteger::GetMessageDescriptor(descriptors);

	case _gen_MsgID_optional_sub_:
		return OtScopeTestService_MessageSet::OptionalSub::GetMessageDescriptor(descriptors);

	case _gen_MsgID_optional_sub_optional_sub_inner_:
		return OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_size_problem_sub_message_same_address_other_:
		return OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other::GetMessageDescriptor(descriptors);

	case _gen_MsgID_out_add_:
		return OtScopeTestService_MessageSet::OutAdd::GetMessageDescriptor(descriptors);

	case _gen_MsgID_out_data_:
		return OtScopeTestService_MessageSet::OutData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_outer_:
		return OtScopeTestService_MessageSet::Outer::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_:
		return OtScopeTestService_MessageSet::Repeated::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_binary_:
		return OtScopeTestService_MessageSet::RepeatedBinary::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_data_:
		return OtScopeTestService_MessageSet::RepeatedData::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_float_:
		return OtScopeTestService_MessageSet::RepeatedFloat::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_repeated_inner_:
		return OtScopeTestService_MessageSet::Repeated_RepeatedInner::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_integer_:
		return OtScopeTestService_MessageSet::RepeatedInteger::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_string_:
		return OtScopeTestService_MessageSet::RepeatedString::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_sub_:
		return OtScopeTestService_MessageSet::RepeatedSub::GetMessageDescriptor(descriptors);

	case _gen_MsgID_repeated_sub_repeated_sub_inner_:
		return OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_size_problem_sub_message_same_address_:
		return OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::GetMessageDescriptor(descriptors);

	case _gen_MsgID_string_access_:
		return OtScopeTestService_MessageSet::StringAccess::GetMessageDescriptor(descriptors);

	case _gen_MsgID_string_message_:
		return OtScopeTestService_MessageSet::StringMessage::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_size_problem_sub_message_:
		return OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_size_problem_sub_message_same_address_sub_with_same_address_:
		return OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress::GetMessageDescriptor(descriptors);

	case _gen_MsgID_unsigned_integer_message_:
		return OtScopeTestService_MessageSet::UnsignedIntegerMessage::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OtScopeTestService_Descriptors


// BEGIN: OtScopeTestService_MessageSet

OtScopeTestService_MessageSet::OtScopeTestService_MessageSet()
{
}

/*virtual*/
OtScopeTestService_MessageSet::~OtScopeTestService_MessageSet()
{
}

// END: OtScopeTestService_MessageSet

// BEGIN: Messages

//   BEGIN: Message: AsyncArgs
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::AsyncArgs::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_async_args_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("value"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::AsyncArgs,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_async_args_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::AsyncArgs, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::AsyncArgs, encoded_size_),
					"AsyncArgs",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::AsyncArgs>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::AsyncArgs>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: AsyncArgs: Implementation


// END: AsyncArgs: Implementation

//   END: Message: AsyncArgs

//   BEGIN: Message: AsyncData
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::AsyncData::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_async_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("result"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::AsyncData,
						_result
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_async_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::AsyncData, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::AsyncData, encoded_size_),
					"AsyncData",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::AsyncData>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::AsyncData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: AsyncData: Implementation


// END: AsyncData: Implementation

//   END: Message: AsyncData

//   BEGIN: Message: BytesAccess
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::BytesAccess::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_bytes_access_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::BytesAccess,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_bytes_access_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::BytesAccess, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::BytesAccess, encoded_size_),
					"BytesAccess",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::BytesAccess>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::BytesAccess>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BytesAccess: Implementation

// Setters

ByteBuffer &
OtScopeTestService_MessageSet::BytesAccess::GetARef() 
{
	return _a;
}


OP_STATUS
OtScopeTestService_MessageSet::BytesAccess::SetA(const ByteBuffer & v) 
{
	return OpProtobufAppend(_a, v);
}


OP_STATUS
OtScopeTestService_MessageSet::BytesAccess::SetA(const char * v, int l) 
{
	_a.Clear();
	return _a.AppendBytes(v, l);
}

// END: BytesAccess: Implementation

//   END: Message: BytesAccess

//   BEGIN: Message: EnumData
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::EnumData::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_enum_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Type // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("empty"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Empty // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::EnumData,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::EnumData,
						_empty
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_enum_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::EnumData, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::EnumData, encoded_size_),
					"EnumData",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::EnumData>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::EnumData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EnumData: Implementation

// Enum value EnumData.Type.BOOL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OtScopeTestService_MessageSet::EnumData_Type OtScopeTestService_MessageSet::EnumData::OP_TYPE_BOOL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EnumData.Type.NUMBER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OtScopeTestService_MessageSet::EnumData_Type OtScopeTestService_MessageSet::EnumData::OP_TYPE_NUMBER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value EnumData.Type.OBJECT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OtScopeTestService_MessageSet::EnumData_Type OtScopeTestService_MessageSet::EnumData::OP_TYPE_OBJECT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)





// Setters

void
OtScopeTestService_MessageSet::EnumData::SetType(OtScopeTestService_MessageSet::EnumData_Type v) 
{
	_type = static_cast<OtScopeTestService_MessageSet::EnumData_Type>(v);
}


void
OtScopeTestService_MessageSet::EnumData::SetEmpty(OtScopeTestService_MessageSet::EnumData_Empty v) 
{
	_empty = static_cast<OtScopeTestService_MessageSet::EnumData_Empty>(v);
}

// END: EnumData: Implementation

//   END: Message: EnumData

//   BEGIN: Message: Event
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Event::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_event_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("currentID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Event,
						_currentID
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_event_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Event, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Event, encoded_size_),
					"Event",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Event>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Event>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Event: Implementation


// END: Event: Implementation

//   END: Message: Event

//   BEGIN: Message: FloatAccess
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::FloatAccess::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_float_access_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Float,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("b"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FloatAccess,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FloatAccess,
						_b
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_float_access_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::FloatAccess, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::FloatAccess, encoded_size_),
					"FloatAccess",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::FloatAccess>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::FloatAccess>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: FloatAccess: Implementation


// END: FloatAccess: Implementation

//   END: Message: FloatAccess

//   BEGIN: Message: FloatMessage
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::FloatMessage::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_float_message_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Float,
						1,
						UNI_L("fuzzy"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("pi"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Double,
						3,
						UNI_L("sqr"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Double,
						4,
						UNI_L("sci"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FloatMessage,
						_fuzzy
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FloatMessage,
						_pi
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FloatMessage,
						_sqr
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FloatMessage,
						_sci
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_float_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::FloatMessage, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::FloatMessage, encoded_size_),
					"FloatMessage",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::FloatMessage>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::FloatMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: FloatMessage: Implementation


// END: FloatMessage: Implementation

//   END: Message: FloatMessage

//   BEGIN: Message: FormatErrorArg
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::FormatErrorArg::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_format_error_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("index"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::FormatErrorArg,
						_index
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_format_error_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::FormatErrorArg, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::FormatErrorArg, encoded_size_),
					"FormatErrorArg",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::FormatErrorArg>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::FormatErrorArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: FormatErrorArg: Implementation


// END: FormatErrorArg: Implementation

//   END: Message: FormatErrorArg

//   BEGIN: Message: GetRepeatedDataArg
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::GetRepeatedDataArg::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_get_repeated_data_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("integers"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("booleans"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("strings"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("nested"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::GetRepeatedDataArg,
						_integers
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::GetRepeatedDataArg,
						_booleans
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::GetRepeatedDataArg,
						_strings
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::GetRepeatedDataArg,
						_nested
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_get_repeated_data_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::GetRepeatedDataArg, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::GetRepeatedDataArg, encoded_size_),
					"GetRepeatedDataArg",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::GetRepeatedDataArg>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::GetRepeatedDataArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetRepeatedDataArg: Implementation


// END: GetRepeatedDataArg: Implementation

//   END: Message: GetRepeatedDataArg

//   BEGIN: Message: InAdd
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::InAdd::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_in_add_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("valueList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::InAdd,
						_valueList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_in_add_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::InAdd, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::InAdd, encoded_size_),
					"InAdd",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::InAdd>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::InAdd>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: InAdd: Implementation

// Setters

OpValueVector<UINT32> &
OtScopeTestService_MessageSet::InAdd::GetValueListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _valueList;
}


OP_STATUS
OtScopeTestService_MessageSet::InAdd::AppendToValueList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _valueList.Add(v);
}

// END: InAdd: Implementation

//   END: Message: InAdd

//   BEGIN: Message: InData
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::InData::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_in_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("title"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::InData,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::InData,
						_title
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_in_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::InData, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::InData, encoded_size_),
					"InData",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::InData>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::InData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: InData: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::InData::GetTitleRef() 
{
	return _title;
}


OP_STATUS
OtScopeTestService_MessageSet::InData::SetTitle(const OpString & v) 
{
	return _title.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::InData::SetTitle(const uni_char * v, int l) 
{
	return _title.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::InData::SetTitle(const char * v, int l) 
{
	return _title.Set(v, l);
}

// END: InData: Implementation

//   END: Message: InData

//   BEGIN: Message: Inner
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MissingTrail_Inner::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_missing_trail_inner_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail_Inner,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_missing_trail_inner_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingTrail_Inner, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingTrail_Inner, encoded_size_),
					"Inner",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail_Inner>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail_Inner>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::MissingTrail::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: MissingTrail.Inner: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::MissingTrail_Inner::GetARef() 
{
	return _a;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail_Inner::SetA(const OpString & v) 
{
	return _a.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail_Inner::SetA(const uni_char * v, int l) 
{
	return _a.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail_Inner::SetA(const char * v, int l) 
{
	return _a.Set(v, l);
}

// END: MissingTrail.Inner: Implementation

//   END: Message: Inner

//   BEGIN: Message: Inner
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Outer_Inner::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_outer_inner_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("b"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("c"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bytes,
						4,
						UNI_L("d"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer_Inner,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer_Inner,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer_Inner,
						_c
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer_Inner,
						_d
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_outer_inner_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Outer_Inner, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Outer_Inner, encoded_size_),
					"Inner",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Outer_Inner>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Outer_Inner>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Outer_Inner_Innermost::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::Outer::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Outer.Inner: Implementation


// Setters

OpString &
OtScopeTestService_MessageSet::Outer_Inner::GetBRef() 
{
	return _b;
}


OP_STATUS
OtScopeTestService_MessageSet::Outer_Inner::SetB(const OpString & v) 
{
	return _b.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::Outer_Inner::SetB(const uni_char * v, int l) 
{
	return _b.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::Outer_Inner::SetB(const char * v, int l) 
{
	return _b.Set(v, l);
}


OtScopeTestService_MessageSet::Outer_Inner_Innermost &
OtScopeTestService_MessageSet::Outer_Inner::GetCRef() 
{
	return _c;
}


ByteBuffer &
OtScopeTestService_MessageSet::Outer_Inner::GetDRef() 
{
	return _d;
}


OP_STATUS
OtScopeTestService_MessageSet::Outer_Inner::SetD(const ByteBuffer & v) 
{
	return OpProtobufAppend(_d, v);
}


OP_STATUS
OtScopeTestService_MessageSet::Outer_Inner::SetD(const char * v, int l) 
{
	_d.Clear();
	return _d.AppendBytes(v, l);
}

// END: Outer.Inner: Implementation

//   END: Message: Inner

//   BEGIN: Message: Innermost
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Outer_Inner_Innermost::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_outer_inner_innermost_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer_Inner_Innermost,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_outer_inner_innermost_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Outer_Inner_Innermost, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Outer_Inner_Innermost, encoded_size_),
					"Innermost",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Outer_Inner_Innermost>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Outer_Inner_Innermost>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::Outer_Inner::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Outer.Inner.Innermost: Implementation


// END: Outer.Inner.Innermost: Implementation

//   END: Message: Innermost

//   BEGIN: Message: InspectElementArg
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::InspectElementArg::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_inspect_element_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("selector"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::InspectElementArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::InspectElementArg,
						_selector
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_inspect_element_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::InspectElementArg, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::InspectElementArg, encoded_size_),
					"InspectElementArg",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::InspectElementArg>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::InspectElementArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: InspectElementArg: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::InspectElementArg::GetSelectorRef() 
{
	return _selector;
}


OP_STATUS
OtScopeTestService_MessageSet::InspectElementArg::SetSelector(const OpString & v) 
{
	return _selector.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::InspectElementArg::SetSelector(const uni_char * v, int l) 
{
	return _selector.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::InspectElementArg::SetSelector(const char * v, int l) 
{
	return _selector.Set(v, l);
}

// END: InspectElementArg: Implementation

//   END: Message: InspectElementArg

//   BEGIN: Message: IntAccess
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::IntAccess::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_int_access_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("b"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Sint32,
						3,
						UNI_L("c"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("d"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("e"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntAccess,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntAccess,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntAccess,
						_c
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntAccess,
						_d
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntAccess,
						_e
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_int_access_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::IntAccess, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::IntAccess, encoded_size_),
					"IntAccess",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::IntAccess>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::IntAccess>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: IntAccess: Implementation


// END: IntAccess: Implementation

//   END: Message: IntAccess

//   BEGIN: Message: IntegerMessage
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::IntegerMessage::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_integer_message_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Sint32,
						4,
						UNI_L("scriptID"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Sfixed32,
						5,
						UNI_L("htmlID"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("isActive"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntegerMessage,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntegerMessage,
						_objectID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntegerMessage,
						_windowID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntegerMessage,
						_scriptID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntegerMessage,
						_htmlID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::IntegerMessage,
						_isActive
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_integer_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::IntegerMessage, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::IntegerMessage, encoded_size_),
					"IntegerMessage",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::IntegerMessage>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::IntegerMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: IntegerMessage: Implementation


// END: IntegerMessage: Implementation

//   END: Message: IntegerMessage

//   BEGIN: Message: MessageSizeProblem
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MessageSizeProblem::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_message_size_problem_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("subMessageList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MessageSizeProblem,
						_subMessageList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_message_size_problem_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem, encoded_size_),
					"MessageSizeProblem",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(MessageSizeProblem_SubMessage::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: MessageSizeProblem: Implementation


// Setters

OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage> &
OtScopeTestService_MessageSet::MessageSizeProblem::GetSubMessageListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _subMessageList;
}


OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage *
OtScopeTestService_MessageSet::MessageSizeProblem::AppendNewSubMessageList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage> tmp(OP_NEW(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_subMessageList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage *
OtScopeTestService_MessageSet::MessageSizeProblem::AppendNewSubMessageList_L() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage> tmp(OP_NEW_L(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage, ()));
	_subMessageList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::MessageSizeProblem::AppendToSubMessageList(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage * v) 
{
	has_bits_.Reference().SetBit(0);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _subMessageList.Add(v);
}

// END: MessageSizeProblem: Implementation

//   END: Message: MessageSizeProblem

//   BEGIN: Message: MissingInput
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MissingInput::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_missing_input_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("a"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("b"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("c"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("d"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("eList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("fList"),
						OpProtobufField::Repeated
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bytes,
						7,
						UNI_L("gList"),
						OpProtobufField::Repeated
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Message,
						8,
						UNI_L("hList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_c
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_d
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_eList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_fList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_gList
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInput,
						_hList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_missing_input_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingInput, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingInput, encoded_size_),
					"MissingInput",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInput>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInput>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(MissingInputSub::GetMessageDescriptor(descriptors));
	fields[7].SetMessage(MissingInputSub::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: MissingInput: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::MissingInput::GetBRef() 
{
	has_bits_.Reference().SetBit(1);
	return _b;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::SetB(const OpString & v) 
{
	has_bits_.Reference().SetBit(1);
	return _b.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::SetB(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _b.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::SetB(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _b.Set(v, l);
}


ByteBuffer &
OtScopeTestService_MessageSet::MissingInput::GetCRef() 
{
	has_bits_.Reference().SetBit(2);
	return _c;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::SetC(const ByteBuffer & v) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufAppend(_c, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::SetC(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	_c.Clear();
	return _c.AppendBytes(v, l);
}


void
OtScopeTestService_MessageSet::MissingInput::SetD(OtScopeTestService_MessageSet::MissingInputSub * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_d);
	_d = v;
}


OtScopeTestService_MessageSet::MissingInputSub *
OtScopeTestService_MessageSet::MissingInput::NewD_L() 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_d);
	_d = OP_NEW_L(OtScopeTestService_MessageSet::MissingInputSub, ());
	return _d;
}


OpValueVector<UINT32> &
OtScopeTestService_MessageSet::MissingInput::GetEListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _eList;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToEList(UINT32 v) 
{
	has_bits_.Reference().SetBit(4);
	return _eList.Add(v);
}


OpAutoVector<OpString> &
OtScopeTestService_MessageSet::MissingInput::GetFListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _fList;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToFList(const OpString &v) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_fList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToFList(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_fList, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToFList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_fList, v, l);
}


OpString *
OtScopeTestService_MessageSet::MissingInput::AppendNewFList() 
{
	has_bits_.Reference().SetBit(5);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_fList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpAutoVector<ByteBuffer> &
OtScopeTestService_MessageSet::MissingInput::GetGListRef() 
{
	has_bits_.Reference().SetBit(6);
	return _gList;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToGList(const ByteBuffer &v) 
{
	has_bits_.Reference().SetBit(6);
	return OpProtobufUtils::AppendBytes(_gList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToGList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(6);
	return OpProtobufUtils::AppendBytes(_gList, v, l);
}


ByteBuffer *
OtScopeTestService_MessageSet::MissingInput::AppendNewGList() 
{
	has_bits_.Reference().SetBit(6);
	OpAutoPtr<ByteBuffer> tmp(OP_NEW(ByteBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_gList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInputSub> &
OtScopeTestService_MessageSet::MissingInput::GetHListRef() 
{
	has_bits_.Reference().SetBit(7);
	return _hList;
}


OtScopeTestService_MessageSet::MissingInputSub *
OtScopeTestService_MessageSet::MissingInput::AppendNewHList() 
{
	has_bits_.Reference().SetBit(7);
	OpAutoPtr<OtScopeTestService_MessageSet::MissingInputSub> tmp(OP_NEW(OtScopeTestService_MessageSet::MissingInputSub, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_hList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::MissingInputSub *
OtScopeTestService_MessageSet::MissingInput::AppendNewHList_L() 
{
	has_bits_.Reference().SetBit(7);
	OpAutoPtr<OtScopeTestService_MessageSet::MissingInputSub> tmp(OP_NEW_L(OtScopeTestService_MessageSet::MissingInputSub, ()));
	_hList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInput::AppendToHList(OtScopeTestService_MessageSet::MissingInputSub * v) 
{
	has_bits_.Reference().SetBit(7);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _hList.Add(v);
}

// END: MissingInput: Implementation

//   END: Message: MissingInput

//   BEGIN: Message: MissingInputSub
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MissingInputSub::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_missing_input_sub_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingInputSub,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_missing_input_sub_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingInputSub, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingInputSub, encoded_size_),
					"MissingInputSub",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInputSub>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingInputSub>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MissingInputSub: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::MissingInputSub::GetARef() 
{
	return _a;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInputSub::SetA(const OpString & v) 
{
	return _a.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInputSub::SetA(const uni_char * v, int l) 
{
	return _a.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingInputSub::SetA(const char * v, int l) 
{
	return _a.Set(v, l);
}

// END: MissingInputSub: Implementation

//   END: Message: MissingInputSub

//   BEGIN: Message: MissingTrail
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MissingTrail::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_missing_trail_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("b"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("c"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("d"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Int32,
						5,
						UNI_L("eList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("fList"),
						OpProtobufField::Repeated
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bytes,
						7,
						UNI_L("gList"),
						OpProtobufField::Repeated
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Message,
						8,
						UNI_L("hList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_c
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_d
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_eList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_fList
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_gList
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MissingTrail,
						_hList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_missing_trail_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingTrail, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MissingTrail, encoded_size_),
					"MissingTrail",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(MissingTrail_Inner::GetMessageDescriptor(descriptors));
	fields[7].SetMessage(MissingTrail_Inner::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: MissingTrail: Implementation


// Setters

OpString &
OtScopeTestService_MessageSet::MissingTrail::GetBRef() 
{
	has_bits_.Reference().SetBit(1);
	return _b;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::SetB(const OpString & v) 
{
	has_bits_.Reference().SetBit(1);
	return _b.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::SetB(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _b.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::SetB(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _b.Set(v, l);
}


ByteBuffer &
OtScopeTestService_MessageSet::MissingTrail::GetCRef() 
{
	has_bits_.Reference().SetBit(2);
	return _c;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::SetC(const ByteBuffer & v) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufAppend(_c, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::SetC(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	_c.Clear();
	return _c.AppendBytes(v, l);
}


void
OtScopeTestService_MessageSet::MissingTrail::SetD(OtScopeTestService_MessageSet::MissingTrail_Inner * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_d);
	_d = v;
}


OtScopeTestService_MessageSet::MissingTrail_Inner *
OtScopeTestService_MessageSet::MissingTrail::NewD_L() 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_d);
	_d = OP_NEW_L(OtScopeTestService_MessageSet::MissingTrail_Inner, ());
	return _d;
}


OpValueVector<INT32> &
OtScopeTestService_MessageSet::MissingTrail::GetEListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _eList;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToEList(INT32 v) 
{
	has_bits_.Reference().SetBit(4);
	return _eList.Add(v);
}


OpAutoVector<OpString> &
OtScopeTestService_MessageSet::MissingTrail::GetFListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _fList;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToFList(const OpString &v) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_fList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToFList(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_fList, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToFList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendString(_fList, v, l);
}


OpString *
OtScopeTestService_MessageSet::MissingTrail::AppendNewFList() 
{
	has_bits_.Reference().SetBit(5);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_fList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpAutoVector<ByteBuffer> &
OtScopeTestService_MessageSet::MissingTrail::GetGListRef() 
{
	has_bits_.Reference().SetBit(6);
	return _gList;
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToGList(const ByteBuffer &v) 
{
	has_bits_.Reference().SetBit(6);
	return OpProtobufUtils::AppendBytes(_gList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToGList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(6);
	return OpProtobufUtils::AppendBytes(_gList, v, l);
}


ByteBuffer *
OtScopeTestService_MessageSet::MissingTrail::AppendNewGList() 
{
	has_bits_.Reference().SetBit(6);
	OpAutoPtr<ByteBuffer> tmp(OP_NEW(ByteBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_gList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpProtobufMessageVector<OtScopeTestService_MessageSet::MissingTrail_Inner> &
OtScopeTestService_MessageSet::MissingTrail::GetHListRef() 
{
	has_bits_.Reference().SetBit(7);
	return _hList;
}


OtScopeTestService_MessageSet::MissingTrail_Inner *
OtScopeTestService_MessageSet::MissingTrail::AppendNewHList() 
{
	has_bits_.Reference().SetBit(7);
	OpAutoPtr<OtScopeTestService_MessageSet::MissingTrail_Inner> tmp(OP_NEW(OtScopeTestService_MessageSet::MissingTrail_Inner, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_hList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::MissingTrail_Inner *
OtScopeTestService_MessageSet::MissingTrail::AppendNewHList_L() 
{
	has_bits_.Reference().SetBit(7);
	OpAutoPtr<OtScopeTestService_MessageSet::MissingTrail_Inner> tmp(OP_NEW_L(OtScopeTestService_MessageSet::MissingTrail_Inner, ()));
	_hList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::MissingTrail::AppendToHList(OtScopeTestService_MessageSet::MissingTrail_Inner * v) 
{
	has_bits_.Reference().SetBit(7);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _hList.Add(v);
}

// END: MissingTrail: Implementation

//   END: Message: MissingTrail

//   BEGIN: Message: MixedByteType
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MixedByteType::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_mixed_byte_type_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("type1"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("type2"),
						OpProtobufField::Required
						);
	fields[1].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("type3"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bytes,
						4,
						UNI_L("type4"),
						OpProtobufField::Optional
						);
	fields[3].SetBytesDataType(OpProtobufField::Bytes_OpData);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bytes,
						5,
						UNI_L("type5List"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bytes,
						6,
						UNI_L("type6List"),
						OpProtobufField::Repeated
						);
	fields[5].SetBytesDataType(OpProtobufField::Bytes_OpData);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedByteType,
						_type1
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedByteType,
						_type2
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedByteType,
						_type3
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedByteType,
						_type4
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedByteType,
						_type5List
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedByteType,
						_type6List
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_mixed_byte_type_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MixedByteType, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MixedByteType, encoded_size_),
					"MixedByteType",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MixedByteType>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MixedByteType>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MixedByteType: Implementation

// Setters

ByteBuffer &
OtScopeTestService_MessageSet::MixedByteType::GetType1Ref() 
{
	return _type1;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType1(const ByteBuffer & v) 
{
	return OpProtobufAppend(_type1, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType1(const char * v, int l) 
{
	_type1.Clear();
	return _type1.AppendBytes(v, l);
}


OpData &
OtScopeTestService_MessageSet::MixedByteType::GetType2Ref() 
{
	return _type2;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType2(const OpData & v) 
{
	_type2 = v;
	return OpStatus::OK;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType2(const char * v, int l) 
{
	return _type2.SetCopyData(v, l);
}


ByteBuffer &
OtScopeTestService_MessageSet::MixedByteType::GetType3Ref() 
{
	has_bits_.Reference().SetBit(2);
	return _type3;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType3(const ByteBuffer & v) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufAppend(_type3, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType3(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	_type3.Clear();
	return _type3.AppendBytes(v, l);
}


OpData &
OtScopeTestService_MessageSet::MixedByteType::GetType4Ref() 
{
	has_bits_.Reference().SetBit(3);
	return _type4;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType4(const OpData & v) 
{
	has_bits_.Reference().SetBit(3);
	_type4 = v;
	return OpStatus::OK;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::SetType4(const char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _type4.SetCopyData(v, l);
}


OpAutoVector<ByteBuffer> &
OtScopeTestService_MessageSet::MixedByteType::GetType5ListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _type5List;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::AppendToType5List(const ByteBuffer &v) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendBytes(_type5List, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::AppendToType5List(const char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendBytes(_type5List, v, l);
}


ByteBuffer *
OtScopeTestService_MessageSet::MixedByteType::AppendNewType5List() 
{
	has_bits_.Reference().SetBit(4);
	OpAutoPtr<ByteBuffer> tmp(OP_NEW(ByteBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_type5List.Add(tmp.get()), NULL);
	return tmp.release();
}


OpProtobufValueVector<OpData> &
OtScopeTestService_MessageSet::MixedByteType::GetType6ListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _type6List;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::AppendToType6List(const OpData &v) 
{
	has_bits_.Reference().SetBit(5);
	return _type6List.Add(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedByteType::AppendToType6List(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	OpData tmp;
	RETURN_IF_ERROR(tmp.SetCopyData(v, l));
	return _type6List.Add(tmp);
}

// END: MixedByteType: Implementation

//   END: Message: MixedByteType

//   BEGIN: Message: MixedStringType
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MixedStringType::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_mixed_string_type_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("type1"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("type2"),
						OpProtobufField::Required
						);
	fields[1].SetStringDataType(OpProtobufField::String_TempBuffer);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("type3"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("type4"),
						OpProtobufField::Optional
						);
	fields[3].SetStringDataType(OpProtobufField::String_TempBuffer);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("type5List"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("type6List"),
						OpProtobufField::Repeated
						);
	fields[5].SetStringDataType(OpProtobufField::String_TempBuffer);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedStringType,
						_type1
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedStringType,
						_type2
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedStringType,
						_type3
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedStringType,
						_type4
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedStringType,
						_type5List
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MixedStringType,
						_type6List
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_mixed_string_type_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MixedStringType, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MixedStringType, encoded_size_),
					"MixedStringType",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MixedStringType>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MixedStringType>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MixedStringType: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::MixedStringType::GetType1Ref() 
{
	return _type1;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType1(const OpString & v) 
{
	return _type1.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType1(const uni_char * v, int l) 
{
	return _type1.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType1(const char * v, int l) 
{
	return _type1.Set(v, l);
}


TempBuffer &
OtScopeTestService_MessageSet::MixedStringType::GetType2Ref() 
{
	return _type2;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType2(const TempBuffer & v) 
{
	_type2.Clear();
	return _type2.Append(v.GetStorage(), v.Length());
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType2(const uni_char * v, int l) 
{
	_type2.Clear();
	return _type2.Append(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType2(const char * v, int l) 
{
	_type2.Clear();
	return _type2.Append(v, l);
}


OpString &
OtScopeTestService_MessageSet::MixedStringType::GetType3Ref() 
{
	has_bits_.Reference().SetBit(2);
	return _type3;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType3(const OpString & v) 
{
	has_bits_.Reference().SetBit(2);
	return _type3.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType3(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _type3.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType3(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _type3.Set(v, l);
}


TempBuffer &
OtScopeTestService_MessageSet::MixedStringType::GetType4Ref() 
{
	has_bits_.Reference().SetBit(3);
	return _type4;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType4(const TempBuffer & v) 
{
	has_bits_.Reference().SetBit(3);
	_type4.Clear();
	return _type4.Append(v.GetStorage(), v.Length());
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType4(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	_type4.Clear();
	return _type4.Append(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::SetType4(const char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	_type4.Clear();
	return _type4.Append(v, l);
}


OpAutoVector<OpString> &
OtScopeTestService_MessageSet::MixedStringType::GetType5ListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _type5List;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::AppendToType5List(const OpString &v) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendString(_type5List, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::AppendToType5List(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendString(_type5List, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::AppendToType5List(const char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return OpProtobufUtils::AppendString(_type5List, v, l);
}


OpString *
OtScopeTestService_MessageSet::MixedStringType::AppendNewType5List() 
{
	has_bits_.Reference().SetBit(4);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_type5List.Add(tmp.get()), NULL);
	return tmp.release();
}


OpAutoVector<TempBuffer> &
OtScopeTestService_MessageSet::MixedStringType::GetType6ListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _type6List;
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::AppendToType6List(const TempBuffer &v) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendTempBuffer(_type6List, v);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::AppendToType6List(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendTempBuffer(_type6List, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::MixedStringType::AppendToType6List(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return OpProtobufUtils::AppendTempBuffer(_type6List, v, l);
}


TempBuffer *
OtScopeTestService_MessageSet::MixedStringType::AppendNewType6List() 
{
	has_bits_.Reference().SetBit(5);
	OpAutoPtr<TempBuffer> tmp(OP_NEW(TempBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_type6List.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: MixedStringType: Implementation

//   END: Message: MixedStringType

//   BEGIN: Message: MoreNested
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_data_nested_more_nested_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("b"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("c"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("d"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested,
						_c
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested,
						_d
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_data_nested_more_nested_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested, encoded_size_),
					"MoreNested",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::RepeatedData_Nested::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: RepeatedData.Nested.MoreNested: Implementation


// END: RepeatedData.Nested.MoreNested: Implementation

//   END: Message: MoreNested

//   BEGIN: Message: Nested
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedData_Nested::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_data_nested_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("moreNestedList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData_Nested,
						_moreNestedList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_data_nested_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedData_Nested, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedData_Nested, encoded_size_),
					"Nested",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(RepeatedData_Nested_MoreNested::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::RepeatedData::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: RepeatedData.Nested: Implementation


// Setters

OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested> &
OtScopeTestService_MessageSet::RepeatedData_Nested::GetMoreNestedListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _moreNestedList;
}


OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested *
OtScopeTestService_MessageSet::RepeatedData_Nested::AppendNewMoreNestedList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested> tmp(OP_NEW(OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_moreNestedList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested *
OtScopeTestService_MessageSet::RepeatedData_Nested::AppendNewMoreNestedList_L() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested> tmp(OP_NEW_L(OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested, ()));
	_moreNestedList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData_Nested::AppendToMoreNestedList(OtScopeTestService_MessageSet::RepeatedData_Nested_MoreNested * v) 
{
	has_bits_.Reference().SetBit(0);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _moreNestedList.Add(v);
}

// END: RepeatedData.Nested: Implementation

//   END: Message: Nested

//   BEGIN: Message: OnesAndZeroes
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::OnesAndZeroes::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_ones_and_zeroes_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("first"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("empty"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OnesAndZeroes,
						_first
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OnesAndZeroes,
						_empty
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_ones_and_zeroes_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OnesAndZeroes, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OnesAndZeroes, encoded_size_),
					"OnesAndZeroes",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OnesAndZeroes>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OnesAndZeroes>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OnesAndZeroes: Implementation

// Setters

ByteBuffer &
OtScopeTestService_MessageSet::OnesAndZeroes::GetFirstRef() 
{
	return _first;
}


OP_STATUS
OtScopeTestService_MessageSet::OnesAndZeroes::SetFirst(const ByteBuffer & v) 
{
	return OpProtobufAppend(_first, v);
}


OP_STATUS
OtScopeTestService_MessageSet::OnesAndZeroes::SetFirst(const char * v, int l) 
{
	_first.Clear();
	return _first.AppendBytes(v, l);
}


ByteBuffer &
OtScopeTestService_MessageSet::OnesAndZeroes::GetEmptyRef() 
{
	return _empty;
}


OP_STATUS
OtScopeTestService_MessageSet::OnesAndZeroes::SetEmpty(const ByteBuffer & v) 
{
	return OpProtobufAppend(_empty, v);
}


OP_STATUS
OtScopeTestService_MessageSet::OnesAndZeroes::SetEmpty(const char * v, int l) 
{
	_empty.Clear();
	return _empty.AppendBytes(v, l);
}

// END: OnesAndZeroes: Implementation

//   END: Message: OnesAndZeroes

//   BEGIN: Message: Optional
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Optional::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_optional_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("b"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Sint32,
						3,
						UNI_L("cList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("dList"),
						OpProtobufField::Repeated
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("eList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("f"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("g"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_cList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_dList
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_eList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_f
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional,
						_g
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_optional_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Optional, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Optional, encoded_size_),
					"Optional",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Optional>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Optional>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[5].SetMessage(Optional_OptionalInner::GetMessageDescriptor(descriptors));
	fields[6].SetMessage(Optional_OptionalInner::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Optional: Implementation


// Setters

OpValueVector<INT32> &
OtScopeTestService_MessageSet::Optional::GetCListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _cList;
}


OP_STATUS
OtScopeTestService_MessageSet::Optional::AppendToCList(INT32 v) 
{
	has_bits_.Reference().SetBit(2);
	return _cList.Add(v);
}


OpAutoVector<OpString> &
OtScopeTestService_MessageSet::Optional::GetDListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _dList;
}


OP_STATUS
OtScopeTestService_MessageSet::Optional::AppendToDList(const OpString &v) 
{
	has_bits_.Reference().SetBit(3);
	return OpProtobufUtils::AppendString(_dList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::Optional::AppendToDList(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return OpProtobufUtils::AppendString(_dList, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::Optional::AppendToDList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return OpProtobufUtils::AppendString(_dList, v, l);
}


OpString *
OtScopeTestService_MessageSet::Optional::AppendNewDList() 
{
	has_bits_.Reference().SetBit(3);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_dList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpValueVector<UINT32> &
OtScopeTestService_MessageSet::Optional::GetEListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _eList;
}


OP_STATUS
OtScopeTestService_MessageSet::Optional::AppendToEList(UINT32 v) 
{
	has_bits_.Reference().SetBit(4);
	return _eList.Add(v);
}


void
OtScopeTestService_MessageSet::Optional::SetF(OtScopeTestService_MessageSet::Optional_OptionalInner * v) 
{
	has_bits_.Reference().SetBit(5);
	OP_DELETE(_f);
	_f = v;
}


OtScopeTestService_MessageSet::Optional_OptionalInner *
OtScopeTestService_MessageSet::Optional::NewF_L() 
{
	has_bits_.Reference().SetBit(5);
	OP_DELETE(_f);
	_f = OP_NEW_L(OtScopeTestService_MessageSet::Optional_OptionalInner, ());
	return _f;
}


void
OtScopeTestService_MessageSet::Optional::SetG(OtScopeTestService_MessageSet::Optional_OptionalInner * v) 
{
	has_bits_.Reference().SetBit(6);
	OP_DELETE(_g);
	_g = v;
}


OtScopeTestService_MessageSet::Optional_OptionalInner *
OtScopeTestService_MessageSet::Optional::NewG_L() 
{
	has_bits_.Reference().SetBit(6);
	OP_DELETE(_g);
	_g = OP_NEW_L(OtScopeTestService_MessageSet::Optional_OptionalInner, ());
	return _g;
}

// END: Optional: Implementation

//   END: Message: Optional

//   BEGIN: Message: OptionalInner
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Optional_OptionalInner::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_optional_optional_inner_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Optional_OptionalInner,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_optional_optional_inner_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Optional_OptionalInner, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Optional_OptionalInner, encoded_size_),
					"OptionalInner",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Optional_OptionalInner>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Optional_OptionalInner>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::Optional::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Optional.OptionalInner: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::Optional_OptionalInner::GetARef() 
{
	return _a;
}


OP_STATUS
OtScopeTestService_MessageSet::Optional_OptionalInner::SetA(const OpString & v) 
{
	return _a.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::Optional_OptionalInner::SetA(const uni_char * v, int l) 
{
	return _a.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::Optional_OptionalInner::SetA(const char * v, int l) 
{
	return _a.Set(v, l);
}

// END: Optional.OptionalInner: Implementation

//   END: Message: OptionalInner

//   BEGIN: Message: OptionalInteger
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::OptionalInteger::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_optional_integer_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("windowID"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Sint32,
						4,
						UNI_L("scriptID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Sfixed32,
						5,
						UNI_L("htmlID"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("isActive"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalInteger,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalInteger,
						_objectID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalInteger,
						_windowID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalInteger,
						_scriptID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalInteger,
						_htmlID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalInteger,
						_isActive
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_optional_integer_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OptionalInteger, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OptionalInteger, encoded_size_),
					"OptionalInteger",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OptionalInteger>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OptionalInteger>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OptionalInteger: Implementation


// END: OptionalInteger: Implementation

//   END: Message: OptionalInteger

//   BEGIN: Message: OptionalSub
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::OptionalSub::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_optional_sub_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("a"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("b"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalSub,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalSub,
						_b
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_optional_sub_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OptionalSub, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OptionalSub, encoded_size_),
					"OptionalSub",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OptionalSub>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OptionalSub>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(OptionalSub_OptionalSubInner::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(OptionalSub_OptionalSubInner::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: OptionalSub: Implementation


// Setters

void
OtScopeTestService_MessageSet::OptionalSub::SetA(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * v) 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_a);
	_a = v;
}


OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner *
OtScopeTestService_MessageSet::OptionalSub::NewA_L() 
{
	has_bits_.Reference().SetBit(0);
	OP_DELETE(_a);
	_a = OP_NEW_L(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner, ());
	return _a;
}


void
OtScopeTestService_MessageSet::OptionalSub::SetB(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner * v) 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_b);
	_b = v;
}


OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner *
OtScopeTestService_MessageSet::OptionalSub::NewB_L() 
{
	has_bits_.Reference().SetBit(1);
	OP_DELETE(_b);
	_b = OP_NEW_L(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner, ());
	return _b;
}

// END: OptionalSub: Implementation

//   END: Message: OptionalSub

//   BEGIN: Message: OptionalSubInner
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_optional_sub_optional_sub_inner_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_optional_sub_optional_sub_inner_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner, encoded_size_),
					"OptionalSubInner",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::OptionalSub::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: OptionalSub.OptionalSubInner: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner::GetARef() 
{
	return _a;
}


OP_STATUS
OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner::SetA(const OpString & v) 
{
	return _a.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner::SetA(const uni_char * v, int l) 
{
	return _a.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::OptionalSub_OptionalSubInner::SetA(const char * v, int l) 
{
	return _a.Set(v, l);
}

// END: OptionalSub.OptionalSubInner: Implementation

//   END: Message: OptionalSubInner

//   BEGIN: Message: Other
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_message_size_problem_sub_message_same_address_other_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("isSet"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other,
						_isSet
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_message_size_problem_sub_message_same_address_other_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other, encoded_size_),
					"Other",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: MessageSizeProblem.SubMessage.SameAddress.Other: Implementation


// END: MessageSizeProblem.SubMessage.SameAddress.Other: Implementation

//   END: Message: Other

//   BEGIN: Message: OutAdd
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::OutAdd::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_out_add_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("result"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OutAdd,
						_result
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_out_add_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OutAdd, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OutAdd, encoded_size_),
					"OutAdd",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OutAdd>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OutAdd>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OutAdd: Implementation


// END: OutAdd: Implementation

//   END: Message: OutAdd

//   BEGIN: Message: OutData
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::OutData::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_out_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OutData,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::OutData,
						_name
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_out_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OutData, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::OutData, encoded_size_),
					"OutData",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OutData>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::OutData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OutData: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::OutData::GetNameRef() 
{
	return _name;
}


OP_STATUS
OtScopeTestService_MessageSet::OutData::SetName(const OpString & v) 
{
	return _name.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::OutData::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::OutData::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}

// END: OutData: Implementation

//   END: Message: OutData

//   BEGIN: Message: Outer
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Outer::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_outer_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("b"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("c"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Outer,
						_c
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_outer_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Outer, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Outer, encoded_size_),
					"Outer",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Outer>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Outer>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Outer_Inner::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Outer: Implementation


// Setters

OpString &
OtScopeTestService_MessageSet::Outer::GetBRef() 
{
	return _b;
}


OP_STATUS
OtScopeTestService_MessageSet::Outer::SetB(const OpString & v) 
{
	return _b.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::Outer::SetB(const uni_char * v, int l) 
{
	return _b.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::Outer::SetB(const char * v, int l) 
{
	return _b.Set(v, l);
}


OtScopeTestService_MessageSet::Outer_Inner &
OtScopeTestService_MessageSet::Outer::GetCRef() 
{
	return _c;
}

// END: Outer: Implementation

//   END: Message: Outer

//   BEGIN: Message: Repeated
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Repeated::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("b"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Sint32,
						3,
						UNI_L("cList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("dList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated,
						_b
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated,
						_cList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated,
						_dList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Repeated, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Repeated, encoded_size_),
					"Repeated",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(Repeated_RepeatedInner::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Repeated: Implementation


// Setters

OpValueVector<INT32> &
OtScopeTestService_MessageSet::Repeated::GetCListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _cList;
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated::AppendToCList(INT32 v) 
{
	has_bits_.Reference().SetBit(2);
	return _cList.Add(v);
}


OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated_RepeatedInner> &
OtScopeTestService_MessageSet::Repeated::GetDListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _dList;
}


OtScopeTestService_MessageSet::Repeated_RepeatedInner *
OtScopeTestService_MessageSet::Repeated::AppendNewDList() 
{
	has_bits_.Reference().SetBit(3);
	OpAutoPtr<OtScopeTestService_MessageSet::Repeated_RepeatedInner> tmp(OP_NEW(OtScopeTestService_MessageSet::Repeated_RepeatedInner, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_dList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::Repeated_RepeatedInner *
OtScopeTestService_MessageSet::Repeated::AppendNewDList_L() 
{
	has_bits_.Reference().SetBit(3);
	OpAutoPtr<OtScopeTestService_MessageSet::Repeated_RepeatedInner> tmp(OP_NEW_L(OtScopeTestService_MessageSet::Repeated_RepeatedInner, ()));
	_dList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated::AppendToDList(OtScopeTestService_MessageSet::Repeated_RepeatedInner * v) 
{
	has_bits_.Reference().SetBit(3);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _dList.Add(v);
}

// END: Repeated: Implementation

//   END: Message: Repeated

//   BEGIN: Message: RepeatedBinary
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedBinary::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_binary_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bytes,
						1,
						UNI_L("moccaList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedBinary,
						_moccaList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_binary_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedBinary, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedBinary, encoded_size_),
					"RepeatedBinary",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedBinary>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedBinary>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RepeatedBinary: Implementation

// Setters

OpAutoVector<ByteBuffer> &
OtScopeTestService_MessageSet::RepeatedBinary::GetMoccaListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _moccaList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedBinary::AppendToMoccaList(const ByteBuffer &v) 
{
	has_bits_.Reference().SetBit(0);
	return OpProtobufUtils::AppendBytes(_moccaList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedBinary::AppendToMoccaList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return OpProtobufUtils::AppendBytes(_moccaList, v, l);
}


ByteBuffer *
OtScopeTestService_MessageSet::RepeatedBinary::AppendNewMoccaList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<ByteBuffer> tmp(OP_NEW(ByteBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_moccaList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: RepeatedBinary: Implementation

//   END: Message: RepeatedBinary

//   BEGIN: Message: RepeatedData
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedData::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_data_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("integerList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("booleanList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("stringList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("nestedList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData,
						_integerList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData,
						_booleanList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData,
						_stringList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedData,
						_nestedList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_data_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedData, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedData, encoded_size_),
					"RepeatedData",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(RepeatedData_Nested::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RepeatedData: Implementation


// Setters

OpValueVector<UINT32> &
OtScopeTestService_MessageSet::RepeatedData::GetIntegerListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _integerList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData::AppendToIntegerList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _integerList.Add(v);
}


OpINT32Vector &
OtScopeTestService_MessageSet::RepeatedData::GetBooleanListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _booleanList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData::AppendToBooleanList(BOOL v) 
{
	has_bits_.Reference().SetBit(1);
	return _booleanList.Add(v);
}


OpAutoVector<OpString> &
OtScopeTestService_MessageSet::RepeatedData::GetStringListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _stringList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData::AppendToStringList(const OpString &v) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufUtils::AppendString(_stringList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData::AppendToStringList(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufUtils::AppendString(_stringList, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData::AppendToStringList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufUtils::AppendString(_stringList, v, l);
}


OpString *
OtScopeTestService_MessageSet::RepeatedData::AppendNewStringList() 
{
	has_bits_.Reference().SetBit(2);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_stringList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedData_Nested> &
OtScopeTestService_MessageSet::RepeatedData::GetNestedListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _nestedList;
}


OtScopeTestService_MessageSet::RepeatedData_Nested *
OtScopeTestService_MessageSet::RepeatedData::AppendNewNestedList() 
{
	has_bits_.Reference().SetBit(3);
	OpAutoPtr<OtScopeTestService_MessageSet::RepeatedData_Nested> tmp(OP_NEW(OtScopeTestService_MessageSet::RepeatedData_Nested, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_nestedList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::RepeatedData_Nested *
OtScopeTestService_MessageSet::RepeatedData::AppendNewNestedList_L() 
{
	has_bits_.Reference().SetBit(3);
	OpAutoPtr<OtScopeTestService_MessageSet::RepeatedData_Nested> tmp(OP_NEW_L(OtScopeTestService_MessageSet::RepeatedData_Nested, ()));
	_nestedList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedData::AppendToNestedList(OtScopeTestService_MessageSet::RepeatedData_Nested * v) 
{
	has_bits_.Reference().SetBit(3);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _nestedList.Add(v);
}

// END: RepeatedData: Implementation

//   END: Message: RepeatedData

//   BEGIN: Message: RepeatedFloat
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedFloat::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_float_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Float,
						1,
						UNI_L("fuzzyList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Double,
						2,
						UNI_L("piList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedFloat,
						_fuzzyList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedFloat,
						_piList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_float_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedFloat, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedFloat, encoded_size_),
					"RepeatedFloat",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedFloat>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedFloat>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RepeatedFloat: Implementation

// Setters

OpValueVector<float> &
OtScopeTestService_MessageSet::RepeatedFloat::GetFuzzyListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _fuzzyList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedFloat::AppendToFuzzyList(float v) 
{
	has_bits_.Reference().SetBit(0);
	return _fuzzyList.Add(v);
}


OpValueVector<double> &
OtScopeTestService_MessageSet::RepeatedFloat::GetPiListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _piList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedFloat::AppendToPiList(double v) 
{
	has_bits_.Reference().SetBit(1);
	return _piList.Add(v);
}

// END: RepeatedFloat: Implementation

//   END: Message: RepeatedFloat

//   BEGIN: Message: RepeatedInner
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::Repeated_RepeatedInner::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_repeated_inner_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("a"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("bList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("cList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated_RepeatedInner,
						_a
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated_RepeatedInner,
						_bList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::Repeated_RepeatedInner,
						_cList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_repeated_inner_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Repeated_RepeatedInner, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::Repeated_RepeatedInner, encoded_size_),
					"RepeatedInner",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated_RepeatedInner>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::Repeated_RepeatedInner>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::Repeated::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Repeated.RepeatedInner: Implementation

// Setters

OpAutoVector<OpString> &
OtScopeTestService_MessageSet::Repeated_RepeatedInner::GetBListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _bList;
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendToBList(const OpString &v) 
{
	has_bits_.Reference().SetBit(1);
	return OpProtobufUtils::AppendString(_bList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendToBList(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return OpProtobufUtils::AppendString(_bList, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendToBList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return OpProtobufUtils::AppendString(_bList, v, l);
}


OpString *
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendNewBList() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_bList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpAutoVector<ByteBuffer> &
OtScopeTestService_MessageSet::Repeated_RepeatedInner::GetCListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _cList;
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendToCList(const ByteBuffer &v) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufUtils::AppendBytes(_cList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendToCList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return OpProtobufUtils::AppendBytes(_cList, v, l);
}


ByteBuffer *
OtScopeTestService_MessageSet::Repeated_RepeatedInner::AppendNewCList() 
{
	has_bits_.Reference().SetBit(2);
	OpAutoPtr<ByteBuffer> tmp(OP_NEW(ByteBuffer, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_cList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: Repeated.RepeatedInner: Implementation

//   END: Message: RepeatedInner

//   BEGIN: Message: RepeatedInteger
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedInteger::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_integer_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeIDList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						2,
						UNI_L("objectIDList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("windowIDList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Sint32,
						4,
						UNI_L("scriptIDList"),
						OpProtobufField::Repeated
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Sfixed32,
						5,
						UNI_L("htmlIDList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("activationList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedInteger,
						_runtimeIDList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedInteger,
						_objectIDList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedInteger,
						_windowIDList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedInteger,
						_scriptIDList
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedInteger,
						_htmlIDList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedInteger,
						_activationList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_integer_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedInteger, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedInteger, encoded_size_),
					"RepeatedInteger",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedInteger>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedInteger>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RepeatedInteger: Implementation

// Setters

OpValueVector<UINT32> &
OtScopeTestService_MessageSet::RepeatedInteger::GetRuntimeIDListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeIDList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedInteger::AppendToRuntimeIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(0);
	return _runtimeIDList.Add(v);
}


OpValueVector<UINT32> &
OtScopeTestService_MessageSet::RepeatedInteger::GetObjectIDListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _objectIDList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedInteger::AppendToObjectIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _objectIDList.Add(v);
}


OpValueVector<INT32> &
OtScopeTestService_MessageSet::RepeatedInteger::GetWindowIDListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _windowIDList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedInteger::AppendToWindowIDList(INT32 v) 
{
	has_bits_.Reference().SetBit(2);
	return _windowIDList.Add(v);
}


OpValueVector<INT32> &
OtScopeTestService_MessageSet::RepeatedInteger::GetScriptIDListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _scriptIDList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedInteger::AppendToScriptIDList(INT32 v) 
{
	has_bits_.Reference().SetBit(3);
	return _scriptIDList.Add(v);
}


OpValueVector<INT32> &
OtScopeTestService_MessageSet::RepeatedInteger::GetHtmlIDListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _htmlIDList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedInteger::AppendToHtmlIDList(INT32 v) 
{
	has_bits_.Reference().SetBit(4);
	return _htmlIDList.Add(v);
}


OpINT32Vector &
OtScopeTestService_MessageSet::RepeatedInteger::GetActivationListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _activationList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedInteger::AppendToActivationList(BOOL v) 
{
	has_bits_.Reference().SetBit(5);
	return _activationList.Add(v);
}

// END: RepeatedInteger: Implementation

//   END: Message: RepeatedInteger

//   BEGIN: Message: RepeatedString
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedString::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_string_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("descriptionList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedString,
						_descriptionList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_string_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedString, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedString, encoded_size_),
					"RepeatedString",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedString>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedString>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RepeatedString: Implementation

// Setters

OpAutoVector<OpString> &
OtScopeTestService_MessageSet::RepeatedString::GetDescriptionListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _descriptionList;
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedString::AppendToDescriptionList(const OpString &v) 
{
	has_bits_.Reference().SetBit(0);
	return OpProtobufUtils::AppendString(_descriptionList, v);
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedString::AppendToDescriptionList(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return OpProtobufUtils::AppendString(_descriptionList, v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedString::AppendToDescriptionList(const char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return OpProtobufUtils::AppendString(_descriptionList, v, l);
}


OpString *
OtScopeTestService_MessageSet::RepeatedString::AppendNewDescriptionList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_descriptionList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: RepeatedString: Implementation

//   END: Message: RepeatedString

//   BEGIN: Message: RepeatedSub
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedSub::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_sub_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("itemList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedSub,
						_itemList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_sub_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedSub, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedSub, encoded_size_),
					"RepeatedSub",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(RepeatedSub_RepeatedSubInner::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: RepeatedSub: Implementation


// Setters

OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner> &
OtScopeTestService_MessageSet::RepeatedSub::GetItemListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _itemList;
}


OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner *
OtScopeTestService_MessageSet::RepeatedSub::AppendNewItemList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner> tmp(OP_NEW(OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_itemList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner *
OtScopeTestService_MessageSet::RepeatedSub::AppendNewItemList_L() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner> tmp(OP_NEW_L(OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner, ()));
	_itemList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::RepeatedSub::AppendToItemList(OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner * v) 
{
	has_bits_.Reference().SetBit(0);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _itemList.Add(v);
}

// END: RepeatedSub: Implementation

//   END: Message: RepeatedSub

//   BEGIN: Message: RepeatedSubInner
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_repeated_sub_repeated_sub_inner_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("value"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_repeated_sub_repeated_sub_inner_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner, encoded_size_),
					"RepeatedSubInner",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::RepeatedSub_RepeatedSubInner>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::RepeatedSub::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: RepeatedSub.RepeatedSubInner: Implementation


// END: RepeatedSub.RepeatedSubInner: Implementation

//   END: Message: RepeatedSubInner

//   BEGIN: Message: SameAddress
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_message_size_problem_sub_message_same_address_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("firstMember"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("secondMemberList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress,
						_firstMember
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress,
						_secondMemberList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_message_size_problem_sub_message_same_address_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress, encoded_size_),
					"SameAddress",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(MessageSizeProblem_SubMessage_SameAddress_Other::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: MessageSizeProblem.SubMessage.SameAddress: Implementation




// Setters

OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress &
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::GetFirstMemberRef() 
{
	return _firstMember;
}


OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other> &
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::GetSecondMemberListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _secondMemberList;
}


OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::AppendNewSecondMemberList() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other> tmp(OP_NEW(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_secondMemberList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::AppendNewSecondMemberList_L() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other> tmp(OP_NEW_L(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other, ()));
	_secondMemberList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::AppendToSecondMemberList(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_Other * v) 
{
	has_bits_.Reference().SetBit(1);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _secondMemberList.Add(v);
}

// END: MessageSizeProblem.SubMessage.SameAddress: Implementation

//   END: Message: SameAddress

//   BEGIN: Message: StringAccess
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::StringAccess::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_string_access_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("a"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::StringAccess,
						_a
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_string_access_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::StringAccess, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::StringAccess, encoded_size_),
					"StringAccess",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::StringAccess>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::StringAccess>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: StringAccess: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::StringAccess::GetARef() 
{
	return _a;
}


OP_STATUS
OtScopeTestService_MessageSet::StringAccess::SetA(const OpString & v) 
{
	return _a.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::StringAccess::SetA(const uni_char * v, int l) 
{
	return _a.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::StringAccess::SetA(const char * v, int l) 
{
	return _a.Set(v, l);
}

// END: StringAccess: Implementation

//   END: Message: StringAccess

//   BEGIN: Message: StringMessage
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::StringMessage::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_string_message_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("first"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("second"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("empty"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::StringMessage,
						_first
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::StringMessage,
						_second
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::StringMessage,
						_empty
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_string_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::StringMessage, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::StringMessage, encoded_size_),
					"StringMessage",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::StringMessage>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::StringMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: StringMessage: Implementation

// Setters

OpString &
OtScopeTestService_MessageSet::StringMessage::GetFirstRef() 
{
	return _first;
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetFirst(const OpString & v) 
{
	return _first.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetFirst(const uni_char * v, int l) 
{
	return _first.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetFirst(const char * v, int l) 
{
	return _first.Set(v, l);
}


OpString &
OtScopeTestService_MessageSet::StringMessage::GetSecondRef() 
{
	return _second;
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetSecond(const OpString & v) 
{
	return _second.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetSecond(const uni_char * v, int l) 
{
	return _second.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetSecond(const char * v, int l) 
{
	return _second.Set(v, l);
}


OpString &
OtScopeTestService_MessageSet::StringMessage::GetEmptyRef() 
{
	return _empty;
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetEmpty(const OpString & v) 
{
	return _empty.Set(v);
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetEmpty(const uni_char * v, int l) 
{
	return _empty.Set(v, l);
}


OP_STATUS
OtScopeTestService_MessageSet::StringMessage::SetEmpty(const char * v, int l) 
{
	return _empty.Set(v, l);
}

// END: StringMessage: Implementation

//   END: Message: StringMessage

//   BEGIN: Message: SubMessage
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_message_size_problem_sub_message_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("sameAddressList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage,
						_sameAddressList
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_message_size_problem_sub_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage, encoded_size_),
					"SubMessage",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(MessageSizeProblem_SubMessage_SameAddress::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::MessageSizeProblem::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: MessageSizeProblem.SubMessage: Implementation


// Setters

OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress> &
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::GetSameAddressListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _sameAddressList;
}


OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::AppendNewSameAddressList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress> tmp(OP_NEW(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_sameAddressList.Add(tmp.get()), NULL);
	return tmp.release();
}


OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::AppendNewSameAddressList_L() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress> tmp(OP_NEW_L(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress, ()));
	_sameAddressList.AddL(tmp.get());
	return tmp.release();
}


OP_STATUS
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage::AppendToSameAddressList(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress * v) 
{
	has_bits_.Reference().SetBit(0);
	if (!v) return OpStatus::ERR_NULL_POINTER;
	return _sameAddressList.Add(v);
}

// END: MessageSizeProblem.SubMessage: Implementation

//   END: Message: SubMessage

//   BEGIN: Message: SubWithSameAddress
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_message_size_problem_sub_message_same_address_sub_with_same_address_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("someValue"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress,
						_someValue
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_message_size_problem_sub_message_same_address_sub_with_same_address_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress, encoded_size_),
					"SubWithSameAddress",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress_SubWithSameAddress>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OtScopeTestService_MessageSet::MessageSizeProblem_SubMessage_SameAddress::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: MessageSizeProblem.SubMessage.SameAddress.SubWithSameAddress: Implementation


// END: MessageSizeProblem.SubMessage.SameAddress.SubWithSameAddress: Implementation

//   END: Message: SubWithSameAddress

//   BEGIN: Message: UnsignedIntegerMessage
/*static*/
const OpProtobufMessage *
OtScopeTestService_MessageSet::UnsignedIntegerMessage::GetMessageDescriptor(OtScopeTestService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OtScopeTestService_Descriptors::_gen_MessageOffs_unsigned_integer_message_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("runtimeID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("objectID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed32,
						3,
						UNI_L("htmlID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::UnsignedIntegerMessage,
						_runtimeID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::UnsignedIntegerMessage,
						_objectID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OtScopeTestService_MessageSet::UnsignedIntegerMessage,
						_htmlID
						);

	message = OP_NEW(OpProtobufMessage,
					(OtScopeTestService_Descriptors::_gen_MsgID_unsigned_integer_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::UnsignedIntegerMessage, has_bits_),
					OP_PROTO_OFFSETOF(OtScopeTestService_MessageSet::UnsignedIntegerMessage, encoded_size_),
					"UnsignedIntegerMessage",
					OpProtobufMessageVector<OtScopeTestService_MessageSet::UnsignedIntegerMessage>::Make,
					OpProtobufMessageVector<OtScopeTestService_MessageSet::UnsignedIntegerMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UnsignedIntegerMessage: Implementation


// END: UnsignedIntegerMessage: Implementation

//   END: Message: UnsignedIntegerMessage


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_test_service_interface.h"
#include "modules/scope/src/scope_test_service.h"

// BEGIN: OtScopeTestService_SI::Descriptors

OtScopeTestService_SI::Descriptors::Descriptors()
{
}

OtScopeTestService_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OtScopeTestService_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OtScopeTestService_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetData",
						Command_GetData,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_out_data_
						);
	command_list[1] = OpScopeCommand("SetData",
						Command_SetData,
						OpScopeCommand::Type_Call,
						_gen_MsgID_in_data_,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("Add",
						Command_Add,
						OpScopeCommand::Type_Call,
						_gen_MsgID_in_add_,
						_gen_MsgID_out_add_
						);
	command_list[3] = OpScopeCommand("Nop",
						Command_Nop,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[4] = OpScopeCommand("OnEvent",
						Command_OnEvent,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_event_
						);
	command_list[5] = OpScopeCommand("OnNestedMessage",
						Command_OnNestedMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_outer_
						);
	command_list[6] = OpScopeCommand("OnOptionalMessage",
						Command_OnOptionalMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_optional_
						);
	command_list[7] = OpScopeCommand("OnRepeatedMessage",
						Command_OnRepeatedMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_repeated_
						);
	command_list[8] = OpScopeCommand("OnMissingTrailMessage",
						Command_OnMissingTrailMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_missing_trail_
						);
	command_list[9] = OpScopeCommand("OnIntMessage",
						Command_OnIntMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_integer_message_
						);
	command_list[10] = OpScopeCommand("OnUintMessage",
						Command_OnUintMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_unsigned_integer_message_
						);
	command_list[11] = OpScopeCommand("OnFloatMessage",
						Command_OnFloatMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_float_message_
						);
	command_list[12] = OpScopeCommand("OnStringMessage",
						Command_OnStringMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_string_message_
						);
	command_list[13] = OpScopeCommand("OnBinaryMessage",
						Command_OnBinaryMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_ones_and_zeroes_
						);
	command_list[14] = OpScopeCommand("OnOptionalSub",
						Command_OnOptionalSub,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_optional_sub_
						);
	command_list[15] = OpScopeCommand("OnRepeatedInt",
						Command_OnRepeatedInt,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_repeated_integer_
						);
	command_list[16] = OpScopeCommand("OnRepeatedFloat",
						Command_OnRepeatedFloat,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_repeated_float_
						);
	command_list[17] = OpScopeCommand("OnRepeatedString",
						Command_OnRepeatedString,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_repeated_string_
						);
	command_list[18] = OpScopeCommand("OnRepeatedBinary",
						Command_OnRepeatedBinary,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_repeated_binary_
						);
	command_list[19] = OpScopeCommand("OnRepeatedSub",
						Command_OnRepeatedSub,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_repeated_sub_
						);
	command_list[20] = OpScopeCommand("OnOptionalInt",
						Command_OnOptionalInt,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_optional_integer_
						);
	command_list[21] = OpScopeCommand("OnMissingInput",
						Command_OnMissingInput,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_missing_input_
						);
	command_list[22] = OpScopeCommand("OnIntAccess",
						Command_OnIntAccess,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_int_access_
						);
	command_list[23] = OpScopeCommand("OnFloatAccess",
						Command_OnFloatAccess,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_float_access_
						);
	command_list[24] = OpScopeCommand("OnByteAccess",
						Command_OnByteAccess,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_bytes_access_
						);
	command_list[25] = OpScopeCommand("OnStringAccess",
						Command_OnStringAccess,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_string_access_
						);
	command_list[26] = OpScopeCommand("GetRepeatedData",
						Command_GetRepeatedData,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_repeated_data_arg_,
						_gen_MsgID_repeated_data_
						);
	command_list[27] = OpScopeCommand("OnSizeProblem",
						Command_OnSizeProblem,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_message_size_problem_
						);
	command_list[28] = OpScopeCommand("OnEnum",
						Command_OnEnum,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_enum_data_
						);
	command_list[29] = OpScopeCommand("AsyncCommand",
						Command_AsyncCommand,
						OpScopeCommand::Type_Call,
						_gen_MsgID_async_args_,
						_gen_MsgID_async_data_
						);
	command_list[30] = OpScopeCommand("FormatError",
						Command_FormatError,
						OpScopeCommand::Type_Call,
						_gen_MsgID_format_error_arg_,
						_gen_void_MsgID
						);
	command_list[31] = OpScopeCommand("TestMixedStrings",
						Command_TestMixedStrings,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mixed_string_type_,
						_gen_MsgID_mixed_string_type_
						);
	command_list[32] = OpScopeCommand("TestMixedBytes",
						Command_TestMixedBytes,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mixed_byte_type_,
						_gen_MsgID_mixed_byte_type_
						);
	command_list[33] = OpScopeCommand("InspectElement",
						Command_InspectElement,
						OpScopeCommand::Type_Call,
						_gen_MsgID_inspect_element_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OtScopeTestService_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OtScopeTestService_SI::OtScopeTestService_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("test-service") : id, manager, control)
{
}

/*virtual*/
OtScopeTestService_SI::~OtScopeTestService_SI()
{
}

/*virtual*/
int
OtScopeTestService_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OtScopeTestService_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().test_service_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OtScopeTestService_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetData) // GetData
	{
		OP_STATUS status = OpStatus::OK;
		OutData out;

		status = DoGetData(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(OutData::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_SetData) // SetData
	{
		OP_STATUS status = OpStatus::OK;
		InData in;

		OpProtobufInstanceProxy in_proxy(InData::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetData(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_Add) // Add
	{
		OP_STATUS status = OpStatus::OK;
		InAdd in;
		OutAdd out;

		OpProtobufInstanceProxy in_proxy(InAdd::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAdd(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(OutAdd::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_Nop) // Nop
	{
		OP_STATUS status = OpStatus::OK;

		status = DoNop();
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_GetRepeatedData) // GetRepeatedData
	{
		OP_STATUS status = OpStatus::OK;
		GetRepeatedDataArg in;
		RepeatedData out;

		OpProtobufInstanceProxy in_proxy(GetRepeatedDataArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetRepeatedData(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(RepeatedData::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_FormatError) // FormatError
	{
		OP_STATUS status = OpStatus::OK;
		FormatErrorArg in;

		OpProtobufInstanceProxy in_proxy(FormatErrorArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoFormatError(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_TestMixedStrings) // TestMixedStrings
	{
		OP_STATUS status = OpStatus::OK;
		MixedStringType in;
		MixedStringType out;

		OpProtobufInstanceProxy in_proxy(MixedStringType::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoTestMixedStrings(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(MixedStringType::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_TestMixedBytes) // TestMixedBytes
	{
		OP_STATUS status = OpStatus::OK;
		MixedByteType in;
		MixedByteType out;

		OpProtobufInstanceProxy in_proxy(MixedByteType::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoTestMixedBytes(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(MixedByteType::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_InspectElement) // InspectElement
	{
		OP_STATUS status = OpStatus::OK;
		InspectElementArg in;

		OpProtobufInstanceProxy in_proxy(InspectElementArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoInspectElement(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_AsyncCommand) // AsyncCommand
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		AsyncArgs in;

		OpProtobufInstanceProxy in_proxy(AsyncArgs::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAsyncCommand(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
			return status;
		}
	}
	else
	{
		SetCommandError(OpScopeTPMessage::CommandNotFound, GetCommandNotFoundText());
		return OpStatus::ERR;
	}
	return OpStatus::OK;
}

/*virtual*/
const OpProtobufMessage *
OtScopeTestService_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OtScopeTestService_SI::Descriptors *
OtScopeTestService_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().test_service_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OtScopeTestService_SI::GetMessageCount() const
{
	return OtScopeTestService_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OtScopeTestService_SI::GetMessageIDs() const
{
	unsigned start = OtScopeTestService_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OtScopeTestService_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OtScopeTestService_SI::GetMessages() const
{
	unsigned start = OtScopeTestService_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OtScopeTestService_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OtScopeTestService_SI::GetVersionString() const
{
	return "1.4";
}

/* virtual */
int
OtScopeTestService_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OtScopeTestService_SI::GetMinorVersion() const
{
	return 4;
}

/* virtual */
const char *
OtScopeTestService_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OtScopeTestService_SI::SendOnEvent(const Event &msg) // OnEvent
{
	OpProtobufInstanceProxy proxy(Event::GetMessageDescriptor(GetDescriptors()), const_cast<Event *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnEvent);
}


OP_STATUS
OtScopeTestService_SI::SendOnNestedMessage(const Outer &msg) // OnNestedMessage
{
	OpProtobufInstanceProxy proxy(Outer::GetMessageDescriptor(GetDescriptors()), const_cast<Outer *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnNestedMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnOptionalMessage(const Optional &msg) // OnOptionalMessage
{
	OpProtobufInstanceProxy proxy(Optional::GetMessageDescriptor(GetDescriptors()), const_cast<Optional *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnOptionalMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnRepeatedMessage(const Repeated &msg) // OnRepeatedMessage
{
	OpProtobufInstanceProxy proxy(Repeated::GetMessageDescriptor(GetDescriptors()), const_cast<Repeated *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRepeatedMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnMissingTrailMessage(const MissingTrail &msg) // OnMissingTrailMessage
{
	OpProtobufInstanceProxy proxy(MissingTrail::GetMessageDescriptor(GetDescriptors()), const_cast<MissingTrail *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnMissingTrailMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnIntMessage(const IntegerMessage &msg) // OnIntMessage
{
	OpProtobufInstanceProxy proxy(IntegerMessage::GetMessageDescriptor(GetDescriptors()), const_cast<IntegerMessage *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnIntMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnUintMessage(const UnsignedIntegerMessage &msg) // OnUintMessage
{
	OpProtobufInstanceProxy proxy(UnsignedIntegerMessage::GetMessageDescriptor(GetDescriptors()), const_cast<UnsignedIntegerMessage *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnUintMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnFloatMessage(const FloatMessage &msg) // OnFloatMessage
{
	OpProtobufInstanceProxy proxy(FloatMessage::GetMessageDescriptor(GetDescriptors()), const_cast<FloatMessage *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnFloatMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnStringMessage(const StringMessage &msg) // OnStringMessage
{
	OpProtobufInstanceProxy proxy(StringMessage::GetMessageDescriptor(GetDescriptors()), const_cast<StringMessage *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnStringMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnBinaryMessage(const OnesAndZeroes &msg) // OnBinaryMessage
{
	OpProtobufInstanceProxy proxy(OnesAndZeroes::GetMessageDescriptor(GetDescriptors()), const_cast<OnesAndZeroes *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnBinaryMessage);
}


OP_STATUS
OtScopeTestService_SI::SendOnOptionalSub(const OptionalSub &msg) // OnOptionalSub
{
	OpProtobufInstanceProxy proxy(OptionalSub::GetMessageDescriptor(GetDescriptors()), const_cast<OptionalSub *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnOptionalSub);
}


OP_STATUS
OtScopeTestService_SI::SendOnRepeatedInt(const RepeatedInteger &msg) // OnRepeatedInt
{
	OpProtobufInstanceProxy proxy(RepeatedInteger::GetMessageDescriptor(GetDescriptors()), const_cast<RepeatedInteger *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRepeatedInt);
}


OP_STATUS
OtScopeTestService_SI::SendOnRepeatedFloat(const RepeatedFloat &msg) // OnRepeatedFloat
{
	OpProtobufInstanceProxy proxy(RepeatedFloat::GetMessageDescriptor(GetDescriptors()), const_cast<RepeatedFloat *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRepeatedFloat);
}


OP_STATUS
OtScopeTestService_SI::SendOnRepeatedString(const RepeatedString &msg) // OnRepeatedString
{
	OpProtobufInstanceProxy proxy(RepeatedString::GetMessageDescriptor(GetDescriptors()), const_cast<RepeatedString *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRepeatedString);
}


OP_STATUS
OtScopeTestService_SI::SendOnRepeatedBinary(const RepeatedBinary &msg) // OnRepeatedBinary
{
	OpProtobufInstanceProxy proxy(RepeatedBinary::GetMessageDescriptor(GetDescriptors()), const_cast<RepeatedBinary *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRepeatedBinary);
}


OP_STATUS
OtScopeTestService_SI::SendOnRepeatedSub(const RepeatedSub &msg) // OnRepeatedSub
{
	OpProtobufInstanceProxy proxy(RepeatedSub::GetMessageDescriptor(GetDescriptors()), const_cast<RepeatedSub *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRepeatedSub);
}


OP_STATUS
OtScopeTestService_SI::SendOnOptionalInt(const OptionalInteger &msg) // OnOptionalInt
{
	OpProtobufInstanceProxy proxy(OptionalInteger::GetMessageDescriptor(GetDescriptors()), const_cast<OptionalInteger *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnOptionalInt);
}


OP_STATUS
OtScopeTestService_SI::SendOnMissingInput(const MissingInput &msg) // OnMissingInput
{
	OpProtobufInstanceProxy proxy(MissingInput::GetMessageDescriptor(GetDescriptors()), const_cast<MissingInput *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnMissingInput);
}


OP_STATUS
OtScopeTestService_SI::SendOnIntAccess(const IntAccess &msg) // OnIntAccess
{
	OpProtobufInstanceProxy proxy(IntAccess::GetMessageDescriptor(GetDescriptors()), const_cast<IntAccess *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnIntAccess);
}


OP_STATUS
OtScopeTestService_SI::SendOnFloatAccess(const FloatAccess &msg) // OnFloatAccess
{
	OpProtobufInstanceProxy proxy(FloatAccess::GetMessageDescriptor(GetDescriptors()), const_cast<FloatAccess *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnFloatAccess);
}


OP_STATUS
OtScopeTestService_SI::SendOnByteAccess(const BytesAccess &msg) // OnByteAccess
{
	OpProtobufInstanceProxy proxy(BytesAccess::GetMessageDescriptor(GetDescriptors()), const_cast<BytesAccess *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnByteAccess);
}


OP_STATUS
OtScopeTestService_SI::SendOnStringAccess(const StringAccess &msg) // OnStringAccess
{
	OpProtobufInstanceProxy proxy(StringAccess::GetMessageDescriptor(GetDescriptors()), const_cast<StringAccess *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnStringAccess);
}


OP_STATUS
OtScopeTestService_SI::SendOnSizeProblem(const MessageSizeProblem &msg) // OnSizeProblem
{
	OpProtobufInstanceProxy proxy(MessageSizeProblem::GetMessageDescriptor(GetDescriptors()), const_cast<MessageSizeProblem *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnSizeProblem);
}


OP_STATUS
OtScopeTestService_SI::SendOnEnum(const EnumData &msg) // OnEnum
{
	OpProtobufInstanceProxy proxy(EnumData::GetMessageDescriptor(GetDescriptors()), const_cast<EnumData *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnEnum);
}


OP_STATUS
OtScopeTestService_SI::SendAsyncCommand(const AsyncData &msg, unsigned int tag) // AsyncCommand
{
	OpProtobufInstanceProxy proxy(AsyncData::GetMessageDescriptor(GetDescriptors()), const_cast<AsyncData *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_AsyncCommand);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OtScopeTestService_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OtScopeTestService_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OtScopeTestService_SI::GetEnumCount() const
{
	return OtScopeTestService_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OtScopeTestService_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Type:
		case OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Empty:
		case OtScopeTestService_Descriptors::_gen_EnumID_GlobalType:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OtScopeTestService_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// EnumData_Type
		case OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Type:
			name = UNI_L("Type");
			value_count = OtScopeTestService_Descriptors::_gen_EnumValueCount_EnumData_Type;
			return OpStatus::OK;
		// EnumData_Empty
		case OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Empty:
			name = UNI_L("Empty");
			value_count = OtScopeTestService_Descriptors::_gen_EnumValueCount_EnumData_Empty;
			return OpStatus::OK;
		// GlobalType
		case OtScopeTestService_Descriptors::_gen_EnumID_GlobalType:
			name = UNI_L("GlobalType");
			value_count = OtScopeTestService_Descriptors::_gen_EnumValueCount_GlobalType;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OtScopeTestService_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// EnumData_Type
		case OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Type:
		{
			if (idx > OtScopeTestService_Descriptors::_gen_EnumValueCount_EnumData_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for EnumData_Type
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 10
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 5
				, 12
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "BOOL\0NUMBER\0OBJECT" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// EnumData_Empty
		case OtScopeTestService_Descriptors::_gen_EnumID_EnumData_Empty:
		{
			return OpStatus::ERR; // No values so return error
		}

		// GlobalType
		case OtScopeTestService_Descriptors::_gen_EnumID_GlobalType:
		{
			if (idx > OtScopeTestService_Descriptors::_gen_EnumValueCount_GlobalType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for GlobalType
			const unsigned enum_numbers[] = {
				  0
				, 1
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "Zero\0One" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}
// Enum introspection: END

// Service implementation: END

#endif // defined(SELFTEST) && defined(SCOPE_SUPPORT)
