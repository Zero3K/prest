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

// Generated from ../../modules/scope/services/i18n/i18n.proto



#ifndef G_SCOPE_I18N_INTERFACE_H
#define G_SCOPE_I18N_INTERFACE_H

#ifdef SCOPE_I18N

#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeI18n_Descriptors;

class OpScopeI18n_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeI18n_MessageSet();
	virtual ~OpScopeI18n_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class String;
	class GetStringArg;
	class Language;

	class String
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		String(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & str_arg
			)
		{
			RETURN_IF_ERROR(_str.Set(str_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c str is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStr() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c str.
		 */
		const OpString & GetStr() const
		{
			return _str;
		}

		// Setters

		/**
		 * Set the field @c str.
		 */
		OpString & GetStrRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeI18n_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _str;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetStringArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		GetStringArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & string_id_arg
			)
		{
			RETURN_IF_ERROR(_stringID.Set(string_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c stringID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStringID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c stringID.
		 */
		const OpString & GetStringID() const
		{
			return _stringID;
		}

		// Setters

		/**
		 * Set the field @c stringID.
		 */
		OP_STATUS SetStringID(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeI18n_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _stringID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Language
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Language(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & language_arg
			)
		{
			RETURN_IF_ERROR(_language.Set(language_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c language is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLanguage() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c language.
		 */
		const OpString & GetLanguage() const
		{
			return _language;
		}

		// Setters

		/**
		 * Set the field @c language.
		 */
		OP_STATUS SetLanguage(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeI18n_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _language;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeI18n_Descriptors
{
public:
	OpScopeI18n_Descriptors();
	~OpScopeI18n_Descriptors();

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
		_gen_MessageOffs_get_string_arg_,
		_gen_MessageOffs_language_,
		_gen_MessageOffs_string_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_get_string_arg_
		, _gen_MsgID_language_
		, _gen_MsgID_string_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeI18n_SI
	: public OpScopeService
	, public OpScopeI18n_MessageSet
{
public:
	OpScopeI18n_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeI18n_SI();

	enum CommandEnum
	{
		  Command_GetLanguage = 1
		, Command_GetString = 2

		, Command_Count = 2 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeI18n_Descriptors
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
	virtual OP_STATUS DoGetLanguage(Language &out) = 0;
	virtual OP_STATUS DoGetString(const GetStringArg &in, String &out) = 0;


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_I18N

#endif // G_SCOPE_I18N_INTERFACE_H
