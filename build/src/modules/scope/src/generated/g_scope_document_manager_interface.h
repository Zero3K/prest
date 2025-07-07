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

// Generated from ../../modules/scope/services/document_manager/document_manager.proto



#ifndef G_SCOPE_DOCUMENT_MANAGER_INTERFACE_H
#define G_SCOPE_DOCUMENT_MANAGER_INTERFACE_H

#ifdef SCOPE_DOCUMENT_MANAGER

#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeDocumentManager_Descriptors;

class OpScopeDocumentManager_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeDocumentManager_MessageSet();
	virtual ~OpScopeDocumentManager_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum DocumentEventType
	{
	    DOCUMENTEVENTTYPE_DOMCONTENTLOADED_START,
	    DOCUMENTEVENTTYPE_DOMCONTENTLOADED_END = 1,
	    DOCUMENTEVENTTYPE_LOAD_START = 2,
	    DOCUMENTEVENTTYPE_LOAD_END = 3,
	    DOCUMENTEVENTTYPE_UNLOAD_START = 4,
	    DOCUMENTEVENTTYPE_UNLOAD_END = 5
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class PageText_DocumentText;
	class PageText;
	class GetPageTextArg;
	class HighlightList;
	class Highlight;
	class Node;
	class GetHighlightsArg;
	class SearchTextArg;
	class DocumentLoaded;
	class DocumentEvent;
	class AboutToLoadDocument;
	class ReloadDocumentArg;
	class LoadDocumentArg;
	class DocumentList;
	class Document;
	class ListDocumentsArg;

	class PageText_DocumentText
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		PageText_DocumentText(
			UINT32 frame_id_arg = 0,
			UINT32 document_id_arg = 0
			)
			: _frameID(frame_id_arg)
			, _documentID(document_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c documentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentID() const
		{
			return TRUE;
		}

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
		 * Get the field @c frameID.
		 * 
		 * Which frame this document sits in.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c documentID.
		 * 
		 * The document that contains this text.
		 */
		UINT32 GetDocumentID() const
		{
			return _documentID;
		}

		/**
		 * Get the field @c text.
		 * 
		 * The (plain) text of the document.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		// Setters

		/**
		 * Set the field @c frameID.
		 * 
		 * Which frame this document sits in.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c documentID.
		 * 
		 * The document that contains this text.
		 */
		void SetDocumentID(UINT32 v)
		{
			_documentID = v;
		}

		/**
		 * Set the field @c text.
		 * 
		 * The (plain) text of the document.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _frameID;
		UINT32 _documentID;
		OpString _text;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class PageText
	{
	public:
		// BEGIN: Nested items

		// Message PageText.DocumentText
		typedef PageText_DocumentText DocumentText;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PageText(
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
		/**
		 * Check if the field @c documentTextList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentTextList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c documentTextList.
		 */
		const OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText_DocumentText> & GetDocumentTextList() const
		{
			return _documentTextList;
		}

		// Setters

		/**
		 * Set the field @c documentTextList.
		 */
		OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText_DocumentText> & GetDocumentTextListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::PageText_DocumentText> _documentTextList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetPageTextArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetPageTextArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(0)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * Get the text in this window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c frameID.
		 * 
		 * If set, get the text only for the specified frame. The frame must be
		 * part of the document tree of the previously specified window.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * Get the text in this window.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c frameID.
		 * 
		 * If set, get the text only for the specified frame. The frame must be
		 * part of the document tree of the previously specified window.
		 */
		void SetFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_frameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class HighlightList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		HighlightList(
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
		/**
		 * Check if the field @c highlightList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHighlightList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c highlightList.
		 * 
		 * When searching for text in a page, we often get multiple hits. This is a
		 * list of all the current hits.
		 */
		const OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Highlight> & GetHighlightList() const
		{
			return _highlightList;
		}

		// Setters

		/**
		 * Set the field @c highlightList.
		 * 
		 * When searching for text in a page, we often get multiple hits. This is a
		 * list of all the current hits.
		 */
		OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Highlight> & GetHighlightListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Highlight> _highlightList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Highlight
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Highlight(
			UINT32 frame_id_arg = 0
			)
			: _frameID(frame_id_arg)
			, _node(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~Highlight()
		{
			OP_DELETE(_node);
		}

		// Checkers
		/**
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c node is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNode() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c frameID.
		 * 
		 * Which frame this highlight is in.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c node.
		 * 
		 * The first common ancestor that contains the entire highlight.
		 */
		OpScopeDocumentManager_MessageSet::Node * GetNode() const
		{
			return _node;
		}

		// Setters

		/**
		 * Set the field @c frameID.
		 * 
		 * Which frame this highlight is in.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c node.
		 * 
		 * The first common ancestor that contains the entire highlight.
		 */
		void SetNode(OpScopeDocumentManager_MessageSet::Node * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _frameID;
		OpScopeDocumentManager_MessageSet::Node * _node;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Node
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Node(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & tag_arg,
			const OpString * id_arg = NULL
			)
		{
			RETURN_IF_ERROR(_tag.Set(tag_arg));
			if (id_arg)
			{
				RETURN_IF_ERROR(_id.Set(*id_arg));
				has_bits_.Reference().SetBit(1);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c tag is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTag() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c tag.
		 * 
		 * E.g. "a", "div".
		 */
		const OpString & GetTag() const
		{
			return _tag;
		}

		/**
		 * Get the field @c id.
		 * 
		 * Present if there is an ID attribute set.
		 */
		const OpString & GetId() const
		{
			return _id;
		}

		// Setters

		/**
		 * Set the field @c tag.
		 * 
		 * E.g. "a", "div".
		 */
		OP_STATUS SetTag(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c id.
		 * 
		 * Present if there is an ID attribute set.
		 */
		OP_STATUS SetId(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _tag;
		OpString _id;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetHighlightsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetHighlightsArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(0)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * Get highlights in this window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c frameID.
		 * 
		 * If set, search only in the specified frame. The frame must be
		 * part of the document tree of the previously specified window.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * Get highlights in this window.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c frameID.
		 * 
		 * If set, search only in the specified frame. The frame must be
		 * part of the document tree of the previously specified window.
		 */
		void SetFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_frameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class SearchTextArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		SearchTextArg(
			UINT32 window_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
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
		 * Check if the field @c text is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasText() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * Search in this window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c text.
		 * 
		 * The text string to search for.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c frameID.
		 * 
		 * If set, search only in the specified frame. The frame must be
		 * part of the document tree of the previously specified window.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * Search in this window.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c text.
		 * 
		 * The text string to search for.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c frameID.
		 * 
		 * If set, search only in the specified frame. The frame must be
		 * part of the document tree of the previously specified window.
		 */
		void SetFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_frameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		OpString _text;
		UINT32 _frameID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class DocumentLoaded
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		DocumentLoaded(
			UINT32 window_id_arg = 0,
			UINT32 frame_id_arg = 0,
			UINT32 document_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(frame_id_arg)
			, _documentID(document_id_arg)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c documentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentID() const
		{
			return TRUE;
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
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c documentID.
		 */
		UINT32 GetDocumentID() const
		{
			return _documentID;
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
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c documentID.
		 */
		void SetDocumentID(UINT32 v)
		{
			_documentID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;
		UINT32 _documentID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Fired for specific events happening during document load.
	 * 
	 * @since 1.2
	 */
	class DocumentEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		DocumentEvent(
			UINT32 window_id_arg = 0,
			UINT32 frame_id_arg = 0,
			UINT32 document_id_arg = 0,
			UINT32 resource_id_arg = 0,
			DocumentEventType event_type_arg = DOCUMENTEVENTTYPE_DOMCONTENTLOADED_START,
			double time_arg = 0.0
			)
			: _windowID(window_id_arg)
			, _frameID(frame_id_arg)
			, _documentID(document_id_arg)
			, _resourceID(resource_id_arg)
			, _eventType(event_type_arg)
			, _time(time_arg)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c documentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c eventType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
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
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c documentID.
		 */
		UINT32 GetDocumentID() const
		{
			return _documentID;
		}

		/**
		 * Get the field @c resourceID.
		 * 
		 * The resource that was used to generate this document.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c eventType.
		 * 
		 * The type of event that is being reported.
		 */
		OpScopeDocumentManager_MessageSet::DocumentEventType GetEventType() const
		{
			return static_cast<OpScopeDocumentManager_MessageSet::DocumentEventType>(_eventType);
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		double GetTime() const
		{
			return _time;
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
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c documentID.
		 */
		void SetDocumentID(UINT32 v)
		{
			_documentID = v;
		}

		/**
		 * Set the field @c resourceID.
		 * 
		 * The resource that was used to generate this document.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c eventType.
		 * 
		 * The type of event that is being reported.
		 */
		void SetEventType(OpScopeDocumentManager_MessageSet::DocumentEventType v);

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;
		UINT32 _documentID;
		UINT32 _resourceID;
		INT32 _eventType;
		double _time;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class AboutToLoadDocument
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		AboutToLoadDocument(
			UINT32 window_id_arg = 0,
			UINT32 frame_id_arg = 0,
			UINT32 resource_id_arg = 0,
			double time_arg = 0.0
			)
			: _windowID(window_id_arg)
			, _frameID(frame_id_arg)
			, _resourceID(resource_id_arg)
			, _time(time_arg)
			, _parentDocumentID(0)
			, _parentFrameID(0)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c time is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTime() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c parentDocumentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentDocumentID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c parentFrameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentFrameID() const
		{
			return has_bits_.Reference().IsSet(5);
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
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c resourceID.
		 * 
		 * The resource that is about to get loaded.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since Unix Epoch.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c parentDocumentID.
		 * 
		 * The parent document, present only if the frame is not the
		 * top level frame.
		 */
		UINT32 GetParentDocumentID() const
		{
			return _parentDocumentID;
		}

		/**
		 * Get the field @c parentFrameID.
		 * 
		 * The parent frame, present only if the frame is not the
		 * top level frame.
		 */
		UINT32 GetParentFrameID() const
		{
			return _parentFrameID;
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
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c resourceID.
		 * 
		 * The resource that is about to get loaded.
		 */
		void SetResourceID(UINT32 v)
		{
			_resourceID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since Unix Epoch.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c parentDocumentID.
		 * 
		 * The parent document, present only if the frame is not the
		 * top level frame.
		 */
		void SetParentDocumentID(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_parentDocumentID = v;
		}

		/**
		 * Set the field @c parentFrameID.
		 * 
		 * The parent frame, present only if the frame is not the
		 * top level frame.
		 */
		void SetParentFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_parentFrameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;
		UINT32 _resourceID;
		double _time;
		UINT32 _parentDocumentID;
		UINT32 _parentFrameID;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class ReloadDocumentArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ReloadDocumentArg(
			UINT32 window_id_arg = 0,
			UINT32 frame_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(frame_id_arg)
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 * 
		 * The window containing the frame.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 * 
		 * The window containing the frame.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class LoadDocumentArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		LoadDocumentArg(
			UINT32 window_id_arg = 0,
			UINT32 frame_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(frame_id_arg)
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
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
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
		 * Get the field @c windowID.
		 * 
		 * The window containing the frame.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
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
		 * Set the field @c windowID.
		 * 
		 * The window containing the frame.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c url.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;
		OpString _url;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class DocumentList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DocumentList(
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
		/**
		 * Check if the field @c documentList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c documentList.
		 */
		const OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Document> & GetDocumentList() const
		{
			return _documentList;
		}

		// Setters

		/**
		 * Set the field @c documentList.
		 */
		OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Document> & GetDocumentListRef();

		/**
		 * Set the field @c documentList.
		 */
		OpScopeDocumentManager_MessageSet::Document * AppendNewDocumentList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeDocumentManager_MessageSet::Document> _documentList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Document
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 9
		};
		// END: Internal enums


		Document(
			UINT32 window_id_arg = 0,
			UINT32 frame_id_arg = 0
			)
			: _windowID(window_id_arg)
			, _frameID(frame_id_arg)
			, _documentID(0)
			, _parentFrameID(0)
			, _parentDocumentID(0)
			, _resourceID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * url_arg = NULL,
			const OpString * frame_element_name_arg = NULL,
			const OpString * frame_element_id_arg = NULL
			)
		{
			if (url_arg)
			{
				RETURN_IF_ERROR(_url.Set(*url_arg));
				has_bits_.Reference().SetBit(5);

			}
			if (frame_element_name_arg)
			{
				RETURN_IF_ERROR(_frameElementName.Set(*frame_element_name_arg));
				has_bits_.Reference().SetBit(7);

			}
			if (frame_element_id_arg)
			{
				RETURN_IF_ERROR(_frameElementID.Set(*frame_element_id_arg));
				has_bits_.Reference().SetBit(8);

			}
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
		 * Check if the field @c frameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c documentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c parentFrameID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentFrameID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c parentDocumentID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentDocumentID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c resourceID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResourceID() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c frameElementName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameElementName() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c frameElementID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameElementID() const
		{
			return has_bits_.Reference().IsSet(8);
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
		 * Get the field @c frameID.
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		/**
		 * Get the field @c documentID.
		 */
		UINT32 GetDocumentID() const
		{
			return _documentID;
		}

		/**
		 * Get the field @c parentFrameID.
		 * 
		 * The parent frame, present only if the frame is not the
		 * top level frame.
		 */
		UINT32 GetParentFrameID() const
		{
			return _parentFrameID;
		}

		/**
		 * Get the field @c parentDocumentID.
		 * 
		 * Present unless this document is the top-level document
		 * in the Window.
		 */
		UINT32 GetParentDocumentID() const
		{
			return _parentDocumentID;
		}

		/**
		 * Get the field @c url.
		 * 
		 * The current URL of the document.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		/**
		 * Get the field @c resourceID.
		 * 
		 * The resource used to generate this document.
		 */
		UINT32 GetResourceID() const
		{
			return _resourceID;
		}

		/**
		 * Get the field @c frameElementName.
		 * 
		 * The value of the name attribute of the HTMLFrameElement. If the
		 * frame does not have a name, or this document is not associated with
		 * a HTMLFrameElement, this will field will not be present.
		 */
		const OpString & GetFrameElementName() const
		{
			return _frameElementName;
		}

		/**
		 * Get the field @c frameElementID.
		 * 
		 * The value of the id attribute of the HTMLFrameElement. If the
		 * frame does not have an id, or this document is not associated with
		 * a HTMLFrameElement, this will field will not be present.
		 */
		const OpString & GetFrameElementID() const
		{
			return _frameElementID;
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
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		/**
		 * Set the field @c documentID.
		 */
		void SetDocumentID(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_documentID = v;
		}

		/**
		 * Set the field @c parentFrameID.
		 * 
		 * The parent frame, present only if the frame is not the
		 * top level frame.
		 */
		void SetParentFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_parentFrameID = v;
		}

		/**
		 * Set the field @c parentDocumentID.
		 * 
		 * Present unless this document is the top-level document
		 * in the Window.
		 */
		void SetParentDocumentID(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_parentDocumentID = v;
		}

		/**
		 * Set the field @c url.
		 * 
		 * The current URL of the document.
		 */
		OpString & GetUrlRef();

		/**
		 * Set the field @c resourceID.
		 * 
		 * The resource used to generate this document.
		 */
		void SetResourceID(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_resourceID = v;
		}

		/**
		 * Set the field @c frameElementName.
		 * 
		 * The value of the name attribute of the HTMLFrameElement. If the
		 * frame does not have a name, or this document is not associated with
		 * a HTMLFrameElement, this will field will not be present.
		 */
		OP_STATUS SetFrameElementName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c frameElementID.
		 * 
		 * The value of the id attribute of the HTMLFrameElement. If the
		 * frame does not have an id, or this document is not associated with
		 * a HTMLFrameElement, this will field will not be present.
		 */
		OP_STATUS SetFrameElementID(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;
		UINT32 _frameID;
		UINT32 _documentID;
		UINT32 _parentFrameID;
		UINT32 _parentDocumentID;
		OpString _url;
		UINT32 _resourceID;
		OpString _frameElementName;
		OpString _frameElementID;

		OpProtobufBitField<9> has_bits_;
		mutable int                 encoded_size_;
	};


	class ListDocumentsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ListDocumentsArg(
			)
			: _windowID(0)
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
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		// Setters

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_windowID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeDocumentManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _windowID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeDocumentManager_Descriptors
{
public:
	OpScopeDocumentManager_Descriptors();
	~OpScopeDocumentManager_Descriptors();

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
		_gen_MessageOffs_about_to_load_document_,
		_gen_MessageOffs_document_,
		_gen_MessageOffs_document_event_,
		_gen_MessageOffs_document_list_,
		_gen_MessageOffs_document_loaded_,
		_gen_MessageOffs_page_text_document_text_,
		_gen_MessageOffs_get_highlights_arg_,
		_gen_MessageOffs_get_page_text_arg_,
		_gen_MessageOffs_highlight_,
		_gen_MessageOffs_highlight_list_,
		_gen_MessageOffs_list_documents_arg_,
		_gen_MessageOffs_load_document_arg_,
		_gen_MessageOffs_node_,
		_gen_MessageOffs_page_text_,
		_gen_MessageOffs_reload_document_arg_,
		_gen_MessageOffs_search_text_arg_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_about_to_load_document_
		, _gen_MsgID_document_
		, _gen_MsgID_document_event_
		, _gen_MsgID_document_list_
		, _gen_MsgID_document_loaded_
		, _gen_MsgID_page_text_document_text_
		, _gen_MsgID_get_highlights_arg_
		, _gen_MsgID_get_page_text_arg_
		, _gen_MsgID_highlight_
		, _gen_MsgID_highlight_list_
		, _gen_MsgID_list_documents_arg_
		, _gen_MsgID_load_document_arg_
		, _gen_MsgID_node_
		, _gen_MsgID_page_text_
		, _gen_MsgID_reload_document_arg_
		, _gen_MsgID_search_text_arg_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for DocumentEventType
		_gen_EnumID_DocumentEventType,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for DocumentEventType
		_gen_EnumValueCount_DocumentEventType = 6,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for DocumentEventType
		_gen_Enum_DocumentEventType,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[1];

};


class OpScopeDocumentManager_SI
	: public OpScopeService
	, public OpScopeDocumentManager_MessageSet
{
public:
	OpScopeDocumentManager_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeDocumentManager_SI();

	enum CommandEnum
	{
		  Command_ListDocuments = 1
		, Command_LoadDocument = 2
		, Command_ReloadDocument = 3
		, Command_OnAboutToLoadDocument = 4
		, Command_OnDocumentLoaded = 5
		, Command_SearchText = 6
		, Command_GetHighlights = 7
		, Command_GetPageText = 8
		, Command_OnDocumentEvent = 9

		, Command_Count = 9 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeDocumentManager_Descriptors
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
	virtual OP_STATUS DoListDocuments(const ListDocumentsArg &in, DocumentList &out) = 0;
	virtual OP_STATUS DoLoadDocument(const LoadDocumentArg &in) = 0;
	virtual OP_STATUS DoReloadDocument(const ReloadDocumentArg &in) = 0;
	virtual OP_STATUS DoSearchText(const SearchTextArg &in, HighlightList &out) = 0;
	virtual OP_STATUS DoGetHighlights(const GetHighlightsArg &in, HighlightList &out) = 0;
	virtual OP_STATUS DoGetPageText(const GetPageTextArg &in, PageText &out) = 0;

	// Event functions
	OP_STATUS SendOnAboutToLoadDocument(const AboutToLoadDocument &msg);
	OP_STATUS SendOnDocumentLoaded(const DocumentLoaded &msg);
	OP_STATUS SendOnDocumentEvent(const DocumentEvent &msg);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_DOCUMENT_MANAGER

#endif // G_SCOPE_DOCUMENT_MANAGER_INTERFACE_H
