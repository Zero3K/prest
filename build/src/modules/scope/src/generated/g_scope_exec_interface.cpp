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

#ifdef SCOPE_EXEC_SUPPORT

#include "modules/scope/src/generated/g_scope_exec_interface.h"

// BEGIN: OpScopeExec_Descriptors

OpScopeExec_Descriptors::OpScopeExec_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeExec_Descriptors::~OpScopeExec_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeExec_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeExec_Descriptors::Get(unsigned id) const
{
	OpScopeExec_Descriptors *descriptors = const_cast<OpScopeExec_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_action_list_action_:
		return OpScopeExec_MessageSet::ActionList_Action::GetMessageDescriptor(descriptors);

	case _gen_MsgID_action_info_list_action_info_:
		return OpScopeExec_MessageSet::ActionInfoList_ActionInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_action_info_list_:
		return OpScopeExec_MessageSet::ActionInfoList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_action_list_:
		return OpScopeExec_MessageSet::ActionList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_area_:
		return OpScopeExec_MessageSet::Area::GetMessageDescriptor(descriptors);

	case _gen_MsgID_screen_watcher_result_color_match_:
		return OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch::GetMessageDescriptor(descriptors);

	case _gen_MsgID_screen_watcher_color_spec_:
		return OpScopeExec_MessageSet::ScreenWatcher_ColorSpec::GetMessageDescriptor(descriptors);

	case _gen_MsgID_mouse_action_:
		return OpScopeExec_MessageSet::MouseAction::GetMessageDescriptor(descriptors);

	case _gen_MsgID_screen_watcher_:
		return OpScopeExec_MessageSet::ScreenWatcher::GetMessageDescriptor(descriptors);

	case _gen_MsgID_screen_watcher_result_:
		return OpScopeExec_MessageSet::ScreenWatcherResult::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeExec_Descriptors


// BEGIN: OpScopeExec_MessageSet

OpScopeExec_MessageSet::OpScopeExec_MessageSet()
{
}

/*virtual*/
OpScopeExec_MessageSet::~OpScopeExec_MessageSet()
{
}

// END: OpScopeExec_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Action
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ActionList_Action::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_action_list_action_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("value"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("windowID"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("data"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::String,
						5,
						UNI_L("stringParam"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionList_Action,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionList_Action,
						_value
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionList_Action,
						_windowID
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionList_Action,
						_data
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionList_Action,
						_stringParam
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_action_list_action_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionList_Action, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionList_Action, encoded_size_),
					"Action",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList_Action>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList_Action>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeExec_MessageSet::ActionList::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: ActionList.Action: Implementation

// Setters

OP_STATUS
OpScopeExec_MessageSet::ActionList_Action::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeExec_MessageSet::ActionList_Action::SetValue(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _value.Set(v, l);
}


OP_STATUS
OpScopeExec_MessageSet::ActionList_Action::SetStringParam(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(4);
	return _stringParam.Set(v, l);
}

// END: ActionList.Action: Implementation

//   END: Message: Action

//   BEGIN: Message: ActionInfo
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ActionInfoList_ActionInfo::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_action_info_list_action_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionInfoList_ActionInfo,
						_name
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_action_info_list_action_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionInfoList_ActionInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionInfoList_ActionInfo, encoded_size_),
					"ActionInfo",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList_ActionInfo>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList_ActionInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeExec_MessageSet::ActionInfoList::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: ActionInfoList.ActionInfo: Implementation

// Setters

OP_STATUS
OpScopeExec_MessageSet::ActionInfoList_ActionInfo::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeExec_MessageSet::ActionInfoList_ActionInfo::SetName(const char * v, int l) 
{
	return _name.Set(v, l);
}

// END: ActionInfoList.ActionInfo: Implementation

//   END: Message: ActionInfo

//   BEGIN: Message: ActionInfoList
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ActionInfoList::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_action_info_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("actionInfoList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionInfoList,
						_actionInfoList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_action_info_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionInfoList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionInfoList, encoded_size_),
					"ActionInfoList",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ActionInfoList_ActionInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ActionInfoList: Implementation


// Setters

OpProtobufMessageVector<OpScopeExec_MessageSet::ActionInfoList_ActionInfo> &
OpScopeExec_MessageSet::ActionInfoList::GetActionInfoListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _actionInfoList;
}

// END: ActionInfoList: Implementation

//   END: Message: ActionInfoList

//   BEGIN: Message: ActionList
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ActionList::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_action_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("actionList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ActionList,
						_actionList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_action_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ActionList, encoded_size_),
					"ActionList",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(ActionList_Action::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ActionList: Implementation


// Setters

OpProtobufMessageVector<OpScopeExec_MessageSet::ActionList_Action> &
OpScopeExec_MessageSet::ActionList::GetActionListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _actionList;
}

// END: ActionList: Implementation

//   END: Message: ActionList

//   BEGIN: Message: Area
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::Area::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_area_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("y"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("w"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("h"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::Area,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::Area,
						_y
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::Area,
						_w
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::Area,
						_h
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_area_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::Area, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::Area, encoded_size_),
					"Area",
					OpProtobufMessageVector<OpScopeExec_MessageSet::Area>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::Area>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Area: Implementation


// END: Area: Implementation

//   END: Message: Area

//   BEGIN: Message: ColorMatch
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_screen_watcher_result_color_match_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("id"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("count"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch,
						_id
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch,
						_count
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_screen_watcher_result_color_match_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch, encoded_size_),
					"ColorMatch",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeExec_MessageSet::ScreenWatcherResult::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: ScreenWatcherResult.ColorMatch: Implementation


// END: ScreenWatcherResult.ColorMatch: Implementation

//   END: Message: ColorMatch

//   BEGIN: Message: ColorSpec
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ScreenWatcher_ColorSpec::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_screen_watcher_color_spec_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("id"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("redLow"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("redHigh"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("greenLow"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("greenHigh"),
						OpProtobufField::Optional
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Uint32,
						6,
						UNI_L("blueLow"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("blueHigh"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_id
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_redLow
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_redHigh
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_greenLow
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_greenHigh
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_blueLow
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher_ColorSpec,
						_blueHigh
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_screen_watcher_color_spec_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcher_ColorSpec, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcher_ColorSpec, encoded_size_),
					"ColorSpec",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher_ColorSpec>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher_ColorSpec>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeExec_MessageSet::ScreenWatcher::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: ScreenWatcher.ColorSpec: Implementation


// END: ScreenWatcher.ColorSpec: Implementation

//   END: Message: ColorSpec

//   BEGIN: Message: MouseAction
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::MouseAction::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_mouse_action_];
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
						OpProtobufFormat::Int32,
						2,
						UNI_L("x"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("y"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("buttonAction"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::MouseAction,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::MouseAction,
						_x
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::MouseAction,
						_y
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::MouseAction,
						_buttonAction
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_mouse_action_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::MouseAction, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::MouseAction, encoded_size_),
					"MouseAction",
					OpProtobufMessageVector<OpScopeExec_MessageSet::MouseAction>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::MouseAction>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MouseAction: Implementation


// END: MouseAction: Implementation

//   END: Message: MouseAction

//   BEGIN: Message: ScreenWatcher
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ScreenWatcher::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_screen_watcher_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("timeOut"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("area"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("md5List"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("windowID"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("colorSpecList"),
						OpProtobufField::Repeated
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("includeImage"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher,
						_timeOut
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher,
						_area
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher,
						_md5List
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher,
						_windowID
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher,
						_colorSpecList
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcher,
						_includeImage
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_screen_watcher_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcher, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcher, encoded_size_),
					"ScreenWatcher",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(Area::GetMessageDescriptor(descriptors));
	fields[4].SetMessage(ScreenWatcher_ColorSpec::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ScreenWatcher: Implementation


// Setters

OpScopeExec_MessageSet::Area &
OpScopeExec_MessageSet::ScreenWatcher::GetAreaRef() 
{
	return _area;
}


OpAutoVector<OpString> &
OpScopeExec_MessageSet::ScreenWatcher::GetMd5ListRef() 
{
	has_bits_.Reference().SetBit(2);
	return _md5List;
}


OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcher_ColorSpec> &
OpScopeExec_MessageSet::ScreenWatcher::GetColorSpecListRef() 
{
	has_bits_.Reference().SetBit(4);
	return _colorSpecList;
}

// END: ScreenWatcher: Implementation

//   END: Message: ScreenWatcher

//   BEGIN: Message: ScreenWatcherResult
/*static*/
const OpProtobufMessage *
OpScopeExec_MessageSet::ScreenWatcherResult::GetMessageDescriptor(OpScopeExec_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeExec_Descriptors::_gen_MessageOffs_screen_watcher_result_];
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
						UNI_L("md5"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bytes,
						3,
						UNI_L("png"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("colorMatchList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcherResult,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcherResult,
						_md5
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcherResult,
						_png
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeExec_MessageSet::ScreenWatcherResult,
						_colorMatchList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeExec_Descriptors::_gen_MsgID_screen_watcher_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcherResult, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeExec_MessageSet::ScreenWatcherResult, encoded_size_),
					"ScreenWatcherResult",
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult>::Make,
					OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(ScreenWatcherResult_ColorMatch::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: ScreenWatcherResult: Implementation


// Setters

OP_STATUS
OpScopeExec_MessageSet::ScreenWatcherResult::SetMd5(const uni_char * v, int l) 
{
	return _md5.Set(v, l);
}


ByteBuffer &
OpScopeExec_MessageSet::ScreenWatcherResult::GetPngRef() 
{
	has_bits_.Reference().SetBit(2);
	return _png;
}


OpProtobufMessageVector<OpScopeExec_MessageSet::ScreenWatcherResult_ColorMatch> &
OpScopeExec_MessageSet::ScreenWatcherResult::GetColorMatchListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _colorMatchList;
}

// END: ScreenWatcherResult: Implementation

//   END: Message: ScreenWatcherResult


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_exec_interface.h"
#include "modules/scope/src/scope_exec.h"

// BEGIN: OpScopeExec_SI::Descriptors

OpScopeExec_SI::Descriptors::Descriptors()
{
}

OpScopeExec_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeExec_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeExec_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("Exec",
						Command_Exec,
						OpScopeCommand::Type_Call,
						_gen_MsgID_action_list_,
						_gen_void_MsgID
						);
	command_list[1] = OpScopeCommand("GetActionInfoList",
						Command_GetActionInfoList,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_action_info_list_
						);
	command_list[2] = OpScopeCommand("SetupScreenWatcher",
						Command_SetupScreenWatcher,
						OpScopeCommand::Type_Call,
						_gen_MsgID_screen_watcher_,
						_gen_MsgID_screen_watcher_result_
						);
	command_list[3] = OpScopeCommand("SendMouseAction",
						Command_SendMouseAction,
						OpScopeCommand::Type_Call,
						_gen_MsgID_mouse_action_,
						_gen_void_MsgID
						);
	return OpStatus::OK;
}

// END: OpScopeExec_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeExec_SI::OpScopeExec_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("exec") : id, manager, control)
{
}

/*virtual*/
OpScopeExec_SI::~OpScopeExec_SI()
{
}

/*virtual*/
int
OpScopeExec_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeExec_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().exec_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeExec_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_Exec) // Exec
	{
		OP_STATUS status = OpStatus::OK;
		ActionList in;

		OpProtobufInstanceProxy in_proxy(ActionList::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoExec(in);
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
	else if (msg.CommandID() == Command_GetActionInfoList) // GetActionInfoList
	{
		OP_STATUS status = OpStatus::OK;
		ActionInfoList out;

		status = DoGetActionInfoList(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ActionInfoList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_SendMouseAction) // SendMouseAction
	{
		OP_STATUS status = OpStatus::OK;
		MouseAction in;

		OpProtobufInstanceProxy in_proxy(MouseAction::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSendMouseAction(in);
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
	else if (msg.CommandID() == Command_SetupScreenWatcher) // SetupScreenWatcher
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		ScreenWatcher in;

		OpProtobufInstanceProxy in_proxy(ScreenWatcher::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetupScreenWatcher(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
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
OpScopeExec_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeExec_SI::Descriptors *
OpScopeExec_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().exec_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeExec_SI::GetMessageCount() const
{
	return OpScopeExec_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeExec_SI::GetMessageIDs() const
{
	unsigned start = OpScopeExec_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeExec_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeExec_SI::GetMessages() const
{
	unsigned start = OpScopeExec_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeExec_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeExec_SI::GetVersionString() const
{
	return "2.1";
}

/* virtual */
int
OpScopeExec_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeExec_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeExec_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeExec_SI::SendSetupScreenWatcher(const ScreenWatcherResult &msg, unsigned int tag) // SetupScreenWatcher
{
	OpProtobufInstanceProxy proxy(ScreenWatcherResult::GetMessageDescriptor(GetDescriptors()), const_cast<ScreenWatcherResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_SetupScreenWatcher);
}


// Service implementation: END

#endif // SCOPE_EXEC_SUPPORT
