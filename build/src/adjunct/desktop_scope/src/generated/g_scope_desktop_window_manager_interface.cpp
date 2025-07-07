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

#include "adjunct/desktop_scope/src/generated/g_scope_desktop_window_manager_interface.h"

// BEGIN: OpScopeDesktopWindowManager_Descriptors

OpScopeDesktopWindowManager_Descriptors::OpScopeDesktopWindowManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeDesktopWindowManager_Descriptors::~OpScopeDesktopWindowManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeDesktopWindowManager_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_DesktopWindowInfo_DesktopWindowType;
	enum_id_list[1] = _gen_EnumID_DesktopWindowInfo_DesktopWindowState;
	enum_id_list[2] = _gen_EnumID_QuickWidgetInfo_QuickWidgetType;
	enum_id_list[3] = _gen_EnumID_QuickWidgetSearch_QuickWidgetSearchType;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeDesktopWindowManager_Descriptors::Get(unsigned id) const
{
	OpScopeDesktopWindowManager_Descriptors *descriptors = const_cast<OpScopeDesktopWindowManager_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_desktop_window_id_:
		return OpScopeDesktopWindowManager_MessageSet::DesktopWindowID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_desktop_window_info_:
		return OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_desktop_window_list_:
		return OpScopeDesktopWindowManager_MessageSet::DesktopWindowList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_desktop_window_rect_:
		return OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_menu_id_:
		return OpScopeDesktopWindowManager_MessageSet::QuickMenuID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_menu_info_:
		return OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_menu_item_id_:
		return OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_menu_item_info_:
		return OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_menu_list_:
		return OpScopeDesktopWindowManager_MessageSet::QuickMenuList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_widget_info_:
		return OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_widget_info_list_:
		return OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_quick_widget_search_:
		return OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeDesktopWindowManager_Descriptors


// BEGIN: OpScopeDesktopWindowManager_MessageSet

OpScopeDesktopWindowManager_MessageSet::OpScopeDesktopWindowManager_MessageSet()
{
}

/*virtual*/
OpScopeDesktopWindowManager_MessageSet::~OpScopeDesktopWindowManager_MessageSet()
{
}

// END: OpScopeDesktopWindowManager_MessageSet

// BEGIN: Messages

//   BEGIN: Message: DesktopWindowID
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::DesktopWindowID::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_desktop_window_id_];
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
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowID,
						_windowID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_desktop_window_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowID, encoded_size_),
					"DesktopWindowID",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowID>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DesktopWindowID: Implementation


// END: DesktopWindowID: Implementation

//   END: Message: DesktopWindowID

//   BEGIN: Message: DesktopWindowInfo
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_desktop_window_info_];
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
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Int32,
						4,
						UNI_L("windowType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowType // unsigned enum_id
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("onScreen"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Int32,
						6,
						UNI_L("state"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowState // unsigned enum_id
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Message,
						7,
						UNI_L("rect"),
						OpProtobufField::Required
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Bool,
						8,
						UNI_L("active"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_title
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_name
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_windowType
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_onScreen
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_state
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_rect
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo,
						_active
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_desktop_window_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo, encoded_size_),
					"DesktopWindowInfo",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[6].SetMessage(DesktopWindowRect::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: DesktopWindowInfo: Implementation

// Enum value DesktopWindowInfo.DesktopWindowType.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWTYPE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DesktopWindowInfo.DesktopWindowType.DIALOG
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWTYPE_DIALOG;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DesktopWindowInfo.DesktopWindowType.NORMAL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWTYPE_NORMAL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)




// Enum value DesktopWindowInfo.DesktopWindowState.RESTORED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWSTATE_RESTORED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DesktopWindowInfo.DesktopWindowState.MINIMIZED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWSTATE_MINIMIZED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DesktopWindowInfo.DesktopWindowState.MAXIMIZED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWSTATE_MAXIMIZED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value DesktopWindowInfo.DesktopWindowState.FULLSCREEN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::DESKTOPWINDOWSTATE_FULLSCREEN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::SetTitle(const uni_char * v, int l) 
{
	return _title.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


void
OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::SetWindowType(OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType v) 
{
	_windowType = static_cast<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowType>(v);
}


void
OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::SetState(OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState v) 
{
	_state = static_cast<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo_DesktopWindowState>(v);
}


OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect &
OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo::GetRectRef() 
{
	return _rect;
}

// END: DesktopWindowInfo: Implementation

//   END: Message: DesktopWindowInfo

//   BEGIN: Message: DesktopWindowList
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::DesktopWindowList::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_desktop_window_list_];
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
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowList,
						_windowList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_desktop_window_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowList, encoded_size_),
					"DesktopWindowList",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowList>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(DesktopWindowInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: DesktopWindowList: Implementation

// Setters

OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowInfo> &
OpScopeDesktopWindowManager_MessageSet::DesktopWindowList::GetWindowListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _windowList;
}

// END: DesktopWindowList: Implementation

//   END: Message: DesktopWindowList

//   BEGIN: Message: DesktopWindowRect
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_desktop_window_rect_];
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
						OpProtobufFormat::Uint32,
						3,
						UNI_L("width"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Uint32,
						4,
						UNI_L("height"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect,
						_y
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect,
						_width
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect,
						_height
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_desktop_window_rect_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect, encoded_size_),
					"DesktopWindowRect",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: DesktopWindowRect: Implementation


// END: DesktopWindowRect: Implementation

//   END: Message: DesktopWindowRect

//   BEGIN: Message: QuickMenuID
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickMenuID::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_menu_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("menuName"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuID,
						_menuName
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_menu_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuID, encoded_size_),
					"QuickMenuID",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuID>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: QuickMenuID: Implementation

// Setters

OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuID::SetMenuName(const uni_char * v, int l) 
{
	return _menuName.Set(v, l);
}

// END: QuickMenuID: Implementation

//   END: Message: QuickMenuID

//   BEGIN: Message: QuickMenuInfo
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_menu_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("menuId"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("rect"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("windowId"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("menuItemList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo,
						_menuId
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo,
						_rect
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo,
						_windowId
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo,
						_menuItemList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_menu_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo, encoded_size_),
					"QuickMenuInfo",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(QuickMenuID::GetMessageDescriptor(descriptors));
	fields[1].SetMessage(DesktopWindowRect::GetMessageDescriptor(descriptors));
	fields[2].SetMessage(DesktopWindowID::GetMessageDescriptor(descriptors));
	fields[3].SetMessage(QuickMenuItemInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: QuickMenuInfo: Implementation

// Setters

OpScopeDesktopWindowManager_MessageSet::QuickMenuID &
OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo::GetMenuIdRef() 
{
	return _menuId;
}


OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect &
OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo::GetRectRef() 
{
	return _rect;
}


OpScopeDesktopWindowManager_MessageSet::DesktopWindowID &
OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo::GetWindowIdRef() 
{
	return _windowId;
}


OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo> &
OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo::GetMenuItemListRef() 
{
	has_bits_.Reference().SetBit(3);
	return _menuItemList;
}

// END: QuickMenuInfo: Implementation

//   END: Message: QuickMenuInfo

//   BEGIN: Message: QuickMenuItemID
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_menu_item_id_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("menuText"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("popupMenu"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID,
						_menuText
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID,
						_popupMenu
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_menu_item_id_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID, encoded_size_),
					"QuickMenuItemID",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: QuickMenuItemID: Implementation

// Setters

OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemID::SetMenuText(const uni_char * v, int l) 
{
	return _menuText.Set(v, l);
}

// END: QuickMenuItemID: Implementation

//   END: Message: QuickMenuItemID

//   BEGIN: Message: QuickMenuItemInfo
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_menu_item_info_];
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
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("action"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("submenu"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("actionParam"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("row"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("shortcutLetter"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::String,
						7,
						UNI_L("shortcut"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Message,
						8,
						UNI_L("rect"),
						OpProtobufField::Required
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Bool,
						9,
						UNI_L("enabled"),
						OpProtobufField::Required
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::Bool,
						10,
						UNI_L("checked"),
						OpProtobufField::Required
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::Bool,
						11,
						UNI_L("bold"),
						OpProtobufField::Required
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Bool,
						12,
						UNI_L("separator"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_text
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_action
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_submenu
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_actionParam
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_row
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_shortcutLetter
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_shortcut
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_rect
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_enabled
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_checked
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_bold
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo,
						_separator
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_menu_item_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo, encoded_size_),
					"QuickMenuItemInfo",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[7].SetMessage(DesktopWindowRect::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: QuickMenuItemInfo: Implementation

// Setters

OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::SetAction(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _action.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::SetSubmenu(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _submenu.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::SetActionParam(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _actionParam.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::SetShortcutLetter(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(5);
	return _shortcutLetter.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::SetShortcut(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(6);
	return _shortcut.Set(v, l);
}


OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect &
OpScopeDesktopWindowManager_MessageSet::QuickMenuItemInfo::GetRectRef() 
{
	return _rect;
}

// END: QuickMenuItemInfo: Implementation

//   END: Message: QuickMenuItemInfo

//   BEGIN: Message: QuickMenuList
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickMenuList::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_menu_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("menuList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickMenuList,
						_menuList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_menu_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickMenuList, encoded_size_),
					"QuickMenuList",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuList>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(QuickMenuInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: QuickMenuList: Implementation

// Setters

OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickMenuInfo> &
OpScopeDesktopWindowManager_MessageSet::QuickMenuList::GetMenuListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _menuList;
}

// END: QuickMenuList: Implementation

//   END: Message: QuickMenuList

//   BEGIN: Message: QuickWidgetInfo
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_widget_info_];
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
						OpProtobufFormat::Int32,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetInfo_QuickWidgetType // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("visible"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Uint32,
						5,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("enabled"),
						OpProtobufField::Required
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bool,
						7,
						UNI_L("defaultLook"),
						OpProtobufField::Required
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Bool,
						8,
						UNI_L("focusedLook"),
						OpProtobufField::Required
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Message,
						9,
						UNI_L("rect"),
						OpProtobufField::Required
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::String,
						10,
						UNI_L("parent"),
						OpProtobufField::Optional
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::Uint32,
						11,
						UNI_L("row"),
						OpProtobufField::Optional
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Uint32,
						12,
						UNI_L("col"),
						OpProtobufField::Optional
						);
	fields[12] = OpProtobufField(
						OpProtobufFormat::String,
						13,
						UNI_L("visible_text"),
						OpProtobufField::Optional
						);
	fields[13] = OpProtobufField(
						OpProtobufFormat::String,
						14,
						UNI_L("additional_text"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_visible
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_text
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_value
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_enabled
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_defaultLook
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_focusedLook
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_rect
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_parent
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_row
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_col
						);
	offsets[12] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_visible_text
						);
	offsets[13] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo,
						_additional_text
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_widget_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo, encoded_size_),
					"QuickWidgetInfo",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[8].SetMessage(DesktopWindowRect::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: QuickWidgetInfo: Implementation

// Enum value QuickWidgetInfo.QuickWidgetType.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.BUTTON
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_BUTTON;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.CHECKBOX
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_CHECKBOX;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.DIALOGTAB
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_DIALOGTAB;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.DROPDOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_DROPDOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.DROPDOWNITEM
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_DROPDOWNITEM;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.EDITFIELD
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_EDITFIELD;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.LABEL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_LABEL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.RADIOBUTTON
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_RADIOBUTTON;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.ADDRESSFIELD
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_ADDRESSFIELD;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.SEARCH
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_SEARCH;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.TOOLBAR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_TOOLBAR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.TREEVIEW
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_TREEVIEW;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.TREEITEM
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_TREEITEM;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.TABBUTTON
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_TABBUTTON;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.THUMBNAIL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_THUMBNAIL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.GRIDLAYOUT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_GRIDLAYOUT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.GRIDITEM
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_GRIDITEM;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.QUICKFIND
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_QUICKFIND;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.ICON
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_ICON;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.PROGRESSBAR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_PROGRESSBAR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetInfo.QuickWidgetType.LISTBOX
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::QUICKWIDGETTYPE_LISTBOX;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


void
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::SetType(OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType v) 
{
	_type = static_cast<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo_QuickWidgetType>(v);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}


OpScopeDesktopWindowManager_MessageSet::DesktopWindowRect &
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::GetRectRef() 
{
	return _rect;
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::SetParent(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(9);
	return _parent.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::SetVisible_text(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(12);
	return _visible_text.Set(v, l);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo::SetAdditional_text(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(13);
	return _additional_text.Set(v, l);
}

// END: QuickWidgetInfo: Implementation

//   END: Message: QuickWidgetInfo

//   BEGIN: Message: QuickWidgetInfoList
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_widget_info_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("quickwidgetList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList,
						_quickwidgetList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_widget_info_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList, encoded_size_),
					"QuickWidgetInfoList",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(QuickWidgetInfo::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: QuickWidgetInfoList: Implementation

// Setters

OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfo> &
OpScopeDesktopWindowManager_MessageSet::QuickWidgetInfoList::GetQuickwidgetListRef() 
{
	has_bits_.Reference().SetBit(0);
	return _quickwidgetList;
}

// END: QuickWidgetInfoList: Implementation

//   END: Message: QuickWidgetInfoList

//   BEGIN: Message: QuickWidgetSearch
/*static*/
const OpProtobufMessage *
OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::GetMessageDescriptor(OpScopeDesktopWindowManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeDesktopWindowManager_Descriptors::_gen_MessageOffs_quick_widget_search_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("searchType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetSearch_QuickWidgetSearchType // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("data"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch,
						_windowID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch,
						_searchType
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch,
						_data
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeDesktopWindowManager_Descriptors::_gen_MsgID_quick_widget_search_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch, encoded_size_),
					"QuickWidgetSearch",
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch>::Make,
					OpProtobufMessageVector<OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(DesktopWindowID::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: QuickWidgetSearch: Implementation

// Enum value QuickWidgetSearch.QuickWidgetSearchType.NAME
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::QUICKWIDGETSEARCHTYPE_NAME;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetSearch.QuickWidgetSearchType.TEXT
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::QUICKWIDGETSEARCHTYPE_TEXT;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value QuickWidgetSearch.QuickWidgetSearchType.POS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::QUICKWIDGETSEARCHTYPE_POS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OpScopeDesktopWindowManager_MessageSet::DesktopWindowID &
OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::GetWindowIDRef() 
{
	return _windowID;
}


void
OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::SetSearchType(OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType v) 
{
	_searchType = static_cast<OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch_QuickWidgetSearchType>(v);
}


OP_STATUS
OpScopeDesktopWindowManager_MessageSet::QuickWidgetSearch::SetData(const uni_char * v, int l) 
{
	return _data.Set(v, l);
}

// END: QuickWidgetSearch: Implementation

//   END: Message: QuickWidgetSearch


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "adjunct/desktop_scope/src/generated/g_scope_desktop_window_manager_interface.h"
#include "adjunct/desktop_scope/src/scope_desktop_window_manager.h"

// BEGIN: OpScopeDesktopWindowManager_SI::Descriptors

OpScopeDesktopWindowManager_SI::Descriptors::Descriptors()
{
}

OpScopeDesktopWindowManager_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeDesktopWindowManager_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeDesktopWindowManager_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetActiveWindow",
						Command_GetActiveWindow,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_id_
						);
	command_list[1] = OpScopeCommand("ListWindows",
						Command_ListWindows,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_list_
						);
	command_list[2] = OpScopeCommand("ListQuickWidgets",
						Command_ListQuickWidgets,
						OpScopeCommand::Type_Call,
						_gen_MsgID_desktop_window_id_,
						_gen_MsgID_quick_widget_info_list_
						);
	command_list[3] = OpScopeCommand("GetQuickWidget",
						Command_GetQuickWidget,
						OpScopeCommand::Type_Call,
						_gen_MsgID_quick_widget_search_,
						_gen_MsgID_quick_widget_info_
						);
	command_list[4] = OpScopeCommand("OnWindowShown",
						Command_OnWindowShown,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_info_
						);
	command_list[5] = OpScopeCommand("OnWindowUpdated",
						Command_OnWindowUpdated,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_info_
						);
	command_list[6] = OpScopeCommand("OnWindowClosed",
						Command_OnWindowClosed,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_info_
						);
	command_list[7] = OpScopeCommand("OnWindowActivated",
						Command_OnWindowActivated,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_info_
						);
	command_list[8] = OpScopeCommand("OnWindowPageLoaded",
						Command_OnWindowPageLoaded,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_info_
						);
	command_list[9] = OpScopeCommand("ListQuickMenus",
						Command_ListQuickMenus,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_quick_menu_list_
						);
	command_list[10] = OpScopeCommand("OnMenuShown",
						Command_OnMenuShown,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_quick_menu_info_
						);
	command_list[11] = OpScopeCommand("OnMenuClosed",
						Command_OnMenuClosed,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_quick_menu_id_
						);
	command_list[12] = OpScopeCommand("PressQuickMenuItem",
						Command_PressQuickMenuItem,
						OpScopeCommand::Type_Call,
						_gen_MsgID_quick_menu_item_id_,
						_gen_void_MsgID
						);
	command_list[13] = OpScopeCommand("OnMenuItemPressed",
						Command_OnMenuItemPressed,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_quick_menu_item_id_
						);
	command_list[14] = OpScopeCommand("OnWindowPageChanged",
						Command_OnWindowPageChanged,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_desktop_window_info_
						);
	return OpStatus::OK;
}

// END: OpScopeDesktopWindowManager_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeDesktopWindowManager_SI::OpScopeDesktopWindowManager_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("desktop-window-manager") : id, manager, control)
{
}

/*virtual*/
OpScopeDesktopWindowManager_SI::~OpScopeDesktopWindowManager_SI()
{
}

/*virtual*/
int
OpScopeDesktopWindowManager_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeDesktopWindowManager_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().desktop_window_manager_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeDesktopWindowManager_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetActiveWindow) // GetActiveWindow
	{
		OP_STATUS status = OpStatus::OK;
		DesktopWindowID out;

		status = DoGetActiveWindow(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopWindowID::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ListWindows) // ListWindows
	{
		OP_STATUS status = OpStatus::OK;
		DesktopWindowList out;

		status = DoListWindows(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(DesktopWindowList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ListQuickWidgets) // ListQuickWidgets
	{
		OP_STATUS status = OpStatus::OK;
		DesktopWindowID in;
		QuickWidgetInfoList out;

		OpProtobufInstanceProxy in_proxy(DesktopWindowID::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoListQuickWidgets(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(QuickWidgetInfoList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_GetQuickWidget) // GetQuickWidget
	{
		OP_STATUS status = OpStatus::OK;
		QuickWidgetSearch in;
		QuickWidgetInfo out;

		OpProtobufInstanceProxy in_proxy(QuickWidgetSearch::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetQuickWidget(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(QuickWidgetInfo::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ListQuickMenus) // ListQuickMenus
	{
		OP_STATUS status = OpStatus::OK;
		QuickMenuList out;

		status = DoListQuickMenus(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(QuickMenuList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_PressQuickMenuItem) // PressQuickMenuItem
	{
		OP_STATUS status = OpStatus::OK;
		QuickMenuItemID in;

		OpProtobufInstanceProxy in_proxy(QuickMenuItemID::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoPressQuickMenuItem(in);
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
OpScopeDesktopWindowManager_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeDesktopWindowManager_SI::Descriptors *
OpScopeDesktopWindowManager_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().desktop_window_manager_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeDesktopWindowManager_SI::GetMessageCount() const
{
	return OpScopeDesktopWindowManager_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeDesktopWindowManager_SI::GetMessageIDs() const
{
	unsigned start = OpScopeDesktopWindowManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeDesktopWindowManager_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeDesktopWindowManager_SI::GetMessages() const
{
	unsigned start = OpScopeDesktopWindowManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeDesktopWindowManager_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeDesktopWindowManager_SI::GetVersionString() const
{
	return "2.3";
}

/* virtual */
int
OpScopeDesktopWindowManager_SI::GetMajorVersion() const
{
	return 2;
}

/* virtual */
int
OpScopeDesktopWindowManager_SI::GetMinorVersion() const
{
	return 3;
}

/* virtual */
const char *
OpScopeDesktopWindowManager_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnWindowShown(const DesktopWindowInfo &msg) // OnWindowShown
{
	OpProtobufInstanceProxy proxy(DesktopWindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<DesktopWindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowShown);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnWindowUpdated(const DesktopWindowInfo &msg) // OnWindowUpdated
{
	OpProtobufInstanceProxy proxy(DesktopWindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<DesktopWindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowUpdated);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnWindowClosed(const DesktopWindowInfo &msg) // OnWindowClosed
{
	OpProtobufInstanceProxy proxy(DesktopWindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<DesktopWindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowClosed);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnWindowActivated(const DesktopWindowInfo &msg) // OnWindowActivated
{
	OpProtobufInstanceProxy proxy(DesktopWindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<DesktopWindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowActivated);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnWindowPageLoaded(const DesktopWindowInfo &msg) // OnWindowPageLoaded
{
	OpProtobufInstanceProxy proxy(DesktopWindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<DesktopWindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowPageLoaded);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnMenuShown(const QuickMenuInfo &msg) // OnMenuShown
{
	OpProtobufInstanceProxy proxy(QuickMenuInfo::GetMessageDescriptor(GetDescriptors()), const_cast<QuickMenuInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnMenuShown);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnMenuClosed(const QuickMenuID &msg) // OnMenuClosed
{
	OpProtobufInstanceProxy proxy(QuickMenuID::GetMessageDescriptor(GetDescriptors()), const_cast<QuickMenuID *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnMenuClosed);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnMenuItemPressed(const QuickMenuItemID &msg) // OnMenuItemPressed
{
	OpProtobufInstanceProxy proxy(QuickMenuItemID::GetMessageDescriptor(GetDescriptors()), const_cast<QuickMenuItemID *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnMenuItemPressed);
}


OP_STATUS
OpScopeDesktopWindowManager_SI::SendOnWindowPageChanged(const DesktopWindowInfo &msg) // OnWindowPageChanged
{
	OpProtobufInstanceProxy proxy(DesktopWindowInfo::GetMessageDescriptor(GetDescriptors()), const_cast<DesktopWindowInfo *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWindowPageChanged);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeDesktopWindowManager_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeDesktopWindowManager_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeDesktopWindowManager_SI::GetEnumCount() const
{
	return OpScopeDesktopWindowManager_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeDesktopWindowManager_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowType:
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowState:
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetInfo_QuickWidgetType:
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetSearch_QuickWidgetSearchType:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeDesktopWindowManager_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// DesktopWindowInfo_DesktopWindowType
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowType:
			name = UNI_L("DesktopWindowType");
			value_count = OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_DesktopWindowInfo_DesktopWindowType;
			return OpStatus::OK;
		// DesktopWindowInfo_DesktopWindowState
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowState:
			name = UNI_L("DesktopWindowState");
			value_count = OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_DesktopWindowInfo_DesktopWindowState;
			return OpStatus::OK;
		// QuickWidgetInfo_QuickWidgetType
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetInfo_QuickWidgetType:
			name = UNI_L("QuickWidgetType");
			value_count = OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_QuickWidgetInfo_QuickWidgetType;
			return OpStatus::OK;
		// QuickWidgetSearch_QuickWidgetSearchType
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetSearch_QuickWidgetSearchType:
			name = UNI_L("QuickWidgetSearchType");
			value_count = OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_QuickWidgetSearch_QuickWidgetSearchType;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeDesktopWindowManager_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// DesktopWindowInfo_DesktopWindowType
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowType:
		{
			if (idx > OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_DesktopWindowInfo_DesktopWindowType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for DesktopWindowInfo_DesktopWindowType
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 15
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0DIALOG\0NORMAL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// DesktopWindowInfo_DesktopWindowState
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_DesktopWindowInfo_DesktopWindowState:
		{
			if (idx > OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_DesktopWindowInfo_DesktopWindowState)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for DesktopWindowInfo_DesktopWindowState
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 9
				, 19
				, 29
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "RESTORED\0MINIMIZED\0MAXIMIZED\0FULLSCREEN" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// QuickWidgetInfo_QuickWidgetType
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetInfo_QuickWidgetType:
		{
			if (idx > OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_QuickWidgetInfo_QuickWidgetType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for QuickWidgetInfo_QuickWidgetType
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
				, 17
				, 18
				, 19
				, 20
				, 21
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 15
				, 24
				, 34
				, 43
				, 56
				, 66
				, 72
				, 84
				, 97
				, 104
				, 112
				, 121
				, 130
				, 140
				, 150
				, 161
				, 170
				, 180
				, 185
				, 197
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0BUTTON\0CHECKBOX\0DIALOGTAB\0DROPDOWN\0DROPDOWNITEM\0EDITFIELD\0LABEL\0RADIOBUTTON\0ADDRESSFIELD\0SEARCH\0TOOLBAR\0TREEVIEW\0TREEITEM\0TABBUTTON\0THUMBNAIL\0GRIDLAYOUT\0GRIDITEM\0QUICKFIND\0ICON\0PROGRESSBAR\0LISTBOX" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// QuickWidgetSearch_QuickWidgetSearchType
		case OpScopeDesktopWindowManager_Descriptors::_gen_EnumID_QuickWidgetSearch_QuickWidgetSearchType:
		{
			if (idx > OpScopeDesktopWindowManager_Descriptors::_gen_EnumValueCount_QuickWidgetSearch_QuickWidgetSearchType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for QuickWidgetSearch_QuickWidgetSearchType
			const unsigned enum_numbers[] = {
				  0
				, 1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 5
				, 10
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "NAME\0TEXT\0POS" );
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
