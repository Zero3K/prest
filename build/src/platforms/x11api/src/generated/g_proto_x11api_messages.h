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

// Generated from ../../platforms/x11api/messages.proto



#ifndef G_PROTO_X11API_MESSAGES_H
#define G_PROTO_X11API_MESSAGES_H

#ifdef NS4P_UNIX_PLATFORM

#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpX11apiMessages_Descriptors;

class OpX11apiMessages_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpX11apiMessages_MessageSet();
	virtual ~OpX11apiMessages_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class PluginParentChanged;
	class PluginGtkPlugAdded;
	class BrowserWindowInformationResponse;
	class BrowserWindowInformation;

	/**
	 * Notify plug-in of a reparenting.
	 * 
	 * A reparenting occurs when a tab is torn from its current browser window
	 * and put into another existing or a new browser window. The plug-in needs
	 * this notification in order to be able to propagate input events properly.
	 * 
	 * @field parent The identifier of the new top-level browser window that now
	 *               contains this plug-in instance.
	 * 
	 * This message does not have a response.
	 */
	class PluginParentChanged
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginParentChanged(
			UINT64 parent_arg = 0
			)
			: _parent(parent_arg)
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
		 * Check if the field @c parent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParent() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c parent.
		 */
		UINT64 GetParent() const
		{
			return _parent;
		}

		// Setters

		/**
		 * Set the field @c parent.
		 */
		void SetParent(UINT64 v)
		{
			_parent = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _parent;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Notify the browser plugin window that the plugin has created and added its
	 * window on top of it.
	 * 
	 * This message does not have a response.
	 */
	class PluginGtkPlugAdded
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PluginGtkPlugAdded(
			UINT64 plug_arg = 0
			)
			: _plug(plug_arg)
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
		 * Check if the field @c plug is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPlug() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c plug.
		 */
		UINT64 GetPlug() const
		{
			return _plug;
		}

		// Setters

		/**
		 * Set the field @c plug.
		 */
		void SetPlug(UINT64 v)
		{
			_plug = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _plug;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Send browser window information.
	 * 
	 * Additional information can be obtained using Xlib:
	 *     Display* OpenDisplay(display_name)
	 *     Colormap DefaultColormap(display, screen_number)
	 *     GC       DefaultGC(display, screen_number)
	 *     int      DefaultDepth(display, screen_number)
	 *     Visual*  DefaultVisual(display, screen_number)
	 * 
	 * @field displayName Name of X11 display.
	 * @field screenNumber The screen referenced by the display.
	 * @field window Top-level browser window that contains the plug-in sending this request.
	 */
	class BrowserWindowInformationResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		BrowserWindowInformationResponse(
			const UniString & display_name_arg = UniString(),
			INT32 screen_number_arg = 0,
			UINT32 window_arg = 0
			)
			: _displayName(display_name_arg)
			, _screenNumber(screen_number_arg)
			, _window(window_arg)
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
		 * Check if the field @c displayName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisplayName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c screenNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScreenNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c displayName.
		 */
		const UniString & GetDisplayName() const
		{
			return _displayName;
		}

		/**
		 * Get the field @c screenNumber.
		 */
		INT32 GetScreenNumber() const
		{
			return _screenNumber;
		}

		/**
		 * Get the field @c window.
		 */
		UINT32 GetWindow() const
		{
			return _window;
		}

		// Setters

		/**
		 * Set the field @c displayName.
		 */
		OP_STATUS SetDisplayName(const UniString & v);

		/**
		 * Set the field @c displayName.
		 */
		OP_STATUS SetDisplayName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c screenNumber.
		 */
		void SetScreenNumber(INT32 v)
		{
			_screenNumber = v;
		}

		/**
		 * Set the field @c window.
		 */
		void SetWindow(UINT32 v)
		{
			_window = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _displayName;
		INT32 _screenNumber;
		UINT32 _window;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request browser window information.
	 * 
	 * @return BrowserWindowInformationResponse
	 */
	class BrowserWindowInformation
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		BrowserWindowInformation(
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

		static const OpProtobufMessage *GetMessageDescriptor(OpX11apiMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};




#endif // NS4P_UNIX_PLATFORM

#endif // G_PROTO_X11API_MESSAGES_H
