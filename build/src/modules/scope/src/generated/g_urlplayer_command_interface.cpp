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

#ifdef SCOPE_URL_PLAYER

#include "modules/scope/src/generated/g_urlplayer_command_interface.h"

// BEGIN: OpScopeUrlPlayer_Descriptors

OpScopeUrlPlayer_Descriptors::OpScopeUrlPlayer_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeUrlPlayer_Descriptors::~OpScopeUrlPlayer_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeUrlPlayer_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeUrlPlayer_Descriptors::Get(unsigned id) const
{
	OpScopeUrlPlayer_Descriptors *descriptors = const_cast<OpScopeUrlPlayer_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_request_:
		return OpScopeUrlPlayer_MessageSet::Request::GetMessageDescriptor(descriptors);

	case _gen_MsgID_window_:
		return OpScopeUrlPlayer_MessageSet::Window::GetMessageDescriptor(descriptors);

	case _gen_MsgID_window_count_:
		return OpScopeUrlPlayer_MessageSet::WindowCount::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeUrlPlayer_Descriptors


// BEGIN: OpScopeUrlPlayer_MessageSet

OpScopeUrlPlayer_MessageSet::OpScopeUrlPlayer_MessageSet()
{
}

/*virtual*/
OpScopeUrlPlayer_MessageSet::~OpScopeUrlPlayer_MessageSet()
{
}

// END: OpScopeUrlPlayer_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Request
/*static*/
const OpProtobufMessage *
OpScopeUrlPlayer_MessageSet::Request::GetMessageDescriptor(OpScopeUrlPlayer_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeUrlPlayer_Descriptors::_gen_MessageOffs_request_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("windowNumber"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("url"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeUrlPlayer_MessageSet::Request,
						_windowNumber
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeUrlPlayer_MessageSet::Request,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeUrlPlayer_Descriptors::_gen_MsgID_request_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeUrlPlayer_MessageSet::Request, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeUrlPlayer_MessageSet::Request, encoded_size_),
					"Request",
					OpProtobufMessageVector<OpScopeUrlPlayer_MessageSet::Request>::Make,
					OpProtobufMessageVector<OpScopeUrlPlayer_MessageSet::Request>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Request: Implementation

// Setters

OP_STATUS
OpScopeUrlPlayer_MessageSet::Request::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: Request: Implementation

//   END: Message: Request

//   BEGIN: Message: Window
/*static*/
const OpProtobufMessage *
OpScopeUrlPlayer_MessageSet::Window::GetMessageDescriptor(OpScopeUrlPlayer_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeUrlPlayer_Descriptors::_gen_MessageOffs_window_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeUrlPlayer_MessageSet::Window,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeUrlPlayer_Descriptors::_gen_MsgID_window_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeUrlPlayer_MessageSet::Window, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeUrlPlayer_MessageSet::Window, encoded_size_),
					"Window",
					OpProtobufMessageVector<OpScopeUrlPlayer_MessageSet::Window>::Make,
					OpProtobufMessageVector<OpScopeUrlPlayer_MessageSet::Window>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Window: Implementation


// END: Window: Implementation

//   END: Message: Window

//   BEGIN: Message: WindowCount
/*static*/
const OpProtobufMessage *
OpScopeUrlPlayer_MessageSet::WindowCount::GetMessageDescriptor(OpScopeUrlPlayer_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeUrlPlayer_Descriptors::_gen_MessageOffs_window_count_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("windowCount"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeUrlPlayer_MessageSet::WindowCount,
						_windowCount
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeUrlPlayer_Descriptors::_gen_MsgID_window_count_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeUrlPlayer_MessageSet::WindowCount, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeUrlPlayer_MessageSet::WindowCount, encoded_size_),
					"WindowCount",
					OpProtobufMessageVector<OpScopeUrlPlayer_MessageSet::WindowCount>::Make,
					OpProtobufMessageVector<OpScopeUrlPlayer_MessageSet::WindowCount>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WindowCount: Implementation


// END: WindowCount: Implementation

//   END: Message: WindowCount


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_urlplayer_command_interface.h"
#include "modules/scope/src/urlplayer_command.h"

// BEGIN: OpScopeUrlPlayer_SI::Descriptors

OpScopeUrlPlayer_SI::Descriptors::Descriptors()
{
}

OpScopeUrlPlayer_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeUrlPlayer_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeUrlPlayer_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("CreateWindows",
						Command_CreateWindows,
						OpScopeCommand::Type_Call,
						_gen_MsgID_window_count_,
						_gen_MsgID_window_count_
						);
	command_list[1] = OpScopeCommand("LoadUrl",
						Command_LoadUrl,
						OpScopeCommand::Type_Call,
						_gen_MsgID_request_,
						_gen_MsgID_window_
						);
	command_list[2] = OpScopeCommand("OnUrlLoaded",
						Command_OnUrlLoaded,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_window_
						);
	command_list[3] = OpScopeCommand("OnConnectionFailed",
						Command_OnConnectionFailed,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_window_
						);
	return OpStatus::OK;
}

// END: OpScopeUrlPlayer_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeUrlPlayer_SI::OpScopeUrlPlayer_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("url-player") : id, manager, control)
{
}

/*virtual*/
OpScopeUrlPlayer_SI::~OpScopeUrlPlayer_SI()
{
}

/*virtual*/
int
OpScopeUrlPlayer_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeUrlPlayer_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().url_player_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeUrlPlayer_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_CreateWindows) // CreateWindows
	{
		OP_STATUS status = OpStatus::OK;
		WindowCount in;
		WindowCount out;

		OpProtobufInstanceProxy in_proxy(WindowCount::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCreateWindows(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(WindowCount::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_LoadUrl) // LoadUrl
	{
		OP_STATUS status = OpStatus::OK;
		Request in;
		Window out;

		OpProtobufInstanceProxy in_proxy(Request::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoLoadUrl(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(Window::GetMessageDescriptor(GetDescriptors()), &out);
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
OpScopeUrlPlayer_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeUrlPlayer_SI::Descriptors *
OpScopeUrlPlayer_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().url_player_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeUrlPlayer_SI::GetMessageCount() const
{
	return OpScopeUrlPlayer_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeUrlPlayer_SI::GetMessageIDs() const
{
	unsigned start = OpScopeUrlPlayer_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeUrlPlayer_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeUrlPlayer_SI::GetMessages() const
{
	unsigned start = OpScopeUrlPlayer_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeUrlPlayer_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeUrlPlayer_SI::GetVersionString() const
{
	return "2.0";
}

/* virtual */
int
OpScopeUrlPlayer_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeUrlPlayer_SI::GetMinorVersion() const
{
	return 0;
}

/* virtual */
const char *
OpScopeUrlPlayer_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeUrlPlayer_SI::SendOnUrlLoaded(const Window &msg) // OnUrlLoaded
{
	OpProtobufInstanceProxy proxy(Window::GetMessageDescriptor(GetDescriptors()), const_cast<Window *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnUrlLoaded);
}


OP_STATUS
OpScopeUrlPlayer_SI::SendOnConnectionFailed(const Window &msg) // OnConnectionFailed
{
	OpProtobufInstanceProxy proxy(Window::GetMessageDescriptor(GetDescriptors()), const_cast<Window *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnConnectionFailed);
}


// Service implementation: END

#endif // SCOPE_URL_PLAYER
