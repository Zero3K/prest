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

// Generated from ../../modules/ns4plugins/component/messages.proto

#include "core/pch.h"

#ifndef G_MESSAGE_NS4PLUGINS_MESSAGES_CPP
#define G_MESSAGE_NS4PLUGINS_MESSAGES_CPP



#include "modules/ns4plugins/src/generated/g_message_ns4plugins_messages.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpPluginCallbackMessage

OpPluginCallbackMessage::~OpPluginCallbackMessage()
{
}

/* static */ OpPluginCallbackMessage*
OpPluginCallbackMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginCallbackMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginCallbackMessage*
OpPluginCallbackMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginCallbackMessage *msg = OpPluginCallbackMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginCallback::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginCallbackMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginCallback *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginCallback *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginCallback::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginCallbackMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginCallback::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginCallbackMessage


// BEGIN: Message OpPluginClearSiteDataMessage

OpPluginClearSiteDataMessage::~OpPluginClearSiteDataMessage()
{
}

/* static */ OpPluginClearSiteDataMessage*
OpPluginClearSiteDataMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginClearSiteDataMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginClearSiteDataMessage*
OpPluginClearSiteDataMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginClearSiteDataMessage *msg = OpPluginClearSiteDataMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginClearSiteData::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginClearSiteDataMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginClearSiteData *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginClearSiteData *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginClearSiteData::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginClearSiteDataMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginClearSiteData::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginClearSiteDataMessage::SetSite(const UniString & v) 
{
	return protobuf_data.SetSite(v);
}


OP_STATUS
OpPluginClearSiteDataMessage::SetSite(const uni_char * v, int l) 
{
	return protobuf_data.SetSite(v, l);
}




// END: Message OpPluginClearSiteDataMessage


// BEGIN: Message OpPluginCreateObjectMessage

OpPluginCreateObjectMessage::~OpPluginCreateObjectMessage()
{
}

/* static */ OpPluginCreateObjectMessage*
OpPluginCreateObjectMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginCreateObjectMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginCreateObjectMessage*
OpPluginCreateObjectMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginCreateObjectMessage *msg = OpPluginCreateObjectMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginCreateObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginCreateObjectMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginCreateObject *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginCreateObject *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginCreateObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginCreateObjectMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginCreateObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginCreateObjectMessage


// BEGIN: Message OpPluginCreateObjectResponseMessage

OpPluginCreateObjectResponseMessage::~OpPluginCreateObjectResponseMessage()
{
}

/* static */ OpPluginCreateObjectResponseMessage*
OpPluginCreateObjectResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginCreateObjectResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginCreateObjectResponseMessage*
OpPluginCreateObjectResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginCreateObjectResponseMessage *msg = OpPluginCreateObjectResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginCreateObjectResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginCreateObjectResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginCreateObjectResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
void
OpPluginCreateObjectResponseMessage::SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	protobuf_data.SetObject(v);
}




// END: Message OpPluginCreateObjectResponseMessage


// BEGIN: Message OpPluginDestroyMessage

OpPluginDestroyMessage::~OpPluginDestroyMessage()
{
}

/* static */ OpPluginDestroyMessage*
OpPluginDestroyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginDestroyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginDestroyMessage*
OpPluginDestroyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginDestroyMessage *msg = OpPluginDestroyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginDestroy::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginDestroyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginDestroy *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginDestroy *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginDestroy::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginDestroyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginDestroy::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginDestroyMessage


// BEGIN: Message OpPluginDestroyResponseMessage

OpPluginDestroyResponseMessage::~OpPluginDestroyResponseMessage()
{
}

/* static */ OpPluginDestroyResponseMessage*
OpPluginDestroyResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginDestroyResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginDestroyResponseMessage*
OpPluginDestroyResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginDestroyResponseMessage *msg = OpPluginDestroyResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginDestroyResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginDestroyResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginDestroyResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginDestroyResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginDestroyResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginDestroyResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginDestroyResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginDestroyResponseMessage


// BEGIN: Message OpPluginDestroyStreamMessage

OpPluginDestroyStreamMessage::~OpPluginDestroyStreamMessage()
{
}

/* static */ OpPluginDestroyStreamMessage*
OpPluginDestroyStreamMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginDestroyStreamMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginDestroyStreamMessage*
OpPluginDestroyStreamMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginDestroyStreamMessage *msg = OpPluginDestroyStreamMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginDestroyStream::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginDestroyStreamMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginDestroyStream *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginDestroyStream *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginDestroyStream::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginDestroyStreamMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginDestroyStream::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginStream &
OpPluginDestroyStreamMessage::GetStreamRef() 
{
	return protobuf_data.GetStreamRef();
}




// END: Message OpPluginDestroyStreamMessage


// BEGIN: Message OpPluginEnumerateMessage

OpPluginEnumerateMessage::~OpPluginEnumerateMessage()
{
}

/* static */ OpPluginEnumerateMessage*
OpPluginEnumerateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginEnumerateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginEnumerateMessage*
OpPluginEnumerateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginEnumerateMessage *msg = OpPluginEnumerateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginEnumerate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginEnumerateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginEnumerate *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginEnumerate *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginEnumerate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginEnumerateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginEnumerate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginEnumerateMessage::SetSearchPaths(const UniString & v) 
{
	return protobuf_data.SetSearchPaths(v);
}


OP_STATUS
OpPluginEnumerateMessage::SetSearchPaths(const uni_char * v, int l) 
{
	return protobuf_data.SetSearchPaths(v, l);
}




// END: Message OpPluginEnumerateMessage


// BEGIN: Message OpPluginEnumerateResponseMessage

OpPluginEnumerateResponseMessage::~OpPluginEnumerateResponseMessage()
{
}

/* static */ OpPluginEnumerateResponseMessage*
OpPluginEnumerateResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginEnumerateResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginEnumerateResponseMessage*
OpPluginEnumerateResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginEnumerateResponseMessage *msg = OpPluginEnumerateResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginEnumerateResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginEnumerateResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginEnumerateResponse_LibraryPath> &
OpPluginEnumerateResponseMessage::GetLibraryPathsRef() 
{
	return protobuf_data.GetLibraryPathsRef();
}




// END: Message OpPluginEnumerateResponseMessage


// BEGIN: Message OpPluginErrorMessage

OpPluginErrorMessage::~OpPluginErrorMessage()
{
}

/* static */ OpPluginErrorMessage*
OpPluginErrorMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginErrorMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginErrorMessage*
OpPluginErrorMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginErrorMessage *msg = OpPluginErrorMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginError::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginErrorMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginError *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginError *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginError::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginErrorMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginError::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginErrorMessage


// BEGIN: Message OpPluginEvaluateMessage

OpPluginEvaluateMessage::~OpPluginEvaluateMessage()
{
}

/* static */ OpPluginEvaluateMessage*
OpPluginEvaluateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginEvaluateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginEvaluateMessage*
OpPluginEvaluateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginEvaluateMessage *msg = OpPluginEvaluateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginEvaluate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginEvaluateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginEvaluate *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginEvaluate *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginEvaluate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginEvaluateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginEvaluate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginEvaluateMessage::SetScript(const UniString & v) 
{
	return protobuf_data.SetScript(v);
}


OP_STATUS
OpPluginEvaluateMessage::SetScript(const uni_char * v, int l) 
{
	return protobuf_data.SetScript(v, l);
}


void
OpPluginEvaluateMessage::SetObject(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	protobuf_data.SetObject(v);
}




// END: Message OpPluginEvaluateMessage


// BEGIN: Message OpPluginExceptionMessage

OpPluginExceptionMessage::~OpPluginExceptionMessage()
{
}

/* static */ OpPluginExceptionMessage*
OpPluginExceptionMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginExceptionMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginExceptionMessage*
OpPluginExceptionMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginExceptionMessage *msg = OpPluginExceptionMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginException::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginExceptionMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginException *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginException *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginException::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginExceptionMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginException::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginExceptionMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OP_STATUS
OpPluginExceptionMessage::SetMessage(const UniString & v) 
{
	return protobuf_data.SetMessage(v);
}


OP_STATUS
OpPluginExceptionMessage::SetMessage(const uni_char * v, int l) 
{
	return protobuf_data.SetMessage(v, l);
}




// END: Message OpPluginExceptionMessage


// BEGIN: Message OpPluginFocusEventMessage

OpPluginFocusEventMessage::~OpPluginFocusEventMessage()
{
}

/* static */ OpPluginFocusEventMessage*
OpPluginFocusEventMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginFocusEventMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginFocusEventMessage*
OpPluginFocusEventMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginFocusEventMessage *msg = OpPluginFocusEventMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginFocusEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginFocusEventMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginFocusEvent *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginFocusEvent *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginFocusEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginFocusEventMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginFocusEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginFocusEventMessage


// BEGIN: Message OpPluginGetAuthenticationInfoMessage

OpPluginGetAuthenticationInfoMessage::~OpPluginGetAuthenticationInfoMessage()
{
}

/* static */ OpPluginGetAuthenticationInfoMessage*
OpPluginGetAuthenticationInfoMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetAuthenticationInfoMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetAuthenticationInfoMessage*
OpPluginGetAuthenticationInfoMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetAuthenticationInfoMessage *msg = OpPluginGetAuthenticationInfoMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetAuthenticationInfoMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetAuthenticationInfoMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfo::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetProtocol(const UniString & v) 
{
	return protobuf_data.SetProtocol(v);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetProtocol(const uni_char * v, int l) 
{
	return protobuf_data.SetProtocol(v, l);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetHost(const UniString & v) 
{
	return protobuf_data.SetHost(v);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetHost(const uni_char * v, int l) 
{
	return protobuf_data.SetHost(v, l);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetScheme(const UniString & v) 
{
	return protobuf_data.SetScheme(v);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetScheme(const uni_char * v, int l) 
{
	return protobuf_data.SetScheme(v, l);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetRealm(const UniString & v) 
{
	return protobuf_data.SetRealm(v);
}


OP_STATUS
OpPluginGetAuthenticationInfoMessage::SetRealm(const uni_char * v, int l) 
{
	return protobuf_data.SetRealm(v, l);
}




// END: Message OpPluginGetAuthenticationInfoMessage


// BEGIN: Message OpPluginGetAuthenticationInfoResponseMessage

OpPluginGetAuthenticationInfoResponseMessage::~OpPluginGetAuthenticationInfoResponseMessage()
{
}

/* static */ OpPluginGetAuthenticationInfoResponseMessage*
OpPluginGetAuthenticationInfoResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetAuthenticationInfoResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetAuthenticationInfoResponseMessage*
OpPluginGetAuthenticationInfoResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetAuthenticationInfoResponseMessage *msg = OpPluginGetAuthenticationInfoResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetAuthenticationInfoResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetAuthenticationInfoResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetAuthenticationInfoResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginGetAuthenticationInfoResponseMessage::SetUsername(const UniString & v) 
{
	return protobuf_data.SetUsername(v);
}


OP_STATUS
OpPluginGetAuthenticationInfoResponseMessage::SetUsername(const uni_char * v, int l) 
{
	return protobuf_data.SetUsername(v, l);
}


OP_STATUS
OpPluginGetAuthenticationInfoResponseMessage::SetPassword(const UniString & v) 
{
	return protobuf_data.SetPassword(v);
}


OP_STATUS
OpPluginGetAuthenticationInfoResponseMessage::SetPassword(const uni_char * v, int l) 
{
	return protobuf_data.SetPassword(v, l);
}




// END: Message OpPluginGetAuthenticationInfoResponseMessage


// BEGIN: Message OpPluginGetIntIdentifierMessage

OpPluginGetIntIdentifierMessage::~OpPluginGetIntIdentifierMessage()
{
}

/* static */ OpPluginGetIntIdentifierMessage*
OpPluginGetIntIdentifierMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetIntIdentifierMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetIntIdentifierMessage*
OpPluginGetIntIdentifierMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetIntIdentifierMessage *msg = OpPluginGetIntIdentifierMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetIntIdentifierMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetIntIdentifierMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetIntIdentifier::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginGetIntIdentifierMessage


// BEGIN: Message OpPluginGetPropertyMessage

OpPluginGetPropertyMessage::~OpPluginGetPropertyMessage()
{
}

/* static */ OpPluginGetPropertyMessage*
OpPluginGetPropertyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetPropertyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetPropertyMessage*
OpPluginGetPropertyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetPropertyMessage *msg = OpPluginGetPropertyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetPropertyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetProperty *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetProperty *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetPropertyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginGetPropertyMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginGetPropertyMessage::GetPropertyRef() 
{
	return protobuf_data.GetPropertyRef();
}




// END: Message OpPluginGetPropertyMessage


// BEGIN: Message OpPluginGetSitesWithDataMessage

OpPluginGetSitesWithDataMessage::~OpPluginGetSitesWithDataMessage()
{
}

/* static */ OpPluginGetSitesWithDataMessage*
OpPluginGetSitesWithDataMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetSitesWithDataMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetSitesWithDataMessage*
OpPluginGetSitesWithDataMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetSitesWithDataMessage *msg = OpPluginGetSitesWithDataMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetSitesWithDataMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetSitesWithDataMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetSitesWithData::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginGetSitesWithDataMessage


// BEGIN: Message OpPluginGetSitesWithDataResponseMessage

OpPluginGetSitesWithDataResponseMessage::~OpPluginGetSitesWithDataResponseMessage()
{
}

/* static */ OpPluginGetSitesWithDataResponseMessage*
OpPluginGetSitesWithDataResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetSitesWithDataResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetSitesWithDataResponseMessage*
OpPluginGetSitesWithDataResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetSitesWithDataResponseMessage *msg = OpPluginGetSitesWithDataResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetSitesWithDataResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetSitesWithDataResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetSitesWithDataResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpProtobufValueVector<UniString> &
OpPluginGetSitesWithDataResponseMessage::GetSitesRef() 
{
	return protobuf_data.GetSitesRef();
}




// END: Message OpPluginGetSitesWithDataResponseMessage


// BEGIN: Message OpPluginGetStringIdentifiersMessage

OpPluginGetStringIdentifiersMessage::~OpPluginGetStringIdentifiersMessage()
{
}

/* static */ OpPluginGetStringIdentifiersMessage*
OpPluginGetStringIdentifiersMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetStringIdentifiersMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetStringIdentifiersMessage*
OpPluginGetStringIdentifiersMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetStringIdentifiersMessage *msg = OpPluginGetStringIdentifiersMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetStringIdentifiersMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetStringIdentifiersMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetStringIdentifiers::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpProtobufValueVector<UniString> &
OpPluginGetStringIdentifiersMessage::GetNamesRef() 
{
	return protobuf_data.GetNamesRef();
}




// END: Message OpPluginGetStringIdentifiersMessage


// BEGIN: Message OpPluginGetURLMessage

OpPluginGetURLMessage::~OpPluginGetURLMessage()
{
}

/* static */ OpPluginGetURLMessage*
OpPluginGetURLMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetURLMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetURLMessage*
OpPluginGetURLMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetURLMessage *msg = OpPluginGetURLMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetURLMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetURL *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetURL *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetURLMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginGetURLMessage::SetURL(const OpData & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginGetURLMessage::SetURL(const char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}


OP_STATUS
OpPluginGetURLMessage::SetWindow(const OpData & v) 
{
	return protobuf_data.SetWindow(v);
}


OP_STATUS
OpPluginGetURLMessage::SetWindow(const char * v, int l) 
{
	return protobuf_data.SetWindow(v, l);
}




// END: Message OpPluginGetURLMessage


// BEGIN: Message OpPluginGetURLNotifyMessage

OpPluginGetURLNotifyMessage::~OpPluginGetURLNotifyMessage()
{
}

/* static */ OpPluginGetURLNotifyMessage*
OpPluginGetURLNotifyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetURLNotifyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetURLNotifyMessage*
OpPluginGetURLNotifyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetURLNotifyMessage *msg = OpPluginGetURLNotifyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetURLNotifyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetURLNotify *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetURLNotify *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetURLNotifyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetURLNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginGetURLNotifyMessage::SetURL(const OpData & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginGetURLNotifyMessage::SetURL(const char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}


OP_STATUS
OpPluginGetURLNotifyMessage::SetWindow(const OpData & v) 
{
	return protobuf_data.SetWindow(v);
}


OP_STATUS
OpPluginGetURLNotifyMessage::SetWindow(const char * v, int l) 
{
	return protobuf_data.SetWindow(v, l);
}




// END: Message OpPluginGetURLNotifyMessage


// BEGIN: Message OpPluginGetValueMessage

OpPluginGetValueMessage::~OpPluginGetValueMessage()
{
}

/* static */ OpPluginGetValueMessage*
OpPluginGetValueMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetValueMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetValueMessage*
OpPluginGetValueMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetValueMessage *msg = OpPluginGetValueMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValue::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetValueMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetValue *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetValue *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValue::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetValueMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetValue::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginGetValueMessage


// BEGIN: Message OpPluginGetValueForURLMessage

OpPluginGetValueForURLMessage::~OpPluginGetValueForURLMessage()
{
}

/* static */ OpPluginGetValueForURLMessage*
OpPluginGetValueForURLMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetValueForURLMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetValueForURLMessage*
OpPluginGetValueForURLMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetValueForURLMessage *msg = OpPluginGetValueForURLMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetValueForURLMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetValueForURL *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetValueForURL *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetValueForURLMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetValueForURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginGetValueForURLMessage::SetURL(const UniString & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginGetValueForURLMessage::SetURL(const uni_char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}




// END: Message OpPluginGetValueForURLMessage


// BEGIN: Message OpPluginGetValueForURLResponseMessage

OpPluginGetValueForURLResponseMessage::~OpPluginGetValueForURLResponseMessage()
{
}

/* static */ OpPluginGetValueForURLResponseMessage*
OpPluginGetValueForURLResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetValueForURLResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetValueForURLResponseMessage*
OpPluginGetValueForURLResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetValueForURLResponseMessage *msg = OpPluginGetValueForURLResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetValueForURLResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetValueForURLResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetValueForURLResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginGetValueForURLResponseMessage::SetValue(const UniString & v) 
{
	return protobuf_data.SetValue(v);
}


OP_STATUS
OpPluginGetValueForURLResponseMessage::SetValue(const uni_char * v, int l) 
{
	return protobuf_data.SetValue(v, l);
}




// END: Message OpPluginGetValueForURLResponseMessage


// BEGIN: Message OpPluginGetValueResponseMessage

OpPluginGetValueResponseMessage::~OpPluginGetValueResponseMessage()
{
}

/* static */ OpPluginGetValueResponseMessage*
OpPluginGetValueResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginGetValueResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginGetValueResponseMessage*
OpPluginGetValueResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginGetValueResponseMessage *msg = OpPluginGetValueResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginGetValueResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginGetValueResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginGetValueResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginGetValueResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginGetValueResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
void
OpPluginGetValueResponseMessage::SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	protobuf_data.SetObjectValue(v);
}


OP_STATUS
OpPluginGetValueResponseMessage::SetStringValue(const UniString & v) 
{
	return protobuf_data.SetStringValue(v);
}


OP_STATUS
OpPluginGetValueResponseMessage::SetStringValue(const uni_char * v, int l) 
{
	return protobuf_data.SetStringValue(v, l);
}




// END: Message OpPluginGetValueResponseMessage


// BEGIN: Message OpPluginHasMethodMessage

OpPluginHasMethodMessage::~OpPluginHasMethodMessage()
{
}

/* static */ OpPluginHasMethodMessage*
OpPluginHasMethodMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginHasMethodMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginHasMethodMessage*
OpPluginHasMethodMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginHasMethodMessage *msg = OpPluginHasMethodMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginHasMethodMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginHasMethod *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginHasMethod *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginHasMethodMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginHasMethod::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginHasMethodMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginHasMethodMessage::GetMethodRef() 
{
	return protobuf_data.GetMethodRef();
}




// END: Message OpPluginHasMethodMessage


// BEGIN: Message OpPluginHasPropertyMessage

OpPluginHasPropertyMessage::~OpPluginHasPropertyMessage()
{
}

/* static */ OpPluginHasPropertyMessage*
OpPluginHasPropertyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginHasPropertyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginHasPropertyMessage*
OpPluginHasPropertyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginHasPropertyMessage *msg = OpPluginHasPropertyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginHasPropertyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginHasProperty *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginHasProperty *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginHasPropertyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginHasProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginHasPropertyMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginHasPropertyMessage::GetPropertyRef() 
{
	return protobuf_data.GetPropertyRef();
}




// END: Message OpPluginHasPropertyMessage


// BEGIN: Message OpPluginIdentifiersMessage

OpPluginIdentifiersMessage::~OpPluginIdentifiersMessage()
{
}

/* static */ OpPluginIdentifiersMessage*
OpPluginIdentifiersMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginIdentifiersMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginIdentifiersMessage*
OpPluginIdentifiersMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginIdentifiersMessage *msg = OpPluginIdentifiersMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginIdentifiers::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginIdentifiersMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginIdentifiers *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginIdentifiers *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginIdentifiers::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginIdentifiersMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginIdentifiers::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> &
OpPluginIdentifiersMessage::GetIdentifiersRef() 
{
	return protobuf_data.GetIdentifiersRef();
}




// END: Message OpPluginIdentifiersMessage


// BEGIN: Message OpPluginInitializeMessage

OpPluginInitializeMessage::~OpPluginInitializeMessage()
{
}

/* static */ OpPluginInitializeMessage*
OpPluginInitializeMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginInitializeMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginInitializeMessage*
OpPluginInitializeMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginInitializeMessage *msg = OpPluginInitializeMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInitialize::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginInitializeMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginInitialize *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginInitialize *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInitialize::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginInitializeMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginInitialize::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginInitializeMessage


// BEGIN: Message OpPluginInitializeResponseMessage

OpPluginInitializeResponseMessage::~OpPluginInitializeResponseMessage()
{
}

/* static */ OpPluginInitializeResponseMessage*
OpPluginInitializeResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginInitializeResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginInitializeResponseMessage*
OpPluginInitializeResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginInitializeResponseMessage *msg = OpPluginInitializeResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInitializeResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginInitializeResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginInitializeResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginInitializeResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInitializeResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginInitializeResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginInitializeResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginInitializeResponseMessage


// BEGIN: Message OpPluginInvalidateMessage

OpPluginInvalidateMessage::~OpPluginInvalidateMessage()
{
}

/* static */ OpPluginInvalidateMessage*
OpPluginInvalidateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginInvalidateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginInvalidateMessage*
OpPluginInvalidateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginInvalidateMessage *msg = OpPluginInvalidateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInvalidate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginInvalidateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginInvalidate *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginInvalidate *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInvalidate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginInvalidateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginInvalidate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginRect &
OpPluginInvalidateMessage::GetRectRef() 
{
	return protobuf_data.GetRectRef();
}




// END: Message OpPluginInvalidateMessage


// BEGIN: Message OpPluginInvokeMessage

OpPluginInvokeMessage::~OpPluginInvokeMessage()
{
}

/* static */ OpPluginInvokeMessage*
OpPluginInvokeMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginInvokeMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginInvokeMessage*
OpPluginInvokeMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginInvokeMessage *msg = OpPluginInvokeMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInvoke::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginInvokeMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginInvoke *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginInvoke *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInvoke::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginInvokeMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginInvoke::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginInvokeMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginInvokeMessage::GetMethodRef() 
{
	return protobuf_data.GetMethodRef();
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> &
OpPluginInvokeMessage::GetArgumentsRef() 
{
	return protobuf_data.GetArgumentsRef();
}




// END: Message OpPluginInvokeMessage


// BEGIN: Message OpPluginInvokeDefaultMessage

OpPluginInvokeDefaultMessage::~OpPluginInvokeDefaultMessage()
{
}

/* static */ OpPluginInvokeDefaultMessage*
OpPluginInvokeDefaultMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginInvokeDefaultMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginInvokeDefaultMessage*
OpPluginInvokeDefaultMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginInvokeDefaultMessage *msg = OpPluginInvokeDefaultMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginInvokeDefaultMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginInvokeDefault *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginInvokeDefault *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginInvokeDefaultMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginInvokeDefault::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginInvokeDefaultMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> &
OpPluginInvokeDefaultMessage::GetArgumentsRef() 
{
	return protobuf_data.GetArgumentsRef();
}




// END: Message OpPluginInvokeDefaultMessage


// BEGIN: Message OpPluginLoadMessage

OpPluginLoadMessage::~OpPluginLoadMessage()
{
}

/* static */ OpPluginLoadMessage*
OpPluginLoadMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginLoadMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginLoadMessage*
OpPluginLoadMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginLoadMessage *msg = OpPluginLoadMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLoad::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginLoadMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginLoad *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginLoad *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLoad::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginLoadMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginLoad::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginLoadMessage::SetPath(const UniString & v) 
{
	return protobuf_data.SetPath(v);
}


OP_STATUS
OpPluginLoadMessage::SetPath(const uni_char * v, int l) 
{
	return protobuf_data.SetPath(v, l);
}




// END: Message OpPluginLoadMessage


// BEGIN: Message OpPluginLoadResponseMessage

OpPluginLoadResponseMessage::~OpPluginLoadResponseMessage()
{
}

/* static */ OpPluginLoadResponseMessage*
OpPluginLoadResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginLoadResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginLoadResponseMessage*
OpPluginLoadResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginLoadResponseMessage *msg = OpPluginLoadResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLoadResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginLoadResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginLoadResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginLoadResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLoadResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginLoadResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginLoadResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginLoadResponseMessage


// BEGIN: Message OpPluginLookupIdentifierMessage

OpPluginLookupIdentifierMessage::~OpPluginLookupIdentifierMessage()
{
}

/* static */ OpPluginLookupIdentifierMessage*
OpPluginLookupIdentifierMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginLookupIdentifierMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginLookupIdentifierMessage*
OpPluginLookupIdentifierMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginLookupIdentifierMessage *msg = OpPluginLookupIdentifierMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginLookupIdentifierMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginLookupIdentifierMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginLookupIdentifier::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginLookupIdentifierMessage::GetIdentifierRef() 
{
	return protobuf_data.GetIdentifierRef();
}




// END: Message OpPluginLookupIdentifierMessage


// BEGIN: Message OpPluginLookupIdentifierResponseMessage

OpPluginLookupIdentifierResponseMessage::~OpPluginLookupIdentifierResponseMessage()
{
}

/* static */ OpPluginLookupIdentifierResponseMessage*
OpPluginLookupIdentifierResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginLookupIdentifierResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginLookupIdentifierResponseMessage*
OpPluginLookupIdentifierResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginLookupIdentifierResponseMessage *msg = OpPluginLookupIdentifierResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginLookupIdentifierResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginLookupIdentifierResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginLookupIdentifierResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginLookupIdentifierResponseMessage::SetStringValue(const UniString & v) 
{
	return protobuf_data.SetStringValue(v);
}


OP_STATUS
OpPluginLookupIdentifierResponseMessage::SetStringValue(const uni_char * v, int l) 
{
	return protobuf_data.SetStringValue(v, l);
}




// END: Message OpPluginLookupIdentifierResponseMessage


// BEGIN: Message OpPluginNewMessage

OpPluginNewMessage::~OpPluginNewMessage()
{
}

/* static */ OpPluginNewMessage*
OpPluginNewMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginNewMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginNewMessage*
OpPluginNewMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginNewMessage *msg = OpPluginNewMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNew::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginNewMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginNew *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginNew *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNew::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginNewMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginNew::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginNewMessage::SetContentType(const UniString & v) 
{
	return protobuf_data.SetContentType(v);
}


OP_STATUS
OpPluginNewMessage::SetContentType(const uni_char * v, int l) 
{
	return protobuf_data.SetContentType(v, l);
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginNew_Argument> &
OpPluginNewMessage::GetArgumentsRef() 
{
	return protobuf_data.GetArgumentsRef();
}


void
OpPluginNewMessage::SetAdapterAddress(OpNs4pluginsMessages_MessageSet::MessageAddress * v) 
{
	protobuf_data.SetAdapterAddress(v);
}




// END: Message OpPluginNewMessage


// BEGIN: Message OpPluginNewResponseMessage

OpPluginNewResponseMessage::~OpPluginNewResponseMessage()
{
}

/* static */ OpPluginNewResponseMessage*
OpPluginNewResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginNewResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginNewResponseMessage*
OpPluginNewResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginNewResponseMessage *msg = OpPluginNewResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNewResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginNewResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginNewResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginNewResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNewResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginNewResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginNewResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginNewResponseMessage


// BEGIN: Message OpPluginNewStreamMessage

OpPluginNewStreamMessage::~OpPluginNewStreamMessage()
{
}

/* static */ OpPluginNewStreamMessage*
OpPluginNewStreamMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginNewStreamMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginNewStreamMessage*
OpPluginNewStreamMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginNewStreamMessage *msg = OpPluginNewStreamMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNewStream::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginNewStreamMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginNewStream *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginNewStream *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNewStream::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginNewStreamMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginNewStream::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginNewStreamMessage::SetContentType(const UniString & v) 
{
	return protobuf_data.SetContentType(v);
}


OP_STATUS
OpPluginNewStreamMessage::SetContentType(const uni_char * v, int l) 
{
	return protobuf_data.SetContentType(v, l);
}


OpNs4pluginsMessages_MessageSet::PluginStream &
OpPluginNewStreamMessage::GetStreamRef() 
{
	return protobuf_data.GetStreamRef();
}




// END: Message OpPluginNewStreamMessage


// BEGIN: Message OpPluginNewStreamResponseMessage

OpPluginNewStreamResponseMessage::~OpPluginNewStreamResponseMessage()
{
}

/* static */ OpPluginNewStreamResponseMessage*
OpPluginNewStreamResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginNewStreamResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginNewStreamResponseMessage*
OpPluginNewStreamResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginNewStreamResponseMessage *msg = OpPluginNewStreamResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginNewStreamResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginNewStreamResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginNewStreamResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginNewStreamResponseMessage


// BEGIN: Message OpPluginNotifyMessage

OpPluginNotifyMessage::~OpPluginNotifyMessage()
{
}

/* static */ OpPluginNotifyMessage*
OpPluginNotifyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginNotifyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginNotifyMessage*
OpPluginNotifyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginNotifyMessage *msg = OpPluginNotifyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginNotifyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginNotify *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginNotify *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginNotifyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginNotifyMessage::SetURL(const UniString & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginNotifyMessage::SetURL(const uni_char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}




// END: Message OpPluginNotifyMessage


// BEGIN: Message OpPluginObjectConstructMessage

OpPluginObjectConstructMessage::~OpPluginObjectConstructMessage()
{
}

/* static */ OpPluginObjectConstructMessage*
OpPluginObjectConstructMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginObjectConstructMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginObjectConstructMessage*
OpPluginObjectConstructMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginObjectConstructMessage *msg = OpPluginObjectConstructMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginObjectConstructMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginObjectConstruct *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginObjectConstruct *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginObjectConstructMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginObjectConstruct::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginObjectConstructMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginVariant> &
OpPluginObjectConstructMessage::GetArgumentsRef() 
{
	return protobuf_data.GetArgumentsRef();
}




// END: Message OpPluginObjectConstructMessage


// BEGIN: Message OpPluginObjectDeallocateMessage

OpPluginObjectDeallocateMessage::~OpPluginObjectDeallocateMessage()
{
}

/* static */ OpPluginObjectDeallocateMessage*
OpPluginObjectDeallocateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginObjectDeallocateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginObjectDeallocateMessage*
OpPluginObjectDeallocateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginObjectDeallocateMessage *msg = OpPluginObjectDeallocateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginObjectDeallocateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginObjectDeallocateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginObjectDeallocate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginObjectDeallocateMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}




// END: Message OpPluginObjectDeallocateMessage


// BEGIN: Message OpPluginObjectEnumerateMessage

OpPluginObjectEnumerateMessage::~OpPluginObjectEnumerateMessage()
{
}

/* static */ OpPluginObjectEnumerateMessage*
OpPluginObjectEnumerateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginObjectEnumerateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginObjectEnumerateMessage*
OpPluginObjectEnumerateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginObjectEnumerateMessage *msg = OpPluginObjectEnumerateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginObjectEnumerateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginObjectEnumerateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginObjectEnumerate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginObjectEnumerateMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}




// END: Message OpPluginObjectEnumerateMessage


// BEGIN: Message OpPluginObjectEnumerateResponseMessage

OpPluginObjectEnumerateResponseMessage::~OpPluginObjectEnumerateResponseMessage()
{
}

/* static */ OpPluginObjectEnumerateResponseMessage*
OpPluginObjectEnumerateResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginObjectEnumerateResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginObjectEnumerateResponseMessage*
OpPluginObjectEnumerateResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginObjectEnumerateResponseMessage *msg = OpPluginObjectEnumerateResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginObjectEnumerateResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginObjectEnumerateResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginObjectEnumerateResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginIdentifier> &
OpPluginObjectEnumerateResponseMessage::GetPropertiesRef() 
{
	return protobuf_data.GetPropertiesRef();
}




// END: Message OpPluginObjectEnumerateResponseMessage


// BEGIN: Message OpPluginObjectInvalidateMessage

OpPluginObjectInvalidateMessage::~OpPluginObjectInvalidateMessage()
{
}

/* static */ OpPluginObjectInvalidateMessage*
OpPluginObjectInvalidateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginObjectInvalidateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginObjectInvalidateMessage*
OpPluginObjectInvalidateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginObjectInvalidateMessage *msg = OpPluginObjectInvalidateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginObjectInvalidateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginObjectInvalidateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginObjectInvalidate::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginObjectInvalidateMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}




// END: Message OpPluginObjectInvalidateMessage


// BEGIN: Message OpPluginObjectStateMessage

OpPluginObjectStateMessage::~OpPluginObjectStateMessage()
{
}

/* static */ OpPluginObjectStateMessage*
OpPluginObjectStateMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginObjectStateMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginObjectStateMessage*
OpPluginObjectStateMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginObjectStateMessage *msg = OpPluginObjectStateMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectState::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginObjectStateMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginObjectState *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginObjectState *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginObjectState::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginObjectStateMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginObjectState::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginObjectStateMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}




// END: Message OpPluginObjectStateMessage


// BEGIN: Message OpPluginPlatformEventMessage

OpPluginPlatformEventMessage::~OpPluginPlatformEventMessage()
{
}

/* static */ OpPluginPlatformEventMessage*
OpPluginPlatformEventMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginPlatformEventMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginPlatformEventMessage*
OpPluginPlatformEventMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginPlatformEventMessage *msg = OpPluginPlatformEventMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPlatformEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginPlatformEventMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginPlatformEvent *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginPlatformEvent *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPlatformEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginPlatformEventMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginPlatformEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginPlatformEventMessage


// BEGIN: Message OpPluginPopPopupsEnabledMessage

OpPluginPopPopupsEnabledMessage::~OpPluginPopPopupsEnabledMessage()
{
}

/* static */ OpPluginPopPopupsEnabledMessage*
OpPluginPopPopupsEnabledMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginPopPopupsEnabledMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginPopPopupsEnabledMessage*
OpPluginPopPopupsEnabledMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginPopPopupsEnabledMessage *msg = OpPluginPopPopupsEnabledMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginPopPopupsEnabledMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginPopPopupsEnabledMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginPopPopupsEnabled::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginPopPopupsEnabledMessage


// BEGIN: Message OpPluginPostURLMessage

OpPluginPostURLMessage::~OpPluginPostURLMessage()
{
}

/* static */ OpPluginPostURLMessage*
OpPluginPostURLMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginPostURLMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginPostURLMessage*
OpPluginPostURLMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginPostURLMessage *msg = OpPluginPostURLMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPostURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginPostURLMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginPostURL *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginPostURL *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPostURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginPostURLMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginPostURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginPostURLMessage::SetURL(const OpData & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginPostURLMessage::SetURL(const char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}


OP_STATUS
OpPluginPostURLMessage::SetData(const OpData & v) 
{
	return protobuf_data.SetData(v);
}


OP_STATUS
OpPluginPostURLMessage::SetData(const char * v, int l) 
{
	return protobuf_data.SetData(v, l);
}


OP_STATUS
OpPluginPostURLMessage::SetWindow(const OpData & v) 
{
	return protobuf_data.SetWindow(v);
}


OP_STATUS
OpPluginPostURLMessage::SetWindow(const char * v, int l) 
{
	return protobuf_data.SetWindow(v, l);
}




// END: Message OpPluginPostURLMessage


// BEGIN: Message OpPluginPostURLNotifyMessage

OpPluginPostURLNotifyMessage::~OpPluginPostURLNotifyMessage()
{
}

/* static */ OpPluginPostURLNotifyMessage*
OpPluginPostURLNotifyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginPostURLNotifyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginPostURLNotifyMessage*
OpPluginPostURLNotifyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginPostURLNotifyMessage *msg = OpPluginPostURLNotifyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginPostURLNotifyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginPostURLNotify *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginPostURLNotify *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginPostURLNotifyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginPostURLNotify::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginPostURLNotifyMessage::SetURL(const OpData & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginPostURLNotifyMessage::SetURL(const char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}


OP_STATUS
OpPluginPostURLNotifyMessage::SetData(const OpData & v) 
{
	return protobuf_data.SetData(v);
}


OP_STATUS
OpPluginPostURLNotifyMessage::SetData(const char * v, int l) 
{
	return protobuf_data.SetData(v, l);
}


OP_STATUS
OpPluginPostURLNotifyMessage::SetWindow(const OpData & v) 
{
	return protobuf_data.SetWindow(v);
}


OP_STATUS
OpPluginPostURLNotifyMessage::SetWindow(const char * v, int l) 
{
	return protobuf_data.SetWindow(v, l);
}




// END: Message OpPluginPostURLNotifyMessage


// BEGIN: Message OpPluginProbeMessage

OpPluginProbeMessage::~OpPluginProbeMessage()
{
}

/* static */ OpPluginProbeMessage*
OpPluginProbeMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginProbeMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginProbeMessage*
OpPluginProbeMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginProbeMessage *msg = OpPluginProbeMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginProbe::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginProbeMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginProbe *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginProbe *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginProbe::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginProbeMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginProbe::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginProbeMessage::SetPath(const UniString & v) 
{
	return protobuf_data.SetPath(v);
}


OP_STATUS
OpPluginProbeMessage::SetPath(const uni_char * v, int l) 
{
	return protobuf_data.SetPath(v, l);
}




// END: Message OpPluginProbeMessage


// BEGIN: Message OpPluginProbeResponseMessage

OpPluginProbeResponseMessage::~OpPluginProbeResponseMessage()
{
}

/* static */ OpPluginProbeResponseMessage*
OpPluginProbeResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginProbeResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginProbeResponseMessage*
OpPluginProbeResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginProbeResponseMessage *msg = OpPluginProbeResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginProbeResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginProbeResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginProbeResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginProbeResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginProbeResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginProbeResponseMessage::SetPath(const UniString & v) 
{
	return protobuf_data.SetPath(v);
}


OP_STATUS
OpPluginProbeResponseMessage::SetPath(const uni_char * v, int l) 
{
	return protobuf_data.SetPath(v, l);
}


OP_STATUS
OpPluginProbeResponseMessage::SetName(const UniString & v) 
{
	return protobuf_data.SetName(v);
}


OP_STATUS
OpPluginProbeResponseMessage::SetName(const uni_char * v, int l) 
{
	return protobuf_data.SetName(v, l);
}


OP_STATUS
OpPluginProbeResponseMessage::SetDescription(const UniString & v) 
{
	return protobuf_data.SetDescription(v);
}


OP_STATUS
OpPluginProbeResponseMessage::SetDescription(const uni_char * v, int l) 
{
	return protobuf_data.SetDescription(v, l);
}


OP_STATUS
OpPluginProbeResponseMessage::SetVersion(const UniString & v) 
{
	return protobuf_data.SetVersion(v);
}


OP_STATUS
OpPluginProbeResponseMessage::SetVersion(const uni_char * v, int l) 
{
	return protobuf_data.SetVersion(v, l);
}


OpProtobufMessageVector<OpNs4pluginsMessages_MessageSet::PluginProbeResponse_ContentType> &
OpPluginProbeResponseMessage::GetContentTypesRef() 
{
	return protobuf_data.GetContentTypesRef();
}




// END: Message OpPluginProbeResponseMessage


// BEGIN: Message OpPluginPushPopupsEnabledMessage

OpPluginPushPopupsEnabledMessage::~OpPluginPushPopupsEnabledMessage()
{
}

/* static */ OpPluginPushPopupsEnabledMessage*
OpPluginPushPopupsEnabledMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginPushPopupsEnabledMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginPushPopupsEnabledMessage*
OpPluginPushPopupsEnabledMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginPushPopupsEnabledMessage *msg = OpPluginPushPopupsEnabledMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginPushPopupsEnabledMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginPushPopupsEnabledMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginPushPopupsEnabled::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginPushPopupsEnabledMessage


// BEGIN: Message OpPluginReleaseObjectMessage

OpPluginReleaseObjectMessage::~OpPluginReleaseObjectMessage()
{
}

/* static */ OpPluginReleaseObjectMessage*
OpPluginReleaseObjectMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginReleaseObjectMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginReleaseObjectMessage*
OpPluginReleaseObjectMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginReleaseObjectMessage *msg = OpPluginReleaseObjectMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginReleaseObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginReleaseObjectMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginReleaseObject *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginReleaseObject *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginReleaseObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginReleaseObjectMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginReleaseObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginReleaseObjectMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}




// END: Message OpPluginReleaseObjectMessage


// BEGIN: Message OpPluginReloadMessage

OpPluginReloadMessage::~OpPluginReloadMessage()
{
}

/* static */ OpPluginReloadMessage*
OpPluginReloadMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginReloadMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginReloadMessage*
OpPluginReloadMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginReloadMessage *msg = OpPluginReloadMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginReload::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginReloadMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginReload *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginReload *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginReload::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginReloadMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginReload::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginReloadMessage


// BEGIN: Message OpPluginRemovePropertyMessage

OpPluginRemovePropertyMessage::~OpPluginRemovePropertyMessage()
{
}

/* static */ OpPluginRemovePropertyMessage*
OpPluginRemovePropertyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginRemovePropertyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginRemovePropertyMessage*
OpPluginRemovePropertyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginRemovePropertyMessage *msg = OpPluginRemovePropertyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginRemovePropertyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginRemoveProperty *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginRemoveProperty *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginRemovePropertyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginRemoveProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginRemovePropertyMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginRemovePropertyMessage::GetPropertyRef() 
{
	return protobuf_data.GetPropertyRef();
}




// END: Message OpPluginRemovePropertyMessage


// BEGIN: Message OpPluginResultMessage

OpPluginResultMessage::~OpPluginResultMessage()
{
}

/* static */ OpPluginResultMessage*
OpPluginResultMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginResultMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginResultMessage*
OpPluginResultMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginResultMessage *msg = OpPluginResultMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginResult::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginResultMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginResult *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginResult *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginResult::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginResultMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginResult::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
void
OpPluginResultMessage::SetResult(OpNs4pluginsMessages_MessageSet::PluginVariant * v) 
{
	protobuf_data.SetResult(v);
}




// END: Message OpPluginResultMessage


// BEGIN: Message OpPluginRetainObjectMessage

OpPluginRetainObjectMessage::~OpPluginRetainObjectMessage()
{
}

/* static */ OpPluginRetainObjectMessage*
OpPluginRetainObjectMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginRetainObjectMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginRetainObjectMessage*
OpPluginRetainObjectMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginRetainObjectMessage *msg = OpPluginRetainObjectMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginRetainObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginRetainObjectMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginRetainObject *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginRetainObject *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginRetainObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginRetainObjectMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginRetainObject::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginRetainObjectMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}




// END: Message OpPluginRetainObjectMessage


// BEGIN: Message OpPluginSetPropertyMessage

OpPluginSetPropertyMessage::~OpPluginSetPropertyMessage()
{
}

/* static */ OpPluginSetPropertyMessage*
OpPluginSetPropertyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginSetPropertyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginSetPropertyMessage*
OpPluginSetPropertyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginSetPropertyMessage *msg = OpPluginSetPropertyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginSetPropertyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginSetProperty *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginSetProperty *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginSetPropertyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginSetProperty::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginIdentifier &
OpPluginSetPropertyMessage::GetPropertyRef() 
{
	return protobuf_data.GetPropertyRef();
}


OpNs4pluginsMessages_MessageSet::PluginObject &
OpPluginSetPropertyMessage::GetObjectRef() 
{
	return protobuf_data.GetObjectRef();
}


OpNs4pluginsMessages_MessageSet::PluginVariant &
OpPluginSetPropertyMessage::GetValueRef() 
{
	return protobuf_data.GetValueRef();
}




// END: Message OpPluginSetPropertyMessage


// BEGIN: Message OpPluginSetValueMessage

OpPluginSetValueMessage::~OpPluginSetValueMessage()
{
}

/* static */ OpPluginSetValueMessage*
OpPluginSetValueMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginSetValueMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginSetValueMessage*
OpPluginSetValueMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginSetValueMessage *msg = OpPluginSetValueMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginSetValue::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginSetValueMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginSetValue *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginSetValue *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginSetValue::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginSetValueMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginSetValue::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
void
OpPluginSetValueMessage::SetObjectValue(OpNs4pluginsMessages_MessageSet::PluginObject * v) 
{
	protobuf_data.SetObjectValue(v);
}




// END: Message OpPluginSetValueMessage


// BEGIN: Message OpPluginSetValueForURLMessage

OpPluginSetValueForURLMessage::~OpPluginSetValueForURLMessage()
{
}

/* static */ OpPluginSetValueForURLMessage*
OpPluginSetValueForURLMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginSetValueForURLMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginSetValueForURLMessage*
OpPluginSetValueForURLMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginSetValueForURLMessage *msg = OpPluginSetValueForURLMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginSetValueForURLMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginSetValueForURL *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginSetValueForURL *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginSetValueForURLMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginSetValueForURL::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginSetValueForURLMessage::SetURL(const UniString & v) 
{
	return protobuf_data.SetURL(v);
}


OP_STATUS
OpPluginSetValueForURLMessage::SetURL(const uni_char * v, int l) 
{
	return protobuf_data.SetURL(v, l);
}


OP_STATUS
OpPluginSetValueForURLMessage::SetValue(const UniString & v) 
{
	return protobuf_data.SetValue(v);
}


OP_STATUS
OpPluginSetValueForURLMessage::SetValue(const uni_char * v, int l) 
{
	return protobuf_data.SetValue(v, l);
}




// END: Message OpPluginSetValueForURLMessage


// BEGIN: Message OpPluginShutdownMessage

OpPluginShutdownMessage::~OpPluginShutdownMessage()
{
}

/* static */ OpPluginShutdownMessage*
OpPluginShutdownMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginShutdownMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginShutdownMessage*
OpPluginShutdownMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginShutdownMessage *msg = OpPluginShutdownMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginShutdown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginShutdownMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginShutdown *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginShutdown *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginShutdown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginShutdownMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginShutdown::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginShutdownMessage


// BEGIN: Message OpPluginStatusTextMessage

OpPluginStatusTextMessage::~OpPluginStatusTextMessage()
{
}

/* static */ OpPluginStatusTextMessage*
OpPluginStatusTextMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginStatusTextMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginStatusTextMessage*
OpPluginStatusTextMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginStatusTextMessage *msg = OpPluginStatusTextMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginStatusText::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginStatusTextMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginStatusText *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginStatusText *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginStatusText::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginStatusTextMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginStatusText::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginStatusTextMessage::SetText(const UniString & v) 
{
	return protobuf_data.SetText(v);
}


OP_STATUS
OpPluginStatusTextMessage::SetText(const uni_char * v, int l) 
{
	return protobuf_data.SetText(v, l);
}




// END: Message OpPluginStatusTextMessage


// BEGIN: Message OpPluginStreamAsFileMessage

OpPluginStreamAsFileMessage::~OpPluginStreamAsFileMessage()
{
}

/* static */ OpPluginStreamAsFileMessage*
OpPluginStreamAsFileMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginStreamAsFileMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginStreamAsFileMessage*
OpPluginStreamAsFileMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginStreamAsFileMessage *msg = OpPluginStreamAsFileMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginStreamAsFileMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginStreamAsFile *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginStreamAsFile *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginStreamAsFileMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginStreamAsFile::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginStream &
OpPluginStreamAsFileMessage::GetStreamRef() 
{
	return protobuf_data.GetStreamRef();
}


OP_STATUS
OpPluginStreamAsFileMessage::SetFname(const OpData & v) 
{
	return protobuf_data.SetFname(v);
}


OP_STATUS
OpPluginStreamAsFileMessage::SetFname(const char * v, int l) 
{
	return protobuf_data.SetFname(v, l);
}




// END: Message OpPluginStreamAsFileMessage


// BEGIN: Message OpPluginTimerMessage

OpPluginTimerMessage::~OpPluginTimerMessage()
{
}

/* static */ OpPluginTimerMessage*
OpPluginTimerMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginTimerMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginTimerMessage*
OpPluginTimerMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginTimerMessage *msg = OpPluginTimerMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginTimer::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginTimerMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginTimer *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginTimer *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginTimer::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginTimerMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginTimer::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginTimerMessage


// BEGIN: Message OpPluginUserAgentMessage

OpPluginUserAgentMessage::~OpPluginUserAgentMessage()
{
}

/* static */ OpPluginUserAgentMessage*
OpPluginUserAgentMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginUserAgentMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginUserAgentMessage*
OpPluginUserAgentMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginUserAgentMessage *msg = OpPluginUserAgentMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginUserAgent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginUserAgentMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginUserAgent *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginUserAgent *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginUserAgent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginUserAgentMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginUserAgent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginUserAgentMessage


// BEGIN: Message OpPluginUserAgentResponseMessage

OpPluginUserAgentResponseMessage::~OpPluginUserAgentResponseMessage()
{
}

/* static */ OpPluginUserAgentResponseMessage*
OpPluginUserAgentResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginUserAgentResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginUserAgentResponseMessage*
OpPluginUserAgentResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginUserAgentResponseMessage *msg = OpPluginUserAgentResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginUserAgentResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginUserAgentResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginUserAgentResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpPluginUserAgentResponseMessage::SetUserAgent(const UniString & v) 
{
	return protobuf_data.SetUserAgent(v);
}


OP_STATUS
OpPluginUserAgentResponseMessage::SetUserAgent(const uni_char * v, int l) 
{
	return protobuf_data.SetUserAgent(v, l);
}




// END: Message OpPluginUserAgentResponseMessage


// BEGIN: Message OpPluginWindowMessage

OpPluginWindowMessage::~OpPluginWindowMessage()
{
}

/* static */ OpPluginWindowMessage*
OpPluginWindowMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWindowMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWindowMessage*
OpPluginWindowMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWindowMessage *msg = OpPluginWindowMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindow::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWindowMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWindow *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWindow *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindow::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWindowMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWindow::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginRect &
OpPluginWindowMessage::GetRectRef() 
{
	return protobuf_data.GetRectRef();
}


OpNs4pluginsMessages_MessageSet::PluginRect &
OpPluginWindowMessage::GetClipRectRef() 
{
	return protobuf_data.GetClipRectRef();
}




// END: Message OpPluginWindowMessage


// BEGIN: Message OpPluginWindowlessHandleEventResponseMessage

OpPluginWindowlessHandleEventResponseMessage::~OpPluginWindowlessHandleEventResponseMessage()
{
}

/* static */ OpPluginWindowlessHandleEventResponseMessage*
OpPluginWindowlessHandleEventResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWindowlessHandleEventResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWindowlessHandleEventResponseMessage*
OpPluginWindowlessHandleEventResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWindowlessHandleEventResponseMessage *msg = OpPluginWindowlessHandleEventResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWindowlessHandleEventResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWindowlessHandleEventResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWindowlessHandleEventResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginWindowlessHandleEventResponseMessage


// BEGIN: Message OpPluginWindowlessKeyEventMessage

OpPluginWindowlessKeyEventMessage::~OpPluginWindowlessKeyEventMessage()
{
}

/* static */ OpPluginWindowlessKeyEventMessage*
OpPluginWindowlessKeyEventMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWindowlessKeyEventMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWindowlessKeyEventMessage*
OpPluginWindowlessKeyEventMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWindowlessKeyEventMessage *msg = OpPluginWindowlessKeyEventMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWindowlessKeyEventMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWindowlessKeyEventMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWindowlessKeyEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginWindowlessKeyEventMessage


// BEGIN: Message OpPluginWindowlessMouseEventMessage

OpPluginWindowlessMouseEventMessage::~OpPluginWindowlessMouseEventMessage()
{
}

/* static */ OpPluginWindowlessMouseEventMessage*
OpPluginWindowlessMouseEventMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWindowlessMouseEventMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWindowlessMouseEventMessage*
OpPluginWindowlessMouseEventMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWindowlessMouseEventMessage *msg = OpPluginWindowlessMouseEventMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWindowlessMouseEventMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWindowlessMouseEventMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWindowlessMouseEvent::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginPoint &
OpPluginWindowlessMouseEventMessage::GetPointRef() 
{
	return protobuf_data.GetPointRef();
}




// END: Message OpPluginWindowlessMouseEventMessage


// BEGIN: Message OpPluginWindowlessPaintMessage

OpPluginWindowlessPaintMessage::~OpPluginWindowlessPaintMessage()
{
}

/* static */ OpPluginWindowlessPaintMessage*
OpPluginWindowlessPaintMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWindowlessPaintMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWindowlessPaintMessage*
OpPluginWindowlessPaintMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWindowlessPaintMessage *msg = OpPluginWindowlessPaintMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWindowlessPaintMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWindowlessPaintMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWindowlessPaint::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginRect &
OpPluginWindowlessPaintMessage::GetPaintRectRef() 
{
	return protobuf_data.GetPaintRectRef();
}




// END: Message OpPluginWindowlessPaintMessage


// BEGIN: Message OpPluginWriteMessage

OpPluginWriteMessage::~OpPluginWriteMessage()
{
}

/* static */ OpPluginWriteMessage*
OpPluginWriteMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWriteMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWriteMessage*
OpPluginWriteMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWriteMessage *msg = OpPluginWriteMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWrite::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWriteMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWrite *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWrite *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWrite::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWriteMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWrite::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginStream &
OpPluginWriteMessage::GetStreamRef() 
{
	return protobuf_data.GetStreamRef();
}


OP_STATUS
OpPluginWriteMessage::SetBuffer(const OpData & v) 
{
	return protobuf_data.SetBuffer(v);
}


OP_STATUS
OpPluginWriteMessage::SetBuffer(const char * v, int l) 
{
	return protobuf_data.SetBuffer(v, l);
}




// END: Message OpPluginWriteMessage


// BEGIN: Message OpPluginWriteReadyMessage

OpPluginWriteReadyMessage::~OpPluginWriteReadyMessage()
{
}

/* static */ OpPluginWriteReadyMessage*
OpPluginWriteReadyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWriteReadyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWriteReadyMessage*
OpPluginWriteReadyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWriteReadyMessage *msg = OpPluginWriteReadyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWriteReady::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWriteReadyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWriteReady *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWriteReady *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWriteReady::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWriteReadyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWriteReady::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}
OpNs4pluginsMessages_MessageSet::PluginStream &
OpPluginWriteReadyMessage::GetStreamRef() 
{
	return protobuf_data.GetStreamRef();
}




// END: Message OpPluginWriteReadyMessage


// BEGIN: Message OpPluginWriteReadyResponseMessage

OpPluginWriteReadyResponseMessage::~OpPluginWriteReadyResponseMessage()
{
}

/* static */ OpPluginWriteReadyResponseMessage*
OpPluginWriteReadyResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWriteReadyResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWriteReadyResponseMessage*
OpPluginWriteReadyResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWriteReadyResponseMessage *msg = OpPluginWriteReadyResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWriteReadyResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWriteReadyResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWriteReadyResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginWriteReadyResponseMessage


// BEGIN: Message OpPluginWriteResponseMessage

OpPluginWriteResponseMessage::~OpPluginWriteResponseMessage()
{
}

/* static */ OpPluginWriteResponseMessage*
OpPluginWriteResponseMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpPluginWriteResponseMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpPluginWriteResponseMessage*
OpPluginWriteResponseMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpPluginWriteResponseMessage *msg = OpPluginWriteResponseMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWriteResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpPluginWriteResponseMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpNs4pluginsMessages_MessageSet::PluginWriteResponse *proto = const_cast<OpNs4pluginsMessages_MessageSet::PluginWriteResponse *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpNs4pluginsMessages_MessageSet::PluginWriteResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpPluginWriteResponseMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpNs4pluginsMessages_MessageSet::PluginWriteResponse::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_ns4plugins_messages));
	return d ? d->GetName() : NULL;
}


// END: Message OpPluginWriteResponseMessage


// END: Message classes


#endif // G_MESSAGE_NS4PLUGINS_MESSAGES_CPP
