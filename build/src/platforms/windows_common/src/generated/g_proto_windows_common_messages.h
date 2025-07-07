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

// Generated from ../../platforms/windows_common/messages.proto



#ifndef G_PROTO_WINDOWS_COMMON_MESSAGES_H
#define G_PROTO_WINDOWS_COMMON_MESSAGES_H

#ifdef _WIN32

#include "modules/protobuf/src/protobuf.h"
#include "modules/protobuf/src/protobuf_bitfield.h"
#include "modules/protobuf/src/protobuf_message.h"



class OpWindows_commonMessages_Descriptors;

class OpWindows_commonMessages_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpWindows_commonMessages_MessageSet();
	virtual ~OpWindows_commonMessages_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class WindowsPluginWindowInfoResponse;
	class WindowsPluginWindowInfo;

	/**
	 * Send plugin window information.
	 * 
	 * @field window Top-level window
	 */
	class WindowsPluginWindowInfoResponse
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		WindowsPluginWindowInfoResponse(
			UINT64 window_arg = 0,
			UINT64 render_context_arg = 0
			)
			: _window(window_arg)
			, _renderContext(render_context_arg)
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
		 * Check if the field @c window is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindow() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c renderContext is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRenderContext() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c window.
		 */
		UINT64 GetWindow() const
		{
			return _window;
		}

		/**
		 * Get the field @c renderContext.
		 */
		UINT64 GetRenderContext() const
		{
			return _renderContext;
		}

		// Setters

		/**
		 * Set the field @c window.
		 */
		void SetWindow(UINT64 v)
		{
			_window = v;
		}

		/**
		 * Set the field @c renderContext.
		 */
		void SetRenderContext(UINT64 v)
		{
			_renderContext = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpWindows_commonMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT64 _window;
		UINT64 _renderContext;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Request plugin window information.
	 * 
	 * @return WindowsPluginWindowInfoResponse
	 */
	class WindowsPluginWindowInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 0
		};
		// END: Internal enums


		WindowsPluginWindowInfo(
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

		static const OpProtobufMessage *GetMessageDescriptor(OpWindows_commonMessages_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};




#endif // _WIN32

#endif // G_PROTO_WINDOWS_COMMON_MESSAGES_H
