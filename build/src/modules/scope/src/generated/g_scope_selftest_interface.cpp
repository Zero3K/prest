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

#ifdef SELFTEST

#include "modules/scope/src/generated/g_scope_selftest_interface.h"

// BEGIN: OpScopeSelftest_Descriptors

OpScopeSelftest_Descriptors::OpScopeSelftest_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeSelftest_Descriptors::~OpScopeSelftest_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeSelftest_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_RunModulesArg_OutputType;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeSelftest_Descriptors::Get(unsigned id) const
{
	OpScopeSelftest_Descriptors *descriptors = const_cast<OpScopeSelftest_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_run_modules_arg_:
		return OpScopeSelftest_MessageSet::RunModulesArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_selftest_output_:
		return OpScopeSelftest_MessageSet::SelftestOutput::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeSelftest_Descriptors


// BEGIN: OpScopeSelftest_MessageSet

OpScopeSelftest_MessageSet::OpScopeSelftest_MessageSet()
{
}

/*virtual*/
OpScopeSelftest_MessageSet::~OpScopeSelftest_MessageSet()
{
}

// END: OpScopeSelftest_MessageSet

// BEGIN: Messages

//   BEGIN: Message: RunModulesArg
/*static*/
const OpProtobufMessage *
OpScopeSelftest_MessageSet::RunModulesArg::GetMessageDescriptor(OpScopeSelftest_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeSelftest_Descriptors::_gen_MessageOffs_run_modules_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("moduleList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("outputType"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeSelftest_Descriptors::_gen_EnumID_RunModulesArg_OutputType // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeSelftest_MessageSet::RunModulesArg,
						_moduleList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeSelftest_MessageSet::RunModulesArg,
						_outputType
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeSelftest_Descriptors::_gen_MsgID_run_modules_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeSelftest_MessageSet::RunModulesArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeSelftest_MessageSet::RunModulesArg, encoded_size_),
					"RunModulesArg",
					OpProtobufMessageVector<OpScopeSelftest_MessageSet::RunModulesArg>::Make,
					OpProtobufMessageVector<OpScopeSelftest_MessageSet::RunModulesArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RunModulesArg: Implementation

// Enum value RunModulesArg.OutputType.HUMAN_READABLE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeSelftest_MessageSet::RunModulesArg_OutputType OpScopeSelftest_MessageSet::RunModulesArg::OUTPUTTYPE_HUMAN_READABLE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value RunModulesArg.OutputType.MACHINE_READABLE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeSelftest_MessageSet::RunModulesArg_OutputType OpScopeSelftest_MessageSet::RunModulesArg::OUTPUTTYPE_MACHINE_READABLE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OpAutoVector<OpString> &
OpScopeSelftest_MessageSet::RunModulesArg::GetModuleListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _moduleList;
}


void
OpScopeSelftest_MessageSet::RunModulesArg::SetOutputType(OpScopeSelftest_MessageSet::RunModulesArg_OutputType v) 
{
	has_bits_.Reference().SetBit(1);
	_outputType = static_cast<OpScopeSelftest_MessageSet::RunModulesArg_OutputType>(v);
}

// END: RunModulesArg: Implementation

//   END: Message: RunModulesArg

//   BEGIN: Message: SelftestOutput
/*static*/
const OpProtobufMessage *
OpScopeSelftest_MessageSet::SelftestOutput::GetMessageDescriptor(OpScopeSelftest_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeSelftest_Descriptors::_gen_MessageOffs_selftest_output_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("output"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeSelftest_MessageSet::SelftestOutput,
						_output
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeSelftest_Descriptors::_gen_MsgID_selftest_output_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeSelftest_MessageSet::SelftestOutput, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeSelftest_MessageSet::SelftestOutput, encoded_size_),
					"SelftestOutput",
					OpProtobufMessageVector<OpScopeSelftest_MessageSet::SelftestOutput>::Make,
					OpProtobufMessageVector<OpScopeSelftest_MessageSet::SelftestOutput>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: SelftestOutput: Implementation

// Setters

OP_STATUS
OpScopeSelftest_MessageSet::SelftestOutput::SetOutput(const uni_char * v, int l) 
{
	return _output.Set(v, l);
}

// END: SelftestOutput: Implementation

//   END: Message: SelftestOutput


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_selftest_interface.h"
#include "modules/scope/src/scope_selftest.h"

// BEGIN: OpScopeSelftest_SI::Descriptors

OpScopeSelftest_SI::Descriptors::Descriptors()
{
}

OpScopeSelftest_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeSelftest_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeSelftest_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("RunModules",
						Command_RunModules,
						OpScopeCommand::Type_Call,
						_gen_MsgID_run_modules_arg_,
						_gen_void_MsgID
						);
	command_list[1] = OpScopeCommand("OnSelftestOutput",
						Command_OnSelftestOutput,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_selftest_output_
						);
	command_list[2] = OpScopeCommand("OnSelftestFinished",
						Command_OnSelftestFinished,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeSelftest_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeSelftest_SI::OpScopeSelftest_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("selftest") : id, manager, control)
{
}

/*virtual*/
OpScopeSelftest_SI::~OpScopeSelftest_SI()
{
}

/*virtual*/
int
OpScopeSelftest_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeSelftest_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().selftest_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeSelftest_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_RunModules) // RunModules
	{
		OP_STATUS status = OpStatus::OK;
		RunModulesArg in;

		OpProtobufInstanceProxy in_proxy(RunModulesArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRunModules(in);
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
OpScopeSelftest_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeSelftest_SI::Descriptors *
OpScopeSelftest_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().selftest_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeSelftest_SI::GetMessageCount() const
{
	return OpScopeSelftest_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeSelftest_SI::GetMessageIDs() const
{
	unsigned start = OpScopeSelftest_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeSelftest_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeSelftest_SI::GetMessages() const
{
	unsigned start = OpScopeSelftest_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeSelftest_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeSelftest_SI::GetVersionString() const
{
	return "1.1";
}

/* virtual */
int
OpScopeSelftest_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeSelftest_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeSelftest_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeSelftest_SI::SendOnSelftestOutput(const SelftestOutput &msg) // OnSelftestOutput
{
	OpProtobufInstanceProxy proxy(SelftestOutput::GetMessageDescriptor(GetDescriptors()), const_cast<SelftestOutput *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnSelftestOutput);
}


OP_STATUS
OpScopeSelftest_SI::SendOnSelftestFinished() // OnSelftestFinished
{
	OpProtobufInstanceProxy proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnSelftestFinished);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeSelftest_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeSelftest_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeSelftest_SI::GetEnumCount() const
{
	return OpScopeSelftest_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeSelftest_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeSelftest_Descriptors::_gen_EnumID_RunModulesArg_OutputType:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeSelftest_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// RunModulesArg_OutputType
		case OpScopeSelftest_Descriptors::_gen_EnumID_RunModulesArg_OutputType:
			name = UNI_L("OutputType");
			value_count = OpScopeSelftest_Descriptors::_gen_EnumValueCount_RunModulesArg_OutputType;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeSelftest_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// RunModulesArg_OutputType
		case OpScopeSelftest_Descriptors::_gen_EnumID_RunModulesArg_OutputType:
		{
			if (idx > OpScopeSelftest_Descriptors::_gen_EnumValueCount_RunModulesArg_OutputType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for RunModulesArg_OutputType
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 15
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "HUMAN_READABLE\0MACHINE_READABLE" );
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

#endif // SELFTEST
