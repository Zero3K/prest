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

#ifndef G_MESSAGE_MAC_MESSAGES_H
#define G_MESSAGE_MAC_MESSAGES_H

#ifdef _MACINTOSH_

#include "platforms/mac/src/generated/g_proto_mac_messages.h"
#include "modules/hardcore/component/OpTypedMessage.h"


	// BEGIN: Message classes
	/**
	 * Plugin PopUpContextMenu shown notification. Sends the hide/unhide message from the
	 * PluginWrapper to the Browser process so it knows if the plugin context
	 * is shown or hidden
	 * 
	 * @field show True when the menu is shown, otherwise False
	 * 
	 * @return None.
	 */
	class OpMacPluginContextMenuShownMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 2721088929u;

		virtual ~OpMacPluginContextMenuShownMessage();



		static OpMacPluginContextMenuShownMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginContextMenuShownMessage, (src, dst, delay));
		}

		static OpMacPluginContextMenuShownMessage* Create(
			BOOL show_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginContextMenuShownMessage *obj = OP_NEW(OpMacPluginContextMenuShownMessage, (src, dst, delay, show_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginContextMenuShownMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginContextMenuShownMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c show is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShow() const
		{
			return protobuf_data.HasShow();
		}

		/**
		 * Get the field @c show.
		 */
		BOOL GetShow() const
		{
			return protobuf_data.GetShow();
		}

		/**
		 * Set the field @c show.
		 */
		void SetShow(BOOL v)
		{
			protobuf_data.SetShow(v);
		}



	protected:

		OpMacPluginContextMenuShownMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL show_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(show_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginContextMenuShown protobuf_data;
	};


	/**
	 * Plugin Cursor shown notification. Sends the hide/unhide message from the
	 * PluginWrapper to the Browser process so it knows to hide or show the cursor
	 * 
	 * @field show True when the cursor is shown, otherwise False
	 * 
	 * @return None.
	 */
	class OpMacPluginCursorShownMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 3774472642u;

		virtual ~OpMacPluginCursorShownMessage();



		static OpMacPluginCursorShownMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginCursorShownMessage, (src, dst, delay));
		}

		static OpMacPluginCursorShownMessage* Create(
			BOOL show_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginCursorShownMessage *obj = OP_NEW(OpMacPluginCursorShownMessage, (src, dst, delay, show_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginCursorShownMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginCursorShownMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c show is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShow() const
		{
			return protobuf_data.HasShow();
		}

		/**
		 * Get the field @c show.
		 */
		BOOL GetShow() const
		{
			return protobuf_data.GetShow();
		}

		/**
		 * Set the field @c show.
		 */
		void SetShow(BOOL v)
		{
			protobuf_data.SetShow(v);
		}



	protected:

		OpMacPluginCursorShownMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL show_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(show_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginCursorShown protobuf_data;
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
	class OpMacPluginDesktopWindowMovementMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 271059229u;

		virtual ~OpMacPluginDesktopWindowMovementMessage();



		static OpMacPluginDesktopWindowMovementMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginDesktopWindowMovementMessage, (src, dst, delay));
		}

		static OpMacPluginDesktopWindowMovementMessage* Create(
			INT32 x_arg = 0,
			INT32 y_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginDesktopWindowMovementMessage *obj = OP_NEW(OpMacPluginDesktopWindowMovementMessage, (src, dst, delay, x_arg, y_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginDesktopWindowMovementMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginDesktopWindowMovementMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c x is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasX() const
		{
			return protobuf_data.HasX();
		}

		/**
		 * Get the field @c x.
		 */
		INT32 GetX() const
		{
			return protobuf_data.GetX();
		}

		/**
		 * Set the field @c x.
		 */
		void SetX(INT32 v)
		{
			protobuf_data.SetX(v);
		}

		/**
		 * Check if the field @c y is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasY() const
		{
			return protobuf_data.HasY();
		}

		/**
		 * Get the field @c y.
		 */
		INT32 GetY() const
		{
			return protobuf_data.GetY();
		}

		/**
		 * Set the field @c y.
		 */
		void SetY(INT32 v)
		{
			protobuf_data.SetY(v);
		}



	protected:

		OpMacPluginDesktopWindowMovementMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, INT32 x_arg = 0
				, INT32 y_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(x_arg, y_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginDesktopWindowMovement protobuf_data;
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
	class OpMacPluginFullscreenMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 2594885544u;

		virtual ~OpMacPluginFullscreenMessage();



		static OpMacPluginFullscreenMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginFullscreenMessage, (src, dst, delay));
		}

		static OpMacPluginFullscreenMessage* Create(
			BOOL fullscreen_arg = FALSE,
			UINT32 high_long_of_psn_arg = 0,
			UINT32 low_long_of_psn_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginFullscreenMessage *obj = OP_NEW(OpMacPluginFullscreenMessage, (src, dst, delay, fullscreen_arg, high_long_of_psn_arg, low_long_of_psn_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginFullscreenMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginFullscreenMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c fullscreen is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFullscreen() const
		{
			return protobuf_data.HasFullscreen();
		}

		/**
		 * Get the field @c fullscreen.
		 */
		BOOL GetFullscreen() const
		{
			return protobuf_data.GetFullscreen();
		}

		/**
		 * Set the field @c fullscreen.
		 */
		void SetFullscreen(BOOL v)
		{
			protobuf_data.SetFullscreen(v);
		}

		/**
		 * Check if the field @c highLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHighLongOfPSN() const
		{
			return protobuf_data.HasHighLongOfPSN();
		}

		/**
		 * Get the field @c highLongOfPSN.
		 */
		UINT32 GetHighLongOfPSN() const
		{
			return protobuf_data.GetHighLongOfPSN();
		}

		/**
		 * Set the field @c highLongOfPSN.
		 */
		void SetHighLongOfPSN(UINT32 v)
		{
			protobuf_data.SetHighLongOfPSN(v);
		}

		/**
		 * Check if the field @c lowLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLowLongOfPSN() const
		{
			return protobuf_data.HasLowLongOfPSN();
		}

		/**
		 * Get the field @c lowLongOfPSN.
		 */
		UINT32 GetLowLongOfPSN() const
		{
			return protobuf_data.GetLowLongOfPSN();
		}

		/**
		 * Set the field @c lowLongOfPSN.
		 */
		void SetLowLongOfPSN(UINT32 v)
		{
			protobuf_data.SetLowLongOfPSN(v);
		}



	protected:

		OpMacPluginFullscreenMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL fullscreen_arg = FALSE
				, UINT32 high_long_of_psn_arg = 0
				, UINT32 low_long_of_psn_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(fullscreen_arg, high_long_of_psn_arg, low_long_of_psn_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginFullscreen protobuf_data;
	};


	/**
	 * Composed text to send to the plugin after the IME has finished
	 * 
	 * @field string Composed string to send to the plugin
	 * 
	 * @return None.
	 */
	class OpMacPluginIMETextMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 1827758017u;

		virtual ~OpMacPluginIMETextMessage();



		static OpMacPluginIMETextMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginIMETextMessage, (src, dst, delay));
		}

		static OpMacPluginIMETextMessage* Create(
			const UniString & text_arg = UniString(),
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginIMETextMessage *obj = OP_NEW(OpMacPluginIMETextMessage, (src, dst, delay, text_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginIMETextMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginIMETextMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
		{
			return protobuf_data.HasText();
		}

		/**
		 * Get the field @c text.
		 */
		const UniString & GetText() const
		{
			return protobuf_data.GetText();
		}

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const UniString & v);

		/**
		 * Set the field @c text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);



	protected:

		OpMacPluginIMETextMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, const UniString & text_arg = UniString()
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(text_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginIMEText protobuf_data;
	};


	/**
	 * Send Plugin information to Opera from the Wrapper like
	 * drawing mode
	 * 
	 * @return None.
	 */
	class OpMacPluginInfoMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 1977222730u;

		virtual ~OpMacPluginInfoMessage();

		static OpMacPluginInfoMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpMacPluginInfoMessage, (src, dst, delay));
		}

		static OpMacPluginInfoMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginInfoMessage, (src, dst, delay));
		}



		static OpMacPluginInfoMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginInfoMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpMacPluginInfoMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay

				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data()
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginInfo protobuf_data;
	};


	/**
	 * Response to MacPluginInfo.
	 * 
	 * @field disabledCA true if CoreAnimation should be disabled otherwise false
	 * @field disabledICA true if InvalidatingCoreAnimation should be disabled otherwise false
	 * 
	 * @return None.
	 */
	class OpMacPluginInfoResponseMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 2652361284u;

		virtual ~OpMacPluginInfoResponseMessage();



		static OpMacPluginInfoResponseMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginInfoResponseMessage, (src, dst, delay));
		}

		static OpMacPluginInfoResponseMessage* Create(
			BOOL disabled_ca_arg = FALSE,
			BOOL disabled_ica_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginInfoResponseMessage *obj = OP_NEW(OpMacPluginInfoResponseMessage, (src, dst, delay, disabled_ca_arg, disabled_ica_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginInfoResponseMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginInfoResponseMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c disabledCA is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisabledCA() const
		{
			return protobuf_data.HasDisabledCA();
		}

		/**
		 * Get the field @c disabledCA.
		 */
		BOOL GetDisabledCA() const
		{
			return protobuf_data.GetDisabledCA();
		}

		/**
		 * Set the field @c disabledCA.
		 */
		void SetDisabledCA(BOOL v)
		{
			protobuf_data.SetDisabledCA(v);
		}

		/**
		 * Check if the field @c disabledICA is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisabledICA() const
		{
			return protobuf_data.HasDisabledICA();
		}

		/**
		 * Get the field @c disabledICA.
		 */
		BOOL GetDisabledICA() const
		{
			return protobuf_data.GetDisabledICA();
		}

		/**
		 * Set the field @c disabledICA.
		 */
		void SetDisabledICA(BOOL v)
		{
			protobuf_data.SetDisabledICA(v);
		}



	protected:

		OpMacPluginInfoResponseMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL disabled_ca_arg = FALSE
				, BOOL disabled_ica_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(disabled_ca_arg, disabled_ica_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginInfoResponse protobuf_data;
	};


	/**
	 * Inform the MacOpPluginWindow that it needs to update its view.
	 * 
	 * @return None.
	 */
	class OpMacPluginUpdateViewMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 2129815212u;

		virtual ~OpMacPluginUpdateViewMessage();

		static OpMacPluginUpdateViewMessage* Create()
		{
		    OpMessageAddress src;
		    OpMessageAddress dst;
		    double delay = 0;
		    return OP_NEW(OpMacPluginUpdateViewMessage, (src, dst, delay));
		}

		static OpMacPluginUpdateViewMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginUpdateViewMessage, (src, dst, delay));
		}



		static OpMacPluginUpdateViewMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginUpdateViewMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here


	protected:

		OpMacPluginUpdateViewMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay

				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data()
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginUpdateView protobuf_data;
	};


	/**
	 * Visibility notification; sent from MacOpPluginAdapter (browser)
	 * 
	 * @field visible True if the plug-in instance is visible, otherwise false.
	 * 
	 * @return None.
	 */
	class OpMacPluginVisibilityMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 3955180933u;

		virtual ~OpMacPluginVisibilityMessage();



		static OpMacPluginVisibilityMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginVisibilityMessage, (src, dst, delay));
		}

		static OpMacPluginVisibilityMessage* Create(
			BOOL visible_arg = FALSE,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginVisibilityMessage *obj = OP_NEW(OpMacPluginVisibilityMessage, (src, dst, delay, visible_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginVisibilityMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginVisibilityMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c visible is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVisible() const
		{
			return protobuf_data.HasVisible();
		}

		/**
		 * Get the field @c visible.
		 */
		BOOL GetVisible() const
		{
			return protobuf_data.GetVisible();
		}

		/**
		 * Set the field @c visible.
		 */
		void SetVisible(BOOL v)
		{
			protobuf_data.SetVisible(v);
		}



	protected:

		OpMacPluginVisibilityMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL visible_arg = FALSE
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(visible_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginVisibility protobuf_data;
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
	class OpMacPluginWindowShownMessage
		: public OpTypedMessage
	{
	public:
		/**
		 * The type for this message class.
		 *
		 * @note The reason this contains a integer value and not an enum
		 *       is to avoid uneccesary dependencies and helps avoid
		 *       re-compiles whenever a message is added, removed or renamed.
		 */
		static const unsigned Type = 2936221449u;

		virtual ~OpMacPluginWindowShownMessage();



		static OpMacPluginWindowShownMessage* Create(
			const OpMessageAddress& src,
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			return OP_NEW(OpMacPluginWindowShownMessage, (src, dst, delay));
		}

		static OpMacPluginWindowShownMessage* Create(
			BOOL show_arg = FALSE,
			UINT32 high_long_of_psn_arg = 0,
			UINT32 low_long_of_psn_arg = 0,
			const OpMessageAddress& src = OpMessageAddress(),
			const OpMessageAddress& dst = OpMessageAddress(),
			double delay = 0)
		{
			OpMacPluginWindowShownMessage *obj = OP_NEW(OpMacPluginWindowShownMessage, (src, dst, delay, show_arg, high_long_of_psn_arg, low_long_of_psn_arg));
			if (obj)
			{
				if (OpStatus::IsSuccess(obj->Construct()))
					return obj;

				OP_DELETE(obj);
			}
			return NULL;
		}

		static OpMacPluginWindowShownMessage* Cast(const OpTypedMessage* msg);

		static OpMacPluginWindowShownMessage* Deserialize(
			const OpMessageAddress& src,
			const OpMessageAddress& dst,
			double delay,
			const OpData& data);

		virtual OP_STATUS Serialize(OpData& data) const;

		virtual const char *GetTypeString() const;

		// Accessors/modifiers comes here
		/**
		 * Check if the field @c show is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShow() const
		{
			return protobuf_data.HasShow();
		}

		/**
		 * Get the field @c show.
		 */
		BOOL GetShow() const
		{
			return protobuf_data.GetShow();
		}

		/**
		 * Set the field @c show.
		 */
		void SetShow(BOOL v)
		{
			protobuf_data.SetShow(v);
		}

		/**
		 * Check if the field @c highLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHighLongOfPSN() const
		{
			return protobuf_data.HasHighLongOfPSN();
		}

		/**
		 * Get the field @c highLongOfPSN.
		 */
		UINT32 GetHighLongOfPSN() const
		{
			return protobuf_data.GetHighLongOfPSN();
		}

		/**
		 * Set the field @c highLongOfPSN.
		 */
		void SetHighLongOfPSN(UINT32 v)
		{
			protobuf_data.SetHighLongOfPSN(v);
		}

		/**
		 * Check if the field @c lowLongOfPSN is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLowLongOfPSN() const
		{
			return protobuf_data.HasLowLongOfPSN();
		}

		/**
		 * Get the field @c lowLongOfPSN.
		 */
		UINT32 GetLowLongOfPSN() const
		{
			return protobuf_data.GetLowLongOfPSN();
		}

		/**
		 * Set the field @c lowLongOfPSN.
		 */
		void SetLowLongOfPSN(UINT32 v)
		{
			protobuf_data.SetLowLongOfPSN(v);
		}



	protected:

		OpMacPluginWindowShownMessage(
				const OpMessageAddress& src,
				const OpMessageAddress& dst,
				double delay
				, BOOL show_arg = FALSE
				, UINT32 high_long_of_psn_arg = 0
				, UINT32 low_long_of_psn_arg = 0
				)
			: OpTypedMessage(Type, src, dst, delay)
			, protobuf_data(show_arg, high_long_of_psn_arg, low_long_of_psn_arg)
		{
		}



		OP_STATUS Construct(

		)
		{
			return protobuf_data.Construct();
		}

	private:
		OpMacMessages_MessageSet::MacPluginWindowShown protobuf_data;
	};



	// END: Message classes
#endif // _MACINTOSH_

#endif // G_MESSAGE_MAC_MESSAGES_H
