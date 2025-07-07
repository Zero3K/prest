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

#ifdef SCOPE_COOKIE_MANAGER

#include "modules/scope/src/generated/g_scope_cookie_manager_interface.h"

// BEGIN: OpScopeCookieManager_Descriptors

OpScopeCookieManager_Descriptors::OpScopeCookieManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeCookieManager_Descriptors::~OpScopeCookieManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeCookieManager_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeCookieManager_Descriptors::Get(unsigned id) const
{
	OpScopeCookieManager_Descriptors *descriptors = const_cast<OpScopeCookieManager_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_add_cookie_arg_:
		return OpScopeCookieManager_MessageSet::AddCookieArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_cookie_:
		return OpScopeCookieManager_MessageSet::Cookie::GetMessageDescriptor(descriptors);

	case _gen_MsgID_cookie_list_:
		return OpScopeCookieManager_MessageSet::CookieList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_cookie_settings_:
		return OpScopeCookieManager_MessageSet::CookieSettings::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_cookie_arg_:
		return OpScopeCookieManager_MessageSet::GetCookieArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_remove_cookie_arg_:
		return OpScopeCookieManager_MessageSet::RemoveCookieArg::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeCookieManager_Descriptors


// BEGIN: OpScopeCookieManager_MessageSet

OpScopeCookieManager_MessageSet::OpScopeCookieManager_MessageSet()
{
}

/*virtual*/
OpScopeCookieManager_MessageSet::~OpScopeCookieManager_MessageSet()
{
}

// END: OpScopeCookieManager_MessageSet

// BEGIN: Messages

//   BEGIN: Message: AddCookieArg
/*static*/
const OpProtobufMessage *
OpScopeCookieManager_MessageSet::AddCookieArg::GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCookieManager_Descriptors::_gen_MessageOffs_add_cookie_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("domain"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("path"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("expires"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("isSecure"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bool,
						7,
						UNI_L("isHTTPOnly"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_domain
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_name
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_path
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_value
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_expires
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_isSecure
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::AddCookieArg,
						_isHTTPOnly
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCookieManager_Descriptors::_gen_MsgID_add_cookie_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::AddCookieArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::AddCookieArg, encoded_size_),
					"AddCookieArg",
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::AddCookieArg>::Make,
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::AddCookieArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: AddCookieArg: Implementation

// Setters

OP_STATUS
OpScopeCookieManager_MessageSet::AddCookieArg::SetDomain(const uni_char * v, int l) 
{
	return _domain.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::AddCookieArg::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::AddCookieArg::SetPath(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _path.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::AddCookieArg::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _value.Set(v, l);
}

// END: AddCookieArg: Implementation

//   END: Message: AddCookieArg

//   BEGIN: Message: Cookie
/*static*/
const OpProtobufMessage *
OpScopeCookieManager_MessageSet::Cookie::GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCookieManager_Descriptors::_gen_MessageOffs_cookie_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("domain"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("path"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("expires"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("isSecure"),
						OpProtobufField::Required
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bool,
						7,
						UNI_L("isHTTPOnly"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_domain
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_path
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_name
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_value
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_expires
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_isSecure
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::Cookie,
						_isHTTPOnly
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCookieManager_Descriptors::_gen_MsgID_cookie_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::Cookie, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::Cookie, encoded_size_),
					"Cookie",
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::Cookie>::Make,
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::Cookie>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Cookie: Implementation

// Setters

OP_STATUS
OpScopeCookieManager_MessageSet::Cookie::SetDomain(const uni_char * v, int l) 
{
	return _domain.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::Cookie::SetDomain(const char * v, int l) 
{
	return _domain.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::Cookie::SetPath(const char * v, int l) 
{
	return _path.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::Cookie::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::Cookie::SetValue(const char * v, int l) 
{
	return _value.Set(v, l);
}

// END: Cookie: Implementation

//   END: Message: Cookie

//   BEGIN: Message: CookieList
/*static*/
const OpProtobufMessage *
OpScopeCookieManager_MessageSet::CookieList::GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCookieManager_Descriptors::_gen_MessageOffs_cookie_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("cookieList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::CookieList,
						_cookieList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCookieManager_Descriptors::_gen_MsgID_cookie_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::CookieList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::CookieList, encoded_size_),
					"CookieList",
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::CookieList>::Make,
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::CookieList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Cookie::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: CookieList: Implementation

// Setters

OpScopeCookieManager_MessageSet::Cookie *
OpScopeCookieManager_MessageSet::CookieList::AppendNewCookieList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeCookieManager_MessageSet::Cookie> tmp(OP_NEW(OpScopeCookieManager_MessageSet::Cookie, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_cookieList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: CookieList: Implementation

//   END: Message: CookieList

//   BEGIN: Message: CookieSettings
/*static*/
const OpProtobufMessage *
OpScopeCookieManager_MessageSet::CookieSettings::GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCookieManager_Descriptors::_gen_MessageOffs_cookie_settings_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("maxCookies"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("maxCookiesPerDomain"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("maxCookieLength"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::CookieSettings,
						_maxCookies
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::CookieSettings,
						_maxCookiesPerDomain
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::CookieSettings,
						_maxCookieLength
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCookieManager_Descriptors::_gen_MsgID_cookie_settings_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::CookieSettings, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::CookieSettings, encoded_size_),
					"CookieSettings",
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::CookieSettings>::Make,
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::CookieSettings>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CookieSettings: Implementation


// END: CookieSettings: Implementation

//   END: Message: CookieSettings

//   BEGIN: Message: GetCookieArg
/*static*/
const OpProtobufMessage *
OpScopeCookieManager_MessageSet::GetCookieArg::GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCookieManager_Descriptors::_gen_MessageOffs_get_cookie_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("domain"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("path"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::GetCookieArg,
						_domain
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::GetCookieArg,
						_path
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCookieManager_Descriptors::_gen_MsgID_get_cookie_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::GetCookieArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::GetCookieArg, encoded_size_),
					"GetCookieArg",
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::GetCookieArg>::Make,
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::GetCookieArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: GetCookieArg: Implementation

// Setters

OP_STATUS
OpScopeCookieManager_MessageSet::GetCookieArg::SetDomain(const uni_char * v, int l) 
{
	return _domain.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::GetCookieArg::SetPath(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _path.Set(v, l);
}

// END: GetCookieArg: Implementation

//   END: Message: GetCookieArg

//   BEGIN: Message: RemoveCookieArg
/*static*/
const OpProtobufMessage *
OpScopeCookieManager_MessageSet::RemoveCookieArg::GetMessageDescriptor(OpScopeCookieManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCookieManager_Descriptors::_gen_MessageOffs_remove_cookie_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("domain"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("path"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("name"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::RemoveCookieArg,
						_domain
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::RemoveCookieArg,
						_path
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeCookieManager_MessageSet::RemoveCookieArg,
						_name
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCookieManager_Descriptors::_gen_MsgID_remove_cookie_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::RemoveCookieArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCookieManager_MessageSet::RemoveCookieArg, encoded_size_),
					"RemoveCookieArg",
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::RemoveCookieArg>::Make,
					OpProtobufMessageVector<OpScopeCookieManager_MessageSet::RemoveCookieArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RemoveCookieArg: Implementation

// Setters

OP_STATUS
OpScopeCookieManager_MessageSet::RemoveCookieArg::SetDomain(const uni_char * v, int l) 
{
	return _domain.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::RemoveCookieArg::SetPath(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _path.Set(v, l);
}


OP_STATUS
OpScopeCookieManager_MessageSet::RemoveCookieArg::SetName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _name.Set(v, l);
}

// END: RemoveCookieArg: Implementation

//   END: Message: RemoveCookieArg


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_cookie_manager_interface.h"
#include "modules/scope/src/scope_cookie_manager.h"

// BEGIN: OpScopeCookieManager_SI::Descriptors

OpScopeCookieManager_SI::Descriptors::Descriptors()
{
}

OpScopeCookieManager_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeCookieManager_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeCookieManager_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetCookie",
						Command_GetCookie,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_cookie_arg_,
						_gen_MsgID_cookie_list_
						);
	command_list[1] = OpScopeCommand("RemoveCookie",
						Command_RemoveCookie,
						OpScopeCommand::Type_Call,
						_gen_MsgID_remove_cookie_arg_,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("RemoveAllCookies",
						Command_RemoveAllCookies,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("GetCookieSettings",
						Command_GetCookieSettings,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_cookie_settings_
						);
	command_list[4] = OpScopeCommand("AddCookie",
						Command_AddCookie,
						OpScopeCommand::Type_Call,
						_gen_MsgID_add_cookie_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeCookieManager_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeCookieManager_SI::OpScopeCookieManager_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("cookie-manager") : id, manager, control)
{
}

/*virtual*/
OpScopeCookieManager_SI::~OpScopeCookieManager_SI()
{
}

/*virtual*/
int
OpScopeCookieManager_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeCookieManager_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().cookie_manager_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeCookieManager_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetCookie) // GetCookie
	{
		OP_STATUS status = OpStatus::OK;
		GetCookieArg in;
		CookieList out;

		OpProtobufInstanceProxy in_proxy(GetCookieArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetCookie(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(CookieList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_RemoveCookie) // RemoveCookie
	{
		OP_STATUS status = OpStatus::OK;
		RemoveCookieArg in;

		OpProtobufInstanceProxy in_proxy(RemoveCookieArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRemoveCookie(in);
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
	else if (msg.CommandID() == Command_RemoveAllCookies) // RemoveAllCookies
	{
		OP_STATUS status = OpStatus::OK;

		status = DoRemoveAllCookies();
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
	else if (msg.CommandID() == Command_GetCookieSettings) // GetCookieSettings
	{
		OP_STATUS status = OpStatus::OK;
		CookieSettings out;

		status = DoGetCookieSettings(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(CookieSettings::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_AddCookie) // AddCookie
	{
		OP_STATUS status = OpStatus::OK;
		AddCookieArg in;

		OpProtobufInstanceProxy in_proxy(AddCookieArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoAddCookie(in);
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
OpScopeCookieManager_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeCookieManager_SI::Descriptors *
OpScopeCookieManager_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().cookie_manager_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeCookieManager_SI::GetMessageCount() const
{
	return OpScopeCookieManager_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeCookieManager_SI::GetMessageIDs() const
{
	unsigned start = OpScopeCookieManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeCookieManager_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeCookieManager_SI::GetMessages() const
{
	unsigned start = OpScopeCookieManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeCookieManager_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeCookieManager_SI::GetVersionString() const
{
	return "1.1.1";
}

/* virtual */
int
OpScopeCookieManager_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeCookieManager_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeCookieManager_SI::GetPatchVersion() const
{
	return "1";
}

// Service implementation: END

#endif // SCOPE_COOKIE_MANAGER
