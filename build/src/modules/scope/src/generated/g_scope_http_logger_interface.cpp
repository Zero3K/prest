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

#ifdef SCOPE_HTTP_LOGGER

#include "modules/scope/src/generated/g_scope_http_logger_interface.h"

// BEGIN: OpScopeHttpLogger_Descriptors

OpScopeHttpLogger_Descriptors::OpScopeHttpLogger_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeHttpLogger_Descriptors::~OpScopeHttpLogger_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeHttpLogger_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeHttpLogger_Descriptors::Get(unsigned id) const
{
	OpScopeHttpLogger_Descriptors *descriptors = const_cast<OpScopeHttpLogger_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_header_:
		return OpScopeHttpLogger_MessageSet::Header::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeHttpLogger_Descriptors


// BEGIN: OpScopeHttpLogger_MessageSet

OpScopeHttpLogger_MessageSet::OpScopeHttpLogger_MessageSet()
{
}

/*virtual*/
OpScopeHttpLogger_MessageSet::~OpScopeHttpLogger_MessageSet()
{
}

// END: OpScopeHttpLogger_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Header
/*static*/
const OpProtobufMessage *
OpScopeHttpLogger_MessageSet::Header::GetMessageDescriptor(OpScopeHttpLogger_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeHttpLogger_Descriptors::_gen_MessageOffs_header_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("requestID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("header"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeHttpLogger_MessageSet::Header,
						_requestID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeHttpLogger_MessageSet::Header,
						_windowID
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeHttpLogger_MessageSet::Header,
						_time
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeHttpLogger_MessageSet::Header,
						_header
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeHttpLogger_Descriptors::_gen_MsgID_header_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeHttpLogger_MessageSet::Header, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeHttpLogger_MessageSet::Header, encoded_size_),
					"Header",
					OpProtobufMessageVector<OpScopeHttpLogger_MessageSet::Header>::Make,
					OpProtobufMessageVector<OpScopeHttpLogger_MessageSet::Header>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Header: Implementation

// Setters

OP_STATUS
OpScopeHttpLogger_MessageSet::Header::SetTime(const uni_char * v, int l) 
{
	return _time.Set(v, l);
}


OP_STATUS
OpScopeHttpLogger_MessageSet::Header::SetHeader(const char * v, int l) 
{
	return _header.Set(v, l);
}

// END: Header: Implementation

//   END: Message: Header


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_http_logger_interface.h"
#include "modules/scope/src/scope_http_logger.h"

// BEGIN: OpScopeHttpLogger_SI::Descriptors

OpScopeHttpLogger_SI::Descriptors::Descriptors()
{
}

OpScopeHttpLogger_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeHttpLogger_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeHttpLogger_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("OnRequest",
						Command_OnRequest,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_header_
						);
	command_list[1] = OpScopeCommand("OnResponse",
						Command_OnResponse,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_header_
						);
	return OpStatus::OK;
}

// END: OpScopeHttpLogger_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeHttpLogger_SI::OpScopeHttpLogger_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("http-logger") : id, manager, control)
{
}

/*virtual*/
OpScopeHttpLogger_SI::~OpScopeHttpLogger_SI()
{
}

/*virtual*/
int
OpScopeHttpLogger_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeHttpLogger_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().http_logger_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeHttpLogger_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	return OpStatus::OK;
}

/*virtual*/
const OpProtobufMessage *
OpScopeHttpLogger_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeHttpLogger_SI::Descriptors *
OpScopeHttpLogger_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().http_logger_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeHttpLogger_SI::GetMessageCount() const
{
	return OpScopeHttpLogger_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeHttpLogger_SI::GetMessageIDs() const
{
	unsigned start = OpScopeHttpLogger_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeHttpLogger_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeHttpLogger_SI::GetMessages() const
{
	unsigned start = OpScopeHttpLogger_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeHttpLogger_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeHttpLogger_SI::GetVersionString() const
{
	return "2.0";
}

/* virtual */
int
OpScopeHttpLogger_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeHttpLogger_SI::GetMinorVersion() const
{
	return 0;
}

/* virtual */
const char *
OpScopeHttpLogger_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeHttpLogger_SI::SendOnRequest(const Header &msg) // OnRequest
{
	OpProtobufInstanceProxy proxy(Header::GetMessageDescriptor(GetDescriptors()), const_cast<Header *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnRequest);
}


OP_STATUS
OpScopeHttpLogger_SI::SendOnResponse(const Header &msg) // OnResponse
{
	OpProtobufInstanceProxy proxy(Header::GetMessageDescriptor(GetDescriptors()), const_cast<Header *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnResponse);
}


// Service implementation: END

#endif // SCOPE_HTTP_LOGGER
