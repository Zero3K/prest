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

// Generated from ../../modules/scope/services/scope/scope.proto



#ifndef G_SCOPE_PROTOCOL_SERVICE_INTERFACE_H
#define G_SCOPE_PROTOCOL_SERVICE_INTERFACE_H

#ifdef SCOPE_SUPPORT

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeProtocolService_Descriptors;

class OpScopeProtocolService_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeProtocolService_MessageSet();
	virtual ~OpScopeProtocolService_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class EnumList_Enum_Value;
	class EnumList_Enum;
	class MessageInfo_FieldInfo;
	class CommandInfo;
	class ServiceResult;
	class EnumArg;
	class MessageSelection;
	class ErrorInfo;
	class ServiceInfo;
	class ServiceSelection;
	class MessageInfoList;
	class ClientInfo;
	class HostInfo;
	class Service;
	class EventInfo;
	class EnumList;
	class MessageInfo;
	class ServiceList;

	/**
	 * Represents a value in an enum.
	 * e.g. TYPE1 = 1;
	 * TYPE1 would then be the name and 1 the number.
	 */
	class EnumList_Enum_Value
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EnumList_Enum_Value(
			UINT32 number_arg = 0
			)
			: _number(number_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c number.
		 */
		UINT32 GetNumber() const
		{
			return _number;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c number.
		 */
		void SetNumber(UINT32 v)
		{
			_number = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _number;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Introspection result for a given enum.
	 * 
	 * An enum is defined as::
	 *   enum Type
	 *   {
	 *      TYPE1 = 1;
	 *      TYPE2 = 2;
	 *   }
	 * @since 1.1
	 */
	class EnumList_Enum
	{
	public:
		// BEGIN: Nested items

		// Message EnumList.Enum.Value
		typedef EnumList_Enum_Value Value;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		EnumList_Enum(
			UINT32 id_arg = 0
			)
			: _id(id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c valueList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValueList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c id.
		 * 
		 * Unique ID for this enum.
		 */
		UINT32 GetId() const
		{
			return _id;
		}

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c valueList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum_Value> & GetValueList() const
		{
			return _valueList;
		}

		// Setters

		/**
		 * Set the field @c id.
		 * 
		 * Unique ID for this enum.
		 */
		void SetId(UINT32 v)
		{
			_id = v;
		}

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c valueList.
		 */
		OpScopeProtocolService_MessageSet::EnumList_Enum_Value * AppendNewValueList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _id;
		OpString _name;
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum_Value> _valueList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class MessageInfo_FieldInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		MessageInfo_FieldInfo(
			UINT32 type_arg = 0,
			UINT32 number_arg = 0
			)
			: _type(type_arg)
			, _number(number_arg)
			, _quantifier(0)
			, _messageID(0)
			, _enumID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c quantifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasQuantifier() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c messageID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessageID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c enumID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnumID() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c type.
		 * 
		 * The protocol buffer type for this field. The types are:
		 * 
		 * == ============================
		 * 1  Double
		 * 2  Float
		 * 3  Int32
		 * 4  Uint32
		 * 5  Sint32
		 * 6  Fixed32
		 * 7  Sfixed32
		 * 8  Bool
		 * 9  String
		 * 10 Bytes
		 * 11 Message
		 * 12 Int64 (not supported yet)
		 * 13 Uint64 (not supported yet)
		 * 14 Sint64 (not supported yet)
		 * 15 Fixed64 (not supported yet)
		 * 16 Sfixed64 (not supported yet)
		 * == ============================
		 */
		UINT32 GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c number.
		 * 
		 * The unique protocol buffer number for this field.
		 */
		UINT32 GetNumber() const
		{
			return _number;
		}

		/**
		 * Get the field @c quantifier.
		 * 
		 * Specifies whether the fields is required, optional or repeated:
		 * 
		 * = ========
		 * 0 Required
		 * 1 Optional
		 * 2 Repeated
		 * = ========
		 */
		UINT32 GetQuantifier() const
		{
			return _quantifier;
		}

		/**
		 * Get the field @c messageID.
		 * 
		 * ID of message this field references, only set for Message fields
		 */
		UINT32 GetMessageID() const
		{
			return _messageID;
		}

		/**
		 * Get the field @c enumID.
		 * 
		 * ID of the enum this field references, only set for Int32 fields
		 * @note Only set if MessageSelection.showEnums is set to true.
		 * @since 1.1
		 */
		UINT32 GetEnumID() const
		{
			return _enumID;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 * 
		 * The protocol buffer type for this field. The types are:
		 * 
		 * == ============================
		 * 1  Double
		 * 2  Float
		 * 3  Int32
		 * 4  Uint32
		 * 5  Sint32
		 * 6  Fixed32
		 * 7  Sfixed32
		 * 8  Bool
		 * 9  String
		 * 10 Bytes
		 * 11 Message
		 * 12 Int64 (not supported yet)
		 * 13 Uint64 (not supported yet)
		 * 14 Sint64 (not supported yet)
		 * 15 Fixed64 (not supported yet)
		 * 16 Sfixed64 (not supported yet)
		 * == ============================
		 */
		void SetType(UINT32 v)
		{
			_type = v;
		}

		/**
		 * Set the field @c number.
		 * 
		 * The unique protocol buffer number for this field.
		 */
		void SetNumber(UINT32 v)
		{
			_number = v;
		}

		/**
		 * Set the field @c quantifier.
		 * 
		 * Specifies whether the fields is required, optional or repeated:
		 * 
		 * = ========
		 * 0 Required
		 * 1 Optional
		 * 2 Repeated
		 * = ========
		 */
		void SetQuantifier(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_quantifier = v;
		}

		/**
		 * Set the field @c messageID.
		 * 
		 * ID of message this field references, only set for Message fields
		 */
		void SetMessageID(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_messageID = v;
		}

		/**
		 * Set the field @c enumID.
		 * 
		 * ID of the enum this field references, only set for Int32 fields
		 * @note Only set if MessageSelection.showEnums is set to true.
		 * @since 1.1
		 */
		void SetEnumID(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_enumID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _type;
		UINT32 _number;
		UINT32 _quantifier;
		UINT32 _messageID;
		UINT32 _enumID;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class CommandInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		CommandInfo(
			UINT32 number_arg = 0,
			UINT32 message_id_arg = 0,
			UINT32 response_id_arg = 0
			)
			: _number(number_arg)
			, _messageID(message_id_arg)
			, _responseID(response_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c messageID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessageID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c responseID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResponseID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c number.
		 */
		UINT32 GetNumber() const
		{
			return _number;
		}

		/**
		 * Get the field @c messageID.
		 */
		UINT32 GetMessageID() const
		{
			return _messageID;
		}

		/**
		 * Get the field @c responseID.
		 */
		UINT32 GetResponseID() const
		{
			return _responseID;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		/**
		 * Set the field @c number.
		 */
		void SetNumber(UINT32 v)
		{
			_number = v;
		}

		/**
		 * Set the field @c messageID.
		 */
		void SetMessageID(UINT32 v)
		{
			_messageID = v;
		}

		/**
		 * Set the field @c responseID.
		 */
		void SetResponseID(UINT32 v)
		{
			_responseID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _number;
		UINT32 _messageID;
		UINT32 _responseID;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class ServiceResult
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ServiceResult(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Selects which messages to introspect.
	 * @since 1.1
	 */
	class EnumArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		EnumArg(
			)
			: _includeAll(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & service_name_arg
			)
		{
			RETURN_IF_ERROR(_serviceName.Set(service_name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c serviceName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasServiceName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c idList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c includeAll is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludeAll() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c serviceName.
		 * 
		 * Name of service to fetch messages from. Message ids are unique per service.
		 */
		const OpString & GetServiceName() const
		{
			return _serviceName;
		}

		/**
		 * Get the field @c idList.
		 * 
		 * Contains ids of enums which should be fetched.
		 */
		const OpValueVector<UINT32> & GetIdList() const
		{
			return _idList;
		}

		/**
		 * Get the field @c includeAll.
		 * 
		 * Set to true if all enums in the service should be included. Overrides idList.
		 */
		BOOL GetIncludeAll() const
		{
			return _includeAll;
		}

		// Setters

		/**
		 * Set the field @c serviceName.
		 * 
		 * Name of service to fetch messages from. Message ids are unique per service.
		 */
		OP_STATUS SetServiceName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c idList.
		 * 
		 * Contains ids of enums which should be fetched.
		 */
		OpValueVector<UINT32> & GetIdListRef();

		/**
		 * Set the field @c idList.
		 * 
		 * Contains ids of enums which should be fetched.
		 */
		OP_STATUS AppendToIdList(UINT32 v);

		/**
		 * Set the field @c includeAll.
		 * 
		 * Set to true if all enums in the service should be included. Overrides idList.
		 */
		void SetIncludeAll(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_includeAll = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _serviceName;
		OpValueVector<UINT32> _idList;
		BOOL _includeAll;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Selects which messages to introspect.
	 */
	class MessageSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		MessageSelection(
			)
			: _includeRelated(FALSE)
			, _includeAll(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & service_name_arg
			)
		{
			RETURN_IF_ERROR(_serviceName.Set(service_name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c serviceName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasServiceName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c idList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIdList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c includeRelated is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludeRelated() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c includeAll is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludeAll() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c serviceName.
		 * 
		 * Name of service to fetch messages from. Message ids are unique per service.
		 */
		const OpString & GetServiceName() const
		{
			return _serviceName;
		}

		/**
		 * Get the field @c idList.
		 * 
		 * Contains ids of message which should be fetched.
		 */
		const OpValueVector<UINT32> & GetIdList() const
		{
			return _idList;
		}

		/**
		 * Get the field @c includeRelated.
		 * 
		 * Set to true to automatically include messages which are referenced (fields of type Message). This makes it easy to fetch the entire message chain for a given message.
		 */
		BOOL GetIncludeRelated() const
		{
			return _includeRelated;
		}

		/**
		 * Get the field @c includeAll.
		 * 
		 * Set to true if all messages in the service should be included. Overrides includeRelated and idList.
		 */
		BOOL GetIncludeAll() const
		{
			return _includeAll;
		}

		// Setters

		/**
		 * Set the field @c serviceName.
		 * 
		 * Name of service to fetch messages from. Message ids are unique per service.
		 */
		OP_STATUS SetServiceName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c idList.
		 * 
		 * Contains ids of message which should be fetched.
		 */
		OpValueVector<UINT32> & GetIdListRef();

		/**
		 * Set the field @c idList.
		 * 
		 * Contains ids of message which should be fetched.
		 */
		OP_STATUS AppendToIdList(UINT32 v);

		/**
		 * Set the field @c includeRelated.
		 * 
		 * Set to true to automatically include messages which are referenced (fields of type Message). This makes it easy to fetch the entire message chain for a given message.
		 */
		void SetIncludeRelated(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_includeRelated = v;
		}

		/**
		 * Set the field @c includeAll.
		 * 
		 * Set to true if all messages in the service should be included. Overrides includeRelated and idList.
		 */
		void SetIncludeAll(BOOL v)
		{
			has_bits_.Reference().SetBit(3);
			_includeAll = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _serviceName;
		OpValueVector<UINT32> _idList;
		BOOL _includeRelated;
		BOOL _includeAll;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class ErrorInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ErrorInfo(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & description_arg
			)
		{
			RETURN_IF_ERROR(_description.Set(description_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c description.
		 */
		const OpString & GetDescription() const
		{
			return _description;
		}

		// Setters

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _description;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ServiceInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ServiceInfo(
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
		 * Check if the field @c commandList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCommandList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c eventList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c commandList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::CommandInfo> & GetCommandList() const
		{
			return _commandList;
		}

		/**
		 * Get the field @c eventList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EventInfo> & GetEventList() const
		{
			return _eventList;
		}

		// Setters

		/**
		 * Set the field @c commandList.
		 */
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::CommandInfo> & GetCommandListRef();

		/**
		 * Set the field @c eventList.
		 */
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EventInfo> & GetEventListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::CommandInfo> _commandList;
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EventInfo> _eventList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ServiceSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ServiceSelection(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class MessageInfoList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MessageInfoList(
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
		 * Check if the field @c messageList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessageList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c messageList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo> & GetMessageList() const
		{
			return _messageList;
		}

		// Setters

		/**
		 * Set the field @c messageList.
		 */
		OpScopeProtocolService_MessageSet::MessageInfo * AppendNewMessageList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo> _messageList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ClientInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ClientInfo(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & format_arg
			)
		{
			RETURN_IF_ERROR(_format.Set(format_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c format is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFormat() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c format.
		 */
		const OpString & GetFormat() const
		{
			return _format;
		}

		// Setters

		/**
		 * Set the field @c format.
		 */
		OP_STATUS SetFormat(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _format;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class HostInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		HostInfo(
			UINT32 stp_version_arg = 0
			)
			: _stpVersion(stp_version_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & core_version_arg,
			const OpString & platform_arg,
			const OpString & operating_system_arg,
			const OpString & user_agent_arg
			)
		{
			RETURN_IF_ERROR(_coreVersion.Set(core_version_arg));
			RETURN_IF_ERROR(_platform.Set(platform_arg));
			RETURN_IF_ERROR(_operatingSystem.Set(operating_system_arg));
			RETURN_IF_ERROR(_userAgent.Set(user_agent_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c stpVersion is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStpVersion() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c coreVersion is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCoreVersion() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c platform is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlatform() const
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
		 * Check if the field @c userAgent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUserAgent() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c serviceList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasServiceList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c stpVersion.
		 */
		UINT32 GetStpVersion() const
		{
			return _stpVersion;
		}

		/**
		 * Get the field @c coreVersion.
		 */
		const OpString & GetCoreVersion() const
		{
			return _coreVersion;
		}

		/**
		 * Get the field @c platform.
		 */
		const OpString & GetPlatform() const
		{
			return _platform;
		}

		/**
		 * Get the field @c operatingSystem.
		 */
		const OpString & GetOperatingSystem() const
		{
			return _operatingSystem;
		}

		/**
		 * Get the field @c userAgent.
		 */
		const OpString & GetUserAgent() const
		{
			return _userAgent;
		}

		/**
		 * Get the field @c serviceList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::Service> & GetServiceList() const
		{
			return _serviceList;
		}

		// Setters

		/**
		 * Set the field @c stpVersion.
		 */
		void SetStpVersion(UINT32 v)
		{
			_stpVersion = v;
		}

		/**
		 * Set the field @c coreVersion.
		 */
		OP_STATUS SetCoreVersion(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c platform.
		 */
		OP_STATUS SetPlatform(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c operatingSystem.
		 */
		OP_STATUS SetOperatingSystem(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c userAgent.
		 */
		OP_STATUS SetUserAgent(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c serviceList.
		 */
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::Service> & GetServiceListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _stpVersion;
		OpString _coreVersion;
		OpString _platform;
		OpString _operatingSystem;
		OpString _userAgent;
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::Service> _serviceList;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class Service
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Service(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString & version_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_version.Set(version_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c version is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVersion() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c version.
		 * 
		 * This field contains the major and minor version number of the service.
		 * The first number is the major version, the second is the minor, and any additional
		 * numbers/strings are not of relevance but can be shown to the end-user if wanted.
		 * 
		 * The major version determines major changes (ie. compatibility breaks), while
		 * the minor version determines incremental changes (ie. backwards compatible).
		 * The client must check these two numbers to ensure it is able to communicate
		 * properly with the service. If the major version is different from the
		 * versions the client is compatible with, or the minor version is less than
		 * the required version, it must disconnect.
		 * 
		 * Let us say a client supports version 1.6 and up and also version 2.0 and up.
		 * It would do::
		 * 
		 *   if major == 1 and minor >= 6 or major == 2:
		 *     print "We support service version %d.%d" % (major, minor)
		 *   else:
		 *     print "We do not support service version %d.%d" % (major, minor)
		 */
		const OpString & GetVersion() const
		{
			return _version;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c version.
		 * 
		 * This field contains the major and minor version number of the service.
		 * The first number is the major version, the second is the minor, and any additional
		 * numbers/strings are not of relevance but can be shown to the end-user if wanted.
		 * 
		 * The major version determines major changes (ie. compatibility breaks), while
		 * the minor version determines incremental changes (ie. backwards compatible).
		 * The client must check these two numbers to ensure it is able to communicate
		 * properly with the service. If the major version is different from the
		 * versions the client is compatible with, or the minor version is less than
		 * the required version, it must disconnect.
		 * 
		 * Let us say a client supports version 1.6 and up and also version 2.0 and up.
		 * It would do::
		 * 
		 *   if major == 1 and minor >= 6 or major == 2:
		 *     print "We support service version %d.%d" % (major, minor)
		 *   else:
		 *     print "We do not support service version %d.%d" % (major, minor)
		 */
		OP_STATUS SetVersion(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpString _version;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class EventInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		EventInfo(
			UINT32 number_arg = 0,
			UINT32 message_id_arg = 0
			)
			: _number(number_arg)
			, _messageID(message_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c messageID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessageID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c number.
		 */
		UINT32 GetNumber() const
		{
			return _number;
		}

		/**
		 * Get the field @c messageID.
		 */
		UINT32 GetMessageID() const
		{
			return _messageID;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		/**
		 * Set the field @c number.
		 */
		void SetNumber(UINT32 v)
		{
			_number = v;
		}

		/**
		 * Set the field @c messageID.
		 */
		void SetMessageID(UINT32 v)
		{
			_messageID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _number;
		UINT32 _messageID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains a list of enums.
	 * @since 1.1
	 */
	class EnumList
	{
	public:
		// BEGIN: Nested items

		// Message EnumList.Enum
		typedef EnumList_Enum Enum;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		EnumList(
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
		 * Check if the field @c enumList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnumList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c enumList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum> & GetEnumList() const
		{
			return _enumList;
		}

		// Setters

		/**
		 * Set the field @c enumList.
		 */
		OpScopeProtocolService_MessageSet::EnumList_Enum * AppendNewEnumList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::EnumList_Enum> _enumList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Introspection result for a given message.
	 */
	class MessageInfo
	{
	public:
		// BEGIN: Nested items

		// Message MessageInfo.FieldInfo
		typedef MessageInfo_FieldInfo FieldInfo;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		MessageInfo(
			UINT32 id_arg = 0
			)
			: _id(id_arg)
			, _parentID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fieldList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFieldList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c parentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c id.
		 */
		UINT32 GetId() const
		{
			return _id;
		}

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c fieldList.
		 */
		const OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo> & GetFieldList() const
		{
			return _fieldList;
		}

		/**
		 * Get the field @c parentID.
		 */
		UINT32 GetParentID() const
		{
			return _parentID;
		}

		// Setters

		/**
		 * Set the field @c id.
		 */
		void SetId(UINT32 v)
		{
			_id = v;
		}

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const char * v, int l = KAll);

		/**
		 * Set the field @c fieldList.
		 */
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo> & GetFieldListRef();

		/**
		 * Set the field @c parentID.
		 */
		void SetParentID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_parentID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _id;
		OpString _name;
		OpProtobufMessageVector<OpScopeProtocolService_MessageSet::MessageInfo_FieldInfo> _fieldList;
		UINT32 _parentID;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class ServiceList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ServiceList(
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
		 * Check if the field @c serviceList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasServiceList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c serviceList.
		 */
		const OpAutoVector<OpString> & GetServiceList() const
		{
			return _serviceList;
		}

		// Setters

		/**
		 * Set the field @c serviceList.
		 */
		OpAutoVector<OpString> & GetServiceListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProtocolService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _serviceList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeProtocolService_Descriptors
{
public:
	OpScopeProtocolService_Descriptors();
	~OpScopeProtocolService_Descriptors();

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
		_gen_MessageOffs_client_info_,
		_gen_MessageOffs_command_info_,
		_gen_MessageOffs_enum_list_enum_,
		_gen_MessageOffs_enum_arg_,
		_gen_MessageOffs_enum_list_,
		_gen_MessageOffs_error_info_,
		_gen_MessageOffs_event_info_,
		_gen_MessageOffs_message_info_field_info_,
		_gen_MessageOffs_host_info_,
		_gen_MessageOffs_message_info_,
		_gen_MessageOffs_message_info_list_,
		_gen_MessageOffs_message_selection_,
		_gen_MessageOffs_service_,
		_gen_MessageOffs_service_info_,
		_gen_MessageOffs_service_list_,
		_gen_MessageOffs_service_result_,
		_gen_MessageOffs_service_selection_,
		_gen_MessageOffs_enum_list_enum_value_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_client_info_
		, _gen_MsgID_command_info_
		, _gen_MsgID_enum_list_enum_
		, _gen_MsgID_enum_arg_
		, _gen_MsgID_enum_list_
		, _gen_MsgID_error_info_
		, _gen_MsgID_event_info_
		, _gen_MsgID_message_info_field_info_
		, _gen_MsgID_host_info_
		, _gen_MsgID_message_info_
		, _gen_MsgID_message_info_list_
		, _gen_MsgID_message_selection_
		, _gen_MsgID_service_
		, _gen_MsgID_service_info_
		, _gen_MsgID_service_list_
		, _gen_MsgID_service_result_
		, _gen_MsgID_service_selection_
		, _gen_MsgID_enum_list_enum_value_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeProtocolService_SI
	: public OpScopeService
	, public OpScopeProtocolService_MessageSet
{
public:
	OpScopeProtocolService_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeProtocolService_SI();

	enum CommandEnum
	{
		  Command_OnServices = 0
		, Command_OnQuit = 1
		, Command_OnConnectionLost = 2
		, Command_Connect = 3
		, Command_Disconnect = 4
		, Command_Enable = 5
		, Command_Disable = 6
		, Command_Info = 7
		, Command_Quit = 8
		, Command_OnError = 9
		, Command_HostInfo = 10
		, Command_MessageInfo = 11
		, Command_EnumInfo = 12

		, Command_Count = 13 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeProtocolService_Descriptors
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
	virtual OP_STATUS DoConnect(const ClientInfo &in) = 0;
	virtual OP_STATUS DoDisconnect() = 0;
	virtual OP_STATUS DoEnable(const ServiceSelection &in, ServiceResult &out) = 0;
	virtual OP_STATUS DoDisable(const ServiceSelection &in, ServiceResult &out) = 0;
	virtual OP_STATUS DoInfo(const ServiceSelection &in, ServiceInfo &out) = 0;
	virtual OP_STATUS DoQuit() = 0;
	virtual OP_STATUS DoHostInfo(HostInfo &out) = 0;
	virtual OP_STATUS DoMessageInfo(const MessageSelection &in, MessageInfoList &out) = 0;
	virtual OP_STATUS DoEnumInfo(const EnumArg &in, EnumList &out) = 0;

	// Event functions
	OP_STATUS SendOnServices(const ServiceList &msg);
	OP_STATUS SendOnQuit();
	OP_STATUS SendOnConnectionLost();
	OP_STATUS SendOnError(const ErrorInfo &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_SUPPORT

#endif // G_SCOPE_PROTOCOL_SERVICE_INTERFACE_H
