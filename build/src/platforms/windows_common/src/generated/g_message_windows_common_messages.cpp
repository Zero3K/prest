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

// Generated from ../../platforms/windows_common/messages.proto

#include "core/pch.h"

#ifndef G_MESSAGE_WINDOWS_COMMON_MESSAGES_CPP
#define G_MESSAGE_WINDOWS_COMMON_MESSAGES_CPP

#ifdef _WIN32

#include "platforms/windows_common/src/generated/g_message_windows_common_messages.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpWindowsPluginWindowInfoMessage

OpWindowsPluginWindowInfoMessage::~OpWindowsPluginWindowInfoMessage()
{
}

/* static */ OpWindowsPluginWindowInfoMessage*
OpWindowsPluginWindowInfoMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpWindowsPluginWindowInfoMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpWindowsPluginWindowInfoMessage*
OpWindowsPluginWindowInfoMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpWindowsPluginWindowInfoMessage *msg = OpWindowsPluginWindowInfoMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windows_common_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpWindowsPluginWindowInfoMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo *proto = const_cast<OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windows_common_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpWindowsPluginWindowInfoMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windows_common_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpWindowsPluginWindowInfoMessage


// BEGIN: Message OpWindowsPluginWindowInfoResponseMessage

OpWindowsPluginWindowInfoResponseMessage::~OpWindowsPluginWindowInfoResponseMessage()
{
}

/* static */ OpWindowsPluginWindowInfoResponseMessage*
OpWindowsPluginWindowInfoResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpWindowsPluginWindowInfoResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpWindowsPluginWindowInfoResponseMessage*
OpWindowsPluginWindowInfoResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpWindowsPluginWindowInfoResponseMessage *msg = OpWindowsPluginWindowInfoResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windows_common_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpWindowsPluginWindowInfoResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse *proto = const_cast<OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windows_common_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpWindowsPluginWindowInfoResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpWindows_commonMessages_MessageSet::WindowsPluginWindowInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_windows_common_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpWindowsPluginWindowInfoResponseMessage


// END: Message classes
#endif // _WIN32

#endif // G_MESSAGE_WINDOWS_COMMON_MESSAGES_CPP
