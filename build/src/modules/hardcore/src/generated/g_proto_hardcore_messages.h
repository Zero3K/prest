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

// Generated from ../../modules/hardcore/component/messages.proto



#ifndef G_PROTO_HARDCORE_MESSAGES_H
#define G_PROTO_HARDCORE_MESSAGES_H



#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpHardcoreMessages_Descriptors;

class OpHardcoreMessages_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpHardcoreMessages_MessageSet();
	virtual ~OpHardcoreMessages_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class MessageAddress;
	class PeerDisconnected;
	class PeerPending;
	class PeerConnected;
	class ComponentRequest;
	class ComponentManagerResponse;
	class Number;
	class Text;
	class Status;

	/**
	 * OpMessageAddress representation.
	 * 
	 * - Component Manager ID: SetManager(), GetManager().
	 * - Manager-local component ID: SetComponent(), GetComponent().
	 * - Component-local channel ID: SetChannel(), GetChannel().
	 */
	class MessageAddress
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		MessageAddress(
			INT32 manager_arg = 0,
			INT32 component_arg = 0,
			INT32 channel_arg = 0
			)
			: _manager(manager_arg)
			, _component(component_arg)
			, _channel(channel_arg)
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
		 * Check if the field @c manager is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasManager() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c component is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponent() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c channel is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasChannel() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c manager.
		 */
		INT32 GetManager() const
		{
			return _manager;
		}

		/**
		 * Get the field @c component.
		 */
		INT32 GetComponent() const
		{
			return _component;
		}

		/**
		 * Get the field @c channel.
		 */
		INT32 GetChannel() const
		{
			return _channel;
		}

		// Setters

		/**
		 * Set the field @c manager.
		 */
		void SetManager(INT32 v)
		{
			_manager = v;
		}

		/**
		 * Set the field @c component.
		 */
		void SetComponent(INT32 v)
		{
			_component = v;
		}

		/**
		 * Set the field @c channel.
		 */
		void SetChannel(INT32 v)
		{
			_channel = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _manager;
		INT32 _component;
		INT32 _channel;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Message to notify the disconnection of a channel.
	 * 
	 * Used internally by the component infrastructure layer.
	 * 
	 * Do NOT use this message for any other purpose. Channels receiving this
	 * message will update their internal records based on its origin, and
	 * this may break communication paths.
	 */
	class PeerDisconnected
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PeerDisconnected(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Message to notify that a channel's peer is pending.
	 * This message is sent to the OpChannel that is returned by
	 * OpComponent::RequestComponent(). The initial OpComponentManager sends it
	 * after passing the corresponding OpComponentRequestMessage to the platform
	 * (see OpComponentPlatform::RequestPeer()). The source address of the message
	 * is the address of the destination OpComponentManager which will host the
	 * requested OpComponent.
	 * @see OpComponent::RequestComponent()
	 * 
	 * On requesting a new OpComponent, the returned root channel to the new
	 * component doesn't have a destination address yet. This message sets the
	 * destination address of the root channel to the address of the destination
	 * OpComponentManager. If the OpComponentManager dies before creating the
	 * requested component, the root channel will be notified by an
	 * OpPeerDisconnectedMessage.
	 * 
	 * @note It is possible that the destination OpComponentManager creates the
	 *       requested OpComponent before this message is sent. In that case the
	 *       root channel will receive an OpPeerConnectedMessage before receiving
	 *       this message and this message will be ignored.
	 * 
	 * This message is used internally by the component framework.
	 * 
	 * Do NOT use this message for any other purpose. Channels receiving this
	 * message will update their internal records based on its origin, and
	 * this may break communication paths.
	 */
	class PeerPending
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PeerPending(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Message signalling that an entity is present and ready to communicate.
	 * 
	 * Used internally by the component infrastructure layer.
	 * 
	 * Do NOT use this message for any other purpose. Channels receiving this
	 * message will update their internal records based on its origin, and
	 * this may break communication paths.
	 */
	class PeerConnected
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		PeerConnected(
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

		// Getters

		// Setters

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Component request message.
	 * 
	 * Used internally by the component infrastructure layer. Sent from component
	 * where a request was made to the initial component manager.
	 */
	class ComponentRequest
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ComponentRequest(
			)
			: _componentType(0)
			, encoded_size_(-1)
		{
		}
		ComponentRequest(
			OpComponentType component_type_arg
			)
			: _componentType(static_cast<INT32>(component_type_arg))
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
		 * Check if the field @c componentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponentType() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		OpComponentType GetComponentType() const
		{
			return static_cast<OpComponentType>(_componentType);
		}

		// Setters

		/**
		 * Set the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		void SetComponentType(OpComponentType v)
		{
			_componentType = static_cast<INT32>(v);
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _componentType;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Component manager response message.
	 * 
	 * Used internally by the component infrastructure layer.
	 */
	class ComponentManagerResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ComponentManagerResponse(
			)
			: _request(0)
			, _componentType(0)
			, encoded_size_(-1)
		{
		}
		ComponentManagerResponse(
			OpComponentType component_type_arg,
			INT32 request_arg = 0
			)
			: _request(request_arg)
			, _componentType(static_cast<INT32>(component_type_arg))
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
		 * Check if the field @c request is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRequest() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c componentType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponentType() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c request.
		 * 
		 * Request identifier.
		 */
		INT32 GetRequest() const
		{
			return _request;
		}

		/**
		 * Get the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		OpComponentType GetComponentType() const
		{
			return static_cast<OpComponentType>(_componentType);
		}

		// Setters

		/**
		 * Set the field @c request.
		 * 
		 * Request identifier.
		 */
		void SetRequest(INT32 v)
		{
			_request = v;
		}

		/**
		 * Set the field @c componentType.
		 * 
		 * Type of component requested.
		 */
		void SetComponentType(OpComponentType v)
		{
			_componentType = static_cast<INT32>(v);
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _request;
		INT32 _componentType;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Simple numeric message.
	 * 
	 * Used for testing.
	 */
	class Number
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Number(
			INT64 number_arg = 0
			)
			: _number(number_arg)
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
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c number.
		 */
		INT64 GetNumber() const
		{
			return _number;
		}

		// Setters

		/**
		 * Set the field @c number.
		 */
		void SetNumber(INT64 v)
		{
			_number = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT64 _number;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Simple text message.
	 * 
	 * Used for testing.
	 */
	class Text
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Text(
			const UniString & text_arg = UniString()
			)
			: _text(text_arg)
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
		const UniString & GetText() const
		{
			return _text;
		}

		// Setters

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const UniString & v);

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _text;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Opera Status message.
	 * 
	 * The intended use case is code performing an operation on behalf of a caller
	 * in another component, and simply returning the status will automagically
	 * cause a message of this type to be sent to the caller on the local channel.
	 * 
	 * Example:
	 * @msc
	 * Component1, Component2;
	 * Component1 -> Component2
	 *    [label="1. SendMessage(SomeMessage::Create())",
	 *     url="\ref OpComponent::SendMessage()"];
	 * Component2 => Component2
	 *    [label="2. ProcessMessage()",
	 *     url="\ref OpComponent::ProcessMessage()"];
	 * Component2 -> Component1
	 *    [label="3. SendMessage(OpStatusMessage)",
	 *     url="\ref OpComponent::SendMessage()"];
	 * Component1 -> Component1
	 *    [label="4. ProcessMessage()",
	 *     url="\ref OpComponent::ProcessMessage()"];
	 * @endmsc
	 * 
	 * -# Component \#1: sends some message to a remote component:
	 *    @code
	 *        OpComponent* remote_component = ...;
	 *        remote_component->SendMessage(OpDoSomethingMessage::Create());
	 *    @endcode
	 * -# Component \#2: receives the message an handles it in
	 *    OpComponent::ProcessMessage() or OpMessageListener::ProcessMessage(). If
	 *    the handling method returns an error status on handling the message:
	 *    @code
	 *         switch (message->GetType()) {
	 *         case OpDoSomethingMessage::Type:
	 *            return OpStatus::ERR;
	 *         ...
	 *         }
	 *    @endcode
	 * -# Component \#2: ... sends an OpStatusMessage with the return OP_STATUS
	 *    value back to the sender.
	 * -# Component \#1: can then receive this message and handle it in its
	 *    OpMessageListener::ProcessMessage():
	 *    @code
	 *        switch (message->GetType()) {
	 *        case OpStatusMessage::Type:
	 *        {
	 *            OP_STATUS status = OpStatusMessage::Cast(message)->GetStatus();
	 *            // do something sensible with the status
	 *            ...
	 *            break;
	 *        }
	 *    @endcode
	 * 
	 * 
	 */
	class Status
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Status(
			)
			: _status(0)
			, encoded_size_(-1)
		{
		}
		Status(
			OP_STATUS status_arg
			)
			: _status(static_cast<INT32>(status_arg))
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
		 * Check if the field @c status is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStatus() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c status.
		 * 
		 * Numeric OP_STATUS code.
		 */
		OP_STATUS GetStatus() const
		{
			return static_cast<OP_STATUS>(_status);
		}

		// Setters

		/**
		 * Set the field @c status.
		 * 
		 * Numeric OP_STATUS code.
		 */
		void SetStatus(OP_STATUS v)
		{
			_status = static_cast<INT32>(v);
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _status;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};






#endif // G_PROTO_HARDCORE_MESSAGES_H
