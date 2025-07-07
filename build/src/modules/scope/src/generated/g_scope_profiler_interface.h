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

// Generated from ../../modules/scope/services/profiler/profiler.proto



#ifndef G_SCOPE_PROFILER_INTERFACE_H
#define G_SCOPE_PROFILER_INTERFACE_H

#ifdef SCOPE_PROFILER

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeProfiler_Descriptors;

class OpScopeProfiler_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeProfiler_MessageSet();
	virtual ~OpScopeProfiler_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum StartProfilerArg_StartMode
	{
	    StartProfilerArg_StartMode_STARTMODE_IMMEDIATE = 1,
	    StartProfilerArg_StartMode_STARTMODE_URL = 2
	};

	enum GetEventsArg_Mode
	{
	    GetEventsArg_Mode_MODE_ALL = 1,
	    GetEventsArg_Mode_MODE_REDUCE_UNIQUE_TYPES = 2,
	    GetEventsArg_Mode_MODE_REDUCE_UNIQUE_EVENTS = 3,
	    GetEventsArg_Mode_MODE_REDUCE_ALL = 4
	};

	enum EventType
	{
	    EVENTTYPE_GENERIC = 1,
	    EVENTTYPE_PROCESS = 2,
	    EVENTTYPE_DOCUMENT_PARSING = 3,
	    EVENTTYPE_CSS_PARSING = 4,
	    EVENTTYPE_SCRIPT_COMPILATION = 5,
	    EVENTTYPE_SCRIPT_THREAD_EVALUATION = 6,
	    EVENTTYPE_REFLOW = 7,
	    EVENTTYPE_STYLE_RECALCULATION = 8,
	    EVENTTYPE_CSS_SELECTOR_MATCHING = 9,
	    EVENTTYPE_LAYOUT = 10,
	    EVENTTYPE_PAINT = 11
	};

	enum ScriptThreadType
	{
	    SCRIPTTHREADTYPE_UNKNOWN,
	    SCRIPTTHREADTYPE_COMMON = 1,
	    SCRIPTTHREADTYPE_TIMEOUT = 2,
	    SCRIPTTHREADTYPE_EVENT = 3,
	    SCRIPTTHREADTYPE_INLINE_SCRIPT = 4,
	    SCRIPTTHREADTYPE_JAVASCRIPT_URL = 5,
	    SCRIPTTHREADTYPE_HISTORY_NAVIGATION = 6,
	    SCRIPTTHREADTYPE_JAVA_EVAL = 7,
	    SCRIPTTHREADTYPE_DEBUGGER_EVAL = 8
	};

	enum ScriptType
	{
	    SCRIPTTYPE_UNKNOWN,
	    SCRIPTTYPE_LINKED = 1,
	    SCRIPTTYPE_INLINE = 2,
	    SCRIPTTYPE_GENERATED = 3,
	    SCRIPTTYPE_EVAL = 4,
	    SCRIPTTYPE_TIMEOUT = 5,
	    SCRIPTTYPE_URI = 6,
	    SCRIPTTYPE_EVENT_HANDLER = 7,
	    SCRIPTTYPE_USERJS = 8,
	    SCRIPTTYPE_BROWSERJS = 9,
	    SCRIPTTYPE_EXTENSIONJS = 10,
	    SCRIPTTYPE_DEBUGGER = 11
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class PaintEvent;
	class ScriptCompilationEvent;
	class CssParsingEvent;
	class DocumentParsingEvent;
	class ScriptThreadEvaluationEvent;
	class CssSelectorMatchingEvent;
	class Event;
	class Events;
	class Session;
	class SessionID;
	class Timeline;
	class ReleaseSessionArg;
	class GetEventsArg;
	class StopProfilerArg;
	class StartProfilerArg;
	class Area;
	class Interval;

	class PaintEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PaintEvent(
			)
			: _area(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~PaintEvent()
		{
			OP_DELETE(_area);
		}

		// Checkers
		/**
		 * Check if the field @c area is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArea() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c area.
		 * 
		 * The `Area` that was painted, in document coordinates relative the upper
		 * left corner of the view.
		 */
		OpScopeProfiler_MessageSet::Area * GetArea() const
		{
			return _area;
		}

		// Setters

		/**
		 * Set the field @c area.
		 * 
		 * The `Area` that was painted, in document coordinates relative the upper
		 * left corner of the view.
		 */
		void SetArea(OpScopeProfiler_MessageSet::Area * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeProfiler_MessageSet::Area * _area;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ScriptCompilationEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ScriptCompilationEvent(
			ScriptType script_type_arg = SCRIPTTYPE_UNKNOWN
			)
			: _scriptType(script_type_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * url_arg = NULL
			)
		{
			if (url_arg)
			{
				RETURN_IF_ERROR(_url.Set(*url_arg));
				has_bits_.Reference().SetBit(1);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c scriptType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c scriptType.
		 * 
		 * Describes the origin of the script.
		 */
		OpScopeProfiler_MessageSet::ScriptType GetScriptType() const
		{
			return static_cast<OpScopeProfiler_MessageSet::ScriptType>(_scriptType);
		}

		/**
		 * Get the field @c url.
		 * 
		 * The URL of the stylesheet that was parsed. If the stylesheet is inlined
		 * in another document, that document is used as the URL.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c scriptType.
		 * 
		 * Describes the origin of the script.
		 */
		void SetScriptType(OpScopeProfiler_MessageSet::ScriptType v);

		/**
		 * Set the field @c url.
		 * 
		 * The URL of the stylesheet that was parsed. If the stylesheet is inlined
		 * in another document, that document is used as the URL.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _scriptType;
		OpString _url;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssParsingEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CssParsingEvent(
			)
			: encoded_size_(-1)
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
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c url.
		 * 
		 * The URL of the stylesheet that was parsed. If the stylesheet is inlined
		 * in another document, that document is used as the URL.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c url.
		 * 
		 * The URL of the stylesheet that was parsed. If the stylesheet is inlined
		 * in another document, that document is used as the URL.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _url;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class DocumentParsingEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		DocumentParsingEvent(
			)
			: encoded_size_(-1)
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
		 * Check if the field @c url is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUrl() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c url.
		 * 
		 * The URL of the document that was parsed.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c url.
		 * 
		 * The URL of the document that was parsed.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _url;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ScriptThreadEvaluationEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ScriptThreadEvaluationEvent(
			ScriptThreadType script_thread_type_arg = SCRIPTTHREADTYPE_UNKNOWN
			)
			: _scriptThreadType(script_thread_type_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * event_name_arg = NULL
			)
		{
			if (event_name_arg)
			{
				RETURN_IF_ERROR(_eventName.Set(*event_name_arg));
				has_bits_.Reference().SetBit(1);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c scriptThreadType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptThreadType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c eventName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventName() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c scriptThreadType.
		 * 
		 * What kind of thread the `Event` represents.
		 */
		OpScopeProfiler_MessageSet::ScriptThreadType GetScriptThreadType() const
		{
			return static_cast<OpScopeProfiler_MessageSet::ScriptThreadType>(_scriptThreadType);
		}

		/**
		 * Get the field @c eventName.
		 * 
		 * If `scriptThreadType` is `EVENT`, this field will contain the event name,
		 * e.g. 'load'.
		 * 
		 * In all other cases, this field is not set.
		 */
		const OpString & GetEventName() const
		{
			return _eventName;
		}

		// Setters

		/**
		 * Set the field @c scriptThreadType.
		 * 
		 * What kind of thread the `Event` represents.
		 */
		void SetScriptThreadType(OpScopeProfiler_MessageSet::ScriptThreadType v);

		/**
		 * Set the field @c eventName.
		 * 
		 * If `scriptThreadType` is `EVENT`, this field will contain the event name,
		 * e.g. 'load'.
		 * 
		 * In all other cases, this field is not set.
		 */
		OpString & GetEventNameRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _scriptThreadType;
		OpString _eventName;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssSelectorMatchingEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CssSelectorMatchingEvent(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & selector_arg
			)
		{
			RETURN_IF_ERROR(_selector.Set(selector_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c selector is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSelector() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c selector.
		 * 
		 * The selector text, e.g. "#foo .bar".
		 */
		const OpString & GetSelector() const
		{
			return _selector;
		}

		// Setters

		/**
		 * Set the field @c selector.
		 * 
		 * The selector text, e.g. "#foo .bar".
		 */
		OP_STATUS SetSelector(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _selector;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Event
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 16
		};
		// END: Internal enums


		Event(
			EventType type_arg = EVENTTYPE_GENERIC,
			double time_arg = 0.0,
			double overhead_arg = 0.0,
			UINT32 hits_arg = 0
			)
			: _type(type_arg)
			, _time(time_arg)
			, _overhead(overhead_arg)
			, _hits(hits_arg)
			, _interval(NULL)
			, _eventID(0)
			, _parentEventID(0)
			, _childCount(0)
			, _aggregatedTime(0.0)
			, _aggregatedOverhead(0.0)
			, _cssSelectorMatching(NULL)
			, _scriptThreadEvaluation(NULL)
			, _documentParsing(NULL)
			, _cssParsing(NULL)
			, _scriptCompilation(NULL)
			, _paint(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~Event()
		{
			OP_DELETE(_interval);
			OP_DELETE(_cssSelectorMatching);
			OP_DELETE(_scriptThreadEvaluation);
			OP_DELETE(_documentParsing);
			OP_DELETE(_cssParsing);
			OP_DELETE(_scriptCompilation);
			OP_DELETE(_paint);
		}

		// Checkers
		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
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
		 * Check if the field @c overhead is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOverhead() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c hits is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHits() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c interval is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInterval() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c eventID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventID() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c parentEventID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentEventID() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c childCount is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasChildCount() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c aggregatedTime is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAggregatedTime() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		/**
		 * Check if the field @c aggregatedOverhead is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAggregatedOverhead() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		/**
		 * Check if the field @c cssSelectorMatching is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCssSelectorMatching() const
		{
			return has_bits_.Reference().IsSet(10);
		}

		/**
		 * Check if the field @c scriptThreadEvaluation is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptThreadEvaluation() const
		{
			return has_bits_.Reference().IsSet(11);
		}

		/**
		 * Check if the field @c documentParsing is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentParsing() const
		{
			return has_bits_.Reference().IsSet(12);
		}

		/**
		 * Check if the field @c cssParsing is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCssParsing() const
		{
			return has_bits_.Reference().IsSet(13);
		}

		/**
		 * Check if the field @c scriptCompilation is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptCompilation() const
		{
			return has_bits_.Reference().IsSet(14);
		}

		/**
		 * Check if the field @c paint is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPaint() const
		{
			return has_bits_.Reference().IsSet(15);
		}

		// Getters

		/**
		 * Get the field @c type.
		 * 
		 * The type of `Event`. Some `Events` carry additional information relevant
		 * to their type.
		 */
		OpScopeProfiler_MessageSet::EventType GetType() const
		{
			return static_cast<OpScopeProfiler_MessageSet::EventType>(_type);
		}

		/**
		 * Get the field @c time.
		 * 
		 * The time spent on this task. (Self-time). This time takes place at some
		 * (unknown) point in the `Interval`.
		 * 
		 * Does not include `overhead`.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c overhead.
		 * 
		 * Profiling overhead. This is the time spent doing things which would
		 * normally not happen if we had not been profiling, e.g. storing the
		 * selector text for CSS selector `Events`.
		 * 
		 * The overhead takes place at some (unknown) point in the `Interval`.
		 */
		double GetOverhead() const
		{
			return _overhead;
		}

		/**
		 * Get the field @c hits.
		 * 
		 * Number of hits on this `Event`.
		 */
		UINT32 GetHits() const
		{
			return _hits;
		}

		/**
		 * Get the field @c interval.
		 * 
		 * The `Interval` in which the `Event` took place. An `Event` may consume time
		 * across multiple time slices (e.g. thread evaluation) without requiring
		 * *all* the time in that `Interval`.
		 * 
		 * The `time` field contains the time actually spent working on the `Event`.
		 * There is no exact start and end time for `Events` which are spread across
		 * time slices, because the self-time spent is fragmented across the
		 * `Interval`.
		 * 
		 * We can therefore only know that the `time` spent on this `Event` happened
		 * some time in this `Interval`, but not exactly where. (It would be
		 * possible to expose each fragment of execution, of course, but the amount
		 * of data required to represent this would be to large to handle).
		 * 
		 * The start of the `Interval` represents the first time we started working
		 * on this `Event`. The end of the `Interval` represents the last time we
		 * were done working on this `Event`.
		 */
		OpScopeProfiler_MessageSet::Interval * GetInterval() const
		{
			return _interval;
		}

		/**
		 * Get the field @c eventID.
		 * 
		 * The non-zero ID of this `Event`.
		 */
		UINT32 GetEventID() const
		{
			return _eventID;
		}

		/**
		 * Get the field @c parentEventID.
		 * 
		 * The parent `Event` ID, or not set if this is a top-level `Event`.
		 */
		UINT32 GetParentEventID() const
		{
			return _parentEventID;
		}

		/**
		 * Get the field @c childCount.
		 * 
		 * The number of immediate children (not grandchildren) for this `Event`.
		 */
		UINT32 GetChildCount() const
		{
			return _childCount;
		}

		/**
		 * Get the field @c aggregatedTime.
		 * 
		 * Aggregated `time` for all children, including `time` for this `Event`.
		 */
		double GetAggregatedTime() const
		{
			return _aggregatedTime;
		}

		/**
		 * Get the field @c aggregatedOverhead.
		 * 
		 * Aggregated `overhead` for all children, including `overhead` for this
		 * `Event`.
		 */
		double GetAggregatedOverhead() const
		{
			return _aggregatedOverhead;
		}

		/**
		 * Get the field @c cssSelectorMatching.
		 * 
		 * Additional information for `CSS_SELECTOR_MATCHING` `Events`.
		 */
		OpScopeProfiler_MessageSet::CssSelectorMatchingEvent * GetCssSelectorMatching() const
		{
			return _cssSelectorMatching;
		}

		/**
		 * Get the field @c scriptThreadEvaluation.
		 * 
		 * Additional information for `SCRIPT_THREAD_EVALUATION` `Events`.
		 */
		OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent * GetScriptThreadEvaluation() const
		{
			return _scriptThreadEvaluation;
		}

		/**
		 * Get the field @c documentParsing.
		 * 
		 * Additional information for `DOCUMENT_PARSING` `Events`.
		 */
		OpScopeProfiler_MessageSet::DocumentParsingEvent * GetDocumentParsing() const
		{
			return _documentParsing;
		}

		/**
		 * Get the field @c cssParsing.
		 * 
		 * Additional information for `CSS_PARSING` `Events`.
		 */
		OpScopeProfiler_MessageSet::CssParsingEvent * GetCssParsing() const
		{
			return _cssParsing;
		}

		/**
		 * Get the field @c scriptCompilation.
		 * 
		 * Additional information for `SCRIPT_COMPILATION` `Events`.
		 */
		OpScopeProfiler_MessageSet::ScriptCompilationEvent * GetScriptCompilation() const
		{
			return _scriptCompilation;
		}

		/**
		 * Get the field @c paint.
		 * 
		 * Additional information for `PAINT` `Events`.
		 */
		OpScopeProfiler_MessageSet::PaintEvent * GetPaint() const
		{
			return _paint;
		}

		// Setters

		/**
		 * Set the field @c type.
		 * 
		 * The type of `Event`. Some `Events` carry additional information relevant
		 * to their type.
		 */
		void SetType(OpScopeProfiler_MessageSet::EventType v);

		/**
		 * Set the field @c time.
		 * 
		 * The time spent on this task. (Self-time). This time takes place at some
		 * (unknown) point in the `Interval`.
		 * 
		 * Does not include `overhead`.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c overhead.
		 * 
		 * Profiling overhead. This is the time spent doing things which would
		 * normally not happen if we had not been profiling, e.g. storing the
		 * selector text for CSS selector `Events`.
		 * 
		 * The overhead takes place at some (unknown) point in the `Interval`.
		 */
		void SetOverhead(double v)
		{
			_overhead = v;
		}

		/**
		 * Set the field @c hits.
		 * 
		 * Number of hits on this `Event`.
		 */
		void SetHits(UINT32 v)
		{
			_hits = v;
		}

		/**
		 * Set the field @c interval.
		 * 
		 * The `Interval` in which the `Event` took place. An `Event` may consume time
		 * across multiple time slices (e.g. thread evaluation) without requiring
		 * *all* the time in that `Interval`.
		 * 
		 * The `time` field contains the time actually spent working on the `Event`.
		 * There is no exact start and end time for `Events` which are spread across
		 * time slices, because the self-time spent is fragmented across the
		 * `Interval`.
		 * 
		 * We can therefore only know that the `time` spent on this `Event` happened
		 * some time in this `Interval`, but not exactly where. (It would be
		 * possible to expose each fragment of execution, of course, but the amount
		 * of data required to represent this would be to large to handle).
		 * 
		 * The start of the `Interval` represents the first time we started working
		 * on this `Event`. The end of the `Interval` represents the last time we
		 * were done working on this `Event`.
		 */
		void SetInterval(OpScopeProfiler_MessageSet::Interval * v);

		/**
		 * Set the field @c eventID.
		 * 
		 * The non-zero ID of this `Event`.
		 */
		void SetEventID(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_eventID = v;
		}

		/**
		 * Set the field @c parentEventID.
		 * 
		 * The parent `Event` ID, or not set if this is a top-level `Event`.
		 */
		void SetParentEventID(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_parentEventID = v;
		}

		/**
		 * Set the field @c childCount.
		 * 
		 * The number of immediate children (not grandchildren) for this `Event`.
		 */
		void SetChildCount(UINT32 v)
		{
			has_bits_.Reference().SetBit(7);
			_childCount = v;
		}

		/**
		 * Set the field @c aggregatedTime.
		 * 
		 * Aggregated `time` for all children, including `time` for this `Event`.
		 */
		void SetAggregatedTime(double v)
		{
			has_bits_.Reference().SetBit(8);
			_aggregatedTime = v;
		}

		/**
		 * Set the field @c aggregatedOverhead.
		 * 
		 * Aggregated `overhead` for all children, including `overhead` for this
		 * `Event`.
		 */
		void SetAggregatedOverhead(double v)
		{
			has_bits_.Reference().SetBit(9);
			_aggregatedOverhead = v;
		}

		/**
		 * Set the field @c cssSelectorMatching.
		 * 
		 * Additional information for `CSS_SELECTOR_MATCHING` `Events`.
		 */
		void SetCssSelectorMatching(OpScopeProfiler_MessageSet::CssSelectorMatchingEvent * v);

		/**
		 * Set the field @c scriptThreadEvaluation.
		 * 
		 * Additional information for `SCRIPT_THREAD_EVALUATION` `Events`.
		 */
		void SetScriptThreadEvaluation(OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent * v);

		/**
		 * Set the field @c documentParsing.
		 * 
		 * Additional information for `DOCUMENT_PARSING` `Events`.
		 */
		void SetDocumentParsing(OpScopeProfiler_MessageSet::DocumentParsingEvent * v);

		/**
		 * Set the field @c cssParsing.
		 * 
		 * Additional information for `CSS_PARSING` `Events`.
		 */
		void SetCssParsing(OpScopeProfiler_MessageSet::CssParsingEvent * v);

		/**
		 * Set the field @c scriptCompilation.
		 * 
		 * Additional information for `SCRIPT_COMPILATION` `Events`.
		 */
		void SetScriptCompilation(OpScopeProfiler_MessageSet::ScriptCompilationEvent * v);

		/**
		 * Set the field @c paint.
		 * 
		 * Additional information for `PAINT` `Events`.
		 */
		void SetPaint(OpScopeProfiler_MessageSet::PaintEvent * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		double _time;
		double _overhead;
		UINT32 _hits;
		OpScopeProfiler_MessageSet::Interval * _interval;
		UINT32 _eventID;
		UINT32 _parentEventID;
		UINT32 _childCount;
		double _aggregatedTime;
		double _aggregatedOverhead;
		OpScopeProfiler_MessageSet::CssSelectorMatchingEvent * _cssSelectorMatching;
		OpScopeProfiler_MessageSet::ScriptThreadEvaluationEvent * _scriptThreadEvaluation;
		OpScopeProfiler_MessageSet::DocumentParsingEvent * _documentParsing;
		OpScopeProfiler_MessageSet::CssParsingEvent * _cssParsing;
		OpScopeProfiler_MessageSet::ScriptCompilationEvent * _scriptCompilation;
		OpScopeProfiler_MessageSet::PaintEvent * _paint;

		OpProtobufBitField<16> has_bits_;
		mutable int                 encoded_size_;
	};


	class Events
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Events(
			)
			: _interval(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~Events()
		{
			OP_DELETE(_interval);
		}

		// Checkers
		/**
		 * Check if the field @c interval is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInterval() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c eventList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c interval.
		 * 
		 * Represents the smallest `Interval` which is large enough to cover all the
		 * `Intervals` of each individual `Event` in the list.
		 * 
		 * Is not set if `eventList` is empty.
		 */
		OpScopeProfiler_MessageSet::Interval * GetInterval() const
		{
			return _interval;
		}

		/**
		 * Get the field @c eventList.
		 * 
		 * List of `Events`. The `Events` are ordered according to the start time of
		 * their `Intervals` (increasing order).
		 */
		const OpProtobufMessageVector<OpScopeProfiler_MessageSet::Event> & GetEventList() const
		{
			return _eventList;
		}

		// Setters

		/**
		 * Set the field @c interval.
		 * 
		 * Represents the smallest `Interval` which is large enough to cover all the
		 * `Intervals` of each individual `Event` in the list.
		 * 
		 * Is not set if `eventList` is empty.
		 */
		void SetInterval(OpScopeProfiler_MessageSet::Interval * v);

		/**
		 * Set the field @c eventList.
		 * 
		 * List of `Events`. The `Events` are ordered according to the start time of
		 * their `Intervals` (increasing order).
		 */
		OpProtobufMessageVector<OpScopeProfiler_MessageSet::Event> & GetEventListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpScopeProfiler_MessageSet::Interval * _interval;
		OpProtobufMessageVector<OpScopeProfiler_MessageSet::Event> _eventList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Session
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Session(
			UINT32 session_id_arg = 0
			)
			: _sessionID(session_id_arg)
			, _windowID(0)
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
		 * Check if the field @c sessionID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSessionID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c timelineList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTimelineList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c sessionID.
		 * 
		 * Non-zero ID for the `Session`. This must be used when accessing `Events`
		 * from a `Timeline` within the `Session`, and when releasing the
		 * `Session`.
		 */
		UINT32 GetSessionID() const
		{
			return _sessionID;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * The ID of the window associated with a `Session`.
		 * 
		 * This field may not be present if the `Session` is not associated with a
		 * window. (Currently not applicable, but field is made optional for
		 * future compatibility).
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c timelineList.
		 * 
		 * `Timelines` contained within the `Session`. This will typically contain
		 * one `Timeline` for each frame that existed in the window at some point
		 * during profiling.
		 */
		const OpProtobufMessageVector<OpScopeProfiler_MessageSet::Timeline> & GetTimelineList() const
		{
			return _timelineList;
		}

		// Setters

		/**
		 * Set the field @c sessionID.
		 * 
		 * Non-zero ID for the `Session`. This must be used when accessing `Events`
		 * from a `Timeline` within the `Session`, and when releasing the
		 * `Session`.
		 */
		void SetSessionID(UINT32 v)
		{
			_sessionID = v;
		}

		/**
		 * Set the field @c windowID.
		 * 
		 * The ID of the window associated with a `Session`.
		 * 
		 * This field may not be present if the `Session` is not associated with a
		 * window. (Currently not applicable, but field is made optional for
		 * future compatibility).
		 */
		void SetWindowID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_windowID = v;
		}

		/**
		 * Set the field @c timelineList.
		 * 
		 * `Timelines` contained within the `Session`. This will typically contain
		 * one `Timeline` for each frame that existed in the window at some point
		 * during profiling.
		 */
		OpProtobufMessageVector<OpScopeProfiler_MessageSet::Timeline> & GetTimelineListRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _sessionID;
		UINT32 _windowID;
		OpProtobufMessageVector<OpScopeProfiler_MessageSet::Timeline> _timelineList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class SessionID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		SessionID(
			UINT32 session_id_arg = 0
			)
			: _sessionID(session_id_arg)
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
		 * Check if the field @c sessionID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSessionID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c sessionID.
		 * 
		 * The ID of the `Session`.
		 */
		UINT32 GetSessionID() const
		{
			return _sessionID;
		}

		// Setters

		/**
		 * Set the field @c sessionID.
		 * 
		 * The ID of the `Session`.
		 */
		void SetSessionID(UINT32 v)
		{
			_sessionID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _sessionID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Timeline
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Timeline(
			UINT32 timeline_id_arg = 0
			)
			: _timelineID(timeline_id_arg)
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
		 * Check if the field @c timelineID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTimelineID() const
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
		 * Get the field @c timelineID.
		 * 
		 * Non-zero ID for the `Timeline`. This must be used when accessing `Events`
		 * from the `Timeline`.
		 */
		UINT32 GetTimelineID() const
		{
			return _timelineID;
		}

		/**
		 * Get the field @c frameID.
		 * 
		 * If the `Timeline` is associated with a frame, the ID of the frame will be
		 * stored here. If the frame was removed during profiling, it will not be
		 * possible to access additional information about the frame from
		 * 'DocumentManager'.
		 * 
		 * Also, this field may not be present if the `Timeline` is not associated
		 * with a frame. (Currently not applicable, but field is made optional for
		 * future compatibility).
		 */
		UINT32 GetFrameID() const
		{
			return _frameID;
		}

		// Setters

		/**
		 * Set the field @c timelineID.
		 * 
		 * Non-zero ID for the `Timeline`. This must be used when accessing `Events`
		 * from the `Timeline`.
		 */
		void SetTimelineID(UINT32 v)
		{
			_timelineID = v;
		}

		/**
		 * Set the field @c frameID.
		 * 
		 * If the `Timeline` is associated with a frame, the ID of the frame will be
		 * stored here. If the frame was removed during profiling, it will not be
		 * possible to access additional information about the frame from
		 * 'DocumentManager'.
		 * 
		 * Also, this field may not be present if the `Timeline` is not associated
		 * with a frame. (Currently not applicable, but field is made optional for
		 * future compatibility).
		 */
		void SetFrameID(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_frameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _timelineID;
		UINT32 _frameID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ReleaseSessionArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ReleaseSessionArg(
			)
			: _sessionID(0)
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
		 * Check if the field @c sessionID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSessionID() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c sessionID.
		 * 
		 * Which `Session` to release. If omitted, *all* `Sessions` are released,
		 * except the in-progress `Session`, if any.
		 */
		UINT32 GetSessionID() const
		{
			return _sessionID;
		}

		// Setters

		/**
		 * Set the field @c sessionID.
		 * 
		 * Which `Session` to release. If omitted, *all* `Sessions` are released,
		 * except the in-progress `Session`, if any.
		 */
		void SetSessionID(UINT32 v)
		{
			has_bits_.Reference().SetBit(0);
			_sessionID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _sessionID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetEventsArg
	{
	public:
		// BEGIN: Nested items

		// Enum GetEventsArg.Mode
		typedef GetEventsArg_Mode Mode;
		static const GetEventsArg_Mode MODE_ALL = GetEventsArg_Mode_MODE_ALL;
		static const GetEventsArg_Mode MODE_REDUCE_UNIQUE_TYPES = GetEventsArg_Mode_MODE_REDUCE_UNIQUE_TYPES;
		static const GetEventsArg_Mode MODE_REDUCE_UNIQUE_EVENTS = GetEventsArg_Mode_MODE_REDUCE_UNIQUE_EVENTS;
		static const GetEventsArg_Mode MODE_REDUCE_ALL = GetEventsArg_Mode_MODE_REDUCE_ALL;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		GetEventsArg(
			UINT32 session_id_arg = 0,
			UINT32 timeline_id_arg = 0
			)
			: _sessionID(session_id_arg)
			, _timelineID(timeline_id_arg)
			, _mode(GetEventsArg_Mode_MODE_ALL)
			, _eventID(0)
			, _maxDepth(0)
			, _interval(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~GetEventsArg()
		{
			OP_DELETE(_interval);
		}

		// Checkers
		/**
		 * Check if the field @c sessionID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSessionID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c timelineID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTimelineID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c mode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMode() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c eventID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c maxDepth is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxDepth() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c eventTypeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventTypeList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c interval is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInterval() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c sessionID.
		 * 
		 * ID of the `Session` to get `Events` from.
		 */
		UINT32 GetSessionID() const
		{
			return _sessionID;
		}

		/**
		 * Get the field @c timelineID.
		 * 
		 * ID of the `Timeline` to get `Events` from.
		 */
		UINT32 GetTimelineID() const
		{
			return _timelineID;
		}

		/**
		 * Get the field @c mode.
		 * 
		 * How `Events` should be processed before they are returned.
		 */
		OpScopeProfiler_MessageSet::GetEventsArg_Mode GetMode() const
		{
			return static_cast<OpScopeProfiler_MessageSet::GetEventsArg_Mode>(_mode);
		}

		/**
		 * Get the field @c eventID.
		 * 
		 * If present, this `Event` will be used as the root for the iteration
		 * instead of the `Timeline` itself. The `Event` specified here will not be
		 * included in the response. (The highest level `Events` in the response
		 * will be the specified `Event`'s immediate children).
		 * 
		 * This can be used with a non-default `Mode` to produce subtree summaries.
		 * 
		 * This, combined with the `maxDepth` option is useful for UIs where the
		 * `Timeline` is manually expanded by the user.
		 */
		UINT32 GetEventID() const
		{
			return _eventID;
		}

		/**
		 * Get the field @c maxDepth.
		 * 
		 * If present, return only `Events` down to the specified level. The
		 * smallest allowed vaule is '1', which represents the root `Event`'s
		 * immediate children. (A value of '0' represents the root `Event` itself,
		 * which is either the timeline, or the `Event` specified by `eventID`).
		 * A value of 2 represents the root `Event`'s grandchildren, and so forth.
		 * 
		 * A value of '1' will be useful for creating a UI where the user manually
		 * expands an `Event` he or she is interested in.
		 */
		UINT32 GetMaxDepth() const
		{
			return _maxDepth;
		}

		/**
		 * Get the field @c eventTypeList.
		 * 
		 * If non-empty, include only the specified types in the result. An empty
		 * list means all `Event` types will be included.
		 */
		const OpValueVector<INT32> & GetEventTypeList() const
		{
			return _eventTypeList;
		}

		/**
		 * Get the field @c eventTypeList.
		 * 
		 * If non-empty, include only the specified types in the result. An empty
		 * list means all `Event` types will be included.
		 */
		UINT32 GetEventTypeListCount() const
		{
			return _eventTypeList.GetCount();
		}

		/**
		 * Get the field @c eventTypeList.
		 * 
		 * If non-empty, include only the specified types in the result. An empty
		 * list means all `Event` types will be included.
		 */
		OpScopeProfiler_MessageSet::EventType GetEventTypeListItem(UINT32 i) const
		{
			OP_ASSERT(i < _eventTypeList.GetCount());
			return static_cast<OpScopeProfiler_MessageSet::EventType>(_eventTypeList.Get(i));
		}

		/**
		 * Get the field @c interval.
		 * 
		 * If present, include only `Events` whose `Interval` overlaps this
		 * `Interval`. If the option is not present, the entire `Timeline` may be
		 * included (subject to restrictions set by other options).
		 * 
		 * This option can be combined with any `Mode`, to produce a summary of
		 * parts of the `Timeline`.
		 */
		OpScopeProfiler_MessageSet::Interval * GetInterval() const
		{
			return _interval;
		}

		// Setters

		/**
		 * Set the field @c sessionID.
		 * 
		 * ID of the `Session` to get `Events` from.
		 */
		void SetSessionID(UINT32 v)
		{
			_sessionID = v;
		}

		/**
		 * Set the field @c timelineID.
		 * 
		 * ID of the `Timeline` to get `Events` from.
		 */
		void SetTimelineID(UINT32 v)
		{
			_timelineID = v;
		}

		/**
		 * Set the field @c mode.
		 * 
		 * How `Events` should be processed before they are returned.
		 */
		void SetMode(OpScopeProfiler_MessageSet::GetEventsArg_Mode v);

		/**
		 * Set the field @c eventID.
		 * 
		 * If present, this `Event` will be used as the root for the iteration
		 * instead of the `Timeline` itself. The `Event` specified here will not be
		 * included in the response. (The highest level `Events` in the response
		 * will be the specified `Event`'s immediate children).
		 * 
		 * This can be used with a non-default `Mode` to produce subtree summaries.
		 * 
		 * This, combined with the `maxDepth` option is useful for UIs where the
		 * `Timeline` is manually expanded by the user.
		 */
		void SetEventID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_eventID = v;
		}

		/**
		 * Set the field @c maxDepth.
		 * 
		 * If present, return only `Events` down to the specified level. The
		 * smallest allowed vaule is '1', which represents the root `Event`'s
		 * immediate children. (A value of '0' represents the root `Event` itself,
		 * which is either the timeline, or the `Event` specified by `eventID`).
		 * A value of 2 represents the root `Event`'s grandchildren, and so forth.
		 * 
		 * A value of '1' will be useful for creating a UI where the user manually
		 * expands an `Event` he or she is interested in.
		 */
		void SetMaxDepth(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_maxDepth = v;
		}

		/**
		 * Set the field @c eventTypeList.
		 * 
		 * If non-empty, include only the specified types in the result. An empty
		 * list means all `Event` types will be included.
		 */
		OpValueVector<INT32> & GetEventTypeListRef();

		/**
		 * Set the field @c eventTypeList.
		 * 
		 * If non-empty, include only the specified types in the result. An empty
		 * list means all `Event` types will be included.
		 */
		OP_STATUS AppendToEventTypeList(OpScopeProfiler_MessageSet::EventType v);

		/**
		 * Set the field @c eventTypeList.
		 * 
		 * If non-empty, include only the specified types in the result. An empty
		 * list means all `Event` types will be included.
		 */
		OP_STATUS SetEventTypeListItem(UINT32 i, OpScopeProfiler_MessageSet::EventType v);

		/**
		 * Set the field @c interval.
		 * 
		 * If present, include only `Events` whose `Interval` overlaps this
		 * `Interval`. If the option is not present, the entire `Timeline` may be
		 * included (subject to restrictions set by other options).
		 * 
		 * This option can be combined with any `Mode`, to produce a summary of
		 * parts of the `Timeline`.
		 */
		void SetInterval(OpScopeProfiler_MessageSet::Interval * v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _sessionID;
		UINT32 _timelineID;
		INT32 _mode;
		UINT32 _eventID;
		UINT32 _maxDepth;
		OpValueVector<INT32> _eventTypeList;
		OpScopeProfiler_MessageSet::Interval * _interval;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	class StopProfilerArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		StopProfilerArg(
			UINT32 session_id_arg = 0
			)
			: _sessionID(session_id_arg)
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
		 * Check if the field @c sessionID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSessionID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c sessionID.
		 * 
		 * The `Session` to stop.
		 */
		UINT32 GetSessionID() const
		{
			return _sessionID;
		}

		// Setters

		/**
		 * Set the field @c sessionID.
		 * 
		 * The `Session` to stop.
		 */
		void SetSessionID(UINT32 v)
		{
			_sessionID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _sessionID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class StartProfilerArg
	{
	public:
		// BEGIN: Nested items

		// Enum StartProfilerArg.StartMode
		typedef StartProfilerArg_StartMode StartMode;
		static const StartProfilerArg_StartMode STARTMODE_IMMEDIATE = StartProfilerArg_StartMode_STARTMODE_IMMEDIATE;
		static const StartProfilerArg_StartMode STARTMODE_URL = StartProfilerArg_StartMode_STARTMODE_URL;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		StartProfilerArg(
			StartProfilerArg_StartMode start_mode_arg = StartProfilerArg_StartMode_STARTMODE_IMMEDIATE,
			UINT32 window_id_arg = 0
			)
			: _startMode(start_mode_arg)
			, _windowID(window_id_arg)
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
		 * Check if the field @c startMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStartMode() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c startMode.
		 * 
		 * Describes when profiling shall begin.
		 */
		OpScopeProfiler_MessageSet::StartProfilerArg_StartMode GetStartMode() const
		{
			return static_cast<OpScopeProfiler_MessageSet::StartProfilerArg_StartMode>(_startMode);
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * Monitor activity in this window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		// Setters

		/**
		 * Set the field @c startMode.
		 * 
		 * Describes when profiling shall begin.
		 */
		void SetStartMode(OpScopeProfiler_MessageSet::StartProfilerArg_StartMode v);

		/**
		 * Set the field @c windowID.
		 * 
		 * Monitor activity in this window.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _startMode;
		UINT32 _windowID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Defines an `Area` by its top-left corner and width/height.
	 */
	class Area
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		Area(
			INT32 x_arg = 0,
			INT32 y_arg = 0,
			INT32 w_arg = 0,
			INT32 h_arg = 0
			)
			: _x(x_arg)
			, _y(y_arg)
			, _w(w_arg)
			, _h(h_arg)
			, _ox(0)
			, _oy(0)
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

		/**
		 * Check if the field @c ox is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOx() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c oy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOy() const
		{
			return has_bits_.Reference().IsSet(5);
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

		/**
		 * Get the field @c w.
		 */
		INT32 GetW() const
		{
			return _w;
		}

		/**
		 * Get the field @c h.
		 */
		INT32 GetH() const
		{
			return _h;
		}

		/**
		 * Get the field @c ox.
		 * 
		 * The scroll offsets of the view in which area is defined.
		 * 
		 * @since 1.1
		 */
		INT32 GetOx() const
		{
			return _ox;
		}

		/**
		 * Get the field @c oy.
		 */
		INT32 GetOy() const
		{
			return _oy;
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

		/**
		 * Set the field @c w.
		 */
		void SetW(INT32 v)
		{
			_w = v;
		}

		/**
		 * Set the field @c h.
		 */
		void SetH(INT32 v)
		{
			_h = v;
		}

		/**
		 * Set the field @c ox.
		 * 
		 * The scroll offsets of the view in which area is defined.
		 * 
		 * @since 1.1
		 */
		void SetOx(INT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_ox = v;
		}

		/**
		 * Set the field @c oy.
		 */
		void SetOy(INT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_oy = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _x;
		INT32 _y;
		INT32 _w;
		INT32 _h;
		INT32 _ox;
		INT32 _oy;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class Interval
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Interval(
			)
			: _start(0.0)
			, _end(0.0)
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
		 * Check if the field @c start is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStart() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c end is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEnd() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c start.
		 * 
		 * The start of the `Interval`. If not present, this is an left-open
		 * `Interval` ([-inf, N]).
		 */
		double GetStart() const
		{
			return _start;
		}

		/**
		 * Get the field @c end.
		 * 
		 * The end of the `Interval`. If not present, this is an right-open
		 * `Interval` ([N, +inf]).
		 */
		double GetEnd() const
		{
			return _end;
		}

		// Setters

		/**
		 * Set the field @c start.
		 * 
		 * The start of the `Interval`. If not present, this is an left-open
		 * `Interval` ([-inf, N]).
		 */
		void SetStart(double v)
		{
			has_bits_.Reference().SetBit(0);
			_start = v;
		}

		/**
		 * Set the field @c end.
		 * 
		 * The end of the `Interval`. If not present, this is an right-open
		 * `Interval` ([N, +inf]).
		 */
		void SetEnd(double v)
		{
			has_bits_.Reference().SetBit(1);
			_end = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeProfiler_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		double _start;
		double _end;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeProfiler_Descriptors
{
public:
	OpScopeProfiler_Descriptors();
	~OpScopeProfiler_Descriptors();

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
		_gen_MessageOffs_css_parsing_event_,
		_gen_MessageOffs_css_selector_matching_event_,
		_gen_MessageOffs_document_parsing_event_,
		_gen_MessageOffs_event_,
		_gen_MessageOffs_events_,
		_gen_MessageOffs_get_events_arg_,
		_gen_MessageOffs_interval_,
		_gen_MessageOffs_paint_event_,
		_gen_MessageOffs_release_session_arg_,
		_gen_MessageOffs_script_compilation_event_,
		_gen_MessageOffs_script_thread_evaluation_event_,
		_gen_MessageOffs_session_,
		_gen_MessageOffs_session_id_,
		_gen_MessageOffs_start_profiler_arg_,
		_gen_MessageOffs_stop_profiler_arg_,
		_gen_MessageOffs_timeline_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_area_
		, _gen_MsgID_css_parsing_event_
		, _gen_MsgID_css_selector_matching_event_
		, _gen_MsgID_document_parsing_event_
		, _gen_MsgID_event_
		, _gen_MsgID_events_
		, _gen_MsgID_get_events_arg_
		, _gen_MsgID_interval_
		, _gen_MsgID_paint_event_
		, _gen_MsgID_release_session_arg_
		, _gen_MsgID_script_compilation_event_
		, _gen_MsgID_script_thread_evaluation_event_
		, _gen_MsgID_session_
		, _gen_MsgID_session_id_
		, _gen_MsgID_start_profiler_arg_
		, _gen_MsgID_stop_profiler_arg_
		, _gen_MsgID_timeline_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for StartMode
		_gen_EnumID_StartProfilerArg_StartMode,
		// Meta info for Mode
		_gen_EnumID_GetEventsArg_Mode,
		// Meta info for EventType
		_gen_EnumID_EventType,
		// Meta info for ScriptThreadType
		_gen_EnumID_ScriptThreadType,
		// Meta info for ScriptType
		_gen_EnumID_ScriptType,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for StartMode
		_gen_EnumValueCount_StartProfilerArg_StartMode = 2,
		// Meta info for Mode
		_gen_EnumValueCount_GetEventsArg_Mode = 4,
		// Meta info for EventType
		_gen_EnumValueCount_EventType = 11,
		// Meta info for ScriptThreadType
		_gen_EnumValueCount_ScriptThreadType = 9,
		// Meta info for ScriptType
		_gen_EnumValueCount_ScriptType = 12,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for StartMode
		_gen_Enum_StartProfilerArg_StartMode,
		// Meta info for Mode
		_gen_Enum_GetEventsArg_Mode,
		// Meta info for EventType
		_gen_Enum_EventType,
		// Meta info for ScriptThreadType
		_gen_Enum_ScriptThreadType,
		// Meta info for ScriptType
		_gen_Enum_ScriptType,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[5];

};


class OpScopeProfiler_SI
	: public OpScopeService
	, public OpScopeProfiler_MessageSet
{
public:
	OpScopeProfiler_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeProfiler_SI();

	enum CommandEnum
	{
		  Command_StartProfiler = 1
		, Command_StopProfiler = 2
		, Command_GetEvents = 3
		, Command_ReleaseSession = 4

		, Command_Count = 4 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeProfiler_Descriptors
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
	virtual OP_STATUS DoStartProfiler(const StartProfilerArg &in, SessionID &out) = 0;
	virtual OP_STATUS DoReleaseSession(const ReleaseSessionArg &in) = 0;
	virtual OP_STATUS DoStopProfiler(const StopProfilerArg &in, unsigned int async_tag) = 0;
	virtual OP_STATUS DoGetEvents(const GetEventsArg &in, unsigned int async_tag) = 0;

	// Event functions
	OP_STATUS SendStopProfiler(const Session &msg, unsigned int tag);
	OP_STATUS SendGetEvents(const Events &msg, unsigned int tag);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_PROFILER

#endif // G_SCOPE_PROFILER_INTERFACE_H
