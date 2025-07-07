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

// Generated from ../../adjunct/m2/src/mapi/mapimessage.proto

#include "core/pch.h"






#include "adjunct/m2/src/generated/g_proto_descriptor_m2_mapimessage.h"
#include "adjunct/m2/src/generated/g_proto_m2_mapimessage.h"



// BEGIN: OpM2Mapimessage_Descriptors

OpM2Mapimessage_Descriptors::OpM2Mapimessage_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpM2Mapimessage_Descriptors::~OpM2Mapimessage_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpM2Mapimessage_Descriptors::Construct()
{
	return OpStatus::OK;
}

const OpProtobufMessage *
OpM2Mapimessage_Descriptors::Get(unsigned id) const
{
	OpM2Mapimessage_Descriptors *descriptors = const_cast<OpM2Mapimessage_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_create_new_mail_:
		return OpM2Mapimessage_MessageSet::CreateNewMail::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpM2Mapimessage_Descriptors






