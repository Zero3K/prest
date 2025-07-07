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

#ifndef G_MESSAGE_WINDOWCOMMANDER_MESSAGES_CPP
#define G_MESSAGE_WINDOWCOMMANDER_MESSAGES_CPP



#include "modules/windowcommander/src/generated/g_message_windowcommander_messages.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpPopupMenuRequestMessage

OpPopupMenuRequestMessage::~OpPopupMenuRequestMessage()
{
}

/* static */ OpPopupMenuRequestMessage*
OpPopupMenuRequestMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPopupMenuRequestMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPopupMenuRequestMessage*
OpPopupMenuRequestMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPopupMenuRequestMessage *msg = OpPopupMenuRequestMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windowcommander_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPopupMenuRequestMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpWindowcommanderMessages_MessageSet::PopupMenuRequest *proto = const_cast<OpWindowcommanderMessages_MessageSet::PopupMenuRequest *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windowcommander_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPopupMenuRequestMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpWindowcommanderMessages_MessageSet::PopupMenuRequest::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windowcommander_messages));
	return d ? d->GetName() : NULL;
}
OpWindowcommanderMessages_MessageSet::PopupMenuRequest_MenuItemList &
OpPopupMenuRequestMessage::GetDocumentMenuItemListRef() 
{
	return protobuf_data.GetDocumentMenuItemListRef();
}




// END: Message OpPopupMenuRequestMessage


// END: Message classes


#endif // G_MESSAGE_WINDOWCOMMANDER_MESSAGES_CPP
