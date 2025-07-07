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

#ifdef SCOPE_I18N

#include "modules/scope/src/generated/g_scope_i18n_interface.h"

// BEGIN: OpScopeI18n_Descriptors

OpScopeI18n_Descriptors::OpScopeI18n_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeI18n_Descriptors::~OpScopeI18n_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeI18n_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeI18n_Descriptors::Get(unsigned id) const
{
	OpScopeI18n_Descriptors *descriptors = const_cast<OpScopeI18n_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_get_string_arg_:
		return OpScopeI18n_MessageSet::GetStringArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_language_:
		return OpScopeI18n_MessageSet::Language::GetMessageDescriptor(descriptors);

	case _gen_MsgID_string_:
		return OpScopeI18n_MessageSet::String::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeI18n_Descriptors


// BEGIN: OpScopeI18n_MessageSet

OpScopeI18n_MessageSet::OpScopeI18n_MessageSet()
{
}

/*virtual*/
OpScopeI18n_MessageSet::~OpScopeI18n_MessageSet()
{
}

// END: OpScopeI18n_MessageSet

// BEGIN: Messages

//   BEGIN: Message: GetStringArg
/*static*/
const OpProtobufMessage *
OpScopeI18n_MessageSet::GetStringArg::GetMessageDescriptor(OpScopeI18n_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeI18n_Descriptors::_gen_MessageOffs_get_string_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("stringID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeI18n_MessageSet::GetStringArg,
						_stringID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeI18n_Descriptors::_gen_MsgID_get_string_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeI18n_MessageSet::GetStringArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeI18n_MessageSet::GetStringArg, encoded_size_),
					"GetStringArg",
					OpProtobufMessageVector<OpScopeI18n_MessageSet::GetStringArg>::Make,
					OpProtobufMessageVector<OpScopeI18n_MessageSet::GetStringArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetStringArg: Implementation

// Setters

OP_STATUS
OpScopeI18n_MessageSet::GetStringArg::SetStringID(const uni_char * v, int l) 
{
	return _stringID.Set(v, l);
}

// END: GetStringArg: Implementation

//   END: Message: GetStringArg

//   BEGIN: Message: Language
/*static*/
const OpProtobufMessage *
OpScopeI18n_MessageSet::Language::GetMessageDescriptor(OpScopeI18n_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeI18n_Descriptors::_gen_MessageOffs_language_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("language"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeI18n_MessageSet::Language,
						_language
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeI18n_Descriptors::_gen_MsgID_language_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeI18n_MessageSet::Language, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeI18n_MessageSet::Language, encoded_size_),
					"Language",
					OpProtobufMessageVector<OpScopeI18n_MessageSet::Language>::Make,
					OpProtobufMessageVector<OpScopeI18n_MessageSet::Language>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Language: Implementation

// Setters

OP_STATUS
OpScopeI18n_MessageSet::Language::SetLanguage(const uni_char * v, int l) 
{
	return _language.Set(v, l);
}

// END: Language: Implementation

//   END: Message: Language

//   BEGIN: Message: String
/*static*/
const OpProtobufMessage *
OpScopeI18n_MessageSet::String::GetMessageDescriptor(OpScopeI18n_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeI18n_Descriptors::_gen_MessageOffs_string_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("str"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeI18n_MessageSet::String,
						_str
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeI18n_Descriptors::_gen_MsgID_string_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeI18n_MessageSet::String, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeI18n_MessageSet::String, encoded_size_),
					"String",
					OpProtobufMessageVector<OpScopeI18n_MessageSet::String>::Make,
					OpProtobufMessageVector<OpScopeI18n_MessageSet::String>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: String: Implementation

// Setters

OpString &
OpScopeI18n_MessageSet::String::GetStrRef() 
{
	return _str;
}

// END: String: Implementation

//   END: Message: String


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_i18n_interface.h"
#include "modules/scope/src/scope_i18n.h"

// BEGIN: OpScopeI18n_SI::Descriptors

OpScopeI18n_SI::Descriptors::Descriptors()
{
}

OpScopeI18n_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeI18n_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeI18n_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetLanguage",
						Command_GetLanguage,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_language_
						);
	command_list[1] = OpScopeCommand("GetString",
						Command_GetString,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_string_arg_,
						_gen_MsgID_string_
						);
	return OpStatus::OK;
}

// END: OpScopeI18n_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeI18n_SI::OpScopeI18n_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("i18n") : id, manager, control)
{
}

/*virtual*/
OpScopeI18n_SI::~OpScopeI18n_SI()
{
}

/*virtual*/
int
OpScopeI18n_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeI18n_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().i18n_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeI18n_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetLanguage) // GetLanguage
	{
		OP_STATUS status = OpStatus::OK;
		Language out;

		status = DoGetLanguage(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(Language::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetString) // GetString
	{
		OP_STATUS status = OpStatus::OK;
		GetStringArg in;
		String out;

		OpProtobufInstanceProxy in_proxy(GetStringArg::GetMessageDescriptor(GetDescriptors()), &in);
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

		OpProtobufInstanceProxy out_proxy(String::GetMessageDescriptor(GetDescriptors()), &out);
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
OpScopeI18n_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeI18n_SI::Descriptors *
OpScopeI18n_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().i18n_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeI18n_SI::GetMessageCount() const
{
	return OpScopeI18n_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeI18n_SI::GetMessageIDs() const
{
	unsigned start = OpScopeI18n_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeI18n_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeI18n_SI::GetMessages() const
{
	unsigned start = OpScopeI18n_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeI18n_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeI18n_SI::GetVersionString() const
{
	return "1.0";
}

/* virtual */
int
OpScopeI18n_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeI18n_SI::GetMinorVersion() const
{
	return 0;
}

/* virtual */
const char *
OpScopeI18n_SI::GetPatchVersion() const
{
	return "0";
}

// Service implementation: END

#endif // SCOPE_I18N
