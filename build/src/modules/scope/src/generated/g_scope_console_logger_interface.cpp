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

#ifdef SCOPE_CONSOLE_LOGGER

#include "modules/scope/src/generated/g_scope_console_logger_interface.h"

// BEGIN: OpScopeConsoleLogger_Descriptors

OpScopeConsoleLogger_Descriptors::OpScopeConsoleLogger_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeConsoleLogger_Descriptors::~OpScopeConsoleLogger_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeConsoleLogger_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeConsoleLogger_Descriptors::Get(unsigned id) const
{
	OpScopeConsoleLogger_Descriptors *descriptors = const_cast<OpScopeConsoleLogger_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_console_message_:
		return OpScopeConsoleLogger_MessageSet::ConsoleMessage::GetMessageDescriptor(descriptors);

	case _gen_MsgID_console_message_list_:
		return OpScopeConsoleLogger_MessageSet::ConsoleMessageList::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeConsoleLogger_Descriptors


// BEGIN: OpScopeConsoleLogger_MessageSet

OpScopeConsoleLogger_MessageSet::OpScopeConsoleLogger_MessageSet()
{
}

/*virtual*/
OpScopeConsoleLogger_MessageSet::~OpScopeConsoleLogger_MessageSet()
{
}

// END: OpScopeConsoleLogger_MessageSet

// BEGIN: Messages

//   BEGIN: Message: ConsoleMessage
/*static*/
const OpProtobufMessage *
OpScopeConsoleLogger_MessageSet::ConsoleMessage::GetMessageDescriptor(OpScopeConsoleLogger_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeConsoleLogger_Descriptors::_gen_MessageOffs_console_message_];
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
						OpProtobufFormat::Uint32,
						2,
						UNI_L("time"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("description"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("uri"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("context"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("source"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::String,
						7,
						UNI_L("severity"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_time
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_description
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_uri
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_context
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_source
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessage,
						_severity
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeConsoleLogger_Descriptors::_gen_MsgID_console_message_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeConsoleLogger_MessageSet::ConsoleMessage, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeConsoleLogger_MessageSet::ConsoleMessage, encoded_size_),
					"ConsoleMessage",
					OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessage>::Make,
					OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessage>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ConsoleMessage: Implementation

// Setters

OP_STATUS
OpScopeConsoleLogger_MessageSet::ConsoleMessage::SetDescription(const uni_char * v, int l) 
{
	return _description.Set(v, l);
}


OP_STATUS
OpScopeConsoleLogger_MessageSet::ConsoleMessage::SetUri(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _uri.Set(v, l);
}


OP_STATUS
OpScopeConsoleLogger_MessageSet::ConsoleMessage::SetContext(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _context.Set(v, l);
}


OP_STATUS
OpScopeConsoleLogger_MessageSet::ConsoleMessage::SetSource(const char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _source.Set(v, l);
}


OP_STATUS
OpScopeConsoleLogger_MessageSet::ConsoleMessage::SetSeverity(const char * v, int l) 
{
	has_bits_.Reference().SetBit(6);
	return _severity.Set(v, l);
}

// END: ConsoleMessage: Implementation

//   END: Message: ConsoleMessage

//   BEGIN: Message: ConsoleMessageList
/*static*/
const OpProtobufMessage *
OpScopeConsoleLogger_MessageSet::ConsoleMessageList::GetMessageDescriptor(OpScopeConsoleLogger_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeConsoleLogger_Descriptors::_gen_MessageOffs_console_message_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("consoleMessageList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeConsoleLogger_MessageSet::ConsoleMessageList,
						_consoleMessageList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeConsoleLogger_Descriptors::_gen_MsgID_console_message_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeConsoleLogger_MessageSet::ConsoleMessageList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeConsoleLogger_MessageSet::ConsoleMessageList, encoded_size_),
					"ConsoleMessageList",
					OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessageList>::Make,
					OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessageList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ConsoleMessage::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ConsoleMessageList: Implementation

// Setters

OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessage> &
OpScopeConsoleLogger_MessageSet::ConsoleMessageList::GetConsoleMessageListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _consoleMessageList;
}

// END: ConsoleMessageList: Implementation

//   END: Message: ConsoleMessageList


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_console_logger_interface.h"
#include "modules/scope/src/scope_console_logger.h"

// BEGIN: OpScopeConsoleLogger_SI::Descriptors

OpScopeConsoleLogger_SI::Descriptors::Descriptors()
{
}

OpScopeConsoleLogger_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeConsoleLogger_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeConsoleLogger_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("OnConsoleMessage",
						Command_OnConsoleMessage,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_console_message_
						);
	command_list[1] = OpScopeCommand("Clear",
						Command_Clear,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("ListMessages",
						Command_ListMessages,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_console_message_list_
						);
	return OpStatus::OK;
}

// END: OpScopeConsoleLogger_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeConsoleLogger_SI::OpScopeConsoleLogger_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("console-logger") : id, manager, control)
{
}

/*virtual*/
OpScopeConsoleLogger_SI::~OpScopeConsoleLogger_SI()
{
}

/*virtual*/
int
OpScopeConsoleLogger_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeConsoleLogger_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().console_logger_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeConsoleLogger_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_Clear) // Clear
	{
		OP_STATUS status = OpStatus::OK;

		status = DoClear();
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
	else if (msg.CommandID() == Command_ListMessages) // ListMessages
	{
		OP_STATUS status = OpStatus::OK;
		ConsoleMessageList out;

		status = DoListMessages(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ConsoleMessageList::GetMessageDescriptor(GetDescriptors()), &out);
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
OpScopeConsoleLogger_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeConsoleLogger_SI::Descriptors *
OpScopeConsoleLogger_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().console_logger_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeConsoleLogger_SI::GetMessageCount() const
{
	return OpScopeConsoleLogger_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeConsoleLogger_SI::GetMessageIDs() const
{
	unsigned start = OpScopeConsoleLogger_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeConsoleLogger_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeConsoleLogger_SI::GetMessages() const
{
	unsigned start = OpScopeConsoleLogger_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeConsoleLogger_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeConsoleLogger_SI::GetVersionString() const
{
	return "2.1";
}

/* virtual */
int
OpScopeConsoleLogger_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeConsoleLogger_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeConsoleLogger_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeConsoleLogger_SI::SendOnConsoleMessage(const ConsoleMessage &msg) // OnConsoleMessage
{
	OpProtobufInstanceProxy proxy(ConsoleMessage::GetMessageDescriptor(GetDescriptors()), const_cast<ConsoleMessage *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConsoleMessage);
}


// Service implementation: END

#endif // SCOPE_CONSOLE_LOGGER
