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

#ifdef SCOPE_DESKTOP_SUPPORT

#include "adjunct/desktop_scope/src/generated/g_scope_desktop_utils_interface.h"

// BEGIN: OpScopeDesktopUtils_Descriptors

OpScopeDesktopUtils_Descriptors::OpScopeDesktopUtils_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeDesktopUtils_Descriptors::~OpScopeDesktopUtils_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeDesktopUtils_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeDesktopUtils_Descriptors::Get(unsigned id) const
{
	OpScopeDesktopUtils_Descriptors *descriptors = const_cast<OpScopeDesktopUtils_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_desktop_path_:
		return OpScopeDesktopUtils_MessageSet::DesktopPath::GetMessageDescriptor(descriptors);

	case _gen_MsgID_desktop_pid_:
		return OpScopeDesktopUtils_MessageSet::DesktopPid::GetMessageDescriptor(descriptors);

	case _gen_MsgID_desktop_string_id_:
		return OpScopeDesktopUtils_MessageSet::DesktopStringID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_desktop_string_text_:
		return OpScopeDesktopUtils_MessageSet::DesktopStringText::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeDesktopUtils_Descriptors


// BEGIN: OpScopeDesktopUtils_MessageSet

OpScopeDesktopUtils_MessageSet::OpScopeDesktopUtils_MessageSet()
{
}

/*virtual*/
OpScopeDesktopUtils_MessageSet::~OpScopeDesktopUtils_MessageSet()
{
}

// END: OpScopeDesktopUtils_MessageSet

// BEGIN: Messages

//   BEGIN: Message: DesktopPath
/*static*/
const OpProtobufMessage *
OpScopeDesktopUtils_MessageSet::DesktopPath::GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopUtils_Descriptors::_gen_MessageOffs_desktop_path_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("path"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopUtils_MessageSet::DesktopPath,
						_path
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopUtils_Descriptors::_gen_MsgID_desktop_path_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopPath, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopPath, encoded_size_),
					"DesktopPath",
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopPath>::Make,
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopPath>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DesktopPath: Implementation

// Setters

OP_STATUS
OpScopeDesktopUtils_MessageSet::DesktopPath::SetPath(const uni_char * v, int l) 
{
	return _path.Set(v, l);
}

// END: DesktopPath: Implementation

//   END: Message: DesktopPath

//   BEGIN: Message: DesktopPid
/*static*/
const OpProtobufMessage *
OpScopeDesktopUtils_MessageSet::DesktopPid::GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopUtils_Descriptors::_gen_MessageOffs_desktop_pid_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("pid"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopUtils_MessageSet::DesktopPid,
						_pid
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopUtils_Descriptors::_gen_MsgID_desktop_pid_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopPid, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopPid, encoded_size_),
					"DesktopPid",
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopPid>::Make,
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopPid>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DesktopPid: Implementation


// END: DesktopPid: Implementation

//   END: Message: DesktopPid

//   BEGIN: Message: DesktopStringID
/*static*/
const OpProtobufMessage *
OpScopeDesktopUtils_MessageSet::DesktopStringID::GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopUtils_Descriptors::_gen_MessageOffs_desktop_string_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("enumText"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopUtils_MessageSet::DesktopStringID,
						_enumText
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopUtils_Descriptors::_gen_MsgID_desktop_string_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopStringID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopStringID, encoded_size_),
					"DesktopStringID",
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopStringID>::Make,
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopStringID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DesktopStringID: Implementation

// Setters

OP_STATUS
OpScopeDesktopUtils_MessageSet::DesktopStringID::SetEnumText(const uni_char * v, int l) 
{
	return _enumText.Set(v, l);
}

// END: DesktopStringID: Implementation

//   END: Message: DesktopStringID

//   BEGIN: Message: DesktopStringText
/*static*/
const OpProtobufMessage *
OpScopeDesktopUtils_MessageSet::DesktopStringText::GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopUtils_Descriptors::_gen_MessageOffs_desktop_string_text_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("text"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopUtils_MessageSet::DesktopStringText,
						_text
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopUtils_Descriptors::_gen_MsgID_desktop_string_text_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopStringText, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopUtils_MessageSet::DesktopStringText, encoded_size_),
					"DesktopStringText",
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopStringText>::Make,
					OpProtobufMessageVector<OpScopeDesktopUtils_MessageSet::DesktopStringText>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DesktopStringText: Implementation

// Setters

OP_STATUS
OpScopeDesktopUtils_MessageSet::DesktopStringText::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}

// END: DesktopStringText: Implementation

//   END: Message: DesktopStringText


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "adjunct/desktop_scope/src/generated/g_scope_desktop_utils_interface.h"
#include "adjunct/desktop_scope/src/scope_desktop_utils.h"

// BEGIN: OpScopeDesktopUtils_SI::Descriptors

OpScopeDesktopUtils_SI::Descriptors::Descriptors()
{
}

OpScopeDesktopUtils_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeDesktopUtils_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeDesktopUtils_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetString",
						Command_GetString,
						OpScopeCommand::Type_Call,
						_gen_MsgID_desktop_string_id_,
						_gen_MsgID_desktop_string_text_
						);
	command_list[1] = OpScopeCommand("GetOperaPath",
						Command_GetOperaPath,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_path_
						);
	command_list[2] = OpScopeCommand("GetLargePreferencesPath",
						Command_GetLargePreferencesPath,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_path_
						);
	command_list[3] = OpScopeCommand("GetSmallPreferencesPath",
						Command_GetSmallPreferencesPath,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_path_
						);
	command_list[4] = OpScopeCommand("GetCachePreferencesPath",
						Command_GetCachePreferencesPath,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_path_
						);
	command_list[5] = OpScopeCommand("GetCurrentProcessId",
						Command_GetCurrentProcessId,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_pid_
						);
	return OpStatus::OK;
}

// END: OpScopeDesktopUtils_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeDesktopUtils_SI::OpScopeDesktopUtils_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("desktop-utils") : id, manager, control)
{
}

/*virtual*/
OpScopeDesktopUtils_SI::~OpScopeDesktopUtils_SI()
{
}

/*virtual*/
int
OpScopeDesktopUtils_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeDesktopUtils_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().desktop_utils_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeDesktopUtils_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetString) // GetString
	{
		OP_STATUS status = OpStatus::OK;
		DesktopStringID in;
		DesktopStringText out;

		OpProtobufInstanceProxy in_proxy(DesktopStringID::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetString(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopStringText::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetOperaPath) // GetOperaPath
	{
		OP_STATUS status = OpStatus::OK;
		DesktopPath out;

		status = DoGetOperaPath(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopPath::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetLargePreferencesPath) // GetLargePreferencesPath
	{
		OP_STATUS status = OpStatus::OK;
		DesktopPath out;

		status = DoGetLargePreferencesPath(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopPath::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetSmallPreferencesPath) // GetSmallPreferencesPath
	{
		OP_STATUS status = OpStatus::OK;
		DesktopPath out;

		status = DoGetSmallPreferencesPath(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopPath::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetCachePreferencesPath) // GetCachePreferencesPath
	{
		OP_STATUS status = OpStatus::OK;
		DesktopPath out;

		status = DoGetCachePreferencesPath(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopPath::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetCurrentProcessId) // GetCurrentProcessId
	{
		OP_STATUS status = OpStatus::OK;
		DesktopPid out;

		status = DoGetCurrentProcessId(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopPid::GetMessageDescriptor(GetDescriptors()), &out);
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
OpScopeDesktopUtils_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeDesktopUtils_SI::Descriptors *
OpScopeDesktopUtils_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().desktop_utils_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeDesktopUtils_SI::GetMessageCount() const
{
	return OpScopeDesktopUtils_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeDesktopUtils_SI::GetMessageIDs() const
{
	unsigned start = OpScopeDesktopUtils_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeDesktopUtils_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeDesktopUtils_SI::GetMessages() const
{
	unsigned start = OpScopeDesktopUtils_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeDesktopUtils_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeDesktopUtils_SI::GetVersionString() const
{
	return "2.0";
}

/* virtual */
int
OpScopeDesktopUtils_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeDesktopUtils_SI::GetMinorVersion() const
{
	return 0;
}

/* virtual */
const char *
OpScopeDesktopUtils_SI::GetPatchVersion() const
{
	return "0";
}

// Service implementation: END

#endif // SCOPE_DESKTOP_SUPPORT
