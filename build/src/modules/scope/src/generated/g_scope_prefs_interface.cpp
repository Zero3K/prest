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

#ifdef SCOPE_PREFS

#include "modules/scope/src/generated/g_scope_prefs_interface.h"

// BEGIN: OpScopePrefs_Descriptors

OpScopePrefs_Descriptors::OpScopePrefs_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopePrefs_Descriptors::~OpScopePrefs_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopePrefs_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_Pref_Type;
	enum_id_list[1] = _gen_EnumID_GetPrefArg_Mode;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopePrefs_Descriptors::Get(unsigned id) const
{
	OpScopePrefs_Descriptors *descriptors = const_cast<OpScopePrefs_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_get_pref_arg_:
		return OpScopePrefs_MessageSet::GetPrefArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_list_prefs_arg_:
		return OpScopePrefs_MessageSet::ListPrefsArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_pref_:
		return OpScopePrefs_MessageSet::Pref::GetMessageDescriptor(descriptors);

	case _gen_MsgID_pref_list_:
		return OpScopePrefs_MessageSet::PrefList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_pref_value_:
		return OpScopePrefs_MessageSet::PrefValue::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_pref_arg_:
		return OpScopePrefs_MessageSet::SetPrefArg::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopePrefs_Descriptors


// BEGIN: OpScopePrefs_MessageSet

OpScopePrefs_MessageSet::OpScopePrefs_MessageSet()
{
}

/*virtual*/
OpScopePrefs_MessageSet::~OpScopePrefs_MessageSet()
{
}

// END: OpScopePrefs_MessageSet

// BEGIN: Messages

//   BEGIN: Message: GetPrefArg
/*static*/
const OpProtobufMessage *
OpScopePrefs_MessageSet::GetPrefArg::GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopePrefs_Descriptors::_gen_MessageOffs_get_pref_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("section"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("key"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("mode"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopePrefs_Descriptors::_gen_EnumID_GetPrefArg_Mode // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::GetPrefArg,
						_section
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::GetPrefArg,
						_key
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::GetPrefArg,
						_mode
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopePrefs_Descriptors::_gen_MsgID_get_pref_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::GetPrefArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::GetPrefArg, encoded_size_),
					"GetPrefArg",
					OpProtobufMessageVector<OpScopePrefs_MessageSet::GetPrefArg>::Make,
					OpProtobufMessageVector<OpScopePrefs_MessageSet::GetPrefArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetPrefArg: Implementation

// Enum value GetPrefArg.Mode.CURRENT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::GetPrefArg_Mode OpScopePrefs_MessageSet::GetPrefArg::MODE_CURRENT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value GetPrefArg.Mode.DEFAULT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::GetPrefArg_Mode OpScopePrefs_MessageSet::GetPrefArg::MODE_DEFAULT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
OpScopePrefs_MessageSet::GetPrefArg::SetSection(const uni_char * v, int l) 
{
	return _section.Set(v, l);
}


OP_STATUS
OpScopePrefs_MessageSet::GetPrefArg::SetKey(const uni_char * v, int l) 
{
	return _key.Set(v, l);
}


void
OpScopePrefs_MessageSet::GetPrefArg::SetMode(OpScopePrefs_MessageSet::GetPrefArg_Mode v) 
{
	has_bits_.Reference().SetBit(2);
	_mode = static_cast<OpScopePrefs_MessageSet::GetPrefArg_Mode>(v);
}

// END: GetPrefArg: Implementation

//   END: Message: GetPrefArg

//   BEGIN: Message: ListPrefsArg
/*static*/
const OpProtobufMessage *
OpScopePrefs_MessageSet::ListPrefsArg::GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopePrefs_Descriptors::_gen_MessageOffs_list_prefs_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("sort"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("section"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::ListPrefsArg,
						_sort
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::ListPrefsArg,
						_section
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopePrefs_Descriptors::_gen_MsgID_list_prefs_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::ListPrefsArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::ListPrefsArg, encoded_size_),
					"ListPrefsArg",
					OpProtobufMessageVector<OpScopePrefs_MessageSet::ListPrefsArg>::Make,
					OpProtobufMessageVector<OpScopePrefs_MessageSet::ListPrefsArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ListPrefsArg: Implementation

// Setters

OP_STATUS
OpScopePrefs_MessageSet::ListPrefsArg::SetSection(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _section.Set(v, l);
}

// END: ListPrefsArg: Implementation

//   END: Message: ListPrefsArg

//   BEGIN: Message: Pref
/*static*/
const OpProtobufMessage *
OpScopePrefs_MessageSet::Pref::GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopePrefs_Descriptors::_gen_MessageOffs_pref_];
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
						, OpScopePrefs_Descriptors::_gen_EnumID_Pref_Type // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("section"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("key"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("enabled"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::Pref,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::Pref,
						_section
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::Pref,
						_key
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::Pref,
						_value
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::Pref,
						_enabled
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopePrefs_Descriptors::_gen_MsgID_pref_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::Pref, has_bits_),
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::Pref, encoded_size_),
					"Pref",
					OpProtobufMessageVector<OpScopePrefs_MessageSet::Pref>::Make,
					OpProtobufMessageVector<OpScopePrefs_MessageSet::Pref>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Pref: Implementation

// Enum value Pref.Type.STRING
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_STRING;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Pref.Type.INTEGER
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_INTEGER;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Pref.Type.BOOLEAN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_BOOLEAN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Pref.Type.FILE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_FILE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Pref.Type.REQUIRED_FILE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_REQUIRED_FILE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Pref.Type.DIRECTORY
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_DIRECTORY;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Pref.Type.COLOR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopePrefs_MessageSet::Pref_Type OpScopePrefs_MessageSet::Pref::TYPE_COLOR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopePrefs_MessageSet::Pref::SetType(OpScopePrefs_MessageSet::Pref_Type v) 
{
	_type = static_cast<OpScopePrefs_MessageSet::Pref_Type>(v);
}


OP_STATUS
OpScopePrefs_MessageSet::Pref::SetSection(const char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _section.Set(v, l);
}


OP_STATUS
OpScopePrefs_MessageSet::Pref::SetKey(const char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _key.Set(v, l);
}


OpString &
OpScopePrefs_MessageSet::Pref::GetValueRef() 
{
	has_bits_.Reference().SetBit(3);
	return _value;
}

// END: Pref: Implementation

//   END: Message: Pref

//   BEGIN: Message: PrefList
/*static*/
const OpProtobufMessage *
OpScopePrefs_MessageSet::PrefList::GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopePrefs_Descriptors::_gen_MessageOffs_pref_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("prefList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::PrefList,
						_prefList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopePrefs_Descriptors::_gen_MsgID_pref_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::PrefList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::PrefList, encoded_size_),
					"PrefList",
					OpProtobufMessageVector<OpScopePrefs_MessageSet::PrefList>::Make,
					OpProtobufMessageVector<OpScopePrefs_MessageSet::PrefList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Pref::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PrefList: Implementation

// Setters

OpProtobufMessageVector<OpScopePrefs_MessageSet::Pref> &
OpScopePrefs_MessageSet::PrefList::GetPrefListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _prefList;
}

// END: PrefList: Implementation

//   END: Message: PrefList

//   BEGIN: Message: PrefValue
/*static*/
const OpProtobufMessage *
OpScopePrefs_MessageSet::PrefValue::GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopePrefs_Descriptors::_gen_MessageOffs_pref_value_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
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
						OpScopePrefs_MessageSet::PrefValue,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopePrefs_Descriptors::_gen_MsgID_pref_value_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::PrefValue, has_bits_),
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::PrefValue, encoded_size_),
					"PrefValue",
					OpProtobufMessageVector<OpScopePrefs_MessageSet::PrefValue>::Make,
					OpProtobufMessageVector<OpScopePrefs_MessageSet::PrefValue>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: PrefValue: Implementation

// Setters

OpString &
OpScopePrefs_MessageSet::PrefValue::GetValueRef() 
{
	return _value;
}

// END: PrefValue: Implementation

//   END: Message: PrefValue

//   BEGIN: Message: SetPrefArg
/*static*/
const OpProtobufMessage *
OpScopePrefs_MessageSet::SetPrefArg::GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopePrefs_Descriptors::_gen_MessageOffs_set_pref_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("section"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("key"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
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
						OpScopePrefs_MessageSet::SetPrefArg,
						_section
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::SetPrefArg,
						_key
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopePrefs_MessageSet::SetPrefArg,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopePrefs_Descriptors::_gen_MsgID_set_pref_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::SetPrefArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopePrefs_MessageSet::SetPrefArg, encoded_size_),
					"SetPrefArg",
					OpProtobufMessageVector<OpScopePrefs_MessageSet::SetPrefArg>::Make,
					OpProtobufMessageVector<OpScopePrefs_MessageSet::SetPrefArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SetPrefArg: Implementation

// Setters

OP_STATUS
OpScopePrefs_MessageSet::SetPrefArg::SetSection(const uni_char * v, int l) 
{
	return _section.Set(v, l);
}


OP_STATUS
OpScopePrefs_MessageSet::SetPrefArg::SetKey(const uni_char * v, int l) 
{
	return _key.Set(v, l);
}


OP_STATUS
OpScopePrefs_MessageSet::SetPrefArg::SetValue(const uni_char * v, int l) 
{
	return _value.Set(v, l);
}

// END: SetPrefArg: Implementation

//   END: Message: SetPrefArg


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_prefs_interface.h"
#include "modules/scope/src/scope_prefs.h"

// BEGIN: OpScopePrefs_SI::Descriptors

OpScopePrefs_SI::Descriptors::Descriptors()
{
}

OpScopePrefs_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopePrefs_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopePrefs_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetPref",
						Command_GetPref,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_pref_arg_,
						_gen_MsgID_pref_value_
						);
	command_list[1] = OpScopeCommand("ListPrefs",
						Command_ListPrefs,
						OpScopeCommand::Type_Call,
						_gen_MsgID_list_prefs_arg_,
						_gen_MsgID_pref_list_
						);
	command_list[2] = OpScopeCommand("SetPref",
						Command_SetPref,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_pref_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopePrefs_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopePrefs_SI::OpScopePrefs_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("prefs") : id, manager, control)
{
}

/*virtual*/
OpScopePrefs_SI::~OpScopePrefs_SI()
{
}

/*virtual*/
int
OpScopePrefs_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopePrefs_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().prefs_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopePrefs_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetPref) // GetPref
	{
		OP_STATUS status = OpStatus::OK;
		GetPrefArg in;
		PrefValue out;

		OpProtobufInstanceProxy in_proxy(GetPrefArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetPref(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(PrefValue::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ListPrefs) // ListPrefs
	{
		OP_STATUS status = OpStatus::OK;
		ListPrefsArg in;
		PrefList out;

		OpProtobufInstanceProxy in_proxy(ListPrefsArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoListPrefs(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(PrefList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_SetPref) // SetPref
	{
		OP_STATUS status = OpStatus::OK;
		SetPrefArg in;

		OpProtobufInstanceProxy in_proxy(SetPrefArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetPref(in);
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
OpScopePrefs_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopePrefs_SI::Descriptors *
OpScopePrefs_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().prefs_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopePrefs_SI::GetMessageCount() const
{
	return OpScopePrefs_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopePrefs_SI::GetMessageIDs() const
{
	unsigned start = OpScopePrefs_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopePrefs_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopePrefs_SI::GetMessages() const
{
	unsigned start = OpScopePrefs_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopePrefs_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopePrefs_SI::GetVersionString() const
{
	return "1.0";
}

/* virtual */
int
OpScopePrefs_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopePrefs_SI::GetMinorVersion() const
{
	return 0;
}

/* virtual */
const char *
OpScopePrefs_SI::GetPatchVersion() const
{
	return "0";
}
// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopePrefs_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopePrefs_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopePrefs_SI::GetEnumCount() const
{
	return OpScopePrefs_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopePrefs_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopePrefs_Descriptors::_gen_EnumID_Pref_Type:
		case OpScopePrefs_Descriptors::_gen_EnumID_GetPrefArg_Mode:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopePrefs_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// Pref_Type
		case OpScopePrefs_Descriptors::_gen_EnumID_Pref_Type:
			name = UNI_L("Type");
			value_count = OpScopePrefs_Descriptors::_gen_EnumValueCount_Pref_Type;
			return OpStatus::OK;
		// GetPrefArg_Mode
		case OpScopePrefs_Descriptors::_gen_EnumID_GetPrefArg_Mode:
			name = UNI_L("Mode");
			value_count = OpScopePrefs_Descriptors::_gen_EnumValueCount_GetPrefArg_Mode;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopePrefs_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// Pref_Type
		case OpScopePrefs_Descriptors::_gen_EnumID_Pref_Type:
		{
			if (idx > OpScopePrefs_Descriptors::_gen_EnumValueCount_Pref_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Pref_Type
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
				, 6
				, 7
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 7
				, 15
				, 23
				, 28
				, 42
				, 52
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "STRING\0INTEGER\0BOOLEAN\0FILE\0REQUIRED_FILE\0DIRECTORY\0COLOR" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// GetPrefArg_Mode
		case OpScopePrefs_Descriptors::_gen_EnumID_GetPrefArg_Mode:
		{
			if (idx > OpScopePrefs_Descriptors::_gen_EnumValueCount_GetPrefArg_Mode)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for GetPrefArg_Mode
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "CURRENT\0DEFAULT" );
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

#endif // SCOPE_PREFS
