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

// Generated from ../../modules/hardcore/component/component.proto



#ifndef G_PROTO_HARDCORE_COMPONENT_H
#define G_PROTO_HARDCORE_COMPONENT_H



#include "modules/opdata/OpData.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpHardcoreComponent_Descriptors;

class OpHardcoreComponent_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpHardcoreComponent_MessageSet();
	virtual ~OpHardcoreComponent_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class TypedMessage_Address;
	class TypedMessage;

	/**
	 * Message address; identifies the endpoints of an OpTypedMessage.
	 */
	class TypedMessage_Address
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		TypedMessage_Address(
			INT32 component_manager_arg = 0,
			INT32 component_arg = 0,
			INT32 channel_arg = 0
			)
			: _componentManager(component_manager_arg)
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
		 * Check if the field @c componentManager is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComponentManager() const
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
		 * Get the field @c componentManager.
		 * 
		 * Number identifying the OpComponentManager instance.
		 */
		INT32 GetComponentManager() const
		{
			return _componentManager;
		}

		/**
		 * Get the field @c component.
		 * 
		 * Number identifying the OpComponent instance within that OpComponentManager instance.
		 */
		INT32 GetComponent() const
		{
			return _component;
		}

		/**
		 * Get the field @c channel.
		 * 
		 * Number identifying the OpChannel instance managed by that OpComponent instance.
		 */
		INT32 GetChannel() const
		{
			return _channel;
		}

		// Setters

		/**
		 * Set the field @c componentManager.
		 * 
		 * Number identifying the OpComponentManager instance.
		 */
		void SetComponentManager(INT32 v)
		{
			_componentManager = v;
		}

		/**
		 * Set the field @c component.
		 * 
		 * Number identifying the OpComponent instance within that OpComponentManager instance.
		 */
		void SetComponent(INT32 v)
		{
			_component = v;
		}

		/**
		 * Set the field @c channel.
		 * 
		 * Number identifying the OpChannel instance managed by that OpComponent instance.
		 */
		void SetChannel(INT32 v)
		{
			_channel = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreComponent_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _componentManager;
		INT32 _component;
		INT32 _channel;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Defines the common content of an OpTypedMessage. This is used to send
	 * an OpTypedMessage from one process to another.
	 * 
	 * The data of the OpTypedMessage is first serialized to a byte buffer then
	 * placed in this structure and serialized again before being sent to the
	 * receiving process.
	 */
	class TypedMessage
	{
	public:
		// BEGIN: Nested items

		// Message TypedMessage.Address
		typedef TypedMessage_Address Address;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		TypedMessage(
			double due_time_arg = 0.0,
			INT32 type_arg = 0,
			const OpData & data_arg = OpData()
			)
			: _dueTime(due_time_arg)
			, _type(type_arg)
			, _data(data_arg)
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
		 * Check if the field @c source is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSource() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c destination is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDestination() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c dueTime is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDueTime() const
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
		 * Check if the field @c data is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasData() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c source.
		 * 
		 * The source message address.
		 */
		const OpHardcoreComponent_MessageSet::TypedMessage_Address & GetSource() const
		{
			return _source;
		}

		/**
		 * Get the field @c destination.
		 * 
		 * The destination message address.
		 */
		const OpHardcoreComponent_MessageSet::TypedMessage_Address & GetDestination() const
		{
			return _destination;
		}

		/**
		 * Get the field @c dueTime.
		 * 
		 * Number of milliseconds until this message should be processed.
		 */
		double GetDueTime() const
		{
			return _dueTime;
		}

		/**
		 * Get the field @c type.
		 * 
		 * Identifies the specific OpTypedMessage sub-class. The value corresponds
		 * to the enum OpTypedMessage::MessageType.
		 */
		INT32 GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c data.
		 * 
		 * The serialized protobuf data of the message.
		 */
		const OpData & GetData() const
		{
			return _data;
		}

		// Setters

		/**
		 * Set the field @c source.
		 * 
		 * The source message address.
		 */
		OpHardcoreComponent_MessageSet::TypedMessage_Address & GetSourceRef();

		/**
		 * Set the field @c destination.
		 * 
		 * The destination message address.
		 */
		OpHardcoreComponent_MessageSet::TypedMessage_Address & GetDestinationRef();

		/**
		 * Set the field @c dueTime.
		 * 
		 * Number of milliseconds until this message should be processed.
		 */
		void SetDueTime(double v)
		{
			_dueTime = v;
		}

		/**
		 * Set the field @c type.
		 * 
		 * Identifies the specific OpTypedMessage sub-class. The value corresponds
		 * to the enum OpTypedMessage::MessageType.
		 */
		void SetType(INT32 v)
		{
			_type = v;
		}

		/**
		 * Set the field @c data.
		 * 
		 * The serialized protobuf data of the message.
		 */
		OpData & GetDataRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpHardcoreComponent_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpHardcoreComponent_MessageSet::TypedMessage_Address _source;
		OpHardcoreComponent_MessageSet::TypedMessage_Address _destination;
		double _dueTime;
		INT32 _type;
		OpData _data;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};






#endif // G_PROTO_HARDCORE_COMPONENT_H
