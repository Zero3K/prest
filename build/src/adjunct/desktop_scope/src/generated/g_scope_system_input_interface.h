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

// Generated from ../../adjunct/desktop_scope/services/system_input/system_input.proto



#ifndef G_SCOPE_SYSTEM_INPUT_INTERFACE_H
#define G_SCOPE_SYSTEM_INPUT_INTERFACE_H

#ifdef SCOPE_DESKTOP_SUPPORT

#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeSystemInput_Descriptors;

class OpScopeSystemInput_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeSystemInput_MessageSet();
	virtual ~OpScopeSystemInput_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum ModifierPressed
	{
	    MODIFIERPRESSED_NONE,
	    MODIFIERPRESSED_CTRL = 1,
	    MODIFIERPRESSED_SHIFT = 2,
	    MODIFIERPRESSED_ALT = 4,
	    MODIFIERPRESSED_META = 8,
	    MODIFIERPRESSED_SUPER = 16
	};

	enum MouseInfo_MouseButton
	{
	    MouseInfo_MouseButton_MOUSEBUTTON_LEFT,
	    MouseInfo_MouseButton_MOUSEBUTTON_RIGHT = 1,
	    MouseInfo_MouseButton_MOUSEBUTTON_MIDDLE = 2
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class KeyPressInfo;
	class MouseInfo;

	class KeyPressInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		KeyPressInfo(
			UINT32 modifier_arg = 0
			)
			: _modifier(modifier_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & key_arg
			)
		{
			RETURN_IF_ERROR(_key.Set(key_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c key is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasKey() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c modifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasModifier() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c key.
		 */
		const OpString & GetKey() const
		{
			return _key;
		}

		/**
		 * Get the field @c modifier.
		 * 
		 * Combine flags to set the modifiers
		 * Direct copy of the Opera modifiers
		 * 
		 */
		UINT32 GetModifier() const
		{
			return _modifier;
		}

		// Setters

		/**
		 * Set the field @c key.
		 */
		OP_STATUS SetKey(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c modifier.
		 * 
		 * Combine flags to set the modifiers
		 * Direct copy of the Opera modifiers
		 * 
		 */
		void SetModifier(UINT32 v)
		{
			_modifier = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeSystemInput_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _key;
		UINT32 _modifier;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * 
	 */
	class MouseInfo
	{
	public:
		// BEGIN: Nested items

		// Enum MouseInfo.MouseButton
		typedef MouseInfo_MouseButton MouseButton;
		static const MouseInfo_MouseButton MOUSEBUTTON_LEFT = MouseInfo_MouseButton_MOUSEBUTTON_LEFT;
		static const MouseInfo_MouseButton MOUSEBUTTON_RIGHT = MouseInfo_MouseButton_MOUSEBUTTON_RIGHT;
		static const MouseInfo_MouseButton MOUSEBUTTON_MIDDLE = MouseInfo_MouseButton_MOUSEBUTTON_MIDDLE;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		MouseInfo(
			UINT32 x_arg = 0,
			UINT32 y_arg = 0,
			MouseInfo_MouseButton button_arg = MouseInfo_MouseButton_MOUSEBUTTON_LEFT,
			UINT32 num_clicks_arg = 0,
			UINT32 modifier_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
			, _button(button_arg)
			, _numClicks(num_clicks_arg)
			, _modifier(modifier_arg)
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
		 * Check if the field @c x is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasX() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c y is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasY() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c button is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasButton() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c numClicks is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumClicks() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c modifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasModifier() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c x.
		 */
		UINT32 GetX() const
		{
			return _x;
		}

		/**
		 * Get the field @c y.
		 */
		UINT32 GetY() const
		{
			return _y;
		}

		/**
		 * Get the field @c button.
		 */
		OpScopeSystemInput_MessageSet::MouseInfo_MouseButton GetButton() const
		{
			return static_cast<OpScopeSystemInput_MessageSet::MouseInfo_MouseButton>(_button);
		}

		/**
		 * Get the field @c numClicks.
		 */
		UINT32 GetNumClicks() const
		{
			return _numClicks;
		}

		/**
		 * Get the field @c modifier.
		 * 
		 * Combine flags to set the modifiers
		 * Direct copy of the Opera modifiers
		 * 
		 */
		UINT32 GetModifier() const
		{
			return _modifier;
		}

		// Setters

		/**
		 * Set the field @c x.
		 */
		void SetX(UINT32 v)
		{
			_x = v;
		}

		/**
		 * Set the field @c y.
		 */
		void SetY(UINT32 v)
		{
			_y = v;
		}

		/**
		 * Set the field @c button.
		 */
		void SetButton(OpScopeSystemInput_MessageSet::MouseInfo_MouseButton v);

		/**
		 * Set the field @c numClicks.
		 */
		void SetNumClicks(UINT32 v)
		{
			_numClicks = v;
		}

		/**
		 * Set the field @c modifier.
		 * 
		 * Combine flags to set the modifiers
		 * Direct copy of the Opera modifiers
		 * 
		 */
		void SetModifier(UINT32 v)
		{
			_modifier = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeSystemInput_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _x;
		UINT32 _y;
		INT32 _button;
		UINT32 _numClicks;
		UINT32 _modifier;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeSystemInput_Descriptors
{
public:
	OpScopeSystemInput_Descriptors();
	~OpScopeSystemInput_Descriptors();

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
		_gen_MessageOffs_key_press_info_,
		_gen_MessageOffs_mouse_info_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_key_press_info_
		, _gen_MsgID_mouse_info_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for ModifierPressed
		_gen_EnumID_ModifierPressed,
		// Meta info for MouseButton
		_gen_EnumID_MouseInfo_MouseButton,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for ModifierPressed
		_gen_EnumValueCount_ModifierPressed = 6,
		// Meta info for MouseButton
		_gen_EnumValueCount_MouseInfo_MouseButton = 3,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for ModifierPressed
		_gen_Enum_ModifierPressed,
		// Meta info for MouseButton
		_gen_Enum_MouseInfo_MouseButton,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[2];

};


class OpScopeSystemInput_SI
	: public OpScopeService
	, public OpScopeSystemInput_MessageSet
{
public:
	OpScopeSystemInput_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeSystemInput_SI();

	enum CommandEnum
	{
		  Command_Click = 1
		, Command_KeyPress = 2
		, Command_KeyUp = 3
		, Command_KeyDown = 4
		, Command_MouseDown = 5
		, Command_MouseUp = 6
		, Command_MouseMove = 7

		, Command_Count = 7 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeSystemInput_Descriptors
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
	virtual OP_STATUS DoClick(const MouseInfo &in) = 0;
	virtual OP_STATUS DoKeyPress(const KeyPressInfo &in) = 0;
	virtual OP_STATUS DoKeyUp(const KeyPressInfo &in) = 0;
	virtual OP_STATUS DoKeyDown(const KeyPressInfo &in) = 0;
	virtual OP_STATUS DoMouseDown(const MouseInfo &in) = 0;
	virtual OP_STATUS DoMouseUp(const MouseInfo &in) = 0;
	virtual OP_STATUS DoMouseMove(const MouseInfo &in) = 0;


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_DESKTOP_SUPPORT

#endif // G_SCOPE_SYSTEM_INPUT_INTERFACE_H
