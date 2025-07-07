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

// Generated from ../../modules/windowcommander/component/messages.proto

#include "core/pch.h"






#include "modules/windowcommander/src/generated/g_proto_windowcommander_messages.h"
#include "modules/windowcommander/src/generated/g_proto_descriptor_windowcommander_messages.h"
#include "modules/windowcommander/src/generated/g_proto_descriptor_windowcommander_messages.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpWindowcommanderMessages_MessageSet

OpWindowcommanderMessages_MessageSet::OpWindowcommanderMessages_MessageSet()
{
}

/*virtual*/
OpWindowcommanderMessages_MessageSet::~OpWindowcommanderMessages_MessageSet()
{
}

// END: OpWindowcommanderMessages_MessageSet

// BEGIN: Messages

//   BEGIN: Message: MenuItem
/*static*/
const OpProtobufMessage *
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem::GetMessageDescriptor(OpWindowcommanderMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpWindowcommanderMessages_Descriptors::_gen_MessageOffs_popup_menu_request_menu_item_];
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
						OpProtobufFormat::String,
						2,
						UNI_L("label"),
						OpProtobufField::Optional
						);
	fields[1].SetStringDataType(OpProtobufField::String_UniString);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("iconId"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("subMenuItemList"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem,
						_id
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem,
						_label
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem,
						_iconId
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem,
						_subMenuItemList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpWindowcommanderMessages_Descriptors::_gen_MsgID_popup_menu_request_menu_item_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem, has_bits_),
					OP_PROTO_OFFSETOF(OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem, encoded_size_),
					"MenuItem",
					OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem>::Make,
					OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(PopupMenuRequest_MenuItemList::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PopupMenuRequest.MenuItem: Implementation

// Setters

OP_STATUS
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem::SetLabel(const UniString & v) 
{
	has_bits_.Reference().SetBit(1);
	_label = v;
	return OpStatus::OK;
}


OP_STATUS
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem::SetLabel(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _label.SetCopyData(v, l);
}


void
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem::SetSubMenuItemList(OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_subMenuItemList);
	_subMenuItemList = v;
}

// END: PopupMenuRequest.MenuItem: Implementation

//   END: Message: MenuItem

//   BEGIN: Message: MenuItemList
/*static*/
const OpProtobufMessage *
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList::GetMessageDescriptor(OpWindowcommanderMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpWindowcommanderMessages_Descriptors::_gen_MessageOffs_popup_menu_request_menu_item_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("menuItems"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList,
						_menuItems
						);

	message = OP_NEW(OpProtobufMessage,
					(OpWindowcommanderMessages_Descriptors::_gen_MsgID_popup_menu_request_menu_item_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList, has_bits_),
					OP_PROTO_OFFSETOF(OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList, encoded_size_),
					"MenuItemList",
					OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList>::Make,
					OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PopupMenuRequest_MenuItem::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: PopupMenuRequest.MenuItemList: Implementation

// Setters

OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem> &
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList::GetMenuItemsRef() 
{
	has_bits_.Reference().SetBit(0);
	return _menuItems;
}

// END: PopupMenuRequest.MenuItemList: Implementation

//   END: Message: MenuItemList

//   BEGIN: Message: PopupMenuRequest
/*static*/
const OpProtobufMessage *
OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(OpWindowcommanderMessages_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpWindowcommanderMessages_Descriptors::_gen_MessageOffs_popup_menu_request_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("documentMenuItemList"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpWindowcommanderMessages_MessageSet::PopupMenuRequest,
						_documentMenuItemList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpWindowcommanderMessages_Descriptors::_gen_MsgID_popup_menu_request_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpWindowcommanderMessages_MessageSet::PopupMenuRequest, has_bits_),
					OP_PROTO_OFFSETOF(OpWindowcommanderMessages_MessageSet::PopupMenuRequest, encoded_size_),
					"PopupMenuRequest",
					OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest>::Make,
					OpProtobufMessageVector<OpWindowcommanderMessages_MessageSet::PopupMenuRequest>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(PopupMenuRequest_MenuItemList::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: PopupMenuRequest: Implementation




// Setters

OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList &
OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetDocumentMenuItemListRef() 
{
	return _documentMenuItemList;
}

// END: PopupMenuRequest: Implementation

//   END: Message: PopupMenuRequest


// END: Messages






