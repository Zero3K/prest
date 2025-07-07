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



#include "core/pch.h"




#ifdef PROTOBUF_SUPPORT

#include "modules/protobuf/src/generated/g_protobuf_descriptors.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_component.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_legacy.h"
#include "modules/hardcore/src/generated/g_proto_descriptor_hardcore_messages.h"
#include "adjunct/m2/src/generated/g_proto_descriptor_m2_mapimessage.h"
#include "platforms/mac/src/generated/g_proto_descriptor_mac_messages.h"
#include "modules/ns4plugins/src/generated/g_proto_descriptor_ns4plugins_messages.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_bytes.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_order.h"
#include "modules/protobuf/src/generated/g_proto_descriptor_protobuf_strings.h"
#include "modules/windowcommander/src/generated/g_proto_descriptor_windowcommander_messages.h"
#include "platforms/windows_common/src/generated/g_proto_descriptor_windows_common_messages.h"
#include "platforms/x11api/src/generated/g_proto_descriptor_x11api_messages.h"



OpProtobufDescriptorSet::OpProtobufDescriptorSet()
	: is_valid(FALSE)

	, desc_hardcore_component(NULL)


	, desc_hardcore_legacy(NULL)


	, desc_hardcore_messages(NULL)


	, desc_m2_mapimessage(NULL)

#	ifdef _MACINTOSH_
	, desc_mac_messages(NULL)
#	endif // _MACINTOSH_

	, desc_ns4plugins_messages(NULL)

#	ifdef SELFTEST
	, desc_protobuf_bytes(NULL)
#	endif // SELFTEST
#	ifdef SELFTEST
	, desc_protobuf_order(NULL)
#	endif // SELFTEST
#	ifdef SELFTEST
	, desc_protobuf_strings(NULL)
#	endif // SELFTEST

	, desc_windowcommander_messages(NULL)

#	ifdef _WIN32
	, desc_windows_common_messages(NULL)
#	endif // _WIN32
#	ifdef NS4P_UNIX_PLATFORM
	, desc_x11api_messages(NULL)
#	endif // NS4P_UNIX_PLATFORM

{
}

OpProtobufDescriptorSet::~OpProtobufDescriptorSet()
{
	Destroy();
}

void
OpProtobufDescriptorSet::Destroy()
{

	OP_DELETE(desc_hardcore_component);


	OP_DELETE(desc_hardcore_legacy);


	OP_DELETE(desc_hardcore_messages);


	OP_DELETE(desc_m2_mapimessage);

#	ifdef _MACINTOSH_
	OP_DELETE(desc_mac_messages);
#	endif // _MACINTOSH_

	OP_DELETE(desc_ns4plugins_messages);

#	ifdef SELFTEST
	OP_DELETE(desc_protobuf_bytes);
#	endif // SELFTEST
#	ifdef SELFTEST
	OP_DELETE(desc_protobuf_order);
#	endif // SELFTEST
#	ifdef SELFTEST
	OP_DELETE(desc_protobuf_strings);
#	endif // SELFTEST

	OP_DELETE(desc_windowcommander_messages);

#	ifdef _WIN32
	OP_DELETE(desc_windows_common_messages);
#	endif // _WIN32
#	ifdef NS4P_UNIX_PLATFORM
	OP_DELETE(desc_x11api_messages);
#	endif // NS4P_UNIX_PLATFORM


	is_valid = FALSE;
}

OP_STATUS
OpProtobufDescriptorSet::Construct()
{

	{
		desc_hardcore_component = OP_NEW(OpHardcoreComponent_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_hardcore_component);
		OP_STATUS status = desc_hardcore_component->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}


	{
		desc_hardcore_legacy = OP_NEW(OpHardcoreLegacy_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_hardcore_legacy);
		OP_STATUS status = desc_hardcore_legacy->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}


	{
		desc_hardcore_messages = OP_NEW(OpHardcoreMessages_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_hardcore_messages);
		OP_STATUS status = desc_hardcore_messages->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}


	{
		desc_m2_mapimessage = OP_NEW(OpM2Mapimessage_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_m2_mapimessage);
		OP_STATUS status = desc_m2_mapimessage->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}

#	ifdef _MACINTOSH_
	{
		desc_mac_messages = OP_NEW(OpMacMessages_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_mac_messages);
		OP_STATUS status = desc_mac_messages->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}
#	endif // _MACINTOSH_

	{
		desc_ns4plugins_messages = OP_NEW(OpNs4pluginsMessages_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_ns4plugins_messages);
		OP_STATUS status = desc_ns4plugins_messages->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}

#	ifdef SELFTEST
	{
		desc_protobuf_bytes = OP_NEW(OpProtobufBytes_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_protobuf_bytes);
		OP_STATUS status = desc_protobuf_bytes->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}
#	endif // SELFTEST
#	ifdef SELFTEST
	{
		desc_protobuf_order = OP_NEW(OpProtobufOrder_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_protobuf_order);
		OP_STATUS status = desc_protobuf_order->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}
#	endif // SELFTEST
#	ifdef SELFTEST
	{
		desc_protobuf_strings = OP_NEW(OpProtobufStrings_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_protobuf_strings);
		OP_STATUS status = desc_protobuf_strings->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}
#	endif // SELFTEST

	{
		desc_windowcommander_messages = OP_NEW(OpWindowcommanderMessages_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_windowcommander_messages);
		OP_STATUS status = desc_windowcommander_messages->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}

#	ifdef _WIN32
	{
		desc_windows_common_messages = OP_NEW(OpWindows_commonMessages_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_windows_common_messages);
		OP_STATUS status = desc_windows_common_messages->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}
#	endif // _WIN32
#	ifdef NS4P_UNIX_PLATFORM
	{
		desc_x11api_messages = OP_NEW(OpX11apiMessages_Descriptors, ());
		RETURN_OOM_IF_NULL(desc_x11api_messages);
		OP_STATUS status = desc_x11api_messages->Construct();
		OP_ASSERT(OpStatus::IsSuccess(status));
		if (OpStatus::IsError(status))
			return status;
	}
#	endif // NS4P_UNIX_PLATFORM

	is_valid = TRUE;
	return OpStatus::OK;
}


#endif // PROTOBUF_SUPPORT


