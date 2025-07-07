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

#ifdef SCOPE_CORE

#include "modules/scope/src/generated/g_scope_core_interface.h"

// BEGIN: OpScopeCore_Descriptors

OpScopeCore_Descriptors::OpScopeCore_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeCore_Descriptors::~OpScopeCore_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeCore_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_ClearFlags;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeCore_Descriptors::Get(unsigned id) const
{
	OpScopeCore_Descriptors *descriptors = const_cast<OpScopeCore_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_browser_information_:
		return OpScopeCore_MessageSet::BrowserInformation::GetMessageDescriptor(descriptors);

	case _gen_MsgID_clear_private_data_arg_:
		return OpScopeCore_MessageSet::ClearPrivateDataArg::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeCore_Descriptors


// BEGIN: OpScopeCore_MessageSet

OpScopeCore_MessageSet::OpScopeCore_MessageSet()
{
}

/*virtual*/
OpScopeCore_MessageSet::~OpScopeCore_MessageSet()
{
}

// END: OpScopeCore_MessageSet

// BEGIN: Messages

//   BEGIN: Message: BrowserInformation
/*static*/
const OpProtobufMessage *
OpScopeCore_MessageSet::BrowserInformation::GetMessageDescriptor(OpScopeCore_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCore_Descriptors::_gen_MessageOffs_browser_information_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("coreVersion"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("operatingSystem"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("product"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("binaryPath"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("userAgent"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("processID"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::BrowserInformation,
						_coreVersion
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::BrowserInformation,
						_operatingSystem
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::BrowserInformation,
						_product
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::BrowserInformation,
						_binaryPath
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::BrowserInformation,
						_userAgent
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::BrowserInformation,
						_processID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCore_Descriptors::_gen_MsgID_browser_information_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCore_MessageSet::BrowserInformation, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCore_MessageSet::BrowserInformation, encoded_size_),
					"BrowserInformation",
					OpProtobufMessageVector<OpScopeCore_MessageSet::BrowserInformation>::Make,
					OpProtobufMessageVector<OpScopeCore_MessageSet::BrowserInformation>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: BrowserInformation: Implementation

// Setters

OP_STATUS
OpScopeCore_MessageSet::BrowserInformation::SetCoreVersion(const uni_char * v, int l) 
{
	return _coreVersion.Set(v, l);
}


OP_STATUS
OpScopeCore_MessageSet::BrowserInformation::SetOperatingSystem(const uni_char * v, int l) 
{
	return _operatingSystem.Set(v, l);
}


OP_STATUS
OpScopeCore_MessageSet::BrowserInformation::SetProduct(const char * v, int l) 
{
	return _product.Set(v, l);
}


OpString &
OpScopeCore_MessageSet::BrowserInformation::GetBinaryPathRef() 
{
	return _binaryPath;
}


OP_STATUS
OpScopeCore_MessageSet::BrowserInformation::SetUserAgent(const char * v, int l) 
{
	return _userAgent.Set(v, l);
}

// END: BrowserInformation: Implementation

//   END: Message: BrowserInformation

//   BEGIN: Message: ClearPrivateDataArg
/*static*/
const OpProtobufMessage *
OpScopeCore_MessageSet::ClearPrivateDataArg::GetMessageDescriptor(OpScopeCore_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeCore_Descriptors::_gen_MessageOffs_clear_private_data_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("clearList"),
						OpProtobufField::Repeated
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeCore_Descriptors::_gen_EnumID_ClearFlags // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeCore_MessageSet::ClearPrivateDataArg,
						_clearList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeCore_Descriptors::_gen_MsgID_clear_private_data_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeCore_MessageSet::ClearPrivateDataArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeCore_MessageSet::ClearPrivateDataArg, encoded_size_),
					"ClearPrivateDataArg",
					OpProtobufMessageVector<OpScopeCore_MessageSet::ClearPrivateDataArg>::Make,
					OpProtobufMessageVector<OpScopeCore_MessageSet::ClearPrivateDataArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ClearPrivateDataArg: Implementation

// Setters

OpValueVector<INT32> &
OpScopeCore_MessageSet::ClearPrivateDataArg::GetClearListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _clearList;
}


OP_STATUS
OpScopeCore_MessageSet::ClearPrivateDataArg::AppendToClearList(OpScopeCore_MessageSet::ClearFlags v) 
{
	has_bits_.Reference().SetBit(0);
	return _clearList.Add(static_cast<INT32>(v));
}


OP_STATUS
OpScopeCore_MessageSet::ClearPrivateDataArg::SetClearListItem(UINT32 i, OpScopeCore_MessageSet::ClearFlags v) 
{
	has_bits_.Reference().SetBit(0);
	OP_ASSERT(i < _clearList.GetCount());
	return _clearList.Replace(i, static_cast<INT32>(v));
}

// END: ClearPrivateDataArg: Implementation

//   END: Message: ClearPrivateDataArg


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_core_interface.h"
#include "modules/scope/src/scope_core.h"

// BEGIN: OpScopeCore_SI::Descriptors

OpScopeCore_SI::Descriptors::Descriptors()
{
}

OpScopeCore_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeCore_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeCore_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("OnActive",
						Command_OnActive,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[1] = OpScopeCommand("OnIdle",
						Command_OnIdle,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	command_list[2] = OpScopeCommand("GetBrowserInformation",
						Command_GetBrowserInformation,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_browser_information_
						);
	command_list[3] = OpScopeCommand("ClearPrivateData",
						Command_ClearPrivateData,
						OpScopeCommand::Type_Call,
						_gen_MsgID_clear_private_data_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeCore_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeCore_SI::OpScopeCore_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("core") : id, manager, control)
{
}

/*virtual*/
OpScopeCore_SI::~OpScopeCore_SI()
{
}

/*virtual*/
int
OpScopeCore_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeCore_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().core_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeCore_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetBrowserInformation) // GetBrowserInformation
	{
		OP_STATUS status = OpStatus::OK;
		BrowserInformation out;

		status = DoGetBrowserInformation(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(BrowserInformation::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ClearPrivateData) // ClearPrivateData
	{
		OP_STATUS status = OpStatus::OK;
		ClearPrivateDataArg in;

		OpProtobufInstanceProxy in_proxy(ClearPrivateDataArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoClearPrivateData(in);
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
OpScopeCore_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeCore_SI::Descriptors *
OpScopeCore_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().core_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeCore_SI::GetMessageCount() const
{
	return OpScopeCore_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeCore_SI::GetMessageIDs() const
{
	unsigned start = OpScopeCore_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeCore_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeCore_SI::GetMessages() const
{
	unsigned start = OpScopeCore_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeCore_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeCore_SI::GetVersionString() const
{
	return "1.3";
}

/* virtual */
int
OpScopeCore_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeCore_SI::GetMinorVersion() const
{
	return 3;
}

/* virtual */
const char *
OpScopeCore_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeCore_SI::SendOnActive() // OnActive
{
	OpProtobufInstanceProxy proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnActive);
}


OP_STATUS
OpScopeCore_SI::SendOnIdle() // OnIdle
{
	OpProtobufInstanceProxy proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnIdle);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeCore_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeCore_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeCore_SI::GetEnumCount() const
{
	return OpScopeCore_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeCore_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeCore_Descriptors::_gen_EnumID_ClearFlags:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeCore_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// ClearFlags
		case OpScopeCore_Descriptors::_gen_EnumID_ClearFlags:
			name = UNI_L("ClearFlags");
			value_count = OpScopeCore_Descriptors::_gen_EnumValueCount_ClearFlags;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeCore_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// ClearFlags
		case OpScopeCore_Descriptors::_gen_EnumID_ClearFlags:
		{
			if (idx > OpScopeCore_Descriptors::_gen_EnumValueCount_ClearFlags)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ClearFlags
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
				, 3
				, 4
				, 5
				, 6
				, 7
				, 8
				, 9
				, 10
				, 11
				, 12
				, 13
				, 14
				, 15
				, 16
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 10
				, 30
				, 47
				, 65
				, 84
				, 105
				, 127
				, 145
				, 166
				, 180
				, 197
				, 216
				, 233
				, 248
				, 278
				, 295
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "CLEAR_ALL\0CLEAR_VISITED_LINKS\0CLEAR_DISK_CACHE\0CLEAR_IMAGE_CACHE\0CLEAR_MEMORY_CACHE\0CLEAR_SENSITIVE_DATA\0CLEAR_SESSION_COOKIES\0CLEAR_ALL_COOKIES\0CLEAR_GLOBAL_HISTORY\0CLEAR_CONSOLE\0CLEAR_THUMBNAILS\0CLEAR_WEBDATABASES\0CLEAR_WEBSTORAGE\0CLEAR_APPCACHE\0CLEAR_GEOLOCATION_PERMISSIONS\0CLEAR_SITE_PREFS\0CLEAR_CAMERA_PERMISSIONS" );
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

#endif // SCOPE_CORE
