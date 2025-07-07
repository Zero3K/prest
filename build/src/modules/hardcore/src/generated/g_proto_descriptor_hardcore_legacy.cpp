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






#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_legacy.h"
#include "modules/hardcore/src/generated/g_proto_hardcore_legacy.h"



// BEGIN: OpHardcoreLegacy_Descriptors

OpHardcoreLegacy_Descriptors::OpHardcoreLegacy_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpHardcoreLegacy_Descriptors::~OpHardcoreLegacy_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpHardcoreLegacy_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpHardcoreLegacy_Descriptors::Get(unsigned id) const
{
	OpHardcoreLegacy_Descriptors *descriptors = const_cast<OpHardcoreLegacy_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_legacy_:
		return OpHardcoreLegacy_MessageSet::Legacy::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpHardcoreLegacy_Descriptors






