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





#ifndef G_PROTOBUF_DESCRIPTORS_H
#define G_PROTOBUF_DESCRIPTORS_H

#ifdef PROTOBUF_SUPPORT




// Forward declarations for descriptors
class OpHardcoreComponent_Descriptors;
class OpHardcoreLegacy_Descriptors;
class OpHardcoreMessages_Descriptors;
class OpM2Mapimessage_Descriptors;
#ifdef _MACINTOSH_
class OpMacMessages_Descriptors;
#endif // _MACINTOSH_
class OpNs4pluginsMessages_Descriptors;
#ifdef SELFTEST
class OpProtobufBytes_Descriptors;
#endif // SELFTEST
#ifdef SELFTEST
class OpProtobufOrder_Descriptors;
#endif // SELFTEST
#ifdef SELFTEST
class OpProtobufStrings_Descriptors;
#endif // SELFTEST
class OpWindowcommanderMessages_Descriptors;
#ifdef _WIN32
class OpWindows_commonMessages_Descriptors;
#endif // _WIN32
#ifdef NS4P_UNIX_PLATFORM
class OpX11apiMessages_Descriptors;
#endif // NS4P_UNIX_PLATFORM


/**
 * Global container for all protobuf descriptor sets which
 * are defined in the system. It provides initialization of
 * the descriptor sets.
 *
 * This class is meant to be allocated an initialized in the
 * component manager only.
 *
 * Accessing a descriptor set is done using the macro
 * PROTOBUF_DESCRIPTOR() which returns a pointer to the set.
 */
class OpProtobufDescriptorSet
{
public:
    /**
     * Initialize all descriptor set pointers to NULL.
     * @note Call Construct() to finish the construction.
     */
    OpProtobufDescriptorSet();
    ~OpProtobufDescriptorSet();

    /**
     * Allocates and initializes each descriptor set.
     * @return ERR_NO_MEMORY if it fails to allocate descriptor set
     *         or OK on success.
     */
    OP_STATUS Construct();

    /**
     * Return @c TRUE if all descriptors were properly initialized, @c FALSE otherwise.
     */
    BOOL IsValid() const { return is_valid; }

private:
    BOOL is_valid;

    /**
     * Deallocate all descriptor sets and mark as invalid.
     */
    void Destroy();

public:
	// All descriptors in the system


	// Generated from ../../modules/hardcore/component/component.proto


	OpHardcoreComponent_Descriptors *desc_hardcore_component;





	// Generated from ../../modules/hardcore/component/legacy.proto


	OpHardcoreLegacy_Descriptors *desc_hardcore_legacy;





	// Generated from ../../modules/hardcore/component/messages.proto


	OpHardcoreMessages_Descriptors *desc_hardcore_messages;





	// Generated from ../../adjunct/m2/src/mapi/mapimessage.proto


	OpM2Mapimessage_Descriptors *desc_m2_mapimessage;





	// Generated from ../../platforms/mac/pi/messages.proto
#	ifdef _MACINTOSH_

	OpMacMessages_Descriptors *desc_mac_messages;

#	endif // _MACINTOSH_



	// Generated from ../../modules/ns4plugins/component/messages.proto


	OpNs4pluginsMessages_Descriptors *desc_ns4plugins_messages;





	// Generated from ../../modules/protobuf/selftest/bytes.proto
#	ifdef SELFTEST

	OpProtobufBytes_Descriptors *desc_protobuf_bytes;

#	endif // SELFTEST



	// Generated from ../../modules/protobuf/selftest/order.proto
#	ifdef SELFTEST

	OpProtobufOrder_Descriptors *desc_protobuf_order;

#	endif // SELFTEST



	// Generated from ../../modules/protobuf/selftest/strings.proto
#	ifdef SELFTEST

	OpProtobufStrings_Descriptors *desc_protobuf_strings;

#	endif // SELFTEST



	// Generated from ../../modules/windowcommander/component/messages.proto


	OpWindowcommanderMessages_Descriptors *desc_windowcommander_messages;





	// Generated from ../../platforms/windows_common/messages.proto
#	ifdef _WIN32

	OpWindows_commonMessages_Descriptors *desc_windows_common_messages;

#	endif // _WIN32



	// Generated from ../../platforms/x11api/messages.proto
#	ifdef NS4P_UNIX_PLATFORM

	OpX11apiMessages_Descriptors *desc_x11api_messages;

#	endif // NS4P_UNIX_PLATFORM


};

/**
 * Defines the access point to the global object containing all descriptors.
 * All generated protobuf code will use this identifier to access a specific descriptor.
 * @return OpProtobufDescriptorSet *
 */
#define g_protobuf_descriptors g_component_manager->GetProtobufDescriptorSet()
/**
 * Provides access to a specific protobuf descriptor set.
 * @param id The id of the descriptor as it's stored in g_protobuf_descriptors, e.g @c desc_hardcore_messages
 * @return Pointer to descriptor set or @c NULL if the global descriptor object is not initialized or valid.
 */
#define PROTOBUF_DESCRIPTOR(id) (g_protobuf_descriptors ? g_protobuf_descriptors->id : NULL)


#endif // PROTOBUF_SUPPORT

#endif // G_PROTOBUF_DESCRIPTORS_H
