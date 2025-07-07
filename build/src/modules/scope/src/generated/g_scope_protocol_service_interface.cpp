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

#ifdef SCOPE_SUPPORT

#include "modules/scope/src/generated/g_scope_protocol_service_interface.h"

// BEGIN: OpScopeProtocolService_Descriptors

OpScopeProtocolService_Descriptors::OpScopeProtocolService_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeProtocolService_Descriptors::~OpScopeProtocolService_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeProtocolService_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeProtocolService_Descriptors::Get(unsigned id) const
{
	OpScopeProtocolService_Descriptors *descriptors = const_cast<OpScopeProtocolService_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_client_info_:
		return OpScopeProtocolService_MessageSet::ClientInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_command_info_:
		return OpScopeProtocolService_MessageSet::CommandInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_enum_list_enum_:
		return OpScopeProtocolService_MessageSet::EnumList_Enum::GetMessageDescriptor(descriptors);

	case _gen_MsgID_enum_arg_:
		return OpScopeProtocolService_MessageSet::EnumArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_enum_list_:
		return OpScopeProtocolService_MessageSet::EnumList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_error_info_:
		return OpScopeProtocolService_MessageSet::ErrorInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_event_info_:
		return OpScopeProtocolService_MessageSet::EventInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_info_field_info_:
		return OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_host_info_:
		return OpScopeProtocolService_MessageSet::HostInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_info_:
		return OpScopeProtocolService_MessageSet::MessageInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_info_list_:
		return OpScopeProtocolService_MessageSet::MessageInfoList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_message_selection_:
		return OpScopeProtocolService_MessageSet::MessageSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_service_:
		return OpScopeProtocolService_MessageSet::Service::GetMessageDescriptor(descriptors);

	case _gen_MsgID_service_info_:
		return OpScopeProtocolService_MessageSet::ServiceInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_service_list_:
		return OpScopeProtocolService_MessageSet::ServiceList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_service_result_:
		return OpScopeProtocolService_MessageSet::ServiceResult::GetMessageDescriptor(descriptors);

	case _gen_MsgID_service_selection_:
		return OpScopeProtocolService_MessageSet::ServiceSelection::GetMessageDescriptor(descriptors);

	case _gen_MsgID_enum_list_enum_value_:
		return OpScopeProtocolService_MessageSet::EnumList_Enum_Value::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeProtocolService_Descriptors


// BEGIN: OpScopeProtocolService_MessageSet

OpScopeProtocolService_MessageSet::OpScopeProtocolService_MessageSet()
{
}

/*virtual*/
OpScopeProtocolService_MessageSet::~OpScopeProtocolService_MessageSet()
{
}

// END: OpScopeProtocolService_MessageSet

// BEGIN: Messages

//   BEGIN: Message: ClientInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::ClientInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_client_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("format"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ClientInfo,
						_format
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_client_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ClientInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ClientInfo, encoded_size_),
					"ClientInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ClientInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ClientInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ClientInfo: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::ClientInfo::SetFormat(const uni_char * v, int l) 
{
	return _format.Set(v, l);
}

// END: ClientInfo: Implementation

//   END: Message: ClientInfo

//   BEGIN: Message: CommandInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::CommandInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_command_info_];
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
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("number"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("messageID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("responseID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::CommandInfo,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::CommandInfo,
						_number
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::CommandInfo,
						_messageID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::CommandInfo,
						_responseID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_command_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::CommandInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::CommandInfo, encoded_size_),
					"CommandInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::CommandInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::CommandInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CommandInfo: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::CommandInfo::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}

// END: CommandInfo: Implementation

//   END: Message: CommandInfo

//   BEGIN: Message: Enum
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::EnumList_Enum::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_enum_list_enum_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("id"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
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
						OpScopeProtocolService_MessageSet::EnumList_Enum,
						_id
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumList_Enum,
						_name
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumList_Enum,
						_valueList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_enum_list_enum_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumList_Enum, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumList_Enum, encoded_size_),
					"Enum",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(EnumList_Enum_Value::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpScopeProtocolService_MessageSet::EnumList::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: EnumList.Enum: Implementation


// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::EnumList_Enum::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OpScopeProtocolService_MessageSet::EnumList_Enum_Value *
OpScopeProtocolService_MessageSet::EnumList_Enum::AppendNewValueList() 
{
	has_bits_.Reference().SetBit(2);
	OpAutoPtr<OpScopeProtocolService_MessageSet::EnumList_Enum_Value> tmp(OP_NEW(OpScopeProtocolService_MessageSet::EnumList_Enum_Value, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_valueList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: EnumList.Enum: Implementation

//   END: Message: Enum

//   BEGIN: Message: EnumArg
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::EnumArg::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_enum_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("serviceName"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("idList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("includeAll"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumArg,
						_serviceName
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumArg,
						_idList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumArg,
						_includeAll
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_enum_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumArg, encoded_size_),
					"EnumArg",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumArg>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EnumArg: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::EnumArg::SetServiceName(const uni_char * v, int l) 
{
	return _serviceName.Set(v, l);
}


OpValueVector<UINT32> &
OpScopeProtocolService_MessageSet::EnumArg::GetIdListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _idList;
}


OP_STATUS
OpScopeProtocolService_MessageSet::EnumArg::AppendToIdList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _idList.Add(v);
}

// END: EnumArg: Implementation

//   END: Message: EnumArg

//   BEGIN: Message: EnumList
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::EnumList::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_enum_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("enumList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumList,
						_enumList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_enum_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumList, encoded_size_),
					"EnumList",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(EnumList_Enum::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: EnumList: Implementation


// Setters

OpScopeProtocolService_MessageSet::EnumList_Enum *
OpScopeProtocolService_MessageSet::EnumList::AppendNewEnumList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeProtocolService_MessageSet::EnumList_Enum> tmp(OP_NEW(OpScopeProtocolService_MessageSet::EnumList_Enum, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_enumList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: EnumList: Implementation

//   END: Message: EnumList

//   BEGIN: Message: ErrorInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::ErrorInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_error_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("description"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ErrorInfo,
						_description
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_error_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ErrorInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ErrorInfo, encoded_size_),
					"ErrorInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ErrorInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ErrorInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ErrorInfo: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::ErrorInfo::SetDescription(const uni_char * v, int l) 
{
	return _description.Set(v, l);
}

// END: ErrorInfo: Implementation

//   END: Message: ErrorInfo

//   BEGIN: Message: EventInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::EventInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_event_info_];
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
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("number"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("messageID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EventInfo,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EventInfo,
						_number
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EventInfo,
						_messageID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_event_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EventInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EventInfo, encoded_size_),
					"EventInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EventInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EventInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: EventInfo: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::EventInfo::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}

// END: EventInfo: Implementation

//   END: Message: EventInfo

//   BEGIN: Message: FieldInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_message_info_field_info_];
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
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("number"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("quantifier"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("messageID"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("enumID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo,
						_number
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo,
						_quantifier
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo,
						_messageID
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo,
						_enumID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_message_info_field_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo, encoded_size_),
					"FieldInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeProtocolService_MessageSet::MessageInfo::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: MessageInfo.FieldInfo: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}

// END: MessageInfo.FieldInfo: Implementation

//   END: Message: FieldInfo

//   BEGIN: Message: HostInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::HostInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_host_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("stpVersion"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("coreVersion"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("platform"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("operatingSystem"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("userAgent"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("serviceList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::HostInfo,
						_stpVersion
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::HostInfo,
						_coreVersion
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::HostInfo,
						_platform
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::HostInfo,
						_operatingSystem
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::HostInfo,
						_userAgent
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::HostInfo,
						_serviceList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_host_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::HostInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::HostInfo, encoded_size_),
					"HostInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::HostInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::HostInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[5].SetMessage(Service::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: HostInfo: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::HostInfo::SetCoreVersion(const uni_char * v, int l) 
{
	return _coreVersion.Set(v, l);
}


OP_STATUS
OpScopeProtocolService_MessageSet::HostInfo::SetPlatform(const uni_char * v, int l) 
{
	return _platform.Set(v, l);
}


OP_STATUS
OpScopeProtocolService_MessageSet::HostInfo::SetOperatingSystem(const uni_char * v, int l) 
{
	return _operatingSystem.Set(v, l);
}


OP_STATUS
OpScopeProtocolService_MessageSet::HostInfo::SetUserAgent(const uni_char * v, int l) 
{
	return _userAgent.Set(v, l);
}


OpProtobufMessageVector<OpScopeProtocolService_MessageSet::Service> &
OpScopeProtocolService_MessageSet::HostInfo::GetServiceListRef() 
{
	has_bits_.Reference().SetBit(5);
	return _serviceList;
}

// END: HostInfo: Implementation

//   END: Message: HostInfo

//   BEGIN: Message: MessageInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::MessageInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_message_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("id"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("fieldList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("parentID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo,
						_id
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo,
						_name
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo,
						_fieldList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfo,
						_parentID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_message_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageInfo, encoded_size_),
					"MessageInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(MessageInfo_FieldInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: MessageInfo: Implementation


// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::MessageInfo::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}


OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo> &
OpScopeProtocolService_MessageSet::MessageInfo::GetFieldListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _fieldList;
}

// END: MessageInfo: Implementation

//   END: Message: MessageInfo

//   BEGIN: Message: MessageInfoList
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::MessageInfoList::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_message_info_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("messageList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageInfoList,
						_messageList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_message_info_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageInfoList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageInfoList, encoded_size_),
					"MessageInfoList",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfoList>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfoList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(MessageInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: MessageInfoList: Implementation

// Setters

OpScopeProtocolService_MessageSet::MessageInfo *
OpScopeProtocolService_MessageSet::MessageInfoList::AppendNewMessageList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeProtocolService_MessageSet::MessageInfo> tmp(OP_NEW(OpScopeProtocolService_MessageSet::MessageInfo, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_messageList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: MessageInfoList: Implementation

//   END: Message: MessageInfoList

//   BEGIN: Message: MessageSelection
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::MessageSelection::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_message_selection_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("serviceName"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("idList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("includeRelated"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("includeAll"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageSelection,
						_serviceName
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageSelection,
						_idList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageSelection,
						_includeRelated
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::MessageSelection,
						_includeAll
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_message_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageSelection, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::MessageSelection, encoded_size_),
					"MessageSelection",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageSelection>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MessageSelection: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::MessageSelection::SetServiceName(const uni_char * v, int l) 
{
	return _serviceName.Set(v, l);
}


OpValueVector<UINT32> &
OpScopeProtocolService_MessageSet::MessageSelection::GetIdListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _idList;
}


OP_STATUS
OpScopeProtocolService_MessageSet::MessageSelection::AppendToIdList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _idList.Add(v);
}

// END: MessageSelection: Implementation

//   END: Message: MessageSelection

//   BEGIN: Message: Service
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::Service::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_service_];
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
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("version"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::Service,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::Service,
						_version
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_service_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::Service, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::Service, encoded_size_),
					"Service",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::Service>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::Service>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Service: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::Service::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeProtocolService_MessageSet::Service::SetVersion(const char * v, int l) 
{
	return _version.Set(v, l);
}

// END: Service: Implementation

//   END: Message: Service

//   BEGIN: Message: ServiceInfo
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::ServiceInfo::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_service_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("commandList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("eventList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ServiceInfo,
						_commandList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ServiceInfo,
						_eventList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_service_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceInfo, encoded_size_),
					"ServiceInfo",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceInfo>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(CommandInfo::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(EventInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ServiceInfo: Implementation

// Setters

OpProtobufMessageVector<OpScopeProtocolService_MessageSet::CommandInfo> &
OpScopeProtocolService_MessageSet::ServiceInfo::GetCommandListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _commandList;
}


OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EventInfo> &
OpScopeProtocolService_MessageSet::ServiceInfo::GetEventListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _eventList;
}

// END: ServiceInfo: Implementation

//   END: Message: ServiceInfo

//   BEGIN: Message: ServiceList
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::ServiceList::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_service_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("serviceList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ServiceList,
						_serviceList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_service_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceList, encoded_size_),
					"ServiceList",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceList>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ServiceList: Implementation

// Setters

OpAutoVector<OpString> &
OpScopeProtocolService_MessageSet::ServiceList::GetServiceListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _serviceList;
}

// END: ServiceList: Implementation

//   END: Message: ServiceList

//   BEGIN: Message: ServiceResult
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::ServiceResult::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_service_result_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ServiceResult,
						_name
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_service_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceResult, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceResult, encoded_size_),
					"ServiceResult",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceResult>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ServiceResult: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::ServiceResult::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}

// END: ServiceResult: Implementation

//   END: Message: ServiceResult

//   BEGIN: Message: ServiceSelection
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::ServiceSelection::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_service_selection_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::ServiceSelection,
						_name
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_service_selection_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceSelection, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::ServiceSelection, encoded_size_),
					"ServiceSelection",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceSelection>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::ServiceSelection>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ServiceSelection: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::ServiceSelection::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}

// END: ServiceSelection: Implementation

//   END: Message: ServiceSelection

//   BEGIN: Message: Value
/*static*/
const OpProtobufMessage *
OpScopeProtocolService_MessageSet::EnumList_Enum_Value::GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeProtocolService_Descriptors::_gen_MessageOffs_enum_list_enum_value_];
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
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
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
						OpScopeProtocolService_MessageSet::EnumList_Enum_Value,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeProtocolService_MessageSet::EnumList_Enum_Value,
						_number
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeProtocolService_Descriptors::_gen_MsgID_enum_list_enum_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumList_Enum_Value, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeProtocolService_MessageSet::EnumList_Enum_Value, encoded_size_),
					"Value",
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum_Value>::Make,
					OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum_Value>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeProtocolService_MessageSet::EnumList_Enum::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: EnumList.Enum.Value: Implementation

// Setters

OP_STATUS
OpScopeProtocolService_MessageSet::EnumList_Enum_Value::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}

// END: EnumList.Enum.Value: Implementation

//   END: Message: Value


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_protocol_service_interface.h"
#include "modules/scope/src/scope_protocol_service.h"

// BEGIN: OpScopeProtocolService_SI::Descriptors

OpScopeProtocolService_SI::Descriptors::Descriptors()
{
}

OpScopeProtocolService_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeProtocolService_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeProtocolService_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("OnServices",
						Command_OnServices,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_service_list_
						);
	command_list[1] = OpScopeCommand("OnQuit",
						Command_OnQuit,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("OnConnectionLost",
						Command_OnConnectionLost,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("Connect",
						Command_Connect,
						OpScopeCommand::Type_Call,
						_gen_MsgID_client_info_,
						_gen_void_MsgID
						);
	command_list[4] = OpScopeCommand("Disconnect",
						Command_Disconnect,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[5] = OpScopeCommand("Enable",
						Command_Enable,
						OpScopeCommand::Type_Call,
						_gen_MsgID_service_selection_,
						_gen_MsgID_service_result_
						);
	command_list[6] = OpScopeCommand("Disable",
						Command_Disable,
						OpScopeCommand::Type_Call,
						_gen_MsgID_service_selection_,
						_gen_MsgID_service_result_
						);
	command_list[7] = OpScopeCommand("Info",
						Command_Info,
						OpScopeCommand::Type_Call,
						_gen_MsgID_service_selection_,
						_gen_MsgID_service_info_
						);
	command_list[8] = OpScopeCommand("Quit",
						Command_Quit,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[9] = OpScopeCommand("OnError",
						Command_OnError,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_error_info_
						);
	command_list[10] = OpScopeCommand("HostInfo",
						Command_HostInfo,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_host_info_
						);
	command_list[11] = OpScopeCommand("MessageInfo",
						Command_MessageInfo,
						OpScopeCommand::Type_Call,
						_gen_MsgID_message_selection_,
						_gen_MsgID_message_info_list_
						);
	command_list[12] = OpScopeCommand("EnumInfo",
						Command_EnumInfo,
						OpScopeCommand::Type_Call,
						_gen_MsgID_enum_arg_,
						_gen_MsgID_enum_list_
						);
	return OpStatus::OK;
}

// END: OpScopeProtocolService_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeProtocolService_SI::OpScopeProtocolService_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("scope") : id, manager, control)
{
}

/*virtual*/
OpScopeProtocolService_SI::~OpScopeProtocolService_SI()
{
}

/*virtual*/
int
OpScopeProtocolService_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeProtocolService_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().scope_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeProtocolService_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_Connect) // Connect
	{
		OP_STATUS status = OpStatus::OK;
		ClientInfo in;

		OpProtobufInstanceProxy in_proxy(ClientInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoConnect(in);
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
	else if (msg.CommandID() == Command_Disconnect) // Disconnect
	{
		OP_STATUS status = OpStatus::OK;

		status = DoDisconnect();
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
	else if (msg.CommandID() == Command_Enable) // Enable
	{
		OP_STATUS status = OpStatus::OK;
		ServiceSelection in;
		ServiceResult out;

		OpProtobufInstanceProxy in_proxy(ServiceSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoEnable(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ServiceResult::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_Disable) // Disable
	{
		OP_STATUS status = OpStatus::OK;
		ServiceSelection in;
		ServiceResult out;

		OpProtobufInstanceProxy in_proxy(ServiceSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoDisable(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ServiceResult::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_Info) // Info
	{
		OP_STATUS status = OpStatus::OK;
		ServiceSelection in;
		ServiceInfo out;

		OpProtobufInstanceProxy in_proxy(ServiceSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoInfo(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ServiceInfo::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_Quit) // Quit
	{
		OP_STATUS status = OpStatus::OK;

		status = DoQuit();
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
	else if (msg.CommandID() == Command_HostInfo) // HostInfo
	{
		OP_STATUS status = OpStatus::OK;
		HostInfo out;

		status = DoHostInfo(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(HostInfo::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_MessageInfo) // MessageInfo
	{
		OP_STATUS status = OpStatus::OK;
		MessageSelection in;
		MessageInfoList out;

		OpProtobufInstanceProxy in_proxy(MessageSelection::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoMessageInfo(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(MessageInfoList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_EnumInfo) // EnumInfo
	{
		OP_STATUS status = OpStatus::OK;
		EnumArg in;
		EnumList out;

		OpProtobufInstanceProxy in_proxy(EnumArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoEnumInfo(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(EnumList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
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
OpScopeProtocolService_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeProtocolService_SI::Descriptors *
OpScopeProtocolService_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().scope_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeProtocolService_SI::GetMessageCount() const
{
	return OpScopeProtocolService_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeProtocolService_SI::GetMessageIDs() const
{
	unsigned start = OpScopeProtocolService_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeProtocolService_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeProtocolService_SI::GetMessages() const
{
	unsigned start = OpScopeProtocolService_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeProtocolService_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeProtocolService_SI::GetVersionString() const
{
	return "1.1";
}

/* virtual */
int
OpScopeProtocolService_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeProtocolService_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeProtocolService_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeProtocolService_SI::SendOnServices(const ServiceList &msg) // OnServices
{
	OpProtobufInstanceProxy proxy(ServiceList::GetMessageDescriptor(GetDescriptors()), const_cast<ServiceList *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnServices);
}


OP_STATUS
OpScopeProtocolService_SI::SendOnQuit() // OnQuit
{
	OpProtobufInstanceProxy proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnQuit);
}


OP_STATUS
OpScopeProtocolService_SI::SendOnConnectionLost() // OnConnectionLost
{
	OpProtobufInstanceProxy proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConnectionLost);
}


OP_STATUS
OpScopeProtocolService_SI::SendOnError(const ErrorInfo &msg) // OnError
{
	OpProtobufInstanceProxy proxy(ErrorInfo::GetMessageDescriptor(GetDescriptors()), const_cast<ErrorInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnError);
}


// Service implementation: END

#endif // SCOPE_SUPPORT
