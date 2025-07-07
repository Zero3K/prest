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

#ifdef SCOPE_WINDOW_MANAGER_SUPPORT

#include "modules/scope/src/generated/g_scope_window_manager_interface.h"

// BEGIN: OpScopeWindowManager_Descriptors

OpScopeWindowManager_Descriptors::OpScopeWindowManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeWindowManager_Descriptors::~OpScopeWindowManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeWindowManager_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeWindowManager_Descriptors::Get(unsigned id) const
{
	OpScopeWindowManager_Descriptors *descriptors = const_cast<OpScopeWindowManager_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_close_window_arg_:
		return OpScopeWindowManager_MessageSet::CloseWindowArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_create_window_arg_:
		return OpScopeWindowManager_MessageSet::CreateWindowArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_modify_type_filter_arg_:
		return OpScopeWindowManager_MessageSet::ModifyTypeFilterArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_open_url_arg_:
		return OpScopeWindowManager_MessageSet::OpenURLArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_window_filter_:
		return OpScopeWindowManager_MessageSet::WindowFilter::GetMessageDescriptor(descriptors);

	case _gen_MsgID_window_id_:
		return OpScopeWindowManager_MessageSet::WindowID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_window_info_:
		return OpScopeWindowManager_MessageSet::WindowInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_window_list_:
		return OpScopeWindowManager_MessageSet::WindowList::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeWindowManager_Descriptors


// BEGIN: OpScopeWindowManager_MessageSet

OpScopeWindowManager_MessageSet::OpScopeWindowManager_MessageSet()
{
}

/*virtual*/
OpScopeWindowManager_MessageSet::~OpScopeWindowManager_MessageSet()
{
}

// END: OpScopeWindowManager_MessageSet

// BEGIN: Messages

//   BEGIN: Message: CloseWindowArg
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::CloseWindowArg::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_close_window_arg_];
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
						OpScopeWindowManager_MessageSet::CloseWindowArg,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_close_window_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::CloseWindowArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::CloseWindowArg, encoded_size_),
					"CloseWindowArg",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::CloseWindowArg>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::CloseWindowArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CloseWindowArg: Implementation


// END: CloseWindowArg: Implementation

//   END: Message: CloseWindowArg

//   BEGIN: Message: CreateWindowArg
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::CreateWindowArg::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_create_window_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("windowType"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isPrivate"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::CreateWindowArg,
						_windowType
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::CreateWindowArg,
						_isPrivate
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_create_window_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::CreateWindowArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::CreateWindowArg, encoded_size_),
					"CreateWindowArg",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::CreateWindowArg>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::CreateWindowArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CreateWindowArg: Implementation

// Setters

OP_STATUS
OpScopeWindowManager_MessageSet::CreateWindowArg::SetWindowType(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return _windowType.Set(v, l);
}

// END: CreateWindowArg: Implementation

//   END: Message: CreateWindowArg

//   BEGIN: Message: ModifyTypeFilterArg
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::ModifyTypeFilterArg::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_modify_type_filter_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("mode"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("typeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::ModifyTypeFilterArg,
						_mode
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::ModifyTypeFilterArg,
						_typeList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_modify_type_filter_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::ModifyTypeFilterArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::ModifyTypeFilterArg, encoded_size_),
					"ModifyTypeFilterArg",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::ModifyTypeFilterArg>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::ModifyTypeFilterArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ModifyTypeFilterArg: Implementation

// Setters

OP_STATUS
OpScopeWindowManager_MessageSet::ModifyTypeFilterArg::SetMode(const uni_char * v, int l) 
{
	return _mode.Set(v, l);
}


OpAutoVector<OpString> &
OpScopeWindowManager_MessageSet::ModifyTypeFilterArg::GetTypeListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _typeList;
}

// END: ModifyTypeFilterArg: Implementation

//   END: Message: ModifyTypeFilterArg

//   BEGIN: Message: OpenURLArg
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::OpenURLArg::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_open_url_arg_];
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
						OpScopeWindowManager_MessageSet::OpenURLArg,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::OpenURLArg,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_open_url_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::OpenURLArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::OpenURLArg, encoded_size_),
					"OpenURLArg",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::OpenURLArg>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::OpenURLArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OpenURLArg: Implementation

// Setters

OP_STATUS
OpScopeWindowManager_MessageSet::OpenURLArg::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: OpenURLArg: Implementation

//   END: Message: OpenURLArg

//   BEGIN: Message: WindowFilter
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::WindowFilter::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_window_filter_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("clearFilter"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("includeIDList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("includePatternList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("excludeIDList"),
						OpProtobufField::Repeated
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("excludePatternList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowFilter,
						_clearFilter
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowFilter,
						_includeIDList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowFilter,
						_includePatternList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowFilter,
						_excludeIDList
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowFilter,
						_excludePatternList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_window_filter_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowFilter, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowFilter, encoded_size_),
					"WindowFilter",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowFilter>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowFilter>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WindowFilter: Implementation

// Setters

OpValueVector<UINT32> &
OpScopeWindowManager_MessageSet::WindowFilter::GetIncludeIDListRef() 
{
	has_bits_.Reference().SetBit(1);
	return _includeIDList;
}


OP_STATUS
OpScopeWindowManager_MessageSet::WindowFilter::AppendToIncludeIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(1);
	return _includeIDList.Add(v);
}


OpAutoVector<OpString> &
OpScopeWindowManager_MessageSet::WindowFilter::GetIncludePatternListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _includePatternList;
}


OpValueVector<UINT32> &
OpScopeWindowManager_MessageSet::WindowFilter::GetExcludeIDListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _excludeIDList;
}


OP_STATUS
OpScopeWindowManager_MessageSet::WindowFilter::AppendToExcludeIDList(UINT32 v) 
{
	has_bits_.Reference().SetBit(3);
	return _excludeIDList.Add(v);
}


OpAutoVector<OpString> &
OpScopeWindowManager_MessageSet::WindowFilter::GetExcludePatternListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _excludePatternList;
}

// END: WindowFilter: Implementation

//   END: Message: WindowFilter

//   BEGIN: Message: WindowID
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::WindowID::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_window_id_];
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
						OpScopeWindowManager_MessageSet::WindowID,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_window_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowID, encoded_size_),
					"WindowID",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowID>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WindowID: Implementation


// END: WindowID: Implementation

//   END: Message: WindowID

//   BEGIN: Message: WindowInfo
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::WindowInfo::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_window_info_];
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
						OpProtobufFormat::String,
						2,
						UNI_L("title"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("windowType"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("openerID"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("extensionName"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("isPrivate"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowInfo,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowInfo,
						_title
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowInfo,
						_windowType
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowInfo,
						_openerID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowInfo,
						_extensionName
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowInfo,
						_isPrivate
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_window_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowInfo, encoded_size_),
					"WindowInfo",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowInfo>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WindowInfo: Implementation

// Setters

OP_STATUS
OpScopeWindowManager_MessageSet::WindowInfo::SetTitle(const uni_char * v, int l) 
{
	return _title.Set(v, l);
}


OP_STATUS
OpScopeWindowManager_MessageSet::WindowInfo::SetWindowType(const uni_char * v, int l) 
{
	return _windowType.Set(v, l);
}


OP_STATUS
OpScopeWindowManager_MessageSet::WindowInfo::SetExtensionName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _extensionName.Set(v, l);
}

// END: WindowInfo: Implementation

//   END: Message: WindowInfo

//   BEGIN: Message: WindowList
/*static*/
const OpProtobufMessage *
OpScopeWindowManager_MessageSet::WindowList::GetMessageDescriptor(OpScopeWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWindowManager_Descriptors::_gen_MessageOffs_window_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("windowList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWindowManager_MessageSet::WindowList,
						_windowList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWindowManager_Descriptors::_gen_MsgID_window_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWindowManager_MessageSet::WindowList, encoded_size_),
					"WindowList",
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowList>::Make,
					OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(WindowInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: WindowList: Implementation

// Setters

OpProtobufMessageVector<OpScopeWindowManager_MessageSet::WindowInfo> &
OpScopeWindowManager_MessageSet::WindowList::GetWindowListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _windowList;
}

// END: WindowList: Implementation

//   END: Message: WindowList


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_window_manager_interface.h"
#include "modules/scope/src/scope_window_manager.h"

// BEGIN: OpScopeWindowManager_SI::Descriptors

OpScopeWindowManager_SI::Descriptors::Descriptors()
{
}

OpScopeWindowManager_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeWindowManager_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeWindowManager_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetActiveWindow",
						Command_GetActiveWindow,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_window_id_
						);
	command_list[1] = OpScopeCommand("ListWindows",
						Command_ListWindows,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_window_list_
						);
	command_list[2] = OpScopeCommand("ModifyFilter",
						Command_ModifyFilter,
						OpScopeCommand::Type_Call,
						_gen_MsgID_window_filter_,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("OnWindowUpdated",
						Command_OnWindowUpdated,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_window_info_
						);
	command_list[4] = OpScopeCommand("OnWindowClosed",
						Command_OnWindowClosed,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_window_id_
						);
	command_list[5] = OpScopeCommand("OnWindowActivated",
						Command_OnWindowActivated,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_window_id_
						);
	command_list[6] = OpScopeCommand("OnWindowLoaded",
						Command_OnWindowLoaded,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_window_id_
						);
	command_list[7] = OpScopeCommand("CreateWindow",
						Command_CreateWindow,
						OpScopeCommand::Type_Call,
						_gen_MsgID_create_window_arg_,
						_gen_MsgID_window_id_
						);
	command_list[8] = OpScopeCommand("CloseWindow",
						Command_CloseWindow,
						OpScopeCommand::Type_Call,
						_gen_MsgID_close_window_arg_,
						_gen_void_MsgID
						);
	command_list[9] = OpScopeCommand("OpenURL",
						Command_OpenURL,
						OpScopeCommand::Type_Call,
						_gen_MsgID_open_url_arg_,
						_gen_void_MsgID
						);
	command_list[10] = OpScopeCommand("ModifyTypeFilter",
						Command_ModifyTypeFilter,
						OpScopeCommand::Type_Call,
						_gen_MsgID_modify_type_filter_arg_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeWindowManager_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeWindowManager_SI::OpScopeWindowManager_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("window-manager") : id, manager, control)
{
}

/*virtual*/
OpScopeWindowManager_SI::~OpScopeWindowManager_SI()
{
}

/*virtual*/
int
OpScopeWindowManager_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeWindowManager_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().window_manager_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeWindowManager_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetActiveWindow) // GetActiveWindow
	{
		OP_STATUS status = OpStatus::OK;
		WindowID out;

		status = DoGetActiveWindow(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(WindowID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ListWindows) // ListWindows
	{
		OP_STATUS status = OpStatus::OK;
		WindowList out;

		status = DoListWindows(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(WindowList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ModifyFilter) // ModifyFilter
	{
		OP_STATUS status = OpStatus::OK;
		WindowFilter in;

		OpProtobufInstanceProxy in_proxy(WindowFilter::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoModifyFilter(in);
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
	else if (msg.CommandID() == Command_CreateWindow) // CreateWindow
	{
		OP_STATUS status = OpStatus::OK;
		CreateWindowArg in;
		WindowID out;

		OpProtobufInstanceProxy in_proxy(CreateWindowArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCreateWindow(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(WindowID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_CloseWindow) // CloseWindow
	{
		OP_STATUS status = OpStatus::OK;
		CloseWindowArg in;

		OpProtobufInstanceProxy in_proxy(CloseWindowArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCloseWindow(in);
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
	else if (msg.CommandID() == Command_OpenURL) // OpenURL
	{
		OP_STATUS status = OpStatus::OK;
		OpenURLArg in;

		OpProtobufInstanceProxy in_proxy(OpenURLArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoOpenURL(in);
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
	else if (msg.CommandID() == Command_ModifyTypeFilter) // ModifyTypeFilter
	{
		OP_STATUS status = OpStatus::OK;
		ModifyTypeFilterArg in;

		OpProtobufInstanceProxy in_proxy(ModifyTypeFilterArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoModifyTypeFilter(in);
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
OpScopeWindowManager_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeWindowManager_SI::Descriptors *
OpScopeWindowManager_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().window_manager_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeWindowManager_SI::GetMessageCount() const
{
	return OpScopeWindowManager_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeWindowManager_SI::GetMessageIDs() const
{
	unsigned start = OpScopeWindowManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeWindowManager_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeWindowManager_SI::GetMessages() const
{
	unsigned start = OpScopeWindowManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeWindowManager_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeWindowManager_SI::GetVersionString() const
{
	return "2.3";
}

/* virtual */
int
OpScopeWindowManager_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeWindowManager_SI::GetMinorVersion() const
{
	return 3;
}

/* virtual */
const char *
OpScopeWindowManager_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeWindowManager_SI::SendOnWindowUpdated(const WindowInfo &msg) // OnWindowUpdated
{
	OpProtobufInstanceProxy proxy(WindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<WindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowUpdated);
}


OP_STATUS
OpScopeWindowManager_SI::SendOnWindowClosed(const WindowID &msg) // OnWindowClosed
{
	OpProtobufInstanceProxy proxy(WindowID::GetMessageDescriptor(GetDescriptors()), const_cast<WindowID *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowClosed);
}


OP_STATUS
OpScopeWindowManager_SI::SendOnWindowActivated(const WindowID &msg) // OnWindowActivated
{
	OpProtobufInstanceProxy proxy(WindowID::GetMessageDescriptor(GetDescriptors()), const_cast<WindowID *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowActivated);
}


OP_STATUS
OpScopeWindowManager_SI::SendOnWindowLoaded(const WindowID &msg) // OnWindowLoaded
{
	OpProtobufInstanceProxy proxy(WindowID::GetMessageDescriptor(GetDescriptors()), const_cast<WindowID *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowLoaded);
}


// Service implementation: END

#endif // SCOPE_WINDOW_MANAGER_SUPPORT
