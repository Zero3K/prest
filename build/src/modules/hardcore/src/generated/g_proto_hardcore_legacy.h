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

// Generated from ../../modules/hardcore/component/legacy.proto



#ifndef G_PROTO_HARDCORE_LEGACY_H
#define G_PROTO_HARDCORE_LEGACY_H



#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpHardcoreLegacy_Descriptors;

class OpHardcoreLegacy_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpHardcoreLegacy_MessageSet();
	virtual ~OpHardcoreLegacy_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class Legacy;

	/**
	 * Message wrapping the legacy (Message, MH_PARAM_1, MH_PARAM_2, MessageHandler*) structure.
	 * 
	 * These messages are automatically pooled for performance reasons.
	 */
	class Legacy
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Legacy(
			)
			: _message(0)
			, _param1(0)
			, _param2(0)
			, _messageHandler(0)
			, encoded_size_(-1)
		{
		}
		Legacy(
			OpMessage message_arg,
			MH_PARAM_1 param1_arg,
			MH_PARAM_2 param2_arg,
			MessageHandler* message_handler_arg
			)
			: _message(static_cast<INT32>(message_arg))
			, _param1(static_cast<UINT64>(param1_arg))
			, _param2(static_cast<UINT64>(param2_arg))
			, _messageHandler(((UINT64)message_handler_arg))
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
		 * Check if the field @c message is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessage() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c param1 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParam1() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c param2 is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParam2() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c messageHandler is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMessageHandler() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c message.
		 * 
		 * OpMessage numeric type.
		 */
		OpMessage GetMessage() const
		{
			return static_cast<OpMessage>(_message);
		}

		/**
		 * Get the field @c param1.
		 * 
		 * Parameter 1.
		 */
		MH_PARAM_1 GetParam1() const
		{
			return static_cast<MH_PARAM_1>(_param1);
		}

		/**
		 * Get the field @c param2.
		 * 
		 * Parameter 2.
		 */
		MH_PARAM_2 GetParam2() const
		{
			return static_cast<MH_PARAM_2>(_param2);
		}

		/**
		 * Get the field @c messageHandler.
		 * 
		 * Pointer to the message handler that is to receive the callback.
		 */
		MessageHandler* GetMessageHandler() const
		{
			return ((MessageHandler*)_messageHandler);
		}

		// Setters

		/**
		 * Set the field @c message.
		 * 
		 * OpMessage numeric type.
		 */
		void SetMessage(OpMessage v)
		{
			_message = static_cast<INT32>(v);
		}

		/**
		 * Set the field @c param1.
		 * 
		 * Parameter 1.
		 */
		void SetParam1(MH_PARAM_1 v)
		{
			_param1 = static_cast<UINT64>(v);
		}

		/**
		 * Set the field @c param2.
		 * 
		 * Parameter 2.
		 */
		void SetParam2(MH_PARAM_2 v)
		{
			_param2 = static_cast<UINT64>(v);
		}

		/**
		 * Set the field @c messageHandler.
		 * 
		 * Pointer to the message handler that is to receive the callback.
		 */
		void SetMessageHandler(MessageHandler* v)
		{
			_messageHandler = ((UINT64)v);
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreLegacy_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _message;
		UINT64 _param1;
		UINT64 _param2;
		UINT64 _messageHandler;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};






#endif // G_PROTO_HARDCORE_LEGACY_H
