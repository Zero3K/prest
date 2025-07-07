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






#include "modules/hardcore/src/generated/g_proto_hardcore_legacy.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_legacy.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_legacy.h"
#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_data.h"



// BEGIN: OpHardcoreLegacy_MessageSet

OpHardcoreLegacy_MessageSet::OpHardcoreLegacy_MessageSet()
{
}

/*virtual*/
OpHardcoreLegacy_MessageSet::~OpHardcoreLegacy_MessageSet()
{
}

// END: OpHardcoreLegacy_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Legacy
/*static*/
const OpProtobufMessage *
OpHardcoreLegacy_MessageSet::Legacy::GetMessageDescriptor(OpHardcoreLegacy_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpHardcoreLegacy_Descriptors::_gen_MessageOffs_legacy_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("message"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						2,
						UNI_L("param1"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						3,
						UNI_L("param2"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Fixed64,
						4,
						UNI_L("messageHandler"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpHardcoreLegacy_MessageSet::Legacy,
						_message
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpHardcoreLegacy_MessageSet::Legacy,
						_param1
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpHardcoreLegacy_MessageSet::Legacy,
						_param2
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpHardcoreLegacy_MessageSet::Legacy,
						_messageHandler
						);

	message = OP_NEW(OpProtobufMessage,
					(OpHardcoreLegacy_Descriptors::_gen_MsgID_legacy_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpHardcoreLegacy_MessageSet::Legacy, has_bits_),
					OP_PROTO_OFFSETOF(OpHardcoreLegacy_MessageSet::Legacy, encoded_size_),
					"Legacy",
					OpProtobufMessageVector<OpHardcoreLegacy_MessageSet::Legacy>::Make,
					OpProtobufMessageVector<OpHardcoreLegacy_MessageSet::Legacy>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Legacy: Implementation


// END: Legacy: Implementation

//   END: Message: Legacy


// END: Messages






