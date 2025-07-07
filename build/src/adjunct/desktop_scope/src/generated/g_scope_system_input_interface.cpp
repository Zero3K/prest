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

#include "adjunct/desktop_scope/src/generated/g_scope_system_input_interface.h"

// BEGIN: OpScopeSystemInput_Descriptors

OpScopeSystemInput_Descriptors::OpScopeSystemInput_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeSystemInput_Descriptors::~OpScopeSystemInput_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeSystemInput_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_ModifierPressed;
	enum_id_list[1] = _gen_EnumID_MouseInfo_MouseButton;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeSystemInput_Descriptors::Get(unsigned id) const
{
	OpScopeSystemInput_Descriptors *descriptors = const_cast<OpScopeSystemInput_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_key_press_info_:
		return OpScopeSystemInput_MessageSet::KeyPressInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mouse_info_:
		return OpScopeSystemInput_MessageSet::MouseInfo::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeSystemInput_Descriptors


// BEGIN: OpScopeSystemInput_MessageSet

OpScopeSystemInput_MessageSet::OpScopeSystemInput_MessageSet()
{
}

/*virtual*/
OpScopeSystemInput_MessageSet::~OpScopeSystemInput_MessageSet()
{
}

// END: OpScopeSystemInput_MessageSet

// BEGIN: Messages

//   BEGIN: Message: KeyPressInfo
/*static*/
const OpProtobufMessage *
OpScopeSystemInput_MessageSet::KeyPressInfo::GetMessageDescriptor(OpScopeSystemInput_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeSystemInput_Descriptors::_gen_MessageOffs_key_press_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("key"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("modifier"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::KeyPressInfo,
						_key
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::KeyPressInfo,
						_modifier
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeSystemInput_Descriptors::_gen_MsgID_key_press_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeSystemInput_MessageSet::KeyPressInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeSystemInput_MessageSet::KeyPressInfo, encoded_size_),
					"KeyPressInfo",
					OpProtobufMessageVector<OpScopeSystemInput_MessageSet::KeyPressInfo>::Make,
					OpProtobufMessageVector<OpScopeSystemInput_MessageSet::KeyPressInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: KeyPressInfo: Implementation

// Setters

OP_STATUS
OpScopeSystemInput_MessageSet::KeyPressInfo::SetKey(const uni_char * v, int l) 
{
	return _key.Set(v, l);
}

// END: KeyPressInfo: Implementation

//   END: Message: KeyPressInfo

//   BEGIN: Message: MouseInfo
/*static*/
const OpProtobufMessage *
OpScopeSystemInput_MessageSet::MouseInfo::GetMessageDescriptor(OpScopeSystemInput_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeSystemInput_Descriptors::_gen_MessageOffs_mouse_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("y"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("button"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeSystemInput_Descriptors::_gen_EnumID_MouseInfo_MouseButton // unsigned enum_id
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("numClicks"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("modifier"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::MouseInfo,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::MouseInfo,
						_y
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::MouseInfo,
						_button
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::MouseInfo,
						_numClicks
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeSystemInput_MessageSet::MouseInfo,
						_modifier
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeSystemInput_Descriptors::_gen_MsgID_mouse_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeSystemInput_MessageSet::MouseInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeSystemInput_MessageSet::MouseInfo, encoded_size_),
					"MouseInfo",
					OpProtobufMessageVector<OpScopeSystemInput_MessageSet::MouseInfo>::Make,
					OpProtobufMessageVector<OpScopeSystemInput_MessageSet::MouseInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MouseInfo: Implementation

// Enum value MouseInfo.MouseButton.LEFT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeSystemInput_MessageSet::MouseInfo_MouseButton OpScopeSystemInput_MessageSet::MouseInfo::MOUSEBUTTON_LEFT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value MouseInfo.MouseButton.RIGHT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeSystemInput_MessageSet::MouseInfo_MouseButton OpScopeSystemInput_MessageSet::MouseInfo::MOUSEBUTTON_RIGHT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value MouseInfo.MouseButton.MIDDLE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeSystemInput_MessageSet::MouseInfo_MouseButton OpScopeSystemInput_MessageSet::MouseInfo::MOUSEBUTTON_MIDDLE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeSystemInput_MessageSet::MouseInfo::SetButton(OpScopeSystemInput_MessageSet::MouseInfo_MouseButton v) 
{
	_button = static_cast<OpScopeSystemInput_MessageSet::MouseInfo_MouseButton>(v);
}

// END: MouseInfo: Implementation

//   END: Message: MouseInfo


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "adjunct/desktop_scope/src/generated/g_scope_system_input_interface.h"
#include "adjunct/desktop_scope/src/scope_system_input.h"

// BEGIN: OpScopeSystemInput_SI::Descriptors

OpScopeSystemInput_SI::Descriptors::Descriptors()
{
}

OpScopeSystemInput_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeSystemInput_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeSystemInput_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("Click",
						Command_Click,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mouse_info_,
						_gen_void_MsgID
						);
	command_list[1] = OpScopeCommand("KeyPress",
						Command_KeyPress,
						OpScopeCommand::Type_Call,
						_gen_MsgID_key_press_info_,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("KeyUp",
						Command_KeyUp,
						OpScopeCommand::Type_Call,
						_gen_MsgID_key_press_info_,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("KeyDown",
						Command_KeyDown,
						OpScopeCommand::Type_Call,
						_gen_MsgID_key_press_info_,
						_gen_void_MsgID
						);
	command_list[4] = OpScopeCommand("MouseDown",
						Command_MouseDown,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mouse_info_,
						_gen_void_MsgID
						);
	command_list[5] = OpScopeCommand("MouseUp",
						Command_MouseUp,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mouse_info_,
						_gen_void_MsgID
						);
	command_list[6] = OpScopeCommand("MouseMove",
						Command_MouseMove,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mouse_info_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeSystemInput_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeSystemInput_SI::OpScopeSystemInput_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("system-input") : id, manager, control)
{
}

/*virtual*/
OpScopeSystemInput_SI::~OpScopeSystemInput_SI()
{
}

/*virtual*/
int
OpScopeSystemInput_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeSystemInput_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().system_input_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeSystemInput_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_Click) // Click
	{
		OP_STATUS status = OpStatus::OK;
		MouseInfo in;

		OpProtobufInstanceProxy in_proxy(MouseInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoClick(in);
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
	else if (msg.CommandID() == Command_KeyPress) // KeyPress
	{
		OP_STATUS status = OpStatus::OK;
		KeyPressInfo in;

		OpProtobufInstanceProxy in_proxy(KeyPressInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoKeyPress(in);
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
	else if (msg.CommandID() == Command_KeyUp) // KeyUp
	{
		OP_STATUS status = OpStatus::OK;
		KeyPressInfo in;

		OpProtobufInstanceProxy in_proxy(KeyPressInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoKeyUp(in);
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
	else if (msg.CommandID() == Command_KeyDown) // KeyDown
	{
		OP_STATUS status = OpStatus::OK;
		KeyPressInfo in;

		OpProtobufInstanceProxy in_proxy(KeyPressInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoKeyDown(in);
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
	else if (msg.CommandID() == Command_MouseDown) // MouseDown
	{
		OP_STATUS status = OpStatus::OK;
		MouseInfo in;

		OpProtobufInstanceProxy in_proxy(MouseInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoMouseDown(in);
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
	else if (msg.CommandID() == Command_MouseUp) // MouseUp
	{
		OP_STATUS status = OpStatus::OK;
		MouseInfo in;

		OpProtobufInstanceProxy in_proxy(MouseInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoMouseUp(in);
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
	else if (msg.CommandID() == Command_MouseMove) // MouseMove
	{
		OP_STATUS status = OpStatus::OK;
		MouseInfo in;

		OpProtobufInstanceProxy in_proxy(MouseInfo::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoMouseMove(in);
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
	else
	{
		SetCommandError(OpScopeTPMessage::CommandNotFound, GetCommandNotFoundText());
		return OpStatus::ERR;
	}
	return OpStatus::OK;
}

/*virtual*/
const OpProtobufMessage *
OpScopeSystemInput_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeSystemInput_SI::Descriptors *
OpScopeSystemInput_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().system_input_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeSystemInput_SI::GetMessageCount() const
{
	return OpScopeSystemInput_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeSystemInput_SI::GetMessageIDs() const
{
	unsigned start = OpScopeSystemInput_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeSystemInput_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeSystemInput_SI::GetMessages() const
{
	unsigned start = OpScopeSystemInput_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeSystemInput_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeSystemInput_SI::GetVersionString() const
{
	return "1.1";
}

/* virtual */
int
OpScopeSystemInput_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeSystemInput_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeSystemInput_SI::GetPatchVersion() const
{
	return "0";
}
// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeSystemInput_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeSystemInput_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeSystemInput_SI::GetEnumCount() const
{
	return OpScopeSystemInput_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeSystemInput_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeSystemInput_Descriptors::_gen_EnumID_ModifierPressed:
		case OpScopeSystemInput_Descriptors::_gen_EnumID_MouseInfo_MouseButton:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeSystemInput_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// ModifierPressed
		case OpScopeSystemInput_Descriptors::_gen_EnumID_ModifierPressed:
			name = UNI_L("ModifierPressed");
			value_count = OpScopeSystemInput_Descriptors::_gen_EnumValueCount_ModifierPressed;
			return OpStatus::OK;
		// MouseInfo_MouseButton
		case OpScopeSystemInput_Descriptors::_gen_EnumID_MouseInfo_MouseButton:
			name = UNI_L("MouseButton");
			value_count = OpScopeSystemInput_Descriptors::_gen_EnumValueCount_MouseInfo_MouseButton;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeSystemInput_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// ModifierPressed
		case OpScopeSystemInput_Descriptors::_gen_EnumID_ModifierPressed:
		{
			if (idx > OpScopeSystemInput_Descriptors::_gen_EnumValueCount_ModifierPressed)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ModifierPressed
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
				, 4
				, 8
				, 16
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 5
				, 10
				, 16
				, 20
				, 25
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "NONE\0CTRL\0SHIFT\0ALT\0META\0SUPER" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// MouseInfo_MouseButton
		case OpScopeSystemInput_Descriptors::_gen_EnumID_MouseInfo_MouseButton:
		{
			if (idx > OpScopeSystemInput_Descriptors::_gen_EnumValueCount_MouseInfo_MouseButton)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for MouseInfo_MouseButton
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 5
				, 11
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "LEFT\0RIGHT\0MIDDLE" );
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

#endif // SCOPE_DESKTOP_SUPPORT
