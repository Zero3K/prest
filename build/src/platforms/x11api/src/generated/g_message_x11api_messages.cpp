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

// Generated from ../../platforms/x11api/messages.proto

#include "core/pch.h"

#ifndef G_MESSAGE_X11API_MESSAGES_CPP
#define G_MESSAGE_X11API_MESSAGES_CPP

#ifdef NS4P_UNIX_PLATFORM

#include "platforms/x11api/src/generated/g_message_x11api_messages.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpBrowserWindowInformationMessage

OpBrowserWindowInformationMessage::~OpBrowserWindowInformationMessage()
{
}

/* static */ OpBrowserWindowInformationMessage*
OpBrowserWindowInformationMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpBrowserWindowInformationMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpBrowserWindowInformationMessage*
OpBrowserWindowInformationMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpBrowserWindowInformationMessage *msg = OpBrowserWindowInformationMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::BrowserWindowInformation::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpBrowserWindowInformationMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpX11apiMessages_MessageSet::BrowserWindowInformation *proto = const_cast<OpX11apiMessages_MessageSet::BrowserWindowInformation *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::BrowserWindowInformation::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpBrowserWindowInformationMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpX11apiMessages_MessageSet::BrowserWindowInformation::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpBrowserWindowInformationMessage


// BEGIN: Message OpBrowserWindowInformationResponseMessage

OpBrowserWindowInformationResponseMessage::~OpBrowserWindowInformationResponseMessage()
{
}

/* static */ OpBrowserWindowInformationResponseMessage*
OpBrowserWindowInformationResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpBrowserWindowInformationResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpBrowserWindowInformationResponseMessage*
OpBrowserWindowInformationResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpBrowserWindowInformationResponseMessage *msg = OpBrowserWindowInformationResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpBrowserWindowInformationResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpX11apiMessages_MessageSet::BrowserWindowInformationResponse *proto = const_cast<OpX11apiMessages_MessageSet::BrowserWindowInformationResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpBrowserWindowInformationResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpX11apiMessages_MessageSet::BrowserWindowInformationResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpBrowserWindowInformationResponseMessage::SetDisplayName(const UniString & v) 
{
	return protobuf_data.SetDisplayName(v);
}


OP_STATUS
OpBrowserWindowInformationResponseMessage::SetDisplayName(const uni_char * v, int l) 
{
	return protobuf_data.SetDisplayName(v, l);
}




// END: Message OpBrowserWindowInformationResponseMessage


// BEGIN: Message OpPluginGtkPlugAddedMessage

OpPluginGtkPlugAddedMessage::~OpPluginGtkPlugAddedMessage()
{
}

/* static */ OpPluginGtkPlugAddedMessage*
OpPluginGtkPlugAddedMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGtkPlugAddedMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGtkPlugAddedMessage*
OpPluginGtkPlugAddedMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGtkPlugAddedMessage *msg = OpPluginGtkPlugAddedMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::PluginGtkPlugAdded::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGtkPlugAddedMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpX11apiMessages_MessageSet::PluginGtkPlugAdded *proto = const_cast<OpX11apiMessages_MessageSet::PluginGtkPlugAdded *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::PluginGtkPlugAdded::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGtkPlugAddedMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpX11apiMessages_MessageSet::PluginGtkPlugAdded::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginGtkPlugAddedMessage


// BEGIN: Message OpPluginParentChangedMessage

OpPluginParentChangedMessage::~OpPluginParentChangedMessage()
{
}

/* static */ OpPluginParentChangedMessage*
OpPluginParentChangedMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginParentChangedMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginParentChangedMessage*
OpPluginParentChangedMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginParentChangedMessage *msg = OpPluginParentChangedMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::PluginParentChanged::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginParentChangedMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpX11apiMessages_MessageSet::PluginParentChanged *proto = const_cast<OpX11apiMessages_MessageSet::PluginParentChanged *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpX11apiMessages_MessageSet::PluginParentChanged::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginParentChangedMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpX11apiMessages_MessageSet::PluginParentChanged::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_x11api_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginParentChangedMessage


// END: Message classes
#endif // NS4P_UNIX_PLATFORM

#endif // G_MESSAGE_X11API_MESSAGES_CPP
