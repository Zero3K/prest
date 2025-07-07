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

// Generated from ../../modules/scope/services/overlay/overlay.proto



#ifndef G_SCOPE_OVERLAY_INTERFACE_H
#define G_SCOPE_OVERLAY_INTERFACE_H

#ifdef SCOPE_OVERLAY

#include "modules/scope/src/scope_service.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeOverlay_Descriptors;

class OpScopeOverlay_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeOverlay_MessageSet();
	virtual ~OpScopeOverlay_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum OverlayType
	{
	    OVERLAYTYPE_AREA = 1
	};

	enum InsertionMethod
	{
	    INSERTIONMETHOD_FRONT = 1,
	    INSERTIONMETHOD_BACK = 2,
	    INSERTIONMETHOD_ABOVE_TARGET = 3,
	    INSERTIONMETHOD_BELOW_TARGET = 4
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class OverlayID;
	class RemoveOverlayArg;
	class Insertion;
	class CreateOverlayArg;
	class Color;
	class Area;
	class AreaOverlay;

	class OverlayID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		OverlayID(
			UINT32 overlay_id_arg = 0
			)
			: _overlayID(overlay_id_arg)
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
		 * Check if the field @c overlayID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOverlayID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c overlayID.
		 * 
		 * Non-zero ID for an overlay.
		 */
		UINT32 GetOverlayID() const
		{
			return _overlayID;
		}

		// Setters

		/**
		 * Set the field @c overlayID.
		 * 
		 * Non-zero ID for an overlay.
		 */
		void SetOverlayID(UINT32 v)
		{
			_overlayID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _overlayID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class RemoveOverlayArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		RemoveOverlayArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _overlayID(0)
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

		/**
		 * Check if the field @c overlayID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOverlayID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c overlayID.
		 * 
		 * The ID for the overlay to remove.
		 * 
		 * If not set, remove *all* overlays for the given window.
		 */
		UINT32 GetOverlayID() const
		{
			return _overlayID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c overlayID.
		 * 
		 * The ID for the overlay to remove.
		 * 
		 * If not set, remove *all* overlays for the given window.
		 */
		void SetOverlayID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_overlayID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _overlayID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Insertion
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Insertion(
			InsertionMethod method_arg = INSERTIONMETHOD_FRONT
			)
			: _method(method_arg)
			, _overlayID(0)
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
		 * Check if the field @c method is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMethod() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c overlayID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOverlayID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c method.
		 * 
		 * Specifies how an overlay should be inserted.
		 */
		OpScopeOverlay_MessageSet::InsertionMethod GetMethod() const
		{
			return static_cast<OpScopeOverlay_MessageSet::InsertionMethod>(_method);
		}

		/**
		 * Get the field @c overlayID.
		 * 
		 * If `method` is `ABOVE_TARGET` or `BELOW_TARGET`, then this field must
		 * be set, and refer to a valid overlay.
		 */
		UINT32 GetOverlayID() const
		{
			return _overlayID;
		}

		// Setters

		/**
		 * Set the field @c method.
		 * 
		 * Specifies how an overlay should be inserted.
		 */
		void SetMethod(OpScopeOverlay_MessageSet::InsertionMethod v);

		/**
		 * Set the field @c overlayID.
		 * 
		 * If `method` is `ABOVE_TARGET` or `BELOW_TARGET`, then this field must
		 * be set, and refer to a valid overlay.
		 */
		void SetOverlayID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_overlayID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _method;
		UINT32 _overlayID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CreateOverlayArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		CreateOverlayArg(
			UINT32 window_id_arg = 0,
			OverlayType overlay_type_arg = OVERLAYTYPE_AREA
			)
			: _windowID(window_id_arg)
			, _overlayType(overlay_type_arg)
			, _areaOverlay(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~CreateOverlayArg()
		{
			OP_DELETE(_areaOverlay);
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
		 * Check if the field @c overlayType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOverlayType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c insertion is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInsertion() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c areaOverlay is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAreaOverlay() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c overlayType.
		 * 
		 * The type of overlay we want to create.
		 */
		OpScopeOverlay_MessageSet::OverlayType GetOverlayType() const
		{
			return static_cast<OpScopeOverlay_MessageSet::OverlayType>(_overlayType);
		}

		/**
		 * Get the field @c insertion.
		 * 
		 * Where to insert this overlay in the list of overlays.
		 */
		const OpScopeOverlay_MessageSet::Insertion & GetInsertion() const
		{
			return _insertion;
		}

		/**
		 * Get the field @c areaOverlay.
		 * 
		 * Must be provided if `overlayType` is `AREA`.
		 */
		OpScopeOverlay_MessageSet::AreaOverlay * GetAreaOverlay() const
		{
			return _areaOverlay;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c overlayType.
		 * 
		 * The type of overlay we want to create.
		 */
		void SetOverlayType(OpScopeOverlay_MessageSet::OverlayType v);

		/**
		 * Set the field @c insertion.
		 * 
		 * Where to insert this overlay in the list of overlays.
		 */
		OpScopeOverlay_MessageSet::Insertion & GetInsertionRef();

		/**
		 * Set the field @c areaOverlay.
		 * 
		 * Must be provided if `overlayType` is `AREA`.
		 */
		void SetAreaOverlay(OpScopeOverlay_MessageSet::AreaOverlay * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		INT32 _overlayType;
		OpScopeOverlay_MessageSet::Insertion _insertion;
		OpScopeOverlay_MessageSet::AreaOverlay * _areaOverlay;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class Color
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Color(
			UINT32 r_arg = 0,
			UINT32 g_arg = 0,
			UINT32 b_arg = 0
			)
			: _r(r_arg)
			, _g(g_arg)
			, _b(b_arg)
			, _a(255)
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
		 * Check if the field @c r is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasR() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c g is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasG() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c b is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasB() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c a is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasA() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c r.
		 * 
		 * The red component of the `Color`. (0 - 255).
		 */
		UINT32 GetR() const
		{
			return _r;
		}

		/**
		 * Get the field @c g.
		 * 
		 * The green component of the `Color`. (0 - 255).
		 */
		UINT32 GetG() const
		{
			return _g;
		}

		/**
		 * Get the field @c b.
		 * 
		 * The blue component of the `Color`. (0 - 255).
		 */
		UINT32 GetB() const
		{
			return _b;
		}

		/**
		 * Get the field @c a.
		 * 
		 * The alpha component of the `Color`. (0 - 255).
		 */
		UINT32 GetA() const
		{
			return _a;
		}

		// Setters

		/**
		 * Set the field @c r.
		 * 
		 * The red component of the `Color`. (0 - 255).
		 */
		void SetR(UINT32 v)
		{
			_r = v;
		}

		/**
		 * Set the field @c g.
		 * 
		 * The green component of the `Color`. (0 - 255).
		 */
		void SetG(UINT32 v)
		{
			_g = v;
		}

		/**
		 * Set the field @c b.
		 * 
		 * The blue component of the `Color`. (0 - 255).
		 */
		void SetB(UINT32 v)
		{
			_b = v;
		}

		/**
		 * Set the field @c a.
		 * 
		 * The alpha component of the `Color`. (0 - 255).
		 */
		void SetA(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_a = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _r;
		UINT32 _g;
		UINT32 _b;
		UINT32 _a;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class Area
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Area(
			UINT32 x_arg = 0,
			UINT32 y_arg = 0,
			UINT32 w_arg = 0,
			UINT32 h_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
			, _w(w_arg)
			, _h(h_arg)
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
		 * Check if the field @c w is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasW() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c h is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasH() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c x.
		 * 
		 * The x-coordinate of the upper-left corner of the area, in document
		 * coordinates.
		 */
		UINT32 GetX() const
		{
			return _x;
		}

		/**
		 * Get the field @c y.
		 * 
		 * The y-coordinate of the upper-left corner of the area, in document
		 * coordinates.
		 */
		UINT32 GetY() const
		{
			return _y;
		}

		/**
		 * Get the field @c w.
		 * 
		 * The width of the area.
		 */
		UINT32 GetW() const
		{
			return _w;
		}

		/**
		 * Get the field @c h.
		 * 
		 * The height of the area.
		 */
		UINT32 GetH() const
		{
			return _h;
		}

		// Setters

		/**
		 * Set the field @c x.
		 * 
		 * The x-coordinate of the upper-left corner of the area, in document
		 * coordinates.
		 */
		void SetX(UINT32 v)
		{
			_x = v;
		}

		/**
		 * Set the field @c y.
		 * 
		 * The y-coordinate of the upper-left corner of the area, in document
		 * coordinates.
		 */
		void SetY(UINT32 v)
		{
			_y = v;
		}

		/**
		 * Set the field @c w.
		 * 
		 * The width of the area.
		 */
		void SetW(UINT32 v)
		{
			_w = v;
		}

		/**
		 * Set the field @c h.
		 * 
		 * The height of the area.
		 */
		void SetH(UINT32 v)
		{
			_h = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _x;
		UINT32 _y;
		UINT32 _w;
		UINT32 _h;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class AreaOverlay
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		AreaOverlay(
			)
			: _borderColor(NULL)
			, _gridColor(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~AreaOverlay()
		{
			OP_DELETE(_borderColor);
			OP_DELETE(_gridColor);
		}

		// Checkers
		/**
		 * Check if the field @c area is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArea() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c backgroundColor is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBackgroundColor() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c borderColor is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBorderColor() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c gridColor is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasGridColor() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c area.
		 * 
		 * The area that should be painted.
		 */
		const OpScopeOverlay_MessageSet::Area & GetArea() const
		{
			return _area;
		}

		/**
		 * Get the field @c backgroundColor.
		 * 
		 * The background color of the area.
		 */
		const OpScopeOverlay_MessageSet::Color & GetBackgroundColor() const
		{
			return _backgroundColor;
		}

		/**
		 * Get the field @c borderColor.
		 * 
		 * If set, draw a 1px border on the inside of the area.
		 */
		OpScopeOverlay_MessageSet::Color * GetBorderColor() const
		{
			return _borderColor;
		}

		/**
		 * Get the field @c gridColor.
		 * 
		 * If set, draw a 1px wide lines intersecting the area edges
		 * and extending over whole window.
		 */
		OpScopeOverlay_MessageSet::Color * GetGridColor() const
		{
			return _gridColor;
		}

		// Setters

		/**
		 * Set the field @c area.
		 * 
		 * The area that should be painted.
		 */
		OpScopeOverlay_MessageSet::Area & GetAreaRef();

		/**
		 * Set the field @c backgroundColor.
		 * 
		 * The background color of the area.
		 */
		OpScopeOverlay_MessageSet::Color & GetBackgroundColorRef();

		/**
		 * Set the field @c borderColor.
		 * 
		 * If set, draw a 1px border on the inside of the area.
		 */
		void SetBorderColor(OpScopeOverlay_MessageSet::Color * v);

		/**
		 * Set the field @c gridColor.
		 * 
		 * If set, draw a 1px wide lines intersecting the area edges
		 * and extending over whole window.
		 */
		void SetGridColor(OpScopeOverlay_MessageSet::Color * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeOverlay_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeOverlay_MessageSet::Area _area;
		OpScopeOverlay_MessageSet::Color _backgroundColor;
		OpScopeOverlay_MessageSet::Color * _borderColor;
		OpScopeOverlay_MessageSet::Color * _gridColor;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeOverlay_Descriptors
{
public:
	OpScopeOverlay_Descriptors();
	~OpScopeOverlay_Descriptors();

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
		_gen_MessageOffs_area_,
		_gen_MessageOffs_area_overlay_,
		_gen_MessageOffs_color_,
		_gen_MessageOffs_create_overlay_arg_,
		_gen_MessageOffs_insertion_,
		_gen_MessageOffs_overlay_id_,
		_gen_MessageOffs_remove_overlay_arg_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_area_
		, _gen_MsgID_area_overlay_
		, _gen_MsgID_color_
		, _gen_MsgID_create_overlay_arg_
		, _gen_MsgID_insertion_
		, _gen_MsgID_overlay_id_
		, _gen_MsgID_remove_overlay_arg_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for OverlayType
		_gen_EnumID_OverlayType,
		// Meta info for InsertionMethod
		_gen_EnumID_InsertionMethod,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for OverlayType
		_gen_EnumValueCount_OverlayType = 1,
		// Meta info for InsertionMethod
		_gen_EnumValueCount_InsertionMethod = 4,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for OverlayType
		_gen_Enum_OverlayType,
		// Meta info for InsertionMethod
		_gen_Enum_InsertionMethod,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[2];

};


class OpScopeOverlay_SI
	: public OpScopeService
	, public OpScopeOverlay_MessageSet
{
public:
	OpScopeOverlay_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeOverlay_SI();

	enum CommandEnum
	{
		  Command_CreateOverlay = 1
		, Command_RemoveOverlay = 2

		, Command_Count = 2 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeOverlay_Descriptors
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
	virtual OP_STATUS DoCreateOverlay(const CreateOverlayArg &in, OverlayID &out) = 0;
	virtual OP_STATUS DoRemoveOverlay(const RemoveOverlayArg &in) = 0;


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_OVERLAY

#endif // G_SCOPE_OVERLAY_INTERFACE_H
