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

// Generated from ../../adjunct/desktop_scope/services/desktop_utils/desktop_utils.proto



#ifndef G_SCOPE_DESKTOP_UTILS_INTERFACE_H
#define G_SCOPE_DESKTOP_UTILS_INTERFACE_H

#ifdef SCOPE_DESKTOP_SUPPORT

#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeDesktopUtils_Descriptors;

class OpScopeDesktopUtils_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeDesktopUtils_MessageSet();
	virtual ~OpScopeDesktopUtils_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class DesktopPid;
	class DesktopPath;
	class DesktopStringText;
	class DesktopStringID;

	class DesktopPid
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DesktopPid(
			UINT32 pid_arg = 0
			)
			: _pid(pid_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c pid is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPid() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c pid.
		 */
		UINT32 GetPid() const
		{
			return _pid;
		}

		// Setters

		/**
		 * Set the field @c pid.
		 */
		void SetPid(UINT32 v)
		{
			_pid = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _pid;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class DesktopPath
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DesktopPath(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & path_arg
			)
		{
			RETURN_IF_ERROR(_path.Set(path_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c path.
		 */
		const OpString & GetPath() const
		{
			return _path;
		}

		// Setters

		/**
		 * Set the field @c path.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _path;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class DesktopStringText
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DesktopStringText(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c text.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		// Setters

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _text;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class DesktopStringID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DesktopStringID(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & enum_text_arg
			)
		{
			RETURN_IF_ERROR(_enumText.Set(enum_text_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c enumText is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnumText() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c enumText.
		 */
		const OpString & GetEnumText() const
		{
			return _enumText;
		}

		// Setters

		/**
		 * Set the field @c enumText.
		 */
		OP_STATUS SetEnumText(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDesktopUtils_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _enumText;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeDesktopUtils_Descriptors
{
public:
	OpScopeDesktopUtils_Descriptors();
	~OpScopeDesktopUtils_Descriptors();

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
		_gen_MessageOffs_desktop_path_,
		_gen_MessageOffs_desktop_pid_,
		_gen_MessageOffs_desktop_string_id_,
		_gen_MessageOffs_desktop_string_text_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_desktop_path_
		, _gen_MsgID_desktop_pid_
		, _gen_MsgID_desktop_string_id_
		, _gen_MsgID_desktop_string_text_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeDesktopUtils_SI
	: public OpScopeService
	, public OpScopeDesktopUtils_MessageSet
{
public:
	OpScopeDesktopUtils_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeDesktopUtils_SI();

	enum CommandEnum
	{
		  Command_GetString = 1
		, Command_GetOperaPath = 2
		, Command_GetLargePreferencesPath = 3
		, Command_GetSmallPreferencesPath = 4
		, Command_GetCachePreferencesPath = 5
		, Command_GetCurrentProcessId = 6

		, Command_Count = 6 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeDesktopUtils_Descriptors
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

	virtual const char *GetVersionString() const;
	virtual int         GetMajorVersion() const;
	virtual int         GetMinorVersion() const;
	virtual const char *GetPatchVersion() const;

	// Request/Response functions
	virtual OP_STATUS DoGetString(const DesktopStringID &in, DesktopStringText &out) = 0;
	virtual OP_STATUS DoGetOperaPath(DesktopPath &out) = 0;
	virtual OP_STATUS DoGetLargePreferencesPath(DesktopPath &out) = 0;
	virtual OP_STATUS DoGetSmallPreferencesPath(DesktopPath &out) = 0;
	virtual OP_STATUS DoGetCachePreferencesPath(DesktopPath &out) = 0;
	virtual OP_STATUS DoGetCurrentProcessId(DesktopPid &out) = 0;


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_DESKTOP_SUPPORT

#endif // G_SCOPE_DESKTOP_UTILS_INTERFACE_H
