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






#include "modules/windowcommander/src/generated/g_proto_descriptor_windowcommander_messages.h"
#include "modules/windowcommander/src/generated/g_proto_windowcommander_messages.h"



// BEGIN: OpWindowcommanderMessages_Descriptors

OpWindowcommanderMessages_Descriptors::OpWindowcommanderMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpWindowcommanderMessages_Descriptors::~OpWindowcommanderMessages_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpWindowcommanderMessages_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpWindowcommanderMessages_Descriptors::Get(unsigned id) const
{
	OpWindowcommanderMessages_Descriptors *descriptors = const_cast<OpWindowcommanderMessages_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_popup_menu_request_menu_item_:
		return OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItem::GetMessageDescriptor(descriptors);

	case _gen_MsgID_popup_menu_request_menu_item_list_:
		return OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_popup_menu_request_:
		return OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpWindowcommanderMessages_Descriptors






