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

// Generated from ../../modules/scope/services/url_player/url_player.proto



#ifndef G_URLPLAYER_COMMAND_INTERFACE_H
#define G_URLPLAYER_COMMAND_INTERFACE_H

#ifdef SCOPE_URL_PLAYER

#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeUrlPlayer_Descriptors;

class OpScopeUrlPlayer_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeUrlPlayer_MessageSet();
	virtual ~OpScopeUrlPlayer_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class Window;
	class Request;
	class WindowCount;

	class Window
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Window(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
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
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * The window number that was the target of the LoadUrl command.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * The window number that was the target of the LoadUrl command.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeUrlPlayer_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Request
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Request(
			UINT32 window_number_arg = 0
			)
			: _windowNumber(window_number_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & url_arg
			)
		{
			RETURN_IF_ERROR(_url.Set(url_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c windowNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c windowNumber.
		 * 
		 * Signifies the zero-based ordinal of the window into which we want to load `url`.
		 */
		UINT32 GetWindowNumber() const
		{
			return _windowNumber;
		}

		/**
		 * Get the field @c url.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c windowNumber.
		 * 
		 * Signifies the zero-based ordinal of the window into which we want to load `url`.
		 */
		void SetWindowNumber(UINT32 v)
		{
			_windowNumber = v;
		}

		/**
		 * Set the field @c url.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeUrlPlayer_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowNumber;
		OpString _url;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class WindowCount
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		WindowCount(
			UINT32 window_count_arg = 0
			)
			: _windowCount(window_count_arg)
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
		 * Check if the field @c windowCount is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowCount() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c windowCount.
		 * 
		 * Signifies the number of windows to open.
		 */
		UINT32 GetWindowCount() const
		{
			return _windowCount;
		}

		// Setters

		/**
		 * Set the field @c windowCount.
		 * 
		 * Signifies the number of windows to open.
		 */
		void SetWindowCount(UINT32 v)
		{
			_windowCount = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeUrlPlayer_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowCount;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeUrlPlayer_Descriptors
{
public:
	OpScopeUrlPlayer_Descriptors();
	~OpScopeUrlPlayer_Descriptors();

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
		_gen_MessageOffs_request_,
		_gen_MessageOffs_window_,
		_gen_MessageOffs_window_count_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_request_
		, _gen_MsgID_window_
		, _gen_MsgID_window_count_
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

};


class OpScopeUrlPlayer_SI
	: public OpScopeService
	, public OpScopeUrlPlayer_MessageSet
{
public:
	OpScopeUrlPlayer_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeUrlPlayer_SI();

	enum CommandEnum
	{
		  Command_CreateWindows = 1
		, Command_LoadUrl = 2
		, Command_OnUrlLoaded = 3
		, Command_OnConnectionFailed = 4

		, Command_Count = 4 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeUrlPlayer_Descriptors
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
	virtual OP_STATUS DoCreateWindows(const WindowCount &in, WindowCount &out) = 0;
	virtual OP_STATUS DoLoadUrl(const Request &in, Window &out) = 0;

	// Event functions
	OP_STATUS SendOnUrlLoaded(const Window &msg);
	OP_STATUS SendOnConnectionFailed(const Window &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_URL_PLAYER

#endif // G_URLPLAYER_COMMAND_INTERFACE_H
