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

// Generated from ../../modules/scope/services/prefs/prefs.proto



#ifndef G_SCOPE_PREFS_INTERFACE_H
#define G_SCOPE_PREFS_INTERFACE_H

#ifdef SCOPE_PREFS

#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopePrefs_Descriptors;

class OpScopePrefs_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopePrefs_MessageSet();
	virtual ~OpScopePrefs_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum Pref_Type
	{
	    Pref_Type_TYPE_STRING = 1,
	    Pref_Type_TYPE_INTEGER = 2,
	    Pref_Type_TYPE_BOOLEAN = 3,
	    Pref_Type_TYPE_FILE = 4,
	    Pref_Type_TYPE_REQUIRED_FILE = 5,
	    Pref_Type_TYPE_DIRECTORY = 6,
	    Pref_Type_TYPE_COLOR = 7
	};

	enum GetPrefArg_Mode
	{
	    GetPrefArg_Mode_MODE_CURRENT = 1,
	    GetPrefArg_Mode_MODE_DEFAULT = 2
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class SetPrefArg;
	class ListPrefsArg;
	class GetPrefArg;
	class PrefList;
	class PrefValue;
	class Pref;

	class SetPrefArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		SetPrefArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & section_arg,
			const OpString & key_arg,
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_section.Set(section_arg));
			RETURN_IF_ERROR(_key.Set(key_arg));
			RETURN_IF_ERROR(_value.Set(value_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c section is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSection() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c key is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKey() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c section.
		 */
		const OpString & GetSection() const
		{
			return _section;
		}

		/**
		 * Get the field @c key.
		 */
		const OpString & GetKey() const
		{
			return _key;
		}

		/**
		 * Get the field @c value.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c section.
		 */
		OP_STATUS SetSection(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c key.
		 */
		OP_STATUS SetKey(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _section;
		OpString _key;
		OpString _value;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class ListPrefsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ListPrefsArg(
			)
			: _sort(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * section_arg = NULL
			)
		{
			if (section_arg)
			{
				RETURN_IF_ERROR(_section.Set(*section_arg));
				has_bits_.Reference().SetBit(1);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c sort is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSort() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c section is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSection() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c sort.
		 * 
		 * Whether to sort the preferences alphabetically or not.
		 */
		BOOL GetSort() const
		{
			return _sort;
		}

		/**
		 * Get the field @c section.
		 * 
		 * List the keys in the specified section only. If not present,
		 * all keys in all sections will be listed.
		 */
		const OpString & GetSection() const
		{
			return _section;
		}

		// Setters

		/**
		 * Set the field @c sort.
		 * 
		 * Whether to sort the preferences alphabetically or not.
		 */
		void SetSort(BOOL v)
		{
			has_bits_.Reference().SetBit(0);
			_sort = v;
		}

		/**
		 * Set the field @c section.
		 * 
		 * List the keys in the specified section only. If not present,
		 * all keys in all sections will be listed.
		 */
		OP_STATUS SetSection(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _sort;
		OpString _section;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetPrefArg
	{
	public:
		// BEGIN: Nested items

		// Enum GetPrefArg.Mode
		typedef GetPrefArg_Mode Mode;
		static const GetPrefArg_Mode MODE_CURRENT = GetPrefArg_Mode_MODE_CURRENT;
		static const GetPrefArg_Mode MODE_DEFAULT = GetPrefArg_Mode_MODE_DEFAULT;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		GetPrefArg(
			)
			: _mode(GetPrefArg_Mode_MODE_CURRENT)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & section_arg,
			const OpString & key_arg
			)
		{
			RETURN_IF_ERROR(_section.Set(section_arg));
			RETURN_IF_ERROR(_key.Set(key_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c section is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSection() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c key is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKey() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c mode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMode() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c section.
		 */
		const OpString & GetSection() const
		{
			return _section;
		}

		/**
		 * Get the field @c key.
		 */
		const OpString & GetKey() const
		{
			return _key;
		}

		/**
		 * Get the field @c mode.
		 */
		OpScopePrefs_MessageSet::GetPrefArg_Mode GetMode() const
		{
			return static_cast<OpScopePrefs_MessageSet::GetPrefArg_Mode>(_mode);
		}

		// Setters

		/**
		 * Set the field @c section.
		 */
		OP_STATUS SetSection(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c key.
		 */
		OP_STATUS SetKey(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c mode.
		 */
		void SetMode(OpScopePrefs_MessageSet::GetPrefArg_Mode v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _section;
		OpString _key;
		INT32 _mode;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class PrefList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PrefList(
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
		 * Check if the field @c prefList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPrefList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c prefList.
		 */
		const OpProtobufMessageVector<OpScopePrefs_MessageSet::Pref> & GetPrefList() const
		{
			return _prefList;
		}

		// Setters

		/**
		 * Set the field @c prefList.
		 */
		OpProtobufMessageVector<OpScopePrefs_MessageSet::Pref> & GetPrefListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopePrefs_MessageSet::Pref> _prefList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class PrefValue
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PrefValue(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_value.Set(value_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c value.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c value.
		 */
		OpString & GetValueRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _value;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Pref
	{
	public:
		// BEGIN: Nested items

		// Enum Pref.Type
		typedef Pref_Type Type;
		static const Pref_Type TYPE_STRING = Pref_Type_TYPE_STRING;
		static const Pref_Type TYPE_INTEGER = Pref_Type_TYPE_INTEGER;
		static const Pref_Type TYPE_BOOLEAN = Pref_Type_TYPE_BOOLEAN;
		static const Pref_Type TYPE_FILE = Pref_Type_TYPE_FILE;
		static const Pref_Type TYPE_REQUIRED_FILE = Pref_Type_TYPE_REQUIRED_FILE;
		static const Pref_Type TYPE_DIRECTORY = Pref_Type_TYPE_DIRECTORY;
		static const Pref_Type TYPE_COLOR = Pref_Type_TYPE_COLOR;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		Pref(
			Pref_Type type_arg = Pref_Type_TYPE_STRING
			)
			: _type(type_arg)
			, _enabled(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * section_arg = NULL,
			const OpString * key_arg = NULL,
			const OpString * value_arg = NULL
			)
		{
			if (section_arg)
			{
				RETURN_IF_ERROR(_section.Set(*section_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (key_arg)
			{
				RETURN_IF_ERROR(_key.Set(*key_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(3);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c section is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSection() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c key is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKey() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c enabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnabled() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c type.
		 */
		OpScopePrefs_MessageSet::Pref_Type GetType() const
		{
			return static_cast<OpScopePrefs_MessageSet::Pref_Type>(_type);
		}

		/**
		 * Get the field @c section.
		 * 
		 * Preferences are divided into groups called *sections*. This
		 * field indicates which section this preference is a member of.
		 * 
		 * Example: *Developer Tools*
		 */
		const OpString & GetSection() const
		{
			return _section;
		}

		/**
		 * Get the field @c key.
		 * 
		 * This is the key, or *name* of the preference.
		 * 
		 * Example: *Developer Tools URL*
		 */
		const OpString & GetKey() const
		{
			return _key;
		}

		/**
		 * Get the field @c value.
		 * 
		 * The value of the preference. For instance, for the preference
		 * *Developer Tools URL* in the *Developer Tools* section, the
		 * default value is https://dragonfly.opera.com/app/.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c enabled.
		 * 
		 * Whether setting is overriden by global ini. If this value is
		 * missing, it means global ini is not supported.
		 */
		BOOL GetEnabled() const
		{
			return _enabled;
		}

		// Setters

		/**
		 * Set the field @c type.
		 */
		void SetType(OpScopePrefs_MessageSet::Pref_Type v);

		/**
		 * Set the field @c section.
		 * 
		 * Preferences are divided into groups called *sections*. This
		 * field indicates which section this preference is a member of.
		 * 
		 * Example: *Developer Tools*
		 */
		OP_STATUS SetSection(const char * v, int l = KAll);

		/**
		 * Set the field @c key.
		 * 
		 * This is the key, or *name* of the preference.
		 * 
		 * Example: *Developer Tools URL*
		 */
		OP_STATUS SetKey(const char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * The value of the preference. For instance, for the preference
		 * *Developer Tools URL* in the *Developer Tools* section, the
		 * default value is https://dragonfly.opera.com/app/.
		 */
		OpString & GetValueRef();

		/**
		 * Set the field @c enabled.
		 * 
		 * Whether setting is overriden by global ini. If this value is
		 * missing, it means global ini is not supported.
		 */
		void SetEnabled(BOOL v)
		{
			has_bits_.Reference().SetBit(4);
			_enabled = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopePrefs_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		OpString _section;
		OpString _key;
		OpString _value;
		BOOL _enabled;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopePrefs_Descriptors
{
public:
	OpScopePrefs_Descriptors();
	~OpScopePrefs_Descriptors();

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
		_gen_MessageOffs_get_pref_arg_,
		_gen_MessageOffs_list_prefs_arg_,
		_gen_MessageOffs_pref_,
		_gen_MessageOffs_pref_list_,
		_gen_MessageOffs_pref_value_,
		_gen_MessageOffs_set_pref_arg_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_get_pref_arg_
		, _gen_MsgID_list_prefs_arg_
		, _gen_MsgID_pref_
		, _gen_MsgID_pref_list_
		, _gen_MsgID_pref_value_
		, _gen_MsgID_set_pref_arg_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for Type
		_gen_EnumID_Pref_Type,
		// Meta info for Mode
		_gen_EnumID_GetPrefArg_Mode,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for Type
		_gen_EnumValueCount_Pref_Type = 7,
		// Meta info for Mode
		_gen_EnumValueCount_GetPrefArg_Mode = 2,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for Type
		_gen_Enum_Pref_Type,
		// Meta info for Mode
		_gen_Enum_GetPrefArg_Mode,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[2];

};


class OpScopePrefs_SI
	: public OpScopeService
	, public OpScopePrefs_MessageSet
{
public:
	OpScopePrefs_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopePrefs_SI();

	enum CommandEnum
	{
		  Command_GetPref = 1
		, Command_ListPrefs = 2
		, Command_SetPref = 3

		, Command_Count = 3 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopePrefs_Descriptors
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
	virtual OP_STATUS DoGetPref(const GetPrefArg &in, PrefValue &out) = 0;
	virtual OP_STATUS DoListPrefs(const ListPrefsArg &in, PrefList &out) = 0;
	virtual OP_STATUS DoSetPref(const SetPrefArg &in) = 0;


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_PREFS

#endif // G_SCOPE_PREFS_INTERFACE_H
