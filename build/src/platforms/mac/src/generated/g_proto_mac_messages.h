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

// Generated from ../../platforms/mac/pi/messages.proto



#ifndef G_PROTO_MAC_MESSAGES_H
#define G_PROTO_MAC_MESSAGES_H

#ifdef _MACINTOSH_

#include "modules/opdata/UniString.h"
#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpMacMessages_Descriptors;

class OpMacMessages_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpMacMessages_MessageSet();
	virtual ~OpMacMessages_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class MacPluginContextMenuShown;
	class MacPluginIMEText;
	class MacPluginCursorShown;
	class MacPluginWindowShown;
	class MacPluginFullscreen;
	class MacPluginDesktopWindowMovement;
	class MacPluginVisibility;
	class MacPluginInfoResponse;
	class MacPluginInfo;
	class MacPluginUpdateView;

	/**
	 * Plugin PopUpContextMenu shown notification. Sends the hide/unhide message from the
	 * PluginWrapper to the Browser process so it knows if the plugin context
	 * is shown or hidden
	 * 
	 * @field show True when the menu is shown, otherwise False
	 * 
	 * @return None.
	 */
	class MacPluginContextMenuShown
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MacPluginContextMenuShown(
			BOOL show_arg = FALSE
			)
			: _show(show_arg)
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
		 * Check if the field @c show is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShow() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c show.
		 */
		BOOL GetShow() const
		{
			return _show;
		}

		// Setters

		/**
		 * Set the field @c show.
		 */
		void SetShow(BOOL v)
		{
			_show = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _show;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Composed text to send to the plugin after the IME has finished
	 * 
	 * @field string Composed string to send to the plugin
	 * 
	 * @return None.
	 */
	class MacPluginIMEText
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MacPluginIMEText(
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

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UniString _text;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Plugin Cursor shown notification. Sends the hide/unhide message from the
	 * PluginWrapper to the Browser process so it knows to hide or show the cursor
	 * 
	 * @field show True when the cursor is shown, otherwise False
	 * 
	 * @return None.
	 */
	class MacPluginCursorShown
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MacPluginCursorShown(
			BOOL show_arg = FALSE
			)
			: _show(show_arg)
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
		 * Check if the field @c show is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShow() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c show.
		 */
		BOOL GetShow() const
		{
			return _show;
		}

		// Setters

		/**
		 * Set the field @c show.
		 */
		void SetShow(BOOL v)
		{
			_show = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _show;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Window shown notification. Send when the plug-in opens or closes
	 * a window. Note: You may get more than one call to open once a window
	 * has been opened
	 * 
	 * @field show True when a window is shown, otherwise False
	 * @field highLongOfPSN The high-order long integer of the process serial number
	 * @field lowLongOfPSN The low-order long integer of the process serial number
	 * 
	 * @return None.
	 */
	class MacPluginWindowShown
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		MacPluginWindowShown(
			BOOL show_arg = FALSE,
			UINT32 high_long_of_psn_arg = 0,
			UINT32 low_long_of_psn_arg = 0
			)
			: _show(show_arg)
			, _highLongOfPSN(high_long_of_psn_arg)
			, _lowLongOfPSN(low_long_of_psn_arg)
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
		 * Check if the field @c show is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShow() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c highLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHighLongOfPSN() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lowLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLowLongOfPSN() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c show.
		 */
		BOOL GetShow() const
		{
			return _show;
		}

		/**
		 * Get the field @c highLongOfPSN.
		 */
		UINT32 GetHighLongOfPSN() const
		{
			return _highLongOfPSN;
		}

		/**
		 * Get the field @c lowLongOfPSN.
		 */
		UINT32 GetLowLongOfPSN() const
		{
			return _lowLongOfPSN;
		}

		// Setters

		/**
		 * Set the field @c show.
		 */
		void SetShow(BOOL v)
		{
			_show = v;
		}

		/**
		 * Set the field @c highLongOfPSN.
		 */
		void SetHighLongOfPSN(UINT32 v)
		{
			_highLongOfPSN = v;
		}

		/**
		 * Set the field @c lowLongOfPSN.
		 */
		void SetLowLongOfPSN(UINT32 v)
		{
			_lowLongOfPSN = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _show;
		UINT32 _highLongOfPSN;
		UINT32 _lowLongOfPSN;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Fullscreen notification; sent from MacOpPluginTranslator (wrapper),
	 * so the Browser can do things like hide/show the dock and menu bar when the
	 * plug-in switchs between normal and fullscreen mode
	 * 
	 * @field fullscreen True if the plug-in switch to full screen
	 * @field highLongOfPSN The high-order long integer of the process serial number
	 * @field lowLongOfPSN The low-order long integer of the process serial number
	 * 
	 * @return None.
	 */
	class MacPluginFullscreen
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		MacPluginFullscreen(
			BOOL fullscreen_arg = FALSE,
			UINT32 high_long_of_psn_arg = 0,
			UINT32 low_long_of_psn_arg = 0
			)
			: _fullscreen(fullscreen_arg)
			, _highLongOfPSN(high_long_of_psn_arg)
			, _lowLongOfPSN(low_long_of_psn_arg)
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
		 * Check if the field @c fullscreen is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFullscreen() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c highLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHighLongOfPSN() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lowLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLowLongOfPSN() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c fullscreen.
		 */
		BOOL GetFullscreen() const
		{
			return _fullscreen;
		}

		/**
		 * Get the field @c highLongOfPSN.
		 */
		UINT32 GetHighLongOfPSN() const
		{
			return _highLongOfPSN;
		}

		/**
		 * Get the field @c lowLongOfPSN.
		 */
		UINT32 GetLowLongOfPSN() const
		{
			return _lowLongOfPSN;
		}

		// Setters

		/**
		 * Set the field @c fullscreen.
		 */
		void SetFullscreen(BOOL v)
		{
			_fullscreen = v;
		}

		/**
		 * Set the field @c highLongOfPSN.
		 */
		void SetHighLongOfPSN(UINT32 v)
		{
			_highLongOfPSN = v;
		}

		/**
		 * Set the field @c lowLongOfPSN.
		 */
		void SetLowLongOfPSN(UINT32 v)
		{
			_lowLongOfPSN = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _fullscreen;
		UINT32 _highLongOfPSN;
		UINT32 _lowLongOfPSN;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Top-level window movement notification.
	 * 
	 * Required to implement NPN_ConvertPoint().
	 * 
	 * @field x X coordinate of top-level browser window, in screen space.
	 * @field y Y coordinate of top-level browser window, in screen space.
	 * 
	 * @return None.
	 */
	class MacPluginDesktopWindowMovement
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		MacPluginDesktopWindowMovement(
			INT32 x_arg = 0,
			INT32 y_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
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

		// Getters

		/**
		 * Get the field @c x.
		 */
		INT32 GetX() const
		{
			return _x;
		}

		/**
		 * Get the field @c y.
		 */
		INT32 GetY() const
		{
			return _y;
		}

		// Setters

		/**
		 * Set the field @c x.
		 */
		void SetX(INT32 v)
		{
			_x = v;
		}

		/**
		 * Set the field @c y.
		 */
		void SetY(INT32 v)
		{
			_y = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _x;
		INT32 _y;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Visibility notification; sent from MacOpPluginAdapter (browser)
	 * 
	 * @field visible True if the plug-in instance is visible, otherwise false.
	 * 
	 * @return None.
	 */
	class MacPluginVisibility
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		MacPluginVisibility(
			BOOL visible_arg = FALSE
			)
			: _visible(visible_arg)
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
		 * Check if the field @c visible is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVisible() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c visible.
		 */
		BOOL GetVisible() const
		{
			return _visible;
		}

		// Setters

		/**
		 * Set the field @c visible.
		 */
		void SetVisible(BOOL v)
		{
			_visible = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _visible;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Response to MacPluginInfo.
	 * 
	 * @field disabledCA true if CoreAnimation should be disabled otherwise false
	 * @field disabledICA true if InvalidatingCoreAnimation should be disabled otherwise false
	 * 
	 * @return None.
	 */
	class MacPluginInfoResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		MacPluginInfoResponse(
			BOOL disabled_ca_arg = FALSE,
			BOOL disabled_ica_arg = FALSE
			)
			: _disabledCA(disabled_ca_arg)
			, _disabledICA(disabled_ica_arg)
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
		 * Check if the field @c disabledCA is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisabledCA() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c disabledICA is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisabledICA() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c disabledCA.
		 */
		BOOL GetDisabledCA() const
		{
			return _disabledCA;
		}

		/**
		 * Get the field @c disabledICA.
		 */
		BOOL GetDisabledICA() const
		{
			return _disabledICA;
		}

		// Setters

		/**
		 * Set the field @c disabledCA.
		 */
		void SetDisabledCA(BOOL v)
		{
			_disabledCA = v;
		}

		/**
		 * Set the field @c disabledICA.
		 */
		void SetDisabledICA(BOOL v)
		{
			_disabledICA = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _disabledCA;
		BOOL _disabledICA;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Send Plugin information to Opera from the Wrapper like
	 * drawing mode
	 * 
	 * @return None.
	 */
	class MacPluginInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		MacPluginInfo(
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

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Inform the MacOpPluginWindow that it needs to update its view.
	 * 
	 * @return None.
	 */
	class MacPluginUpdateView
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		MacPluginUpdateView(
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

		static const OpProtobufMessage *GetMessageDescriptor(OpMacMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};




#endif // _MACINTOSH_

#endif // G_PROTO_MAC_MESSAGES_H
