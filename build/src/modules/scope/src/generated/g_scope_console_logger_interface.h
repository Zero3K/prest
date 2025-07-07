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

// Generated from ../../modules/scope/services/console_logger/console_logger.proto



#ifndef G_SCOPE_CONSOLE_LOGGER_INTERFACE_H
#define G_SCOPE_CONSOLE_LOGGER_INTERFACE_H

#ifdef SCOPE_CONSOLE_LOGGER

#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeConsoleLogger_Descriptors;

class OpScopeConsoleLogger_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeConsoleLogger_MessageSet();
	virtual ~OpScopeConsoleLogger_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class ConsoleMessageList;
	class ConsoleMessage;

	/**
	 * A list of ConsoleMessages.
	 * 
	 * @since 2.1
	 */
	class ConsoleMessageList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ConsoleMessageList(
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
		 * Check if the field @c consoleMessageList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasConsoleMessageList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c consoleMessageList.
		 */
		const OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessage> & GetConsoleMessageList() const
		{
			return _consoleMessageList;
		}

		// Setters

		/**
		 * Set the field @c consoleMessageList.
		 */
		OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessage> & GetConsoleMessageListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeConsoleLogger_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeConsoleLogger_MessageSet::ConsoleMessage> _consoleMessageList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleMessage
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		ConsoleMessage(
			UINT32 window_id_arg = 0,
			UINT32 time_arg = 0
			)
			: _windowID(window_id_arg)
			, _time(time_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & description_arg,
			const OpString * uri_arg = NULL,
			const OpString * context_arg = NULL,
			const OpString * source_arg = NULL,
			const OpString * severity_arg = NULL
			)
		{
			RETURN_IF_ERROR(_description.Set(description_arg));
			if (uri_arg)
			{
				RETURN_IF_ERROR(_uri.Set(*uri_arg));
				has_bits_.Reference().SetBit(3);

			}
			if (context_arg)
			{
				RETURN_IF_ERROR(_context.Set(*context_arg));
				has_bits_.Reference().SetBit(4);

			}
			if (source_arg)
			{
				RETURN_IF_ERROR(_source.Set(*source_arg));
				has_bits_.Reference().SetBit(5);

			}
			if (severity_arg)
			{
				RETURN_IF_ERROR(_severity.Set(*severity_arg));
				has_bits_.Reference().SetBit(6);

			}
			return OpStatus::OK;
		}

		// Checkers
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
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c uri is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUri() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c source is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSource() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c severity is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSeverity() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

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
		 * 
		 * The number of seconds since 1970-01-01T00:00:00Z.
		 */
		UINT32 GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c description.
		 * 
		 * Description of the error. Sometimes this message only makes sense when
		 * displayed in a monospace font.
		 */
		const OpString & GetDescription() const
		{
			return _description;
		}

		/**
		 * Get the field @c uri.
		 * 
		 * The URL of the entity (document, script, style file, etc) that caused the
		 * message to be generated.
		 */
		const OpString & GetUri() const
		{
			return _uri;
		}

		/**
		 * Get the field @c context.
		 * 
		 * The context in which the message was generated; it is intended for human
		 * consumption and provides additional information about the context for the
		 * message.
		 */
		const OpString & GetContext() const
		{
			return _context;
		}

		/**
		 * Get the field @c source.
		 * 
		 * The component in Opera that generated the message
		 * One of:
		 * - "ecmascript"
		 * - "java"
		 * - "m2"
		 * - "network"
		 * - "xml"
		 * - "html"
		 * - "css"
		 * - "xslt"
		 * - "svg"
		 * - "bittorrent"
		 * - "voice"
		 * - "widget"
		 * - "selftest"
		 */
		const OpString & GetSource() const
		{
			return _source;
		}

		/**
		 * Get the field @c severity.
		 * 
		 * One of:
		 * - "debug"
		 * - "verbose"
		 * - "information"
		 * - "error"
		 * - "critical"
		 */
		const OpString & GetSeverity() const
		{
			return _severity;
		}

		// Setters

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
		 * 
		 * The number of seconds since 1970-01-01T00:00:00Z.
		 */
		void SetTime(UINT32 v)
		{
			_time = v;
		}

		/**
		 * Set the field @c description.
		 * 
		 * Description of the error. Sometimes this message only makes sense when
		 * displayed in a monospace font.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c uri.
		 * 
		 * The URL of the entity (document, script, style file, etc) that caused the
		 * message to be generated.
		 */
		OP_STATUS SetUri(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c context.
		 * 
		 * The context in which the message was generated; it is intended for human
		 * consumption and provides additional information about the context for the
		 * message.
		 */
		OP_STATUS SetContext(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c source.
		 * 
		 * The component in Opera that generated the message
		 * One of:
		 * - "ecmascript"
		 * - "java"
		 * - "m2"
		 * - "network"
		 * - "xml"
		 * - "html"
		 * - "css"
		 * - "xslt"
		 * - "svg"
		 * - "bittorrent"
		 * - "voice"
		 * - "widget"
		 * - "selftest"
		 */
		OP_STATUS SetSource(const char * v, int l = KAll);

		/**
		 * Set the field @c severity.
		 * 
		 * One of:
		 * - "debug"
		 * - "verbose"
		 * - "information"
		 * - "error"
		 * - "critical"
		 */
		OP_STATUS SetSeverity(const char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeConsoleLogger_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _time;
		OpString _description;
		OpString _uri;
		OpString _context;
		OpString _source;
		OpString _severity;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeConsoleLogger_Descriptors
{
public:
	OpScopeConsoleLogger_Descriptors();
	~OpScopeConsoleLogger_Descriptors();

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
		_gen_MessageOffs_console_message_,
		_gen_MessageOffs_console_message_list_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_console_message_
		, _gen_MsgID_console_message_list_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeConsoleLogger_SI
	: public OpScopeService
	, public OpScopeConsoleLogger_MessageSet
{
public:
	OpScopeConsoleLogger_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeConsoleLogger_SI();

	enum CommandEnum
	{
		  Command_OnConsoleMessage = 1
		, Command_Clear = 2
		, Command_ListMessages = 3

		, Command_Count = 3 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeConsoleLogger_Descriptors
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
	virtual OP_STATUS DoClear() = 0;
	virtual OP_STATUS DoListMessages(ConsoleMessageList &out) = 0;

	// Event functions
	OP_STATUS SendOnConsoleMessage(const ConsoleMessage &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_CONSOLE_LOGGER

#endif // G_SCOPE_CONSOLE_LOGGER_INTERFACE_H
