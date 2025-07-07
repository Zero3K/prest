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

// Generated from ../../modules/scope/services/http_logger/http_logger.proto



#ifndef G_SCOPE_HTTP_LOGGER_INTERFACE_H
#define G_SCOPE_HTTP_LOGGER_INTERFACE_H

#ifdef SCOPE_HTTP_LOGGER

#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeHttpLogger_Descriptors;

class OpScopeHttpLogger_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeHttpLogger_MessageSet();
	virtual ~OpScopeHttpLogger_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class Header;

	class Header
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Header(
			UINT32 request_id_arg = 0,
			UINT32 window_id_arg = 0
			)
			: _requestID(request_id_arg)
			, _windowID(window_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & time_arg,
			const OpString & header_arg
			)
		{
			RETURN_IF_ERROR(_time.Set(time_arg));
			RETURN_IF_ERROR(_header.Set(header_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c requestID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequestID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c header is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeader() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c requestID.
		 * 
		 * An identifier for the request; it is not necessarily unique across
		 * time, as it is just the memory address of the request object.
		 */
		UINT32 GetRequestID() const
		{
			return _requestID;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * The window ID is shared across scope. Notably, it's the same as in the ecmascript debugger.
		 * INTERNAL: The value is from Window::id
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Timestamp of the message, in milliseconds since `1970-01-01 00:00 UTC`
		 * (be sure not to rely on the time being correct - this is client time, and
		 * may be wildly different than the host time)
		 * 
		 * Note: Float encoded as string
		 */
		const OpString & GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c header.
		 * 
		 * Header of the request/response, i.e. the `HTTP` data up until the first
		 * occurence of `CR+LF+CR+LF`, inclusive.
		 */
		const OpString & GetHeader() const
		{
			return _header;
		}

		// Setters

		/**
		 * Set the field @c requestID.
		 * 
		 * An identifier for the request; it is not necessarily unique across
		 * time, as it is just the memory address of the request object.
		 */
		void SetRequestID(UINT32 v)
		{
			_requestID = v;
		}

		/**
		 * Set the field @c windowID.
		 * 
		 * The window ID is shared across scope. Notably, it's the same as in the ecmascript debugger.
		 * INTERNAL: The value is from Window::id
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Timestamp of the message, in milliseconds since `1970-01-01 00:00 UTC`
		 * (be sure not to rely on the time being correct - this is client time, and
		 * may be wildly different than the host time)
		 * 
		 * Note: Float encoded as string
		 */
		OP_STATUS SetTime(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c header.
		 * 
		 * Header of the request/response, i.e. the `HTTP` data up until the first
		 * occurence of `CR+LF+CR+LF`, inclusive.
		 */
		OP_STATUS SetHeader(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeHttpLogger_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _requestID;
		UINT32 _windowID;
		OpString _time;
		OpString _header;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeHttpLogger_Descriptors
{
public:
	OpScopeHttpLogger_Descriptors();
	~OpScopeHttpLogger_Descriptors();

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
		_gen_MessageOffs_header_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_header_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeHttpLogger_SI
	: public OpScopeService
	, public OpScopeHttpLogger_MessageSet
{
public:
	OpScopeHttpLogger_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeHttpLogger_SI();

	enum CommandEnum
	{
		  Command_OnRequest = 1
		, Command_OnResponse = 2

		, Command_Count = 2 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeHttpLogger_Descriptors
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

	// Event functions
	OP_STATUS SendOnRequest(const Header &msg);
	OP_STATUS SendOnResponse(const Header &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_HTTP_LOGGER

#endif // G_SCOPE_HTTP_LOGGER_INTERFACE_H
