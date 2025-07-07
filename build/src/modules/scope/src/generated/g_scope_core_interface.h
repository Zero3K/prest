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

// Generated from ../../modules/scope/services/core/core.proto



#ifndef G_SCOPE_CORE_INTERFACE_H
#define G_SCOPE_CORE_INTERFACE_H

#ifdef SCOPE_CORE

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeCore_Descriptors;

class OpScopeCore_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeCore_MessageSet();
	virtual ~OpScopeCore_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum ClearFlags
	{
	    CLEARFLAGS_CLEAR_ALL,
	    CLEARFLAGS_CLEAR_VISITED_LINKS = 1,
	    CLEARFLAGS_CLEAR_DISK_CACHE = 2,
	    CLEARFLAGS_CLEAR_IMAGE_CACHE = 3,
	    CLEARFLAGS_CLEAR_MEMORY_CACHE = 4,
	    CLEARFLAGS_CLEAR_SENSITIVE_DATA = 5,
	    CLEARFLAGS_CLEAR_SESSION_COOKIES = 6,
	    CLEARFLAGS_CLEAR_ALL_COOKIES = 7,
	    CLEARFLAGS_CLEAR_GLOBAL_HISTORY = 8,
	    CLEARFLAGS_CLEAR_CONSOLE = 9,
	    CLEARFLAGS_CLEAR_THUMBNAILS = 10,
	    CLEARFLAGS_CLEAR_WEBDATABASES = 11,
	    CLEARFLAGS_CLEAR_WEBSTORAGE = 12,
	    CLEARFLAGS_CLEAR_APPCACHE = 13,
	    CLEARFLAGS_CLEAR_GEOLOCATION_PERMISSIONS = 14,
	    CLEARFLAGS_CLEAR_SITE_PREFS = 15,
	    CLEARFLAGS_CLEAR_CAMERA_PERMISSIONS = 16
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class BrowserInformation;
	class ClearPrivateDataArg;

	class BrowserInformation
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		BrowserInformation(
			)
			: _processID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & core_version_arg,
			const OpString & operating_system_arg,
			const OpString & product_arg,
			const OpString & binary_path_arg,
			const OpString & user_agent_arg
			)
		{
			RETURN_IF_ERROR(_coreVersion.Set(core_version_arg));
			RETURN_IF_ERROR(_operatingSystem.Set(operating_system_arg));
			RETURN_IF_ERROR(_product.Set(product_arg));
			RETURN_IF_ERROR(_binaryPath.Set(binary_path_arg));
			RETURN_IF_ERROR(_userAgent.Set(user_agent_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c coreVersion is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCoreVersion() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c operatingSystem is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOperatingSystem() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c product is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProduct() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c binaryPath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBinaryPath() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c userAgent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUserAgent() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c processID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProcessID() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c coreVersion.
		 * 
		 * Which Core version this instance is running, e.g. "2.8.119".
		 */
		const OpString & GetCoreVersion() const
		{
			return _coreVersion;
		}

		/**
		 * Get the field @c operatingSystem.
		 * 
		 * A string which describes the OS, e.g. "Windows NT 6.1".
		 */
		const OpString & GetOperatingSystem() const
		{
			return _operatingSystem;
		}

		/**
		 * Get the field @c product.
		 * 
		 * A string which describes the product. For regular desktop bulds
		 * this will be "desktop". Other examples are "mobile" and "gogi".
		 */
		const OpString & GetProduct() const
		{
			return _product;
		}

		/**
		 * Get the field @c binaryPath.
		 * 
		 * The full path the currently running binary.
		 */
		const OpString & GetBinaryPath() const
		{
			return _binaryPath;
		}

		/**
		 * Get the field @c userAgent.
		 * 
		 * The User-Agent string. Typically something like:
		 * 
		 * Opera/9.80 (Windows NT 6.1; U; en) Presto/2.7.62 Version/11.01
		 */
		const OpString & GetUserAgent() const
		{
			return _userAgent;
		}

		/**
		 * Get the field @c processID.
		 * 
		 * The ID of the process we're currently talking to. Might not be present
		 * if the build does not support retrieving process IDs.
		 */
		UINT32 GetProcessID() const
		{
			return _processID;
		}

		// Setters

		/**
		 * Set the field @c coreVersion.
		 * 
		 * Which Core version this instance is running, e.g. "2.8.119".
		 */
		OP_STATUS SetCoreVersion(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c operatingSystem.
		 * 
		 * A string which describes the OS, e.g. "Windows NT 6.1".
		 */
		OP_STATUS SetOperatingSystem(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c product.
		 * 
		 * A string which describes the product. For regular desktop bulds
		 * this will be "desktop". Other examples are "mobile" and "gogi".
		 */
		OP_STATUS SetProduct(const char * v, int l = KAll);

		/**
		 * Set the field @c binaryPath.
		 * 
		 * The full path the currently running binary.
		 */
		OpString & GetBinaryPathRef();

		/**
		 * Set the field @c userAgent.
		 * 
		 * The User-Agent string. Typically something like:
		 * 
		 * Opera/9.80 (Windows NT 6.1; U; en) Presto/2.7.62 Version/11.01
		 */
		OP_STATUS SetUserAgent(const char * v, int l = KAll);

		/**
		 * Set the field @c processID.
		 * 
		 * The ID of the process we're currently talking to. Might not be present
		 * if the build does not support retrieving process IDs.
		 */
		void SetProcessID(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_processID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCore_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _coreVersion;
		OpString _operatingSystem;
		OpString _product;
		OpString _binaryPath;
		OpString _userAgent;
		UINT32 _processID;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class ClearPrivateDataArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ClearPrivateDataArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c clearList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClearList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c clearList.
		 */
		const OpValueVector<INT32> & GetClearList() const
		{
			return _clearList;
		}

		/**
		 * Get the field @c clearList.
		 */
		UINT32 GetClearListCount() const
		{
			return _clearList.GetCount();
		}

		/**
		 * Get the field @c clearList.
		 */
		OpScopeCore_MessageSet::ClearFlags GetClearListItem(UINT32 i) const
		{
			OP_ASSERT(i < _clearList.GetCount());
			return static_cast<OpScopeCore_MessageSet::ClearFlags>(_clearList.Get(i));
		}

		// Setters

		/**
		 * Set the field @c clearList.
		 */
		OpValueVector<INT32> & GetClearListRef();

		/**
		 * Set the field @c clearList.
		 */
		OP_STATUS AppendToClearList(OpScopeCore_MessageSet::ClearFlags v);

		/**
		 * Set the field @c clearList.
		 */
		OP_STATUS SetClearListItem(UINT32 i, OpScopeCore_MessageSet::ClearFlags v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeCore_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<INT32> _clearList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeCore_Descriptors
{
public:
	OpScopeCore_Descriptors();
	~OpScopeCore_Descriptors();

	OP_STATUS Construct();

	const OpProtobufMessage *Get(unsigned id) const;

	/**
	 * Defines the number of messages in this descriptor set.
	 * The exact value is computed compile time depending on which
	 * features/defines are active.
	 */

	// Each message consists of an ID and and offset. The ID is used in
	// introspection and sent to scope clients. The offset is used to find the
	// descriptor object for a given message.
	// IDs uses the prefix _gen_MsgID_ and offsets uses _gen_MessageOffs_
	// Each message is also converted to an identifier based on the path and
	// the name.
	//
	// For instance the message WindowID will get the suffix window_id_
	// The ID for the message will then be _gen_MsgID_window_id_ and
	// the offset for the message descriptor _gen_MessageOffs_window_id_

	enum // Message offset + count
	{
		// Defines the offsets for each message which is used
		// in the message_list arrays in the descriptor
		_gen_MessageOffs_browser_information_,
		_gen_MessageOffs_clear_private_data_arg_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_browser_information_
		, _gen_MsgID_clear_private_data_arg_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for ClearFlags
		_gen_EnumID_ClearFlags,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for ClearFlags
		_gen_EnumValueCount_ClearFlags = 17,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for ClearFlags
		_gen_Enum_ClearFlags,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[1];

};


class OpScopeCore_SI
	: public OpScopeService
	, public OpScopeCore_MessageSet
{
public:
	OpScopeCore_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeCore_SI();

	enum CommandEnum
	{
		  Command_OnActive = 1
		, Command_OnIdle = 2
		, Command_GetBrowserInformation = 3
		, Command_ClearPrivateData = 4

		, Command_Count = 4 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeCore_Descriptors
	{
	public:
		Descriptors();
		~Descriptors();

		OP_STATUS Construct();


		// List of commands
		OpScopeCommand command_list[Command_Count];
	};


// Service API implementation: BEGIN


	virtual OP_STATUS             DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg );
	virtual int                   GetCommandCount() const;
	virtual CommandRange          GetCommands() const;

	virtual const OpProtobufMessage *GetMessage(unsigned int message_id) const;
	virtual unsigned                 GetMessageCount() const;
	virtual MessageIDRange           GetMessageIDs() const;
	virtual MessageRange             GetMessages() const;

	// Introspection of enums
	virtual EnumIDRange GetEnumIDs() const;
	virtual unsigned  GetEnumCount() const;
	virtual BOOL      HasEnum(unsigned enum_id) const;
	virtual OP_STATUS GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const;
	virtual OP_STATUS GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const;

	virtual const char *GetVersionString() const;
	virtual int         GetMajorVersion() const;
	virtual int         GetMinorVersion() const;
	virtual const char *GetPatchVersion() const;

	// Request/Response functions
	virtual OP_STATUS DoGetBrowserInformation(BrowserInformation &out) = 0;
	virtual OP_STATUS DoClearPrivateData(const ClearPrivateDataArg &in) = 0;

	// Event functions
	OP_STATUS SendOnActive();
	OP_STATUS SendOnIdle();


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_CORE

#endif // G_SCOPE_CORE_INTERFACE_H
