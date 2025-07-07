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

// Generated from ../../platforms/mac/pi/messages.proto

#include "core/pch.h"




#ifdef _MACINTOSH_

#include "platforms/mac/src/generated/g_proto_mac_messages.h"
#include "platforms/mac/src/generated/g_proto_descriptor_mac_messages.h"
#include "platforms/mac/src/generated/g_proto_descriptor_mac_messages.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpMacMessages_MessageSet

OpMacMessages_MessageSet::OpMacMessages_MessageSet()
{
}

/*virtual*/
OpMacMessages_MessageSet::~OpMacMessages_MessageSet()
{
}

// END: OpMacMessages_MessageSet

// BEGIN: Messages

//   BEGIN: Message: MacPluginContextMenuShown
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginContextMenuShown::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_context_menu_shown_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("show"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginContextMenuShown,
						_show
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_context_menu_shown_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginContextMenuShown, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginContextMenuShown, encoded_size_),
					"MacPluginContextMenuShown",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginContextMenuShown>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginContextMenuShown>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginContextMenuShown: Implementation


// END: MacPluginContextMenuShown: Implementation

//   END: Message: MacPluginContextMenuShown

//   BEGIN: Message: MacPluginCursorShown
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginCursorShown::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_cursor_shown_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("show"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginCursorShown,
						_show
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_cursor_shown_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginCursorShown, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginCursorShown, encoded_size_),
					"MacPluginCursorShown",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginCursorShown>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginCursorShown>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginCursorShown: Implementation


// END: MacPluginCursorShown: Implementation

//   END: Message: MacPluginCursorShown

//   BEGIN: Message: MacPluginDesktopWindowMovement
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginDesktopWindowMovement::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_desktop_window_movement_];
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

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginDesktopWindowMovement,
						_x
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginDesktopWindowMovement,
						_y
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_desktop_window_movement_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginDesktopWindowMovement, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginDesktopWindowMovement, encoded_size_),
					"MacPluginDesktopWindowMovement",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginDesktopWindowMovement>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginDesktopWindowMovement>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginDesktopWindowMovement: Implementation


// END: MacPluginDesktopWindowMovement: Implementation

//   END: Message: MacPluginDesktopWindowMovement

//   BEGIN: Message: MacPluginFullscreen
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginFullscreen::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_fullscreen_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("fullscreen"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("highLongOfPSN"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("lowLongOfPSN"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginFullscreen,
						_fullscreen
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginFullscreen,
						_highLongOfPSN
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginFullscreen,
						_lowLongOfPSN
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_fullscreen_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginFullscreen, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginFullscreen, encoded_size_),
					"MacPluginFullscreen",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginFullscreen>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginFullscreen>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginFullscreen: Implementation


// END: MacPluginFullscreen: Implementation

//   END: Message: MacPluginFullscreen

//   BEGIN: Message: MacPluginIMEText
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginIMEText::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_ime_text_];
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
	fields[0].SetStringDataType(OpProtobufField::String_UniString);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginIMEText,
						_text
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_ime_text_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginIMEText, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginIMEText, encoded_size_),
					"MacPluginIMEText",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginIMEText>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginIMEText>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginIMEText: Implementation

// Setters

OP_STATUS
OpMacMessages_MessageSet::MacPluginIMEText::SetText(const UniString & v) 
{
	_text = v;
	return OpStatus::OK;
}


OP_STATUS
OpMacMessages_MessageSet::MacPluginIMEText::SetText(const uni_char * v, int l) 
{
	return _text.SetCopyData(v, l);
}

// END: MacPluginIMEText: Implementation

//   END: Message: MacPluginIMEText

//   BEGIN: Message: MacPluginInfo
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginInfo::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_info_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginInfo, encoded_size_),
					"MacPluginInfo",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginInfo>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginInfo: Implementation


// END: MacPluginInfo: Implementation

//   END: Message: MacPluginInfo

//   BEGIN: Message: MacPluginInfoResponse
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginInfoResponse::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_info_response_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("disabledCA"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("disabledICA"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginInfoResponse,
						_disabledCA
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginInfoResponse,
						_disabledICA
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_info_response_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginInfoResponse, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginInfoResponse, encoded_size_),
					"MacPluginInfoResponse",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginInfoResponse>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginInfoResponse>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginInfoResponse: Implementation


// END: MacPluginInfoResponse: Implementation

//   END: Message: MacPluginInfoResponse

//   BEGIN: Message: MacPluginUpdateView
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginUpdateView::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_update_view_];
	if (message)
		return message;

	OpProtobufField *fields = NULL;

	int *offsets = NULL;

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_update_view_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginUpdateView, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginUpdateView, encoded_size_),
					"MacPluginUpdateView",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginUpdateView>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginUpdateView>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginUpdateView: Implementation


// END: MacPluginUpdateView: Implementation

//   END: Message: MacPluginUpdateView

//   BEGIN: Message: MacPluginVisibility
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginVisibility::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_visibility_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("visible"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginVisibility,
						_visible
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_visibility_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginVisibility, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginVisibility, encoded_size_),
					"MacPluginVisibility",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginVisibility>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginVisibility>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginVisibility: Implementation


// END: MacPluginVisibility: Implementation

//   END: Message: MacPluginVisibility

//   BEGIN: Message: MacPluginWindowShown
/*static*/
const OpProtobufMessage *
OpMacMessages_MessageSet::MacPluginWindowShown::GetMessageDescriptor(OpMacMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpMacMessages_Descriptors::_gen_MessageOffs_mac_plugin_window_shown_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("show"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("highLongOfPSN"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("lowLongOfPSN"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginWindowShown,
						_show
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginWindowShown,
						_highLongOfPSN
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpMacMessages_MessageSet::MacPluginWindowShown,
						_lowLongOfPSN
						);

	message = OP_NEW(OpProtobufMessage,
					(OpMacMessages_Descriptors::_gen_MsgID_mac_plugin_window_shown_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginWindowShown, has_bits_),
					OP_PROTO_OFFSETOF(OpMacMessages_MessageSet::MacPluginWindowShown, encoded_size_),
					"MacPluginWindowShown",
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginWindowShown>::Make,
					OpProtobufMessageVector<OpMacMessages_MessageSet::MacPluginWindowShown>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: MacPluginWindowShown: Implementation


// END: MacPluginWindowShown: Implementation

//   END: Message: MacPluginWindowShown


// END: Messages



#endif // _MACINTOSH_


