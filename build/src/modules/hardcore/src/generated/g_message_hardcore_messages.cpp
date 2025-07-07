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

// Generated from ../../modules/hardcore/component/messages.proto

#include "core/pch.h"

#ifndef G_MESSAGE_HARDCORE_MESSAGES_CPP
#define G_MESSAGE_HARDCORE_MESSAGES_CPP



#include "modules/hardcore/src/generated/g_message_hardcore_messages.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpComponentManagerResponseMessage

OpComponentManagerResponseMessage::~OpComponentManagerResponseMessage()
{
}

/* static */ OpComponentManagerResponseMessage*
OpComponentManagerResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpComponentManagerResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpComponentManagerResponseMessage*
OpComponentManagerResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpComponentManagerResponseMessage *msg = OpComponentManagerResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::ComponentManagerResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpComponentManagerResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::ComponentManagerResponse *proto = const_cast<OpHardcoreMessages_MessageSet::ComponentManagerResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::ComponentManagerResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpComponentManagerResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::ComponentManagerResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpComponentManagerResponseMessage


// BEGIN: Message OpComponentRequestMessage

OpComponentRequestMessage::~OpComponentRequestMessage()
{
}

/* static */ OpComponentRequestMessage*
OpComponentRequestMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpComponentRequestMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpComponentRequestMessage*
OpComponentRequestMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpComponentRequestMessage *msg = OpComponentRequestMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::ComponentRequest::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpComponentRequestMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::ComponentRequest *proto = const_cast<OpHardcoreMessages_MessageSet::ComponentRequest *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::ComponentRequest::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpComponentRequestMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::ComponentRequest::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpComponentRequestMessage


// BEGIN: Message OpNumberMessage

OpNumberMessage::~OpNumberMessage()
{
}

/* static */ OpNumberMessage*
OpNumberMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpNumberMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpNumberMessage*
OpNumberMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpNumberMessage *msg = OpNumberMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::Number::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpNumberMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::Number *proto = const_cast<OpHardcoreMessages_MessageSet::Number *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::Number::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpNumberMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::Number::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpNumberMessage


// BEGIN: Message OpPeerConnectedMessage

OpPeerConnectedMessage::~OpPeerConnectedMessage()
{
}

/* static */ OpPeerConnectedMessage*
OpPeerConnectedMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPeerConnectedMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPeerConnectedMessage*
OpPeerConnectedMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPeerConnectedMessage *msg = OpPeerConnectedMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::PeerConnected::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPeerConnectedMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::PeerConnected *proto = const_cast<OpHardcoreMessages_MessageSet::PeerConnected *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::PeerConnected::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPeerConnectedMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::PeerConnected::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPeerConnectedMessage


// BEGIN: Message OpPeerDisconnectedMessage

OpPeerDisconnectedMessage::~OpPeerDisconnectedMessage()
{
}

/* static */ OpPeerDisconnectedMessage*
OpPeerDisconnectedMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPeerDisconnectedMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPeerDisconnectedMessage*
OpPeerDisconnectedMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPeerDisconnectedMessage *msg = OpPeerDisconnectedMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::PeerDisconnected::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPeerDisconnectedMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::PeerDisconnected *proto = const_cast<OpHardcoreMessages_MessageSet::PeerDisconnected *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::PeerDisconnected::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPeerDisconnectedMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::PeerDisconnected::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPeerDisconnectedMessage


// BEGIN: Message OpPeerPendingMessage

OpPeerPendingMessage::~OpPeerPendingMessage()
{
}

/* static */ OpPeerPendingMessage*
OpPeerPendingMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPeerPendingMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPeerPendingMessage*
OpPeerPendingMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPeerPendingMessage *msg = OpPeerPendingMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::PeerPending::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPeerPendingMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::PeerPending *proto = const_cast<OpHardcoreMessages_MessageSet::PeerPending *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::PeerPending::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPeerPendingMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::PeerPending::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPeerPendingMessage


// BEGIN: Message OpStatusMessage

OpStatusMessage::~OpStatusMessage()
{
}

/* static */ OpStatusMessage*
OpStatusMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpStatusMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpStatusMessage*
OpStatusMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpStatusMessage *msg = OpStatusMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::Status::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpStatusMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::Status *proto = const_cast<OpHardcoreMessages_MessageSet::Status *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::Status::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpStatusMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::Status::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpStatusMessage


// BEGIN: Message OpTextMessage

OpTextMessage::~OpTextMessage()
{
}

/* static */ OpTextMessage*
OpTextMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpTextMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpTextMessage*
OpTextMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpTextMessage *msg = OpTextMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::Text::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpTextMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreMessages_MessageSet::Text *proto = const_cast<OpHardcoreMessages_MessageSet::Text *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreMessages_MessageSet::Text::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpTextMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreMessages_MessageSet::Text::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpTextMessage::SetText(const UniString & v) 
{
	return protobuf_data.SetText(v);
}


OP_STATUS
OpTextMessage::SetText(const uni_char * v, int l) 
{
	return protobuf_data.SetText(v, l);
}




// END: Message OpTextMessage


// END: Message classes


#endif // G_MESSAGE_HARDCORE_MESSAGES_CPP
