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

#ifndef G_MESSAGE_MAC_MESSAGES_CPP
#define G_MESSAGE_MAC_MESSAGES_CPP

#ifdef _MACINTOSH_

#include "platforms/mac/src/generated/g_message_mac_messages.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpMacPluginContextMenuShownMessage

OpMacPluginContextMenuShownMessage::~OpMacPluginContextMenuShownMessage()
{
}

/* static */ OpMacPluginContextMenuShownMessage*
OpMacPluginContextMenuShownMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginContextMenuShownMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginContextMenuShownMessage*
OpMacPluginContextMenuShownMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginContextMenuShownMessage *msg = OpMacPluginContextMenuShownMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginContextMenuShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginContextMenuShownMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginContextMenuShown *proto = const_cast<OpMacMessages_MessageSet::MacPluginContextMenuShown *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginContextMenuShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginContextMenuShownMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginContextMenuShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginContextMenuShownMessage


// BEGIN: Message OpMacPluginCursorShownMessage

OpMacPluginCursorShownMessage::~OpMacPluginCursorShownMessage()
{
}

/* static */ OpMacPluginCursorShownMessage*
OpMacPluginCursorShownMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginCursorShownMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginCursorShownMessage*
OpMacPluginCursorShownMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginCursorShownMessage *msg = OpMacPluginCursorShownMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginCursorShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginCursorShownMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginCursorShown *proto = const_cast<OpMacMessages_MessageSet::MacPluginCursorShown *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginCursorShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginCursorShownMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginCursorShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginCursorShownMessage


// BEGIN: Message OpMacPluginDesktopWindowMovementMessage

OpMacPluginDesktopWindowMovementMessage::~OpMacPluginDesktopWindowMovementMessage()
{
}

/* static */ OpMacPluginDesktopWindowMovementMessage*
OpMacPluginDesktopWindowMovementMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginDesktopWindowMovementMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginDesktopWindowMovementMessage*
OpMacPluginDesktopWindowMovementMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginDesktopWindowMovementMessage *msg = OpMacPluginDesktopWindowMovementMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginDesktopWindowMovement::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginDesktopWindowMovementMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginDesktopWindowMovement *proto = const_cast<OpMacMessages_MessageSet::MacPluginDesktopWindowMovement *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginDesktopWindowMovement::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginDesktopWindowMovementMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginDesktopWindowMovement::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginDesktopWindowMovementMessage


// BEGIN: Message OpMacPluginFullscreenMessage

OpMacPluginFullscreenMessage::~OpMacPluginFullscreenMessage()
{
}

/* static */ OpMacPluginFullscreenMessage*
OpMacPluginFullscreenMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginFullscreenMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginFullscreenMessage*
OpMacPluginFullscreenMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginFullscreenMessage *msg = OpMacPluginFullscreenMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginFullscreen::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginFullscreenMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginFullscreen *proto = const_cast<OpMacMessages_MessageSet::MacPluginFullscreen *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginFullscreen::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginFullscreenMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginFullscreen::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginFullscreenMessage


// BEGIN: Message OpMacPluginIMETextMessage

OpMacPluginIMETextMessage::~OpMacPluginIMETextMessage()
{
}

/* static */ OpMacPluginIMETextMessage*
OpMacPluginIMETextMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginIMETextMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginIMETextMessage*
OpMacPluginIMETextMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginIMETextMessage *msg = OpMacPluginIMETextMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginIMEText::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginIMETextMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginIMEText *proto = const_cast<OpMacMessages_MessageSet::MacPluginIMEText *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginIMEText::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginIMETextMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginIMEText::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpMacPluginIMETextMessage::SetText(const UniString & v) 
{
	return protobuf_data.SetText(v);
}


OP_STATUS
OpMacPluginIMETextMessage::SetText(const uni_char * v, int l) 
{
	return protobuf_data.SetText(v, l);
}




// END: Message OpMacPluginIMETextMessage


// BEGIN: Message OpMacPluginInfoMessage

OpMacPluginInfoMessage::~OpMacPluginInfoMessage()
{
}

/* static */ OpMacPluginInfoMessage*
OpMacPluginInfoMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginInfoMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginInfoMessage*
OpMacPluginInfoMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginInfoMessage *msg = OpMacPluginInfoMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginInfoMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginInfo *proto = const_cast<OpMacMessages_MessageSet::MacPluginInfo *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginInfoMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginInfoMessage


// BEGIN: Message OpMacPluginInfoResponseMessage

OpMacPluginInfoResponseMessage::~OpMacPluginInfoResponseMessage()
{
}

/* static */ OpMacPluginInfoResponseMessage*
OpMacPluginInfoResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginInfoResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginInfoResponseMessage*
OpMacPluginInfoResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginInfoResponseMessage *msg = OpMacPluginInfoResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginInfoResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginInfoResponse *proto = const_cast<OpMacMessages_MessageSet::MacPluginInfoResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginInfoResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginInfoResponseMessage


// BEGIN: Message OpMacPluginUpdateViewMessage

OpMacPluginUpdateViewMessage::~OpMacPluginUpdateViewMessage()
{
}

/* static */ OpMacPluginUpdateViewMessage*
OpMacPluginUpdateViewMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginUpdateViewMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginUpdateViewMessage*
OpMacPluginUpdateViewMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginUpdateViewMessage *msg = OpMacPluginUpdateViewMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginUpdateView::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginUpdateViewMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginUpdateView *proto = const_cast<OpMacMessages_MessageSet::MacPluginUpdateView *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginUpdateView::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginUpdateViewMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginUpdateView::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginUpdateViewMessage


// BEGIN: Message OpMacPluginVisibilityMessage

OpMacPluginVisibilityMessage::~OpMacPluginVisibilityMessage()
{
}

/* static */ OpMacPluginVisibilityMessage*
OpMacPluginVisibilityMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginVisibilityMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginVisibilityMessage*
OpMacPluginVisibilityMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginVisibilityMessage *msg = OpMacPluginVisibilityMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginVisibility::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginVisibilityMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginVisibility *proto = const_cast<OpMacMessages_MessageSet::MacPluginVisibility *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginVisibility::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginVisibilityMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginVisibility::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginVisibilityMessage


// BEGIN: Message OpMacPluginWindowShownMessage

OpMacPluginWindowShownMessage::~OpMacPluginWindowShownMessage()
{
}

/* static */ OpMacPluginWindowShownMessage*
OpMacPluginWindowShownMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpMacPluginWindowShownMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpMacPluginWindowShownMessage*
OpMacPluginWindowShownMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpMacPluginWindowShownMessage *msg = OpMacPluginWindowShownMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginWindowShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpMacPluginWindowShownMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpMacMessages_MessageSet::MacPluginWindowShown *proto = const_cast<OpMacMessages_MessageSet::MacPluginWindowShown *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpMacMessages_MessageSet::MacPluginWindowShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpMacPluginWindowShownMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpMacMessages_MessageSet::MacPluginWindowShown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_mac_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpMacPluginWindowShownMessage


// END: Message classes
#endif // _MACINTOSH_

#endif // G_MESSAGE_MAC_MESSAGES_CPP
