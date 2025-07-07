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

// Generated from ../../modules/protobuf/selftest/order.proto

#include "core/pch.h"

#ifndef G_MESSAGE_PROTOBUF_ORDER_CPP
#define G_MESSAGE_PROTOBUF_ORDER_CPP

#ifdef SELFTEST

#include "modules/protobuf/src/generated/g_message_protobuf_order.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpTestOpStringOrderMessage

OpTestOpStringOrderMessage::~OpTestOpStringOrderMessage()
{
}

/* static */ OpTestOpStringOrderMessage*
OpTestOpStringOrderMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpTestOpStringOrderMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpTestOpStringOrderMessage*
OpTestOpStringOrderMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpTestOpStringOrderMessage *msg = OpTestOpStringOrderMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpProtobufOrder_MessageSet::TestOpStringOrder::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_protobuf_order)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpTestOpStringOrderMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpProtobufOrder_MessageSet::TestOpStringOrder *proto = const_cast<OpProtobufOrder_MessageSet::TestOpStringOrder *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpProtobufOrder_MessageSet::TestOpStringOrder::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_protobuf_order)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpTestOpStringOrderMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpProtobufOrder_MessageSet::TestOpStringOrder::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_protobuf_order));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpTestOpStringOrderMessage::SetData(const OpData & v) 
{
	return protobuf_data.SetData(v);
}


OP_STATUS
OpTestOpStringOrderMessage::SetData(const char * v, int l) 
{
	return protobuf_data.SetData(v, l);
}


OP_STATUS
OpTestOpStringOrderMessage::SetName(const UniString & v) 
{
	return protobuf_data.SetName(v);
}


OP_STATUS
OpTestOpStringOrderMessage::SetName(const uni_char * v, int l) 
{
	return protobuf_data.SetName(v, l);
}


OP_STATUS
OpTestOpStringOrderMessage::SetOrderType(const uni_char * v, int l) 
{
	return protobuf_data.SetOrderType(v, l);
}


OP_STATUS
OpTestOpStringOrderMessage::SetKind(const uni_char * v, int l) 
{
	return protobuf_data.SetKind(v, l);
}




// END: Message OpTestOpStringOrderMessage


// BEGIN: Message OpTestOrderMessage

OpTestOrderMessage::~OpTestOrderMessage()
{
}

/* static */ OpTestOrderMessage*
OpTestOrderMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpTestOrderMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpTestOrderMessage*
OpTestOrderMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpTestOrderMessage *msg = OpTestOrderMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpProtobufOrder_MessageSet::TestOrder::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_protobuf_order)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpTestOrderMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpProtobufOrder_MessageSet::TestOrder *proto = const_cast<OpProtobufOrder_MessageSet::TestOrder *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpProtobufOrder_MessageSet::TestOrder::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_protobuf_order)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpTestOrderMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpProtobufOrder_MessageSet::TestOrder::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_protobuf_order));
	return d ? d->GetName() : NULL;
}
OP_STATUS
OpTestOrderMessage::SetData(const OpData & v) 
{
	return protobuf_data.SetData(v);
}


OP_STATUS
OpTestOrderMessage::SetData(const char * v, int l) 
{
	return protobuf_data.SetData(v, l);
}


OP_STATUS
OpTestOrderMessage::SetName(const UniString & v) 
{
	return protobuf_data.SetName(v);
}


OP_STATUS
OpTestOrderMessage::SetName(const uni_char * v, int l) 
{
	return protobuf_data.SetName(v, l);
}


OP_STATUS
OpTestOrderMessage::SetOrderType(const UniString & v) 
{
	return protobuf_data.SetOrderType(v);
}


OP_STATUS
OpTestOrderMessage::SetOrderType(const uni_char * v, int l) 
{
	return protobuf_data.SetOrderType(v, l);
}


OP_STATUS
OpTestOrderMessage::SetKind(const UniString & v) 
{
	return protobuf_data.SetKind(v);
}


OP_STATUS
OpTestOrderMessage::SetKind(const uni_char * v, int l) 
{
	return protobuf_data.SetKind(v, l);
}




// END: Message OpTestOrderMessage


// END: Message classes
#endif // SELFTEST

#endif // G_MESSAGE_PROTOBUF_ORDER_CPP
