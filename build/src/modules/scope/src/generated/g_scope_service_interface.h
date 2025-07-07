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

// Generated from ../../modules/scope/services/service/service.proto



#ifndef G_SCOPE_SERVICE_INTERFACE_H
#define G_SCOPE_SERVICE_INTERFACE_H

#ifdef SCOPE_SUPPORT

#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeService_Descriptors;

class OpScopeService_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeService_MessageSet();
	virtual ~OpScopeService_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class TransportMessage;
	class ErrorInfo;

	/**
	 * This is short version of the transport message which is used for transporting STP/1 messages over STP/0 layers. It omits the payload as it will be placed after the message header.
	 */
	class TransportMessage
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		TransportMessage(
			UINT32 stp_type_arg = 0,
			UINT32 command_id_arg = 0,
			UINT32 format_arg = 0
			)
			: _stpType(stp_type_arg)
			, _commandID(command_id_arg)
			, _format(format_arg)
			, _tag(0)
			, _status(0)
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
		 * Check if the field @c stpType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStpType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c commandID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCommandID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c format is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFormat() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c tag is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTag() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c status is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStatus() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c serviceName.
		 */
		const OpString & GetServiceName() const
		{
			return _serviceName;
		}

		/**
		 * Get the field @c stpType.
		 */
		UINT32 GetStpType() const
		{
			return _stpType;
		}

		/**
		 * Get the field @c commandID.
		 */
		UINT32 GetCommandID() const
		{
			return _commandID;
		}

		/**
		 * Get the field @c format.
		 */
		UINT32 GetFormat() const
		{
			return _format;
		}

		/**
		 * Get the field @c tag.
		 */
		UINT32 GetTag() const
		{
			return _tag;
		}

		/**
		 * Get the field @c status.
		 */
		UINT32 GetStatus() const
		{
			return _status;
		}

		// Setters

		/**
		 * Set the field @c serviceName.
		 */
		OP_STATUS SetServiceName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c stpType.
		 */
		void SetStpType(UINT32 v)
		{
			_stpType = v;
		}

		/**
		 * Set the field @c commandID.
		 */
		void SetCommandID(UINT32 v)
		{
			_commandID = v;
		}

		/**
		 * Set the field @c format.
		 */
		void SetFormat(UINT32 v)
		{
			_format = v;
		}

		/**
		 * Set the field @c tag.
		 */
		void SetTag(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_tag = v;
		}

		/**
		 * Set the field @c status.
		 */
		void SetStatus(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_status = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _serviceName;
		UINT32 _stpType;
		UINT32 _commandID;
		UINT32 _format;
		UINT32 _tag;
		UINT32 _status;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class ErrorInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		ErrorInfo(
			)
			: _line(0)
			, _column(0)
			, _offset(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * description_arg = NULL
			)
		{
			if (description_arg)
			{
				RETURN_IF_ERROR(_description.Set(*description_arg));
				has_bits_.Reference().SetBit(0);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c line is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLine() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c column is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasColumn() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c offset is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOffset() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c description.
		 */
		const OpString & GetDescription() const
		{
			return _description;
		}

		/**
		 * Get the field @c line.
		 */
		INT32 GetLine() const
		{
			return _line;
		}

		/**
		 * Get the field @c column.
		 */
		INT32 GetColumn() const
		{
			return _column;
		}

		/**
		 * Get the field @c offset.
		 */
		INT32 GetOffset() const
		{
			return _offset;
		}

		// Setters

		/**
		 * Set the field @c description.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c line.
		 */
		void SetLine(INT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_line = v;
		}

		/**
		 * Set the field @c column.
		 */
		void SetColumn(INT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_column = v;
		}

		/**
		 * Set the field @c offset.
		 */
		void SetOffset(INT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_offset = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeService_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _description;
		INT32 _line;
		INT32 _column;
		INT32 _offset;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeService_Descriptors
{
public:
	OpScopeService_Descriptors();
	~OpScopeService_Descriptors();

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
		_gen_MessageOffs_error_info_,
		_gen_MessageOffs_transport_message_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_error_info_
		, _gen_MsgID_transport_message_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeService_SI
	: public OpScopeService
	, public OpScopeService_MessageSet
{
public:
	OpScopeService_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeService_SI();

	enum CommandEnum
	{
		  Command_Error = 1
		, Command_Message = 2

		, Command_Count = 2 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeService_Descriptors
	{
	public:
		Descriptors();
		~Descriptors();

		OP_STATUS Construct();


		// List of commands
		OpScopeCommand command_list[Command_Count];
	};


};




#endif // SCOPE_SUPPORT

#endif // G_SCOPE_SERVICE_INTERFACE_H
