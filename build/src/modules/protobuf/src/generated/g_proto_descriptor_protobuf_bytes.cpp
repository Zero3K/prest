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

// Generated from ../../modules/protobuf/selftest/bytes.proto

#include "core/pch.h"




#ifdef SELFTEST

#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_bytes.h"
#include "modules/protobuf/src/generated/g_proto_protobuf_bytes.h"



// BEGIN: OpProtobufBytes_Descriptors

OpProtobufBytes_Descriptors::OpProtobufBytes_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpProtobufBytes_Descriptors::~OpProtobufBytes_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpProtobufBytes_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpProtobufBytes_Descriptors::Get(unsigned id) const
{
	OpProtobufBytes_Descriptors *descriptors = const_cast<OpProtobufBytes_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_test_bytes_:
		return OpProtobufBytes_MessageSet::TestBytes::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpProtobufBytes_Descriptors



#endif // SELFTEST


