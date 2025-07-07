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

#include "modules/scope/src/generated/g_scope_service_interface.h"

// BEGIN: OpScopeService_Descriptors

OpScopeService_Descriptors::OpScopeService_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeService_Descriptors::~OpScopeService_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeService_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeService_Descriptors::Get(unsigned id) const
{
	OpScopeService_Descriptors *descriptors = const_cast<OpScopeService_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_error_info_:
		return OpScopeService_MessageSet::ErrorInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_transport_message_:
		return OpScopeService_MessageSet::TransportMessage::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeService_Descriptors


// BEGIN: OpScopeService_MessageSet

OpScopeService_MessageSet::OpScopeService_MessageSet()
{
}

/*virtual*/
OpScopeService_MessageSet::~OpScopeService_MessageSet()
{
}

// END: OpScopeService_MessageSet

// BEGIN: Messages

//   BEGIN: Message: ErrorInfo
/*static*/
const OpProtobufMessage *
OpScopeService_MessageSet::ErrorInfo::GetMessageDescriptor(OpScopeService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeService_Descriptors::_gen_MessageOffs_error_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("description"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Sint32,
						2,
						UNI_L("line"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Sint32,
						3,
						UNI_L("column"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Sint32,
						4,
						UNI_L("offset"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::ErrorInfo,
						_description
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::ErrorInfo,
						_line
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::ErrorInfo,
						_column
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::ErrorInfo,
						_offset
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeService_Descriptors::_gen_MsgID_error_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeService_MessageSet::ErrorInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeService_MessageSet::ErrorInfo, encoded_size_),
					"ErrorInfo",
					OpProtobufMessageVector<OpScopeService_MessageSet::ErrorInfo>::Make,
					OpProtobufMessageVector<OpScopeService_MessageSet::ErrorInfo>::Destroy));
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
OpScopeService_MessageSet::ErrorInfo::SetDescription(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return _description.Set(v, l);
}

// END: ErrorInfo: Implementation

//   END: Message: ErrorInfo

//   BEGIN: Message: TransportMessage
/*static*/
const OpProtobufMessage *
OpScopeService_MessageSet::TransportMessage::GetMessageDescriptor(OpScopeService_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeService_Descriptors::_gen_MessageOffs_transport_message_];
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
						UNI_L("stpType"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("commandID"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("format"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("tag"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("status"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::TransportMessage,
						_serviceName
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::TransportMessage,
						_stpType
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::TransportMessage,
						_commandID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::TransportMessage,
						_format
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::TransportMessage,
						_tag
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeService_MessageSet::TransportMessage,
						_status
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeService_Descriptors::_gen_MsgID_transport_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeService_MessageSet::TransportMessage, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeService_MessageSet::TransportMessage, encoded_size_),
					"TransportMessage",
					OpProtobufMessageVector<OpScopeService_MessageSet::TransportMessage>::Make,
					OpProtobufMessageVector<OpScopeService_MessageSet::TransportMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: TransportMessage: Implementation

// Setters

OP_STATUS
OpScopeService_MessageSet::TransportMessage::SetServiceName(const uni_char * v, int l) 
{
	return _serviceName.Set(v, l);
}

// END: TransportMessage: Implementation

//   END: Message: TransportMessage


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_service_interface.h"
#include "modules/scope/src/scope_service.h"

// BEGIN: OpScopeService_SI::Descriptors

OpScopeService_SI::Descriptors::Descriptors()
{
}

OpScopeService_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeService_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeService_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("Error",
						Command_Error,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_error_info_
						);
	command_list[1] = OpScopeCommand("Message",
						Command_Message,
						OpScopeCommand::Type_Call,
						_gen_MsgID_transport_message_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeService_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeService_SI::OpScopeService_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("scope-service") : id, manager, control)
{
}

/*virtual*/
OpScopeService_SI::~OpScopeService_SI()
{
}

// Service implementation: END

#endif // SCOPE_SUPPORT
