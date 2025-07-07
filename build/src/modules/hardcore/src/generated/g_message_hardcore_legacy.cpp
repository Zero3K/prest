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

// Generated from ../../modules/hardcore/component/legacy.proto

#include "core/pch.h"

#ifndef G_MESSAGE_HARDCORE_LEGACY_CPP
#define G_MESSAGE_HARDCORE_LEGACY_CPP



#include "modules/hardcore/src/generated/g_message_hardcore_legacy.h"
#include "modules/protobuf/src/protobuf_input.h"
#include "modules/protobuf/src/protobuf_output.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/protobuf/src/protobuf_data.h"
#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"


// BEGIN: Message classes

// BEGIN: Message OpLegacyMessage

OpLegacyMessage::~OpLegacyMessage()
{
}

/* static */ OpLegacyMessage*
OpLegacyMessage::Cast(const OpTypedMessage* msg)
{
	OP_ASSERT(msg && msg->GetType() == Type);
    return static_cast<OpLegacyMessage*>(const_cast<OpTypedMessage*>(msg));
}

/* static */ OpLegacyMessage*
OpLegacyMessage::Deserialize(
		const OpMessageAddress& src,
		const OpMessageAddress& dst,
		double delay,
		const OpData& data)
{
	OpProtobufInputStream stream;
	RETURN_VALUE_IF_ERROR(stream.Construct(data), NULL);
	OpLegacyMessage *msg = OpLegacyMessage::Create(src, dst, delay);
	if (!msg)
		return NULL;
	OpProtobufInstanceProxy instance(OpHardcoreLegacy_MessageSet::Legacy::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_legacy)), &msg->protobuf_data);
	if (OpStatus::IsError(stream.Read(instance)))
	{
		OP_DELETE(msg);
		return NULL;
	}
	return msg;
}

OP_STATUS
OpLegacyMessage::Serialize(OpData& data) const
{
	OpProtobufOpDataOutputRange range(data);
	OpProtobufOutputStream stream(&range);
	OpHardcoreLegacy_MessageSet::Legacy *proto = const_cast<OpHardcoreLegacy_MessageSet::Legacy *>(&protobuf_data);
	void *proto_ptr = proto;
	OpProtobufInstanceProxy instance(OpHardcoreLegacy_MessageSet::Legacy::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_legacy)), proto_ptr);
	return stream.Write(instance);
}

const char *
OpLegacyMessage::GetTypeString() const
{
	const OpProtobufMessage *d = OpHardcoreLegacy_MessageSet::Legacy::GetMessageDescriptor(PROTOBUF_DESCRIPTOR(desc_hardcore_legacy));
	return d ? d->GetName() : NULL;
}


// END: Message OpLegacyMessage


// END: Message classes


#endif // G_MESSAGE_HARDCORE_LEGACY_CPP
