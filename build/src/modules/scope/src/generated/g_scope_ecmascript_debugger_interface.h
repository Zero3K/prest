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

// Generated from ../../modules/scope/services/ecmascript_debugger/ecmascript_debugger.proto



#ifndef G_SCOPE_ECMASCRIPT_DEBUGGER_INTERFACE_H
#define G_SCOPE_ECMASCRIPT_DEBUGGER_INTERFACE_H

#ifdef SCOPE_ECMASCRIPT_DEBUGGER

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class ES_ScopeDebugFrontend_Descriptors;

class ES_ScopeDebugFrontend_MessageSet
{
public:
	// BEGIN: ctor/dtor

	ES_ScopeDebugFrontend_MessageSet();
	virtual ~ES_ScopeDebugFrontend_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum PseudoElement_Type
	{
	    PseudoElement_Type_TYPE_BEFORE = 1,
	    PseudoElement_Type_TYPE_AFTER = 2,
	    PseudoElement_Type_TYPE_FIRST_LETTER = 3,
	    PseudoElement_Type_TYPE_FIRST_LINE = 4
	};

	enum NodeType
	{
	    NODETYPE_UNKNOWN,
	    NODETYPE_ELEMENT = 1,
	    NODETYPE_ATTRIBUTE = 2,
	    NODETYPE_TEXT = 3,
	    NODETYPE_CDATA_SECTION = 4,
	    NODETYPE_ENTITY_REFERENCE = 5,
	    NODETYPE_ENTITY = 6,
	    NODETYPE_PROCESSING_INSTRUCTION = 7,
	    NODETYPE_COMMENT = 8,
	    NODETYPE_DOCUMENT = 9,
	    NODETYPE_DOCUMENT_TYPE = 10,
	    NODETYPE_DOCUMENT_FRAGMENT = 11,
	    NODETYPE_NOTATION = 12,
	    NODETYPE_XPATH_NAMESPACE = 13,
	    NODETYPE_SVG_ELEMENTINSTANCE = 14
	};

	enum EventListener_Origin
	{
	    EventListener_Origin_ORIGIN_EVENT_TARGET = 1,
	    EventListener_Origin_ORIGIN_ATTRIBUTE = 2
	};

	enum NodeInfo_MatchReason
	{
	    NodeInfo_MatchReason_MATCHREASON_TRAVERSAL = 1,
	    NodeInfo_MatchReason_MATCHREASON_SEARCH_ANCESTOR = 2,
	    NodeInfo_MatchReason_MATCHREASON_SEARCH_HIT = 3
	};

	enum PseudoSelector
	{
	    PSEUDOSELECTOR_NONE,
	    PSEUDOSELECTOR_HOVER = 1,
	    PSEUDOSELECTOR_ACTIVE = 2,
	    PSEUDOSELECTOR_FOCUS = 3,
	    PSEUDOSELECTOR_LINK = 4,
	    PSEUDOSELECTOR_VISITED = 5,
	    PSEUDOSELECTOR_FIRST_LINE = 6,
	    PSEUDOSELECTOR_FIRST_LETTER = 7,
	    PSEUDOSELECTOR_BEFORE = 8,
	    PSEUDOSELECTOR_AFTER = 9,
	    PSEUDOSELECTOR_SELECTION = 10
	};

	enum RuleOrigin
	{
	    RULEORIGIN_USER_AGENT = 1,
	    RULEORIGIN_LOCAL = 2,
	    RULEORIGIN_AUTHOR = 3,
	    RULEORIGIN_ELEMENT = 4,
	    RULEORIGIN_SVG = 5
	};

	enum DeclarationStatus
	{
	    DECLARATIONSTATUS_OVERWRITTEN,
	    DECLARATIONSTATUS_USED = 1
	};

	enum SearchDomArg_Type
	{
	    SearchDomArg_Type_TYPE_PLAIN_TEXT = 1,
	    SearchDomArg_Type_TYPE_REGEXP = 2,
	    SearchDomArg_Type_TYPE_XPATH = 3,
	    SearchDomArg_Type_TYPE_SELECTOR = 4,
	    SearchDomArg_Type_TYPE_EVENT = 5
	};

	enum ConsoleLogType
	{
	    CONSOLELOGTYPE_LOG = 1,
	    CONSOLELOGTYPE_DEBUG = 2,
	    CONSOLELOGTYPE_INFO = 3,
	    CONSOLELOGTYPE_WARN = 4,
	    CONSOLELOGTYPE_ERROR = 5,
	    CONSOLELOGTYPE_ASSERT = 6,
	    CONSOLELOGTYPE_DIR = 7,
	    CONSOLELOGTYPE_DIRXML = 8,
	    CONSOLELOGTYPE_GROUP = 9,
	    CONSOLELOGTYPE_GROUP_COLLAPSED = 10,
	    CONSOLELOGTYPE_GROUP_END = 11,
	    CONSOLELOGTYPE_COUNT = 12,
	    CONSOLELOGTYPE_TABLE = 13,
	    CONSOLELOGTYPE_CLEAR = 14
	};

	enum Value_Type
	{
	    Value_Type_TYPE_UNDEFINED,
	    Value_Type_TYPE_NULL = 1,
	    Value_Type_TYPE_TRUE = 2,
	    Value_Type_TYPE_FALSE = 3,
	    Value_Type_TYPE_NAN = 4,
	    Value_Type_TYPE_PLUS_INFINITY = 5,
	    Value_Type_TYPE_MINUS_INFINITY = 6,
	    Value_Type_TYPE_NUMBER = 7,
	    Value_Type_TYPE_STRING = 8,
	    Value_Type_TYPE_OBJECT = 9
	};

	enum FunctionCallCompletedInfo_Result
	{
	    FunctionCallCompletedInfo_Result_RESULT_SUCCESS = 1,
	    FunctionCallCompletedInfo_Result_RESULT_EXCEPTION = 2
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class PropertyFilter_ClassMask_PropertyMask;
	class CssStyleDeclarations_NodeStyle_StyleDeclaration;
	class PropertyFilter_ClassMask;
	class ConsoleLogInfo_Value;
	class EvalData_Variable;
	class CssStylesheetRules_StylesheetRule;
	class CssStyleDeclarations_NodeStyle;
	class FunctionPositionList_FunctionPosition;
	class ObjectInfo_Property;
	class NodeInfo_Attribute;
	class SpotlightObject_SpotlightBox;
	class CssStylesheetList_Stylesheet;
	class ThreadMigration;
	class FunctionCallCompletedInfo;
	class ObjectValue;
	class FunctionCallStartingInfo;
	class FunctionFilter;
	class ReleaseObjectsArg;
	class PropertyFilter;
	class SetPropertyFilterArg;
	class ConsoleProfileEndInfo;
	class ConsoleProfileInfo;
	class ConsoleTraceInfo;
	class ConsoleTimeEndInfo;
	class ConsoleTimeInfo;
	class ConsoleLogInfo;
	class ReadyStateInfo;
	class CssStylesheetSelection;
	class EvalData;
	class CssStylesheetRules;
	class SpotlightSelection;
	class BreakSelection;
	class SearchDomArg;
	class DomTraversal;
	class SpotlightObjectSelection;
	class RuntimeList;
	class EvalResult;
	class EventHandler;
	class ObjectChainList;
	class ObjectList;
	class ThreadMode;
	class ScriptInfo;
	class ObjectSelection;
	class ThreadStopInfo;
	class CssIndexMap;
	class CssStyleDeclarations;
	class EventBreakpoint;
	class Breakpoint;
	class Configuration;
	class DomParseError;
	class EventTargets;
	class EventTarget;
	class GetEventListenersArg;
	class GetFunctionPositionsArg;
	class EventNames;
	class GetEventNamesArg;
	class FrameSelection;
	class NodeList;
	class Position;
	class Value;
	class ReturnValue;
	class BacktraceFrameList;
	class BacktraceFrame;
	class ThreadResult;
	class DomEvent;
	class CssElementSelection;
	class FunctionPositionList;
	class ObjectInfo;
	class RuntimeSelection;
	class RuntimeID;
	class ThreadInfo;
	class EventHandlerID;
	class NodeInfo;
	class EventListener;
	class PseudoElement;
	class ObjectReference;
	class RuntimeInfo;
	class SpotlightObject;
	class BacktraceSelection;
	class BreakpointID;
	class ExamineList;
	class CssStylesheetList;

	/**
	 * You can choose to filter a property based on name and, as an additional condition, type.
	 * For booleans, numbers and strings, you can also filter by value as a third additional
	 * condition.
	 * 
	 * If only 'name' is present, then a property with that name will be excluded, regardless
	 * of its value. If 'type' is also present, then the property with that name will be excluded
	 * only if its value is the specified type.
	 * 
	 * If 'type' indicates a boolean, number or string, you can assign a value in the corresponding
	 * optional field. The property will then be excluded only if the name, type and value all match.
	 */
	class PropertyFilter_ClassMask_PropertyMask
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		PropertyFilter_ClassMask_PropertyMask(
			)
			: _type(0)
			, _boolean(FALSE)
			, _number(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString * string_arg = NULL
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			if (string_arg)
			{
				RETURN_IF_ERROR(_string.Set(*string_arg));
				has_bits_.Reference().SetBit(4);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c boolean is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBoolean() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c string is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasString() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c type.
		 */
		UINT32 GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c boolean.
		 */
		BOOL GetBoolean() const
		{
			return _boolean;
		}

		/**
		 * Get the field @c number.
		 */
		UINT32 GetNumber() const
		{
			return _number;
		}

		/**
		 * Get the field @c string.
		 */
		const OpString & GetString() const
		{
			return _string;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 */
		void SetType(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_type = v;
		}

		/**
		 * Set the field @c boolean.
		 */
		void SetBoolean(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_boolean = v;
		}

		/**
		 * Set the field @c number.
		 */
		void SetNumber(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_number = v;
		}

		/**
		 * Set the field @c string.
		 */
		OP_STATUS SetString(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _type;
		BOOL _boolean;
		UINT32 _number;
		OpString _string;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Common to all origins:
	 * - indexList
	 * - valueList
	 * - priorityList
	 * - statusList
	 * 
	 * Common to AUTHOR and LOCAL
	 * - selector
	 * - specificity
	 * 
	 * For AUTHOR
	 * - stylesheetID
	 * - ruleID
	 * - ruleType
	 * 
	 * For SVG
	 * - specificity
	 */
	class CssStyleDeclarations_NodeStyle_StyleDeclaration
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 12
		};
		// END: Internal enums


		CssStyleDeclarations_NodeStyle_StyleDeclaration(
			RuleOrigin origin_arg = RULEORIGIN_USER_AGENT
			)
			: _origin(origin_arg)
			, _specificity(0)
			, _stylesheetID(0)
			, _ruleID(0)
			, _ruleType(0)
			, _lineNumber(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * selector_arg = NULL
			)
		{
			if (selector_arg)
			{
				RETURN_IF_ERROR(_selector.Set(*selector_arg));
				has_bits_.Reference().SetBit(5);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c origin is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrigin() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c indexList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIndexList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c valueList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValueList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c priorityList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPriorityList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c statusList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStatusList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c selector is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSelector() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c specificity is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSpecificity() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c stylesheetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStylesheetID() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c ruleID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuleID() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		/**
		 * Check if the field @c ruleType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuleType() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return has_bits_.Reference().IsSet(10);
		}

		/**
		 * Check if the field @c fullscreenList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFullscreenList() const
		{
			return has_bits_.Reference().IsSet(11);
		}

		// Getters

		/**
		 * Get the field @c origin.
		 */
		ES_ScopeDebugFrontend_MessageSet::RuleOrigin GetOrigin() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::RuleOrigin>(_origin);
		}

		/**
		 * Get the field @c indexList.
		 */
		const OpValueVector<UINT32> & GetIndexList() const
		{
			return _indexList;
		}

		/**
		 * Get the field @c valueList.
		 */
		const OpAutoVector<OpString> & GetValueList() const
		{
			return _valueList;
		}

		/**
		 * Get the field @c priorityList.
		 */
		const OpINT32Vector & GetPriorityList() const
		{
			return _priorityList;
		}

		/**
		 * Get the field @c statusList.
		 */
		const OpValueVector<INT32> & GetStatusList() const
		{
			return _statusList;
		}

		/**
		 * Get the field @c statusList.
		 */
		UINT32 GetStatusListCount() const
		{
			return _statusList.GetCount();
		}

		/**
		 * Get the field @c statusList.
		 */
		ES_ScopeDebugFrontend_MessageSet::DeclarationStatus GetStatusListItem(UINT32 i) const
		{
			OP_ASSERT(i < _statusList.GetCount());
			return static_cast<ES_ScopeDebugFrontend_MessageSet::DeclarationStatus>(_statusList.Get(i));
		}

		/**
		 * Get the field @c selector.
		 */
		const OpString & GetSelector() const
		{
			return _selector;
		}

		/**
		 * Get the field @c specificity.
		 */
		UINT32 GetSpecificity() const
		{
			return _specificity;
		}

		/**
		 * Get the field @c stylesheetID.
		 */
		UINT32 GetStylesheetID() const
		{
			return _stylesheetID;
		}

		/**
		 * Get the field @c ruleID.
		 */
		UINT32 GetRuleID() const
		{
			return _ruleID;
		}

		/**
		 * Get the field @c ruleType.
		 */
		UINT32 GetRuleType() const
		{
			return _ruleType;
		}

		/**
		 * Get the field @c lineNumber.
		 * 
		 * The original, stylesheet relative line number of this rule. The
		 * line number refers to the start of the declaration block.
		 * 
		 * This field *may* be set for STYLE rules, but as the information
		 * depends on an optional feature in Opera, some builds intended for
		 * low-memory devices may not support this.
		 * 
		 * @since 6.6
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		/**
		 * Get the field @c fullscreenList.
		 * 
		 * For USER_AGENT, an entry in this list is true if the
		 * declaration is from a rule for :fullscreen or
		 * :fullscreen-ancestor where the rule ends up in between
		 * author and author important in the cascade. (See:
		 * http://dvcs.w3.org/hg/fullscreen/raw-file/tip/Overview.html#rendering).
		 * 
		 * @since 6.12
		 */
		const OpINT32Vector & GetFullscreenList() const
		{
			return _fullscreenList;
		}

		// Setters

		/**
		 * Set the field @c origin.
		 */
		void SetOrigin(ES_ScopeDebugFrontend_MessageSet::RuleOrigin v);

		/**
		 * Set the field @c indexList.
		 */
		OpValueVector<UINT32> & GetIndexListRef();

		/**
		 * Set the field @c indexList.
		 */
		OP_STATUS AppendToIndexList(UINT32 v);

		/**
		 * Set the field @c valueList.
		 */
		OpAutoVector<OpString> & GetValueListRef();

		/**
		 * Set the field @c priorityList.
		 */
		OpINT32Vector & GetPriorityListRef();

		/**
		 * Set the field @c priorityList.
		 */
		OP_STATUS AppendToPriorityList(BOOL v);

		/**
		 * Set the field @c statusList.
		 */
		OpValueVector<INT32> & GetStatusListRef();

		/**
		 * Set the field @c statusList.
		 */
		OP_STATUS AppendToStatusList(ES_ScopeDebugFrontend_MessageSet::DeclarationStatus v);

		/**
		 * Set the field @c statusList.
		 */
		OP_STATUS SetStatusListItem(UINT32 i, ES_ScopeDebugFrontend_MessageSet::DeclarationStatus v);

		/**
		 * Set the field @c selector.
		 */
		OP_STATUS SetSelector(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c specificity.
		 */
		void SetSpecificity(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_specificity = v;
		}

		/**
		 * Set the field @c stylesheetID.
		 */
		void SetStylesheetID(UINT32 v)
		{
			has_bits_.Reference().SetBit(7);
			_stylesheetID = v;
		}

		/**
		 * Set the field @c ruleID.
		 */
		void SetRuleID(UINT32 v)
		{
			has_bits_.Reference().SetBit(8);
			_ruleID = v;
		}

		/**
		 * Set the field @c ruleType.
		 */
		void SetRuleType(UINT32 v)
		{
			has_bits_.Reference().SetBit(9);
			_ruleType = v;
		}

		/**
		 * Set the field @c lineNumber.
		 * 
		 * The original, stylesheet relative line number of this rule. The
		 * line number refers to the start of the declaration block.
		 * 
		 * This field *may* be set for STYLE rules, but as the information
		 * depends on an optional feature in Opera, some builds intended for
		 * low-memory devices may not support this.
		 * 
		 * @since 6.6
		 */
		void SetLineNumber(UINT32 v)
		{
			has_bits_.Reference().SetBit(10);
			_lineNumber = v;
		}

		/**
		 * Set the field @c fullscreenList.
		 * 
		 * For USER_AGENT, an entry in this list is true if the
		 * declaration is from a rule for :fullscreen or
		 * :fullscreen-ancestor where the rule ends up in between
		 * author and author important in the cascade. (See:
		 * http://dvcs.w3.org/hg/fullscreen/raw-file/tip/Overview.html#rendering).
		 * 
		 * @since 6.12
		 */
		OpINT32Vector & GetFullscreenListRef();

		/**
		 * Set the field @c fullscreenList.
		 * 
		 * For USER_AGENT, an entry in this list is true if the
		 * declaration is from a rule for :fullscreen or
		 * :fullscreen-ancestor where the rule ends up in between
		 * author and author important in the cascade. (See:
		 * http://dvcs.w3.org/hg/fullscreen/raw-file/tip/Overview.html#rendering).
		 * 
		 * @since 6.12
		 */
		OP_STATUS AppendToFullscreenList(BOOL v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _origin;
		OpValueVector<UINT32> _indexList;
		OpAutoVector<OpString> _valueList;
		OpINT32Vector _priorityList;
		OpValueVector<INT32> _statusList;
		OpString _selector;
		UINT32 _specificity;
		UINT32 _stylesheetID;
		UINT32 _ruleID;
		UINT32 _ruleType;
		UINT32 _lineNumber;
		OpINT32Vector _fullscreenList;

		OpProtobufBitField<12> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A ClassMask contains all the properties which should be considered for exclusion for a
	 * certain class.
	 */
	class PropertyFilter_ClassMask
	{
	public:
		// BEGIN: Nested items

		// Message PropertyFilter.ClassMask.PropertyMask
		typedef PropertyFilter_ClassMask_PropertyMask PropertyMask;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PropertyFilter_ClassMask(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & class_name_arg
			)
		{
			RETURN_IF_ERROR(_className.Set(class_name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c className is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClassName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c propertyMaskList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPropertyMaskList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c className.
		 * 
		 * The name of the class this filter applies to. Examples are 'Object' and
		 * 'HTMLHtmlElement'.
		 */
		const OpString & GetClassName() const
		{
			return _className;
		}

		/**
		 * Get the field @c propertyMaskList.
		 * 
		 * The list of properties which could be filtered.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask> & GetPropertyMaskList() const
		{
			return _propertyMaskList;
		}

		// Setters

		/**
		 * Set the field @c className.
		 * 
		 * The name of the class this filter applies to. Examples are 'Object' and
		 * 'HTMLHtmlElement'.
		 */
		OP_STATUS SetClassName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c propertyMaskList.
		 * 
		 * The list of properties which could be filtered.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask> & GetPropertyMaskListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _className;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask_PropertyMask> _propertyMaskList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleLogInfo_Value
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ConsoleLogInfo_Value(
			)
			: _objectValue(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * value_arg = NULL
			)
		{
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(0);

			}
			return OpStatus::OK;
		}
		~ConsoleLogInfo_Value()
		{
			OP_DELETE(_objectValue);
		}

		// Checkers
		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c value.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c objectValue.
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetObjectValue() const
		{
			return _objectValue;
		}

		// Setters

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c objectValue.
		 */
		void SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _value;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _objectValue;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class EvalData_Variable
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EvalData_Variable(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		UINT32 _objectID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Common to FONT_FACE, PAGE and STYLE is:
	 * - indexList
	 * - valueList
	 * - priorityList
	 * 
	 * Common to STYLE and PAGE is:
	 * - selectorList
	 * - specificityList
	 * 
	 * Common to MEDIA and IMPORT
	 * - mediaList
	 * 
	 * For MEDIA
	 * - ruleList
	 * 
	 * For IMPORT
	 * - href
	 * - importStylesheetID
	 * 
	 * For PAGE
	 * - pseudoClass
	 * 
	 * For CHARSET
	 * - charset
	 */
	class CssStylesheetRules_StylesheetRule
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 15
		};
		// END: Internal enums


		CssStylesheetRules_StylesheetRule(
			UINT32 type_arg = 0,
			UINT32 stylesheet_id_arg = 0,
			UINT32 rule_id_arg = 0
			)
			: _type(type_arg)
			, _stylesheetID(stylesheet_id_arg)
			, _ruleID(rule_id_arg)
			, _importStylesheetID(0)
			, _pseudoClass(0)
			, _lineNumber(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * href_arg = NULL,
			const OpString * charset_arg = NULL
			)
		{
			if (href_arg)
			{
				RETURN_IF_ERROR(_href.Set(*href_arg));
				has_bits_.Reference().SetBit(10);

			}
			if (charset_arg)
			{
				RETURN_IF_ERROR(_charset.Set(*charset_arg));
				has_bits_.Reference().SetBit(13);

			}
			return OpStatus::OK;
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
		 * Check if the field @c stylesheetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStylesheetID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c ruleID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuleID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c indexList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIndexList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c valueList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValueList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c priorityList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPriorityList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c selectorList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSelectorList() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c specificityList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSpecificityList() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c mediaList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMediaList() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		/**
		 * Check if the field @c ruleList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuleList() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		/**
		 * Check if the field @c href is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHref() const
		{
			return has_bits_.Reference().IsSet(10);
		}

		/**
		 * Check if the field @c importStylesheetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasImportStylesheetID() const
		{
			return has_bits_.Reference().IsSet(11);
		}

		/**
		 * Check if the field @c pseudoClass is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPseudoClass() const
		{
			return has_bits_.Reference().IsSet(12);
		}

		/**
		 * Check if the field @c charset is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCharset() const
		{
			return has_bits_.Reference().IsSet(13);
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return has_bits_.Reference().IsSet(14);
		}

		// Getters

		/**
		 * Get the field @c type.
		 * 
		 * Type values:
		 * 0 - UNKNOWN
		 * 1 - STYLE
		 * 2 - CHARSET
		 * 3 - IMPORT
		 * 4 - MEDIA
		 * 5 - FONT_FACE
		 * 6 - PAGE
		 * 7 - NAMESPACE // Not supported
		 */
		UINT32 GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c stylesheetID.
		 */
		UINT32 GetStylesheetID() const
		{
			return _stylesheetID;
		}

		/**
		 * Get the field @c ruleID.
		 */
		UINT32 GetRuleID() const
		{
			return _ruleID;
		}

		/**
		 * Get the field @c indexList.
		 */
		const OpValueVector<UINT32> & GetIndexList() const
		{
			return _indexList;
		}

		/**
		 * Get the field @c valueList.
		 */
		const OpAutoVector<OpString> & GetValueList() const
		{
			return _valueList;
		}

		/**
		 * Get the field @c priorityList.
		 */
		const OpINT32Vector & GetPriorityList() const
		{
			return _priorityList;
		}

		/**
		 * Get the field @c selectorList.
		 * 
		 * 0..1 for PAGE and 0..* for STYLE
		 */
		const OpAutoVector<OpString> & GetSelectorList() const
		{
			return _selectorList;
		}

		/**
		 * Get the field @c specificityList.
		 * 
		 * 1..1 for PAGE and 0..* for STYLE
		 */
		const OpValueVector<UINT32> & GetSpecificityList() const
		{
			return _specificityList;
		}

		/**
		 * Get the field @c mediaList.
		 */
		const OpAutoVector<OpString> & GetMediaList() const
		{
			return _mediaList;
		}

		/**
		 * Get the field @c ruleList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> & GetRuleList() const
		{
			return _ruleList;
		}

		/**
		 * Get the field @c href.
		 */
		const OpString & GetHref() const
		{
			return _href;
		}

		/**
		 * Get the field @c importStylesheetID.
		 */
		UINT32 GetImportStylesheetID() const
		{
			return _importStylesheetID;
		}

		/**
		 * Get the field @c pseudoClass.
		 */
		UINT32 GetPseudoClass() const
		{
			return _pseudoClass;
		}

		/**
		 * Get the field @c charset.
		 */
		const OpString & GetCharset() const
		{
			return _charset;
		}

		/**
		 * Get the field @c lineNumber.
		 * 
		 * The original, stylesheet relative line number of this rule. The
		 * line number refers to the start of the declaration block.
		 * 
		 * This field *may* be set for STYLE rules, but as the information
		 * depends on an optional feature in Opera, some builds intended for
		 * low-memory devices may not support this.
		 * 
		 * @since 6.6
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		// Setters

		/**
		 * Set the field @c type.
		 * 
		 * Type values:
		 * 0 - UNKNOWN
		 * 1 - STYLE
		 * 2 - CHARSET
		 * 3 - IMPORT
		 * 4 - MEDIA
		 * 5 - FONT_FACE
		 * 6 - PAGE
		 * 7 - NAMESPACE // Not supported
		 */
		void SetType(UINT32 v)
		{
			_type = v;
		}

		/**
		 * Set the field @c stylesheetID.
		 */
		void SetStylesheetID(UINT32 v)
		{
			_stylesheetID = v;
		}

		/**
		 * Set the field @c ruleID.
		 */
		void SetRuleID(UINT32 v)
		{
			_ruleID = v;
		}

		/**
		 * Set the field @c indexList.
		 */
		OpValueVector<UINT32> & GetIndexListRef();

		/**
		 * Set the field @c indexList.
		 */
		OP_STATUS AppendToIndexList(UINT32 v);

		/**
		 * Set the field @c valueList.
		 */
		OpAutoVector<OpString> & GetValueListRef();

		/**
		 * Set the field @c priorityList.
		 */
		OpINT32Vector & GetPriorityListRef();

		/**
		 * Set the field @c priorityList.
		 */
		OP_STATUS AppendToPriorityList(BOOL v);

		/**
		 * Set the field @c selectorList.
		 * 
		 * 0..1 for PAGE and 0..* for STYLE
		 */
		OpAutoVector<OpString> & GetSelectorListRef();

		/**
		 * Set the field @c specificityList.
		 * 
		 * 1..1 for PAGE and 0..* for STYLE
		 */
		OpValueVector<UINT32> & GetSpecificityListRef();

		/**
		 * Set the field @c specificityList.
		 * 
		 * 1..1 for PAGE and 0..* for STYLE
		 */
		OP_STATUS AppendToSpecificityList(UINT32 v);

		/**
		 * Set the field @c mediaList.
		 */
		OpAutoVector<OpString> & GetMediaListRef();

		/**
		 * Set the field @c ruleList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> & GetRuleListRef();

		/**
		 * Set the field @c href.
		 */
		OP_STATUS SetHref(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c importStylesheetID.
		 */
		void SetImportStylesheetID(UINT32 v)
		{
			has_bits_.Reference().SetBit(11);
			_importStylesheetID = v;
		}

		/**
		 * Set the field @c pseudoClass.
		 */
		void SetPseudoClass(UINT32 v)
		{
			has_bits_.Reference().SetBit(12);
			_pseudoClass = v;
		}

		/**
		 * Set the field @c charset.
		 */
		OP_STATUS SetCharset(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c lineNumber.
		 * 
		 * The original, stylesheet relative line number of this rule. The
		 * line number refers to the start of the declaration block.
		 * 
		 * This field *may* be set for STYLE rules, but as the information
		 * depends on an optional feature in Opera, some builds intended for
		 * low-memory devices may not support this.
		 * 
		 * @since 6.6
		 */
		void SetLineNumber(UINT32 v)
		{
			has_bits_.Reference().SetBit(14);
			_lineNumber = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _type;
		UINT32 _stylesheetID;
		UINT32 _ruleID;
		OpValueVector<UINT32> _indexList;
		OpAutoVector<OpString> _valueList;
		OpINT32Vector _priorityList;
		OpAutoVector<OpString> _selectorList;
		OpValueVector<UINT32> _specificityList;
		OpAutoVector<OpString> _mediaList;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> _ruleList;
		OpString _href;
		UINT32 _importStylesheetID;
		UINT32 _pseudoClass;
		OpString _charset;
		UINT32 _lineNumber;

		OpProtobufBitField<15> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssStyleDeclarations_NodeStyle
	{
	public:
		// BEGIN: Nested items

		// Message CssStyleDeclarations.NodeStyle.StyleDeclaration
		typedef CssStyleDeclarations_NodeStyle_StyleDeclaration StyleDeclaration;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		CssStyleDeclarations_NodeStyle(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
			, _pseudoElement(PSEUDOSELECTOR_NONE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & element_name_arg
			)
		{
			RETURN_IF_ERROR(_elementName.Set(element_name_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c elementName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasElementName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c styleList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStyleList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c pseudoElement is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPseudoElement() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c elementName.
		 */
		const OpString & GetElementName() const
		{
			return _elementName;
		}

		/**
		 * Get the field @c styleList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration> & GetStyleList() const
		{
			return _styleList;
		}

		/**
		 * Get the field @c pseudoElement.
		 * 
		 * If set, the style declarations apply to the specified pseudo-element
		 * of the node represented by `objectID`.
		 * 
		 * This field (if set) will contain pseudo-elements only (not pseudo-
		 * classes).
		 * 
		 * @since 6.9
		 */
		ES_ScopeDebugFrontend_MessageSet::PseudoSelector GetPseudoElement() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoSelector>(_pseudoElement);
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c elementName.
		 */
		OP_STATUS SetElementName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c styleList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration> & GetStyleListRef();

		/**
		 * Set the field @c pseudoElement.
		 * 
		 * If set, the style declarations apply to the specified pseudo-element
		 * of the node represented by `objectID`.
		 * 
		 * This field (if set) will contain pseudo-elements only (not pseudo-
		 * classes).
		 * 
		 * @since 6.9
		 */
		void SetPseudoElement(ES_ScopeDebugFrontend_MessageSet::PseudoSelector v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		OpString _elementName;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle_StyleDeclaration> _styleList;
		INT32 _pseudoElement;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains the object ID of the function and the script position if
	 * it was found.
	 */
	class FunctionPositionList_FunctionPosition
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		FunctionPositionList_FunctionPosition(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
			, _position(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~FunctionPositionList_FunctionPosition()
		{
			OP_DELETE(_position);
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c position is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPosition() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 * 
		 * The object ID of the function which was specified in the input.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c position.
		 * 
		 * The position of a function object if available, typically native
		 * functions or objects which are not functions will not have a
		 * position set.
		 * The position contains the ID of the script and the line number in
		 * the script where it was defined.
		 */
		ES_ScopeDebugFrontend_MessageSet::Position * GetPosition() const
		{
			return _position;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 * 
		 * The object ID of the function which was specified in the input.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c position.
		 * 
		 * The position of a function object if available, typically native
		 * functions or objects which are not functions will not have a
		 * position set.
		 * The position contains the ID of the script and the line number in
		 * the script where it was defined.
		 */
		void SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		ES_ScopeDebugFrontend_MessageSet::Position * _position;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * If `type` is ... then ... is present:
	 *   "object", `objectValue`
	 *   "number", `value`
	 *   "string", `value`
	 *   "boolean", `value` (`"true"` or `"false"`)
	 * Otherwise (`"undefined"` or `"null"`), only `type` is present.
	 */
	class ObjectInfo_Property
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		ObjectInfo_Property(
			)
			: _objectValue(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString & type_arg,
			const OpString * value_arg = NULL
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_type.Set(type_arg));
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}
		~ObjectInfo_Property()
		{
			OP_DELETE(_objectValue);
		}

		// Checkers
		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c type.
		 * 
		 * One of:
		 * - `"number"`
		 * - `"boolean"`
		 * - `"string"`
		 * - `"null"`
		 * - `"undefined"`
		 * - `"object"`
		 * - `"script_getter"`               @since 6.7, value is undefined. The property has to be fetched by eval.
		 * - `"function_caller_or_argument"` @since 6.7, value is undefined. The property is a function argument or function caller.
		 */
		const OpString & GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c value.
		 * 
		 * Only present for `"number"`, `"string"` or `"boolean"`
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c objectValue.
		 * 
		 * Only present for `"object"`
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetObjectValue() const
		{
			return _objectValue;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 * 
		 * One of:
		 * - `"number"`
		 * - `"boolean"`
		 * - `"string"`
		 * - `"null"`
		 * - `"undefined"`
		 * - `"object"`
		 * - `"script_getter"`               @since 6.7, value is undefined. The property has to be fetched by eval.
		 * - `"function_caller_or_argument"` @since 6.7, value is undefined. The property is a function argument or function caller.
		 */
		OpString & GetTypeRef();

		/**
		 * Set the field @c type.
		 * 
		 * One of:
		 * - `"number"`
		 * - `"boolean"`
		 * - `"string"`
		 * - `"null"`
		 * - `"undefined"`
		 * - `"object"`
		 * - `"script_getter"`               @since 6.7, value is undefined. The property has to be fetched by eval.
		 * - `"function_caller_or_argument"` @since 6.7, value is undefined. The property is a function argument or function caller.
		 */
		OP_STATUS SetType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * Only present for `"number"`, `"string"` or `"boolean"`
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c objectValue.
		 * 
		 * Only present for `"object"`
		 */
		void SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpString _type;
		OpString _value;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _objectValue;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class NodeInfo_Attribute
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		NodeInfo_Attribute(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_prefix_arg,
			const OpString & name_arg,
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_namePrefix.Set(name_prefix_arg));
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_value.Set(value_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c namePrefix is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNamePrefix() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c namePrefix.
		 */
		const OpString & GetNamePrefix() const
		{
			return _namePrefix;
		}

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c namePrefix.
		 */
		OP_STATUS SetNamePrefix(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _namePrefix;
		OpString _name;
		OpString _value;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Colors are encoded as RGBA with 8 bits for each channel.
	 * encoded_color = ( red << 24 ) + ( green << 16 ) + ( blue << 8 ) + ( alpha )
	 * with red, green, blue and alpha in a range of 0 - 255
	 * e.g.:
	 * 
	 *     red     4278190335
	 *     green     16711935
	 *     blue         65535
	 *     yellow  4294902015
	 *     cyan      16777215
	 *     magenta 4278255615
	 */
	class SpotlightObject_SpotlightBox
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		SpotlightObject_SpotlightBox(
			UINT32 box_type_arg = 0
			)
			: _boxType(box_type_arg)
			, _fillColor(0)
			, _frameColor(0)
			, _gridColor(0)
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
		 * Check if the field @c boxType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBoxType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fillColor is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFillColor() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c frameColor is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameColor() const
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
		 * Get the field @c boxType.
		 * 
		 * Valid values:
		 *   0: dimension
		 *   1: padding
		 *   2: border
		 *   3: margin
		 */
		UINT32 GetBoxType() const
		{
			return _boxType;
		}

		/**
		 * Get the field @c fillColor.
		 */
		UINT32 GetFillColor() const
		{
			return _fillColor;
		}

		/**
		 * Get the field @c frameColor.
		 * 
		 * Drawn with 1px width inside the box
		 */
		UINT32 GetFrameColor() const
		{
			return _frameColor;
		}

		/**
		 * Get the field @c gridColor.
		 * 
		 * Drawn with 1px width inside the box over the whole document
		 */
		UINT32 GetGridColor() const
		{
			return _gridColor;
		}

		// Setters

		/**
		 * Set the field @c boxType.
		 * 
		 * Valid values:
		 *   0: dimension
		 *   1: padding
		 *   2: border
		 *   3: margin
		 */
		void SetBoxType(UINT32 v)
		{
			_boxType = v;
		}

		/**
		 * Set the field @c fillColor.
		 */
		void SetFillColor(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_fillColor = v;
		}

		/**
		 * Set the field @c frameColor.
		 * 
		 * Drawn with 1px width inside the box
		 */
		void SetFrameColor(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_frameColor = v;
		}

		/**
		 * Set the field @c gridColor.
		 * 
		 * Drawn with 1px width inside the box over the whole document
		 */
		void SetGridColor(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_gridColor = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _boxType;
		UINT32 _fillColor;
		UINT32 _frameColor;
		UINT32 _gridColor;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssStylesheetList_Stylesheet
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 9
		};
		// END: Internal enums


		CssStylesheetList_Stylesheet(
			UINT32 object_id_arg = 0,
			BOOL is_disabled_arg = FALSE
			)
			: _objectID(object_id_arg)
			, _isDisabled(is_disabled_arg)
			, _ownerNodeID(0)
			, _ownerRuleID(0)
			, _parentStylesheetID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & href_arg,
			const OpString & title_arg,
			const OpString & type_arg
			)
		{
			RETURN_IF_ERROR(_href.Set(href_arg));
			RETURN_IF_ERROR(_title.Set(title_arg));
			RETURN_IF_ERROR(_type.Set(type_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isDisabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsDisabled() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c href is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHref() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c title is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTitle() const
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
		 * Check if the field @c mediaList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMediaList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c ownerNodeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOwnerNodeID() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c ownerRuleID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOwnerRuleID() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c parentStylesheetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentStylesheetID() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c isDisabled.
		 */
		BOOL GetIsDisabled() const
		{
			return _isDisabled;
		}

		/**
		 * Get the field @c href.
		 */
		const OpString & GetHref() const
		{
			return _href;
		}

		/**
		 * Get the field @c title.
		 */
		const OpString & GetTitle() const
		{
			return _title;
		}

		/**
		 * Get the field @c type.
		 */
		const OpString & GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c mediaList.
		 */
		const OpAutoVector<OpString> & GetMediaList() const
		{
			return _mediaList;
		}

		/**
		 * Get the field @c ownerNodeID.
		 */
		UINT32 GetOwnerNodeID() const
		{
			return _ownerNodeID;
		}

		/**
		 * Get the field @c ownerRuleID.
		 */
		UINT32 GetOwnerRuleID() const
		{
			return _ownerRuleID;
		}

		/**
		 * Get the field @c parentStylesheetID.
		 */
		UINT32 GetParentStylesheetID() const
		{
			return _parentStylesheetID;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c isDisabled.
		 */
		void SetIsDisabled(BOOL v)
		{
			_isDisabled = v;
		}

		/**
		 * Set the field @c href.
		 */
		OP_STATUS SetHref(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c title.
		 */
		OP_STATUS SetTitle(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 */
		OP_STATUS SetType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c mediaList.
		 */
		OpAutoVector<OpString> & GetMediaListRef();

		/**
		 * Set the field @c ownerNodeID.
		 */
		void SetOwnerNodeID(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_ownerNodeID = v;
		}

		/**
		 * Set the field @c ownerRuleID.
		 */
		void SetOwnerRuleID(UINT32 v)
		{
			has_bits_.Reference().SetBit(7);
			_ownerRuleID = v;
		}

		/**
		 * Set the field @c parentStylesheetID.
		 */
		void SetParentStylesheetID(UINT32 v)
		{
			has_bits_.Reference().SetBit(8);
			_parentStylesheetID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		BOOL _isDisabled;
		OpString _href;
		OpString _title;
		OpString _type;
		OpAutoVector<OpString> _mediaList;
		UINT32 _ownerNodeID;
		UINT32 _ownerRuleID;
		UINT32 _parentStylesheetID;

		OpProtobufBitField<9> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * @since 6.9
	 */
	class ThreadMigration
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ThreadMigration(
			UINT32 thread_id_arg = 0,
			UINT32 from_runtime_id_arg = 0,
			UINT32 to_runtime_id_arg = 0
			)
			: _threadID(thread_id_arg)
			, _fromRuntimeID(from_runtime_id_arg)
			, _toRuntimeID(to_runtime_id_arg)
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
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fromRuntimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFromRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c toRuntimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasToRuntimeID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c threadID.
		 * 
		 * The ID of the thread that just migrated.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c fromRuntimeID.
		 * 
		 * The ID of the former runtime for this thread.
		 */
		UINT32 GetFromRuntimeID() const
		{
			return _fromRuntimeID;
		}

		/**
		 * Get the field @c toRuntimeID.
		 * 
		 * The ID of the new (and current) runtime of this thread.
		 */
		UINT32 GetToRuntimeID() const
		{
			return _toRuntimeID;
		}

		// Setters

		/**
		 * Set the field @c threadID.
		 * 
		 * The ID of the thread that just migrated.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c fromRuntimeID.
		 * 
		 * The ID of the former runtime for this thread.
		 */
		void SetFromRuntimeID(UINT32 v)
		{
			_fromRuntimeID = v;
		}

		/**
		 * Set the field @c toRuntimeID.
		 * 
		 * The ID of the new (and current) runtime of this thread.
		 */
		void SetToRuntimeID(UINT32 v)
		{
			_toRuntimeID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _threadID;
		UINT32 _fromRuntimeID;
		UINT32 _toRuntimeID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class FunctionCallCompletedInfo
	{
	public:
		// BEGIN: Nested items

		// Enum FunctionCallCompletedInfo.Result
		typedef FunctionCallCompletedInfo_Result Result;
		static const FunctionCallCompletedInfo_Result RESULT_SUCCESS = FunctionCallCompletedInfo_Result_RESULT_SUCCESS;
		static const FunctionCallCompletedInfo_Result RESULT_EXCEPTION = FunctionCallCompletedInfo_Result_RESULT_EXCEPTION;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		FunctionCallCompletedInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0,
			double time_arg = 0.0,
			FunctionCallCompletedInfo_Result result_arg = FunctionCallCompletedInfo_Result_RESULT_SUCCESS
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, _time(time_arg)
			, _result(result_arg)
			, _returnValue(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~FunctionCallCompletedInfo()
		{
			OP_DELETE(_returnValue);
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
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
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c returnValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReturnValue() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * Which runtime the call ocurred in.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since epoch, at the time the call completed.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c result.
		 */
		ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result GetResult() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result>(_result);
		}

		/**
		 * Get the field @c returnValue.
		 */
		ES_ScopeDebugFrontend_MessageSet::Value * GetReturnValue() const
		{
			return _returnValue;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * Which runtime the call ocurred in.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since epoch, at the time the call completed.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c result.
		 */
		void SetResult(ES_ScopeDebugFrontend_MessageSet::FunctionCallCompletedInfo_Result v);

		/**
		 * Set the field @c returnValue.
		 */
		void SetReturnValue(ES_ScopeDebugFrontend_MessageSet::Value * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		double _time;
		INT32 _result;
		ES_ScopeDebugFrontend_MessageSet::Value * _returnValue;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class ObjectValue
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		ObjectValue(
			UINT32 object_id_arg = 0,
			BOOL is_callable_arg = FALSE
			)
			: _objectID(object_id_arg)
			, _isCallable(is_callable_arg)
			, _prototypeID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & type_arg,
			const OpString * class_name_arg = NULL,
			const OpString * function_name_arg = NULL
			)
		{
			RETURN_IF_ERROR(_type.Set(type_arg));
			if (class_name_arg)
			{
				RETURN_IF_ERROR(_className.Set(*class_name_arg));
				has_bits_.Reference().SetBit(4);

			}
			if (function_name_arg)
			{
				RETURN_IF_ERROR(_functionName.Set(*function_name_arg));
				has_bits_.Reference().SetBit(5);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isCallable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsCallable() const
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
		 * Check if the field @c prototypeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPrototypeID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c className is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClassName() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c functionName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunctionName() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c isCallable.
		 */
		BOOL GetIsCallable() const
		{
			return _isCallable;
		}

		/**
		 * Get the field @c type.
		 * 
		 * type, function or object
		 */
		const OpString & GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c prototypeID.
		 */
		UINT32 GetPrototypeID() const
		{
			return _prototypeID;
		}

		/**
		 * Get the field @c className.
		 * 
		 * The class of the object.
		 */
		const OpString & GetClassName() const
		{
			return _className;
		}

		/**
		 * Get the field @c functionName.
		 * 
		 * If the object is a function, this is the name of
		 * the variable associated with that function (if any).
		 */
		const OpString & GetFunctionName() const
		{
			return _functionName;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c isCallable.
		 */
		void SetIsCallable(BOOL v)
		{
			_isCallable = v;
		}

		/**
		 * Set the field @c type.
		 * 
		 * type, function or object
		 */
		OP_STATUS SetType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c prototypeID.
		 */
		void SetPrototypeID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_prototypeID = v;
		}

		/**
		 * Set the field @c className.
		 * 
		 * The class of the object.
		 */
		OP_STATUS SetClassName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c functionName.
		 * 
		 * If the object is a function, this is the name of
		 * the variable associated with that function (if any).
		 */
		OP_STATUS SetFunctionName(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		BOOL _isCallable;
		OpString _type;
		UINT32 _prototypeID;
		OpString _className;
		OpString _functionName;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class FunctionCallStartingInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		FunctionCallStartingInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0,
			double time_arg = 0.0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, _time(time_arg)
			, _position(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~FunctionCallStartingInfo()
		{
			OP_DELETE(_position);
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
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
		 * Check if the field @c thisObject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThisObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c functionObject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunctionObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c argumentList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArgumentList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c position is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPosition() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * Which runtime the call ocurred in.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c time.
		 * 
		 * Milliseconds since epoch, at the time the call started.
		 */
		double GetTime() const
		{
			return _time;
		}

		/**
		 * Get the field @c thisObject.
		 */
		const ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetThisObject() const
		{
			return _thisObject;
		}

		/**
		 * Get the field @c functionObject.
		 */
		const ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetFunctionObject() const
		{
			return _functionObject;
		}

		/**
		 * Get the field @c argumentList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Value> & GetArgumentList() const
		{
			return _argumentList;
		}

		/**
		 * Get the field @c position.
		 * 
		 * The position where the call was made, or missing if
		 * the call did not come from a script.
		 */
		ES_ScopeDebugFrontend_MessageSet::Position * GetPosition() const
		{
			return _position;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * Which runtime the call ocurred in.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c time.
		 * 
		 * Milliseconds since epoch, at the time the call started.
		 */
		void SetTime(double v)
		{
			_time = v;
		}

		/**
		 * Set the field @c thisObject.
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetThisObjectRef();

		/**
		 * Set the field @c functionObject.
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetFunctionObjectRef();

		/**
		 * Set the field @c argumentList.
		 */
		ES_ScopeDebugFrontend_MessageSet::Value * AppendNewArgumentList();

		/**
		 * Set the field @c position.
		 * 
		 * The position where the call was made, or missing if
		 * the call did not come from a script.
		 */
		void SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		double _time;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue _thisObject;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue _functionObject;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::Value> _argumentList;
		ES_ScopeDebugFrontend_MessageSet::Position * _position;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	class FunctionFilter
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		FunctionFilter(
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
		 * Check if the field @c classList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClassList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c classList.
		 * 
		 * Match the function call if any of the class names appear in the
		 * prototype chain of a given 'this' object.
		 */
		const OpAutoVector<OpString> & GetClassList() const
		{
			return _classList;
		}

		// Setters

		/**
		 * Set the field @c classList.
		 * 
		 * Match the function call if any of the class names appear in the
		 * prototype chain of a given 'this' object.
		 */
		OpAutoVector<OpString> & GetClassListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _classList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * List of objects to release.
	 */
	class ReleaseObjectsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ReleaseObjectsArg(
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
		 * Check if the field @c objectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c objectList.
		 */
		const OpValueVector<UINT32> & GetObjectList() const
		{
			return _objectList;
		}

		// Setters

		/**
		 * Set the field @c objectList.
		 */
		OpValueVector<UINT32> & GetObjectListRef();

		/**
		 * Set the field @c objectList.
		 */
		OP_STATUS AppendToObjectList(UINT32 v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _objectList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Because we want different filters for different classes, a PropertyFilter consists
	 * of several ClassMasks, and one ClassMask consists of several PropertyMasks. A PropertyMask
	 * can be regarded as a 'rule' for filtering a property. If no rule is present, the property is
	 * allowed through the filter. If a matching rule is present, the property is not included.
	 */
	class PropertyFilter
	{
	public:
		// BEGIN: Nested items

		// Message PropertyFilter.ClassMask
		typedef PropertyFilter_ClassMask ClassMask;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		PropertyFilter(
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
		 * Check if the field @c classMaskList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasClassMaskList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c classMaskList.
		 * 
		 * The list of classes which should be filtered.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask> & GetClassMaskList() const
		{
			return _classMaskList;
		}

		// Setters

		/**
		 * Set the field @c classMaskList.
		 * 
		 * The list of classes which should be filtered.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask> & GetClassMaskListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PropertyFilter_ClassMask> _classMaskList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class SetPropertyFilterArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		SetPropertyFilterArg(
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
		 * Check if the field @c propertyFilter is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPropertyFilter() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c propertyFilter.
		 */
		const ES_ScopeDebugFrontend_MessageSet::PropertyFilter & GetPropertyFilter() const
		{
			return _propertyFilter;
		}

		// Setters

		/**
		 * Set the field @c propertyFilter.
		 */
		ES_ScopeDebugFrontend_MessageSet::PropertyFilter & GetPropertyFilterRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		ES_ScopeDebugFrontend_MessageSet::PropertyFilter _propertyFilter;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleProfileEndInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ConsoleProfileEndInfo(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleProfileInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ConsoleProfileInfo(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleTraceInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ConsoleTraceInfo(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c frameList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c frameList.
		 * 
		 * The list of stack frames at the level console.trace was called.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> & GetFrameList() const
		{
			return _frameList;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c frameList.
		 * 
		 * The list of stack frames at the level console.trace was called.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> & GetFrameListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> _frameList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleTimeEndInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ConsoleTimeEndInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 elapsed_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _elapsed(elapsed_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & title_arg
			)
		{
			RETURN_IF_ERROR(_title.Set(title_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c title is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTitle() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c elapsed is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasElapsed() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c title.
		 * 
		 * The title of the timer. See ConsoleTimeInfo.title.
		 */
		const OpString & GetTitle() const
		{
			return _title;
		}

		/**
		 * Get the field @c elapsed.
		 * 
		 * Elapsed time in microseconds.
		 */
		UINT32 GetElapsed() const
		{
			return _elapsed;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c title.
		 * 
		 * The title of the timer. See ConsoleTimeInfo.title.
		 */
		OP_STATUS SetTitle(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c elapsed.
		 * 
		 * Elapsed time in microseconds.
		 */
		void SetElapsed(UINT32 v)
		{
			_elapsed = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _title;
		UINT32 _elapsed;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleTimeInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ConsoleTimeInfo(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & title_arg
			)
		{
			RETURN_IF_ERROR(_title.Set(title_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c title is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTitle() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c title.
		 * 
		 * Timers are identified by a string passed as the first argument
		 * to the function. For instance, console.time("MyTimer").
		 */
		const OpString & GetTitle() const
		{
			return _title;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c title.
		 * 
		 * Timers are identified by a string passed as the first argument
		 * to the function. For instance, console.time("MyTimer").
		 */
		OP_STATUS SetTitle(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _title;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class ConsoleLogInfo
	{
	public:
		// BEGIN: Nested items

		// Message ConsoleLogInfo.Value
		typedef ConsoleLogInfo_Value Value;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		ConsoleLogInfo(
			UINT32 runtime_id_arg = 0,
			ConsoleLogType type_arg = CONSOLELOGTYPE_LOG
			)
			: _runtimeID(runtime_id_arg)
			, _type(type_arg)
			, _position(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~ConsoleLogInfo()
		{
			OP_DELETE(_position);
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
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
		 * Check if the field @c valueList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValueList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c position is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPosition() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c type.
		 * 
		 * This fields indicates which ``console.*`` function was called.
		 */
		ES_ScopeDebugFrontend_MessageSet::ConsoleLogType GetType() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::ConsoleLogType>(_type);
		}

		/**
		 * Get the field @c valueList.
		 * 
		 * The list of values passed to the function as arguments.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value> & GetValueList() const
		{
			return _valueList;
		}

		/**
		 * Get the field @c position.
		 * 
		 * The position the function was called.
		 */
		ES_ScopeDebugFrontend_MessageSet::Position * GetPosition() const
		{
			return _position;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c type.
		 * 
		 * This fields indicates which ``console.*`` function was called.
		 */
		void SetType(ES_ScopeDebugFrontend_MessageSet::ConsoleLogType v);

		/**
		 * Set the field @c valueList.
		 * 
		 * The list of values passed to the function as arguments.
		 */
		ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value * AppendNewValueList();

		/**
		 * Set the field @c position.
		 * 
		 * The position the function was called.
		 */
		void SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		INT32 _type;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ConsoleLogInfo_Value> _valueList;
		ES_ScopeDebugFrontend_MessageSet::Position * _position;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	class ReadyStateInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ReadyStateInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 state_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _state(state_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c state is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasState() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c state.
		 * 
		 * 1 - DOMContentLoaded
		 * 2 - Load
		 */
		UINT32 GetState() const
		{
			return _state;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c state.
		 * 
		 * 1 - DOMContentLoaded
		 * 2 - Load
		 */
		void SetState(UINT32 v)
		{
			_state = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _state;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssStylesheetSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		CssStylesheetSelection(
			UINT32 runtime_id_arg = 0,
			UINT32 stylesheet_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _stylesheetID(stylesheet_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c stylesheetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStylesheetID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c stylesheetID.
		 */
		UINT32 GetStylesheetID() const
		{
			return _stylesheetID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c stylesheetID.
		 */
		void SetStylesheetID(UINT32 v)
		{
			_stylesheetID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _stylesheetID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class EvalData
	{
	public:
		// BEGIN: Nested items

		// Message EvalData.Variable
		typedef EvalData_Variable Variable;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		EvalData(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0,
			UINT32 frame_index_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, _frameIndex(frame_index_arg)
			, _wantDebugging(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & script_data_arg
			)
		{
			RETURN_IF_ERROR(_scriptData.Set(script_data_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c frameIndex is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameIndex() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c variableList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariableList() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c wantDebugging is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWantDebugging() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 * 
		 * The ID of the thread to use for executing the script data, or 0
		 * to use the global scope.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c frameIndex.
		 */
		UINT32 GetFrameIndex() const
		{
			return _frameIndex;
		}

		/**
		 * Get the field @c scriptData.
		 * 
		 * Represents a script to be executed.
		 */
		const OpString & GetScriptData() const
		{
			return _scriptData;
		}

		/**
		 * Get the field @c variableList.
		 * 
		 * Represent variables to set.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData_Variable> & GetVariableList() const
		{
			return _variableList;
		}

		/**
		 * Get the field @c wantDebugging.
		 * 
		 * Enable debugging of current script eval. Defaults to false.
		 * @since 6.3
		 */
		BOOL GetWantDebugging() const
		{
			return _wantDebugging;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 * 
		 * The ID of the thread to use for executing the script data, or 0
		 * to use the global scope.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c frameIndex.
		 */
		void SetFrameIndex(UINT32 v)
		{
			_frameIndex = v;
		}

		/**
		 * Set the field @c scriptData.
		 * 
		 * Represents a script to be executed.
		 */
		OP_STATUS SetScriptData(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c variableList.
		 * 
		 * Represent variables to set.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData_Variable> & GetVariableListRef();

		/**
		 * Set the field @c wantDebugging.
		 * 
		 * Enable debugging of current script eval. Defaults to false.
		 * @since 6.3
		 */
		void SetWantDebugging(BOOL v)
		{
			has_bits_.Reference().SetBit(5);
			_wantDebugging = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		UINT32 _frameIndex;
		OpString _scriptData;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EvalData_Variable> _variableList;
		BOOL _wantDebugging;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssStylesheetRules
	{
	public:
		// BEGIN: Nested items

		// Message CssStylesheetRules.StylesheetRule
		typedef CssStylesheetRules_StylesheetRule StylesheetRule;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CssStylesheetRules(
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
		 * Check if the field @c ruleList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuleList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c ruleList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> & GetRuleList() const
		{
			return _ruleList;
		}

		// Setters

		/**
		 * Set the field @c ruleList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> & GetRuleListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetRules_StylesheetRule> _ruleList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * To highlight elements in the document
	 */
	class SpotlightSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		SpotlightSelection(
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
		 * Check if the field @c spotlightObjectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSpotlightObjectList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c spotlightObjectList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject> & GetSpotlightObjectList() const
		{
			return _spotlightObjectList;
		}

		// Setters

		/**
		 * Set the field @c spotlightObjectList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject> & GetSpotlightObjectListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject> _spotlightObjectList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class BreakSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		BreakSelection(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Argument to SearchDom command.
	 * 
	 * @since 6.5
	 */
	class SearchDomArg
	{
	public:
		// BEGIN: Nested items

		// Enum SearchDomArg.Type
		typedef SearchDomArg_Type Type;
		static const SearchDomArg_Type TYPE_PLAIN_TEXT = SearchDomArg_Type_TYPE_PLAIN_TEXT;
		static const SearchDomArg_Type TYPE_REGEXP = SearchDomArg_Type_TYPE_REGEXP;
		static const SearchDomArg_Type TYPE_XPATH = SearchDomArg_Type_TYPE_XPATH;
		static const SearchDomArg_Type TYPE_SELECTOR = SearchDomArg_Type_TYPE_SELECTOR;
		static const SearchDomArg_Type TYPE_EVENT = SearchDomArg_Type_TYPE_EVENT;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		SearchDomArg(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _type(SearchDomArg_Type_TYPE_PLAIN_TEXT)
			, _objectID(0)
			, _ignoreCase(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & query_arg
			)
		{
			RETURN_IF_ERROR(_query.Set(query_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c query is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasQuery() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c ignoreCase is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIgnoreCase() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * Search the DOM of this runtime.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c query.
		 * 
		 * The string to search for.
		 */
		const OpString & GetQuery() const
		{
			return _query;
		}

		/**
		 * Get the field @c type.
		 */
		ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type GetType() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type>(_type);
		}

		/**
		 * Get the field @c objectID.
		 * 
		 * If present, search only the subtree of this node.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c ignoreCase.
		 * 
		 * Set to TRUE to ignore case (REGEXP and PLAIN_TEXT only). If set to
		 * FALSE, which is the default, case will be respected.
		 */
		BOOL GetIgnoreCase() const
		{
			return _ignoreCase;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * Search the DOM of this runtime.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c query.
		 * 
		 * The string to search for.
		 */
		OP_STATUS SetQuery(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 */
		void SetType(ES_ScopeDebugFrontend_MessageSet::SearchDomArg_Type v);

		/**
		 * Set the field @c objectID.
		 * 
		 * If present, search only the subtree of this node.
		 */
		void SetObjectID(UINT32 v)
		{
			has_bits_.Reference().SetBit(3);
			_objectID = v;
		}

		/**
		 * Set the field @c ignoreCase.
		 * 
		 * Set to TRUE to ignore case (REGEXP and PLAIN_TEXT only). If set to
		 * FALSE, which is the default, case will be respected.
		 */
		void SetIgnoreCase(BOOL v)
		{
			has_bits_.Reference().SetBit(4);
			_ignoreCase = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _query;
		INT32 _type;
		UINT32 _objectID;
		BOOL _ignoreCase;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class DomTraversal
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		DomTraversal(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & traversal_arg
			)
		{
			RETURN_IF_ERROR(_traversal.Set(traversal_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c traversal is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTraversal() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c traversal.
		 * 
		 * traversal on off:
		 * - `"parent-node-chain-with-children"`
		 *     take the parent node chain for the target node.
		 *     add for each node in that chain all children,
		 *     and for all children there first child,
		 *     if that is a text node and the only node,
		 *     starting with the document node.
		 * - `"children"`
		 *     get node data for all children in their flow
		 * - `"node"
		 *     get node data for that node
		 * - `"subtree"`
		 *     get node data for the subtree in the flow of it
		 */
		const OpString & GetTraversal() const
		{
			return _traversal;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c traversal.
		 * 
		 * traversal on off:
		 * - `"parent-node-chain-with-children"`
		 *     take the parent node chain for the target node.
		 *     add for each node in that chain all children,
		 *     and for all children there first child,
		 *     if that is a text node and the only node,
		 *     starting with the document node.
		 * - `"children"`
		 *     get node data for all children in their flow
		 * - `"node"
		 *     get node data for that node
		 * - `"subtree"`
		 *     get node data for the subtree in the flow of it
		 */
		OP_STATUS SetTraversal(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		OpString _traversal;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class SpotlightObjectSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		SpotlightObjectSelection(
			UINT32 object_id_arg = 0,
			BOOL scroll_into_view_arg = FALSE
			)
			: _objectID(object_id_arg)
			, _scrollIntoView(scroll_into_view_arg)
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
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scrollIntoView is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScrollIntoView() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 * 
		 * Using `0` clears the spotlight.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c scrollIntoView.
		 * 
		 * Chooses whether the given object should be scrolled into view or not.
		 */
		BOOL GetScrollIntoView() const
		{
			return _scrollIntoView;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 * 
		 * Using `0` clears the spotlight.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c scrollIntoView.
		 * 
		 * Chooses whether the given object should be scrolled into view or not.
		 */
		void SetScrollIntoView(BOOL v)
		{
			_scrollIntoView = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		BOOL _scrollIntoView;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RuntimeList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RuntimeList(
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
		 * Check if the field @c runtimeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c runtimeList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeInfo> & GetRuntimeList() const
		{
			return _runtimeList;
		}

		// Setters

		/**
		 * Set the field @c runtimeList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeInfo> & GetRuntimeListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::RuntimeInfo> _runtimeList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class EvalResult
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		EvalResult(
			)
			: _objectValue(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & status_arg,
			const OpString & type_arg,
			const OpString * value_arg = NULL
			)
		{
			RETURN_IF_ERROR(_status.Set(status_arg));
			RETURN_IF_ERROR(_type.Set(type_arg));
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}
		~EvalResult()
		{
			OP_DELETE(_objectValue);
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

		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c status.
		 * 
		 * If it is "completed" or "unhandled-exception" then `type`, `value` and `objectValue` will be present.
		 */
		const OpString & GetStatus() const
		{
			return _status;
		}

		/**
		 * Get the field @c type.
		 * 
		 * One of:
		 * - `"number"`
		 * - `"boolean"`
		 * - `"string"`
		 * - `"null"`
		 * - `"undefined"`
		 * - `"object"`
		 */
		const OpString & GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c value.
		 * 
		 * Only present when `type` is `"number"`, `"string"` or `"boolean"`
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c objectValue.
		 * 
		 * Only present when `type` is `"object"`
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetObjectValue() const
		{
			return _objectValue;
		}

		// Setters

		/**
		 * Set the field @c status.
		 * 
		 * If it is "completed" or "unhandled-exception" then `type`, `value` and `objectValue` will be present.
		 */
		OP_STATUS SetStatus(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 * 
		 * One of:
		 * - `"number"`
		 * - `"boolean"`
		 * - `"string"`
		 * - `"null"`
		 * - `"undefined"`
		 * - `"object"`
		 */
		OpString & GetTypeRef();

		/**
		 * Set the field @c type.
		 * 
		 * One of:
		 * - `"number"`
		 * - `"boolean"`
		 * - `"string"`
		 * - `"null"`
		 * - `"undefined"`
		 * - `"object"`
		 */
		OP_STATUS SetType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * Only present when `type` is `"number"`, `"string"` or `"boolean"`
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c objectValue.
		 * 
		 * Only present when `type` is `"object"`
		 */
		void SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _status;
		OpString _type;
		OpString _value;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _objectValue;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Add an event handler. This will generate a HANDLE-EVENT event every time the XML event defined by the pair (NAMESPACE, EVENT-TYPE) reaches the object defined by OBJECT-ID in the capturing phase. XML events are defined in http://www.w3.org/TR/xml-events
	 */
	class EventHandler
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		EventHandler(
			UINT32 handler_id_arg = 0,
			UINT32 object_id_arg = 0,
			BOOL prevent_default_handler_arg = FALSE,
			BOOL stop_propagation_arg = FALSE
			)
			: _handlerID(handler_id_arg)
			, _objectID(object_id_arg)
			, _preventDefaultHandler(prevent_default_handler_arg)
			, _stopPropagation(stop_propagation_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & namespace_arg,
			const OpString & event_type_arg
			)
		{
			RETURN_IF_ERROR(_namespace.Set(namespace_arg));
			RETURN_IF_ERROR(_eventType.Set(event_type_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c handlerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHandlerID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c namespace is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNamespace() const
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
		 * Check if the field @c preventDefaultHandler is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPreventDefaultHandler() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c stopPropagation is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopPropagation() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c handlerID.
		 * 
		 * A nonzero ID chosen by the client. The host may also use this ID to refer to the
		 * event handler.
		 */
		UINT32 GetHandlerID() const
		{
			return _handlerID;
		}

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c namespace.
		 * 
		 * Namespace of the event. If empty, it will match any namespace.
		 */
		const OpString & GetNamespace() const
		{
			return _namespace;
		}

		/**
		 * Get the field @c eventType.
		 */
		const OpString & GetEventType() const
		{
			return _eventType;
		}

		/**
		 * Get the field @c preventDefaultHandler.
		 * 
		 * If `true` it prevents the default event handler from running.
		 */
		BOOL GetPreventDefaultHandler() const
		{
			return _preventDefaultHandler;
		}

		/**
		 * Get the field @c stopPropagation.
		 * 
		 * If `true` it stops propagation of the event beyond this `objectID` (it will however run for all handlers on the object).
		 */
		BOOL GetStopPropagation() const
		{
			return _stopPropagation;
		}

		// Setters

		/**
		 * Set the field @c handlerID.
		 * 
		 * A nonzero ID chosen by the client. The host may also use this ID to refer to the
		 * event handler.
		 */
		void SetHandlerID(UINT32 v)
		{
			_handlerID = v;
		}

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c namespace.
		 * 
		 * Namespace of the event. If empty, it will match any namespace.
		 */
		OP_STATUS SetNamespace(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c eventType.
		 */
		OP_STATUS SetEventType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c preventDefaultHandler.
		 * 
		 * If `true` it prevents the default event handler from running.
		 */
		void SetPreventDefaultHandler(BOOL v)
		{
			_preventDefaultHandler = v;
		}

		/**
		 * Set the field @c stopPropagation.
		 * 
		 * If `true` it stops propagation of the event beyond this `objectID` (it will however run for all handlers on the object).
		 */
		void SetStopPropagation(BOOL v)
		{
			_stopPropagation = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _handlerID;
		UINT32 _objectID;
		OpString _namespace;
		OpString _eventType;
		BOOL _preventDefaultHandler;
		BOOL _stopPropagation;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class ObjectChainList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ObjectChainList(
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
		 * Check if the field @c objectChainList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectChainList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c objectChainList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectList> & GetObjectChainList() const
		{
			return _objectChainList;
		}

		// Setters

		/**
		 * Set the field @c objectChainList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectList> & GetObjectChainListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectList> _objectChainList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ObjectList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		ObjectList(
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
		 * Check if the field @c objectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c objectList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo> & GetObjectList() const
		{
			return _objectList;
		}

		// Setters

		/**
		 * Set the field @c objectList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo> & GetObjectListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo> _objectList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ThreadMode
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ThreadMode(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & mode_arg
			)
		{
			RETURN_IF_ERROR(_mode.Set(mode_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c mode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMode() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c mode.
		 * 
		 * One of:
		 * - `"run"`
		 * - `"step-into-call"`
		 * - `"step-next-line"`
		 * - `"step-out-of-call"`
		 */
		const OpString & GetMode() const
		{
			return _mode;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c mode.
		 * 
		 * One of:
		 * - `"run"`
		 * - `"step-into-call"`
		 * - `"step-next-line"`
		 * - `"step-out-of-call"`
		 */
		OP_STATUS SetMode(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		OpString _mode;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class ScriptInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		ScriptInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 script_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _scriptID(script_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & script_type_arg,
			const OpString & script_data_arg,
			const OpString * uri_arg = NULL
			)
		{
			RETURN_IF_ERROR(_scriptType.Set(script_type_arg));
			RETURN_IF_ERROR(_scriptData.Set(script_data_arg));
			if (uri_arg)
			{
				RETURN_IF_ERROR(_uri.Set(*uri_arg));
				has_bits_.Reference().SetBit(4);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptData() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c uri is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUri() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c scriptID.
		 */
		UINT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c scriptType.
		 * 
		 * One of:
		 * - `"linked"`
		 * - `"inline"`
		 * - `"event handler"`
		 * - `"timeout"`
		 * - `"generated"`
		 * - `"eval"`
		 * - `"uri"`
		 * - `"User JS"`
		 * - `"Greasemonkey JS"`
		 * - `"Browser JS"`
		 * - `"Extension JS"`
		 * - `"unknown"`
		 */
		const OpString & GetScriptType() const
		{
			return _scriptType;
		}

		/**
		 * Get the field @c scriptData.
		 */
		const OpString & GetScriptData() const
		{
			return _scriptData;
		}

		/**
		 * Get the field @c uri.
		 * 
		 * present if `scriptType` is Linked
		 */
		const OpString & GetUri() const
		{
			return _uri;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c scriptID.
		 */
		void SetScriptID(UINT32 v)
		{
			_scriptID = v;
		}

		/**
		 * Set the field @c scriptType.
		 * 
		 * One of:
		 * - `"linked"`
		 * - `"inline"`
		 * - `"event handler"`
		 * - `"timeout"`
		 * - `"generated"`
		 * - `"eval"`
		 * - `"uri"`
		 * - `"User JS"`
		 * - `"Greasemonkey JS"`
		 * - `"Browser JS"`
		 * - `"Extension JS"`
		 * - `"unknown"`
		 */
		OP_STATUS SetScriptType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c scriptData.
		 */
		OP_STATUS SetScriptData(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c uri.
		 * 
		 * present if `scriptType` is Linked
		 */
		OP_STATUS SetUri(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _scriptID;
		OpString _scriptType;
		OpString _scriptData;
		OpString _uri;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class ObjectSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ObjectSelection(
			UINT32 object_id_arg = 0,
			UINT32 window_id_arg = 0
			)
			: _objectID(object_id_arg)
			, _windowID(window_id_arg)
			, _runtimeID(0)
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
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
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

		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c windowID.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c windowID.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_runtimeID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		UINT32 _windowID;
		UINT32 _runtimeID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class ThreadStopInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 7
		};
		// END: Internal enums


		ThreadStopInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0,
			UINT32 script_id_arg = 0,
			UINT32 line_number_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, _scriptID(script_id_arg)
			, _lineNumber(line_number_arg)
			, _breakpointID(0)
			, _exceptionValue(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & stopped_reason_arg
			)
		{
			RETURN_IF_ERROR(_stoppedReason.Set(stopped_reason_arg));
			return OpStatus::OK;
		}
		~ThreadStopInfo()
		{
			OP_DELETE(_exceptionValue);
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c stoppedReason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStoppedReason() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c breakpointID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBreakpointID() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c exceptionValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExceptionValue() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c scriptID.
		 */
		UINT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c lineNumber.
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		/**
		 * Get the field @c stoppedReason.
		 * 
		 * One of:
		 * - `"new script"`, when we're on the first statement of a new script.
		 * - `"exception"`, when custom exception was thrown.
		 * - `"error"`, when an exception ocurred.
		 * - `"handled error"`, when an exception that was caught ocurred.
		 * - `"abort"`, when the thread was aborted.
		 * - `"gc"`, when garbage collection occurs.
		 * - `"broken"`, when the `Break` command is used.
		 * - `"debugger statement"`, when a debugger-statement is encountered.
		 * - `"breakpoint"`, when a breakpoint is hit.
		 * - `"step"`, when the 'ContinueThread' command is used.
		 */
		const OpString & GetStoppedReason() const
		{
			return _stoppedReason;
		}

		/**
		 * Get the field @c breakpointID.
		 * 
		 * Present if and only if `stoppedReason` is `"breakpoint"`
		 */
		UINT32 GetBreakpointID() const
		{
			return _breakpointID;
		}

		/**
		 * Get the field @c exceptionValue.
		 * 
		 * If the stopped reason is "exception" or "error", this field will contain
		 * the thrown value.
		 * 
		 * @since 6.8
		 */
		ES_ScopeDebugFrontend_MessageSet::Value * GetExceptionValue() const
		{
			return _exceptionValue;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c scriptID.
		 */
		void SetScriptID(UINT32 v)
		{
			_scriptID = v;
		}

		/**
		 * Set the field @c lineNumber.
		 */
		void SetLineNumber(UINT32 v)
		{
			_lineNumber = v;
		}

		/**
		 * Set the field @c stoppedReason.
		 * 
		 * One of:
		 * - `"new script"`, when we're on the first statement of a new script.
		 * - `"exception"`, when custom exception was thrown.
		 * - `"error"`, when an exception ocurred.
		 * - `"handled error"`, when an exception that was caught ocurred.
		 * - `"abort"`, when the thread was aborted.
		 * - `"gc"`, when garbage collection occurs.
		 * - `"broken"`, when the `Break` command is used.
		 * - `"debugger statement"`, when a debugger-statement is encountered.
		 * - `"breakpoint"`, when a breakpoint is hit.
		 * - `"step"`, when the 'ContinueThread' command is used.
		 */
		OP_STATUS SetStoppedReason(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c breakpointID.
		 * 
		 * Present if and only if `stoppedReason` is `"breakpoint"`
		 */
		void SetBreakpointID(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_breakpointID = v;
		}

		/**
		 * Set the field @c exceptionValue.
		 * 
		 * If the stopped reason is "exception" or "error", this field will contain
		 * the thrown value.
		 * 
		 * @since 6.8
		 */
		void SetExceptionValue(ES_ScopeDebugFrontend_MessageSet::Value * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		UINT32 _scriptID;
		UINT32 _lineNumber;
		OpString _stoppedReason;
		UINT32 _breakpointID;
		ES_ScopeDebugFrontend_MessageSet::Value * _exceptionValue;

		OpProtobufBitField<7> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssIndexMap
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CssIndexMap(
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
		 * Check if the field @c nameList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNameList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c nameList.
		 */
		const OpAutoVector<OpString> & GetNameList() const
		{
			return _nameList;
		}

		// Setters

		/**
		 * Set the field @c nameList.
		 */
		OpAutoVector<OpString> & GetNameListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _nameList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssStyleDeclarations
	{
	public:
		// BEGIN: Nested items

		// Message CssStyleDeclarations.NodeStyle
		typedef CssStyleDeclarations_NodeStyle NodeStyle;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		CssStyleDeclarations(
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
		 * Check if the field @c computedStyleList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasComputedStyleList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c nodeStyleList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNodeStyleList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c computedStyleList.
		 */
		const OpAutoVector<OpString> & GetComputedStyleList() const
		{
			return _computedStyleList;
		}

		/**
		 * Get the field @c nodeStyleList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle> & GetNodeStyleList() const
		{
			return _nodeStyleList;
		}

		// Setters

		/**
		 * Set the field @c computedStyleList.
		 */
		OpAutoVector<OpString> & GetComputedStyleListRef();

		/**
		 * Set the field @c nodeStyleList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle> & GetNodeStyleListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _computedStyleList;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStyleDeclarations_NodeStyle> _nodeStyleList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class EventBreakpoint
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		EventBreakpoint(
			UINT32 breakpoint_id_arg = 0
			)
			: _breakpointID(breakpoint_id_arg)
			, _windowID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & event_type_arg
			)
		{
			RETURN_IF_ERROR(_eventType.Set(event_type_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c breakpointID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBreakpointID() const
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
		 * Check if the field @c windowID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowID() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c breakpointID.
		 * 
		 * A nonzero ID chosen by the client.
		 */
		UINT32 GetBreakpointID() const
		{
			return _breakpointID;
		}

		/**
		 * Get the field @c eventType.
		 * 
		 * The name of the event to break on.
		 */
		const OpString & GetEventType() const
		{
			return _eventType;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * If specified the event will only break in this specific window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		// Setters

		/**
		 * Set the field @c breakpointID.
		 * 
		 * A nonzero ID chosen by the client.
		 */
		void SetBreakpointID(UINT32 v)
		{
			_breakpointID = v;
		}

		/**
		 * Set the field @c eventType.
		 * 
		 * The name of the event to break on.
		 */
		OP_STATUS SetEventType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c windowID.
		 * 
		 * If specified the event will only break in this specific window.
		 */
		void SetWindowID(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_windowID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _breakpointID;
		OpString _eventType;
		UINT32 _windowID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class Breakpoint
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Breakpoint(
			UINT32 breakpoint_id_arg = 0,
			UINT32 script_id_arg = 0,
			UINT32 line_number_arg = 0
			)
			: _breakpointID(breakpoint_id_arg)
			, _scriptID(script_id_arg)
			, _lineNumber(line_number_arg)
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
		 * Check if the field @c breakpointID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBreakpointID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c breakpointID.
		 * 
		 * A nonzero ID chosen by the client.
		 */
		UINT32 GetBreakpointID() const
		{
			return _breakpointID;
		}

		/**
		 * Get the field @c scriptID.
		 * 
		 * ID of script where the breakpoint should be set.
		 */
		UINT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c lineNumber.
		 * 
		 * Line number to break on in script.
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		// Setters

		/**
		 * Set the field @c breakpointID.
		 * 
		 * A nonzero ID chosen by the client.
		 */
		void SetBreakpointID(UINT32 v)
		{
			_breakpointID = v;
		}

		/**
		 * Set the field @c scriptID.
		 * 
		 * ID of script where the breakpoint should be set.
		 */
		void SetScriptID(UINT32 v)
		{
			_scriptID = v;
		}

		/**
		 * Set the field @c lineNumber.
		 * 
		 * Line number to break on in script.
		 */
		void SetLineNumber(UINT32 v)
		{
			_lineNumber = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _breakpointID;
		UINT32 _scriptID;
		UINT32 _lineNumber;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class Configuration
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 9
		};
		// END: Internal enums


		Configuration(
			)
			: _stopAtScript(TRUE)
			, _stopAtException(FALSE)
			, _stopAtError(FALSE)
			, _stopAtAbort(FALSE)
			, _stopAtGc(FALSE)
			, _stopAtDebuggerStatement(FALSE)
			, _reformatScriptData(FALSE)
			, _stopAtCaughtError(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * reformat_condition_function_arg = NULL
			)
		{
			if (reformat_condition_function_arg)
			{
				RETURN_IF_ERROR(_reformatConditionFunction.Set(*reformat_condition_function_arg));
				has_bits_.Reference().SetBit(7);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c stopAtScript is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtScript() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c stopAtException is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtException() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c stopAtError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtError() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c stopAtAbort is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtAbort() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c stopAtGc is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtGc() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c stopAtDebuggerStatement is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtDebuggerStatement() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c reformatScriptData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReformatScriptData() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c reformatConditionFunction is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReformatConditionFunction() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c stopAtCaughtError is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStopAtCaughtError() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		// Getters

		/**
		 * Get the field @c stopAtScript.
		 * 
		 * Stop when new script is reported.
		 */
		BOOL GetStopAtScript() const
		{
			return _stopAtScript;
		}

		/**
		 * Get the field @c stopAtException.
		 * 
		 * Stop when script throws exception manually (throw statement).
		 */
		BOOL GetStopAtException() const
		{
			return _stopAtException;
		}

		/**
		 * Get the field @c stopAtError.
		 * 
		 * Stop on uncaught errors in the scripts. To stop on caught exceptions,
		 * enable stopAtCaughtError also.
		 */
		BOOL GetStopAtError() const
		{
			return _stopAtError;
		}

		/**
		 * Get the field @c stopAtAbort.
		 * 
		 * Stop on script abort (popup blocker, stack overflow...).
		 */
		BOOL GetStopAtAbort() const
		{
			return _stopAtAbort;
		}

		/**
		 * Get the field @c stopAtGc.
		 * 
		 * Stop after garbage collection. DEPRECATED.
		 */
		BOOL GetStopAtGc() const
		{
			return _stopAtGc;
		}

		/**
		 * Get the field @c stopAtDebuggerStatement.
		 * 
		 * Stop on 'debugger' statement.
		 */
		BOOL GetStopAtDebuggerStatement() const
		{
			return _stopAtDebuggerStatement;
		}

		/**
		 * Get the field @c reformatScriptData.
		 * 
		 * If set, the source of the scripts/eval'ed code/event-handlers will be
		 * reformatted before being parsed and compiled.
		 * 
		 * @since 6.13
		 */
		BOOL GetReformatScriptData() const
		{
			return _reformatScriptData;
		}

		/**
		 * Get the field @c reformatConditionFunction.
		 * 
		 * The body of the function used to determine whether code should be
		 * reformatted.
		 * 
		 * If both reformatScriptData is enabled and reformatConditionFunction set,
		 * reformatting will only be performed if provided function code evaluates
		 * to a boolean 'true' value.
		 * 
		 * The original script source is available through a scriptData
		 * variable that is accessible in the scope of the function.
		 * 
		 * @since 6.13
		 */
		const OpString & GetReformatConditionFunction() const
		{
			return _reformatConditionFunction;
		}

		/**
		 * Get the field @c stopAtCaughtError.
		 * 
		 * Stop on caught exceptions. stopOnError must be enabled for this
		 * setting to have any effect.
		 * 
		 * @since 6.15
		 */
		BOOL GetStopAtCaughtError() const
		{
			return _stopAtCaughtError;
		}

		// Setters

		/**
		 * Set the field @c stopAtScript.
		 * 
		 * Stop when new script is reported.
		 */
		void SetStopAtScript(BOOL v)
		{
			has_bits_.Reference().SetBit(0);
			_stopAtScript = v;
		}

		/**
		 * Set the field @c stopAtException.
		 * 
		 * Stop when script throws exception manually (throw statement).
		 */
		void SetStopAtException(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_stopAtException = v;
		}

		/**
		 * Set the field @c stopAtError.
		 * 
		 * Stop on uncaught errors in the scripts. To stop on caught exceptions,
		 * enable stopAtCaughtError also.
		 */
		void SetStopAtError(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_stopAtError = v;
		}

		/**
		 * Set the field @c stopAtAbort.
		 * 
		 * Stop on script abort (popup blocker, stack overflow...).
		 */
		void SetStopAtAbort(BOOL v)
		{
			has_bits_.Reference().SetBit(3);
			_stopAtAbort = v;
		}

		/**
		 * Set the field @c stopAtGc.
		 * 
		 * Stop after garbage collection. DEPRECATED.
		 */
		void SetStopAtGc(BOOL v)
		{
			has_bits_.Reference().SetBit(4);
			_stopAtGc = v;
		}

		/**
		 * Set the field @c stopAtDebuggerStatement.
		 * 
		 * Stop on 'debugger' statement.
		 */
		void SetStopAtDebuggerStatement(BOOL v)
		{
			has_bits_.Reference().SetBit(5);
			_stopAtDebuggerStatement = v;
		}

		/**
		 * Set the field @c reformatScriptData.
		 * 
		 * If set, the source of the scripts/eval'ed code/event-handlers will be
		 * reformatted before being parsed and compiled.
		 * 
		 * @since 6.13
		 */
		void SetReformatScriptData(BOOL v)
		{
			has_bits_.Reference().SetBit(6);
			_reformatScriptData = v;
		}

		/**
		 * Set the field @c reformatConditionFunction.
		 * 
		 * The body of the function used to determine whether code should be
		 * reformatted.
		 * 
		 * If both reformatScriptData is enabled and reformatConditionFunction set,
		 * reformatting will only be performed if provided function code evaluates
		 * to a boolean 'true' value.
		 * 
		 * The original script source is available through a scriptData
		 * variable that is accessible in the scope of the function.
		 * 
		 * @since 6.13
		 */
		OP_STATUS SetReformatConditionFunction(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c stopAtCaughtError.
		 * 
		 * Stop on caught exceptions. stopOnError must be enabled for this
		 * setting to have any effect.
		 * 
		 * @since 6.15
		 */
		void SetStopAtCaughtError(BOOL v)
		{
			has_bits_.Reference().SetBit(8);
			_stopAtCaughtError = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _stopAtScript;
		BOOL _stopAtException;
		BOOL _stopAtError;
		BOOL _stopAtAbort;
		BOOL _stopAtGc;
		BOOL _stopAtDebuggerStatement;
		BOOL _reformatScriptData;
		OpString _reformatConditionFunction;
		BOOL _stopAtCaughtError;

		OpProtobufBitField<9> has_bits_;
		mutable int                 encoded_size_;
	};


	class DomParseError
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		DomParseError(
			UINT32 runtime_id_arg = 0,
			UINT32 script_id_arg = 0,
			UINT32 line_number_arg = 0,
			UINT32 offset_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _scriptID(script_id_arg)
			, _lineNumber(line_number_arg)
			, _offset(offset_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & context_arg,
			const OpString & description_arg
			)
		{
			RETURN_IF_ERROR(_context.Set(context_arg));
			RETURN_IF_ERROR(_description.Set(description_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c offset is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOffset() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c context is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContext() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c scriptID.
		 */
		UINT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c lineNumber.
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		/**
		 * Get the field @c offset.
		 * 
		 * Represents the character offset in the script where the parse error occured.
		 */
		UINT32 GetOffset() const
		{
			return _offset;
		}

		/**
		 * Get the field @c context.
		 * 
		 * Describes in what context the error occured.
		 */
		const OpString & GetContext() const
		{
			return _context;
		}

		/**
		 * Get the field @c description.
		 * 
		 * Contains the human-readable description of the parse error.
		 */
		const OpString & GetDescription() const
		{
			return _description;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c scriptID.
		 */
		void SetScriptID(UINT32 v)
		{
			_scriptID = v;
		}

		/**
		 * Set the field @c lineNumber.
		 */
		void SetLineNumber(UINT32 v)
		{
			_lineNumber = v;
		}

		/**
		 * Set the field @c offset.
		 * 
		 * Represents the character offset in the script where the parse error occured.
		 */
		void SetOffset(UINT32 v)
		{
			_offset = v;
		}

		/**
		 * Set the field @c context.
		 * 
		 * Describes in what context the error occured.
		 */
		OP_STATUS SetContext(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c description.
		 * 
		 * Contains the human-readable description of the parse error.
		 */
		OP_STATUS SetDescription(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _scriptID;
		UINT32 _lineNumber;
		UINT32 _offset;
		OpString _context;
		OpString _description;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains a list of event targets and their event listeners.
	 * 
	 * @since 6.11
	 */
	class EventTargets
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EventTargets(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c targetList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasTargetList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c targetList.
		 * 
		 * List of event targets that was fetched. The list will also
		 * contain event targets for objects that does not implement the
		 * EventTarget DOM interface but the listener list will be unset.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventTarget> & GetTargetList() const
		{
			return _targetList;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c targetList.
		 * 
		 * List of event targets that was fetched. The list will also
		 * contain event targets for objects that does not implement the
		 * EventTarget DOM interface but the listener list will be unset.
		 */
		ES_ScopeDebugFrontend_MessageSet::EventTarget * AppendNewTargetList();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventTarget> _targetList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Represents the EventTarget DOM interface found on DOM nodes and objects.
	 * This message will also be used for objects that does not support
	 * EventTarget, in those cases only the objectID will be set.
	 * 
	 * Details on the EventTarget interface:
	 * http://www.w3.org/TR/DOM-Level-2-Events/events.html#Events-EventTarget
	 * 
	 * @since 6.11
	 */
	class EventTarget
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		EventTarget(
			UINT32 object_id_arg = 0
			)
			: _objectID(object_id_arg)
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
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c eventListenerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventListenerList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 * 
		 * The ID of the object which has the event target.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c eventListenerList.
		 * 
		 * List of event listeners registered on this event target.
		 * If the object does not implement the EventTarget DOM interface then
		 * the field will not be set.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventListener> & GetEventListenerList() const
		{
			return _eventListenerList;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 * 
		 * The ID of the object which has the event target.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c eventListenerList.
		 * 
		 * List of event listeners registered on this event target.
		 * If the object does not implement the EventTarget DOM interface then
		 * the field will not be set.
		 */
		ES_ScopeDebugFrontend_MessageSet::EventListener * AppendNewEventListenerList();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventListener> _eventListenerList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Arguments for the GetEventListeners command.
	 * 
	 * @since 6.11
	 */
	class GetEventListenersArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetEventListenersArg(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectList.
		 * 
		 * List of object IDs to fetch event listeners from, the object must have
		 * implemented the EventTarget DOM interface to be able to get the
		 * registered listeners, otherwise the event listener will be unset in the
		 * response.
		 */
		const OpValueVector<UINT32> & GetObjectList() const
		{
			return _objectList;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectList.
		 * 
		 * List of object IDs to fetch event listeners from, the object must have
		 * implemented the EventTarget DOM interface to be able to get the
		 * registered listeners, otherwise the event listener will be unset in the
		 * response.
		 */
		OpValueVector<UINT32> & GetObjectListRef();

		/**
		 * Set the field @c objectList.
		 * 
		 * List of object IDs to fetch event listeners from, the object must have
		 * implemented the EventTarget DOM interface to be able to get the
		 * registered listeners, otherwise the event listener will be unset in the
		 * response.
		 */
		OP_STATUS AppendToObjectList(UINT32 v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpValueVector<UINT32> _objectList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * @since 6.11
	 */
	class GetFunctionPositionsArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetFunctionPositionsArg(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectList.
		 * 
		 * List of object IDs to fetch position for, the object must be a
		 * non-native function for the position to be fetched.
		 */
		const OpValueVector<UINT32> & GetObjectList() const
		{
			return _objectList;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectList.
		 * 
		 * List of object IDs to fetch position for, the object must be a
		 * non-native function for the position to be fetched.
		 */
		OpValueVector<UINT32> & GetObjectListRef();

		/**
		 * Set the field @c objectList.
		 * 
		 * List of object IDs to fetch position for, the object must be a
		 * non-native function for the position to be fetched.
		 */
		OP_STATUS AppendToObjectList(UINT32 v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpValueVector<UINT32> _objectList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains a list of unique event-names found in the DOM document.
	 * 
	 * @since 6.11
	 */
	class EventNames
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		EventNames(
			UINT32 runtime_id_arg = 0,
			UINT32 object_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _objectID(object_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c eventNameList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventNameList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 * 
		 * The runtime ID where the inspection was performed.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectID.
		 * 
		 * ID of the root node which was used as a starting point.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c eventNameList.
		 * 
		 * The unique list of event-names which were found in the document.
		 * e.g. ["click", "load", "blur"]
		 */
		const OpAutoVector<OpString> & GetEventNameList() const
		{
			return _eventNameList;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 * 
		 * The runtime ID where the inspection was performed.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectID.
		 * 
		 * ID of the root node which was used as a starting point.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c eventNameList.
		 * 
		 * The unique list of event-names which were found in the document.
		 * e.g. ["click", "load", "blur"]
		 */
		OpAutoVector<OpString> & GetEventNameListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _objectID;
		OpAutoVector<OpString> _eventNameList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * @since 6.11
	 */
	class GetEventNamesArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		GetEventNamesArg(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class FrameSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		FrameSelection(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0,
			UINT32 frame_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
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
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
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
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c frameID.
		 */
		void SetFrameID(UINT32 v)
		{
			_frameID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		UINT32 _frameID;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class NodeList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		NodeList(
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
		 * Check if the field @c nodeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNodeList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c nodeList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo> & GetNodeList() const
		{
			return _nodeList;
		}

		// Setters

		/**
		 * Set the field @c nodeList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo> & GetNodeListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo> _nodeList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Defines the position in a script. The position is identified by the ID of
	 * the script and the line number in the script.
	 */
	class Position
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Position(
			UINT32 script_id_arg = 0,
			UINT32 line_number_arg = 0
			)
			: _scriptID(script_id_arg)
			, _lineNumber(line_number_arg)
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
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c scriptID.
		 * 
		 * ID of the script which contains the position.
		 * The ID will be set in the ScriptInfo message when a new script appears.
		 */
		UINT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c lineNumber.
		 * 
		 * The line number in the script.
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		// Setters

		/**
		 * Set the field @c scriptID.
		 * 
		 * ID of the script which contains the position.
		 * The ID will be set in the ScriptInfo message when a new script appears.
		 */
		void SetScriptID(UINT32 v)
		{
			_scriptID = v;
		}

		/**
		 * Set the field @c lineNumber.
		 * 
		 * The line number in the script.
		 */
		void SetLineNumber(UINT32 v)
		{
			_lineNumber = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _scriptID;
		UINT32 _lineNumber;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Represents an ECMAScript value, a value is either one of the primitives
	 * like string or boolean or an object.
	 */
	class Value
	{
	public:
		// BEGIN: Nested items

		// Enum Value.Type
		typedef Value_Type Type;
		static const Value_Type TYPE_UNDEFINED = Value_Type_TYPE_UNDEFINED;
		static const Value_Type TYPE_NULL = Value_Type_TYPE_NULL;
		static const Value_Type TYPE_TRUE = Value_Type_TYPE_TRUE;
		static const Value_Type TYPE_FALSE = Value_Type_TYPE_FALSE;
		static const Value_Type TYPE_NAN = Value_Type_TYPE_NAN;
		static const Value_Type TYPE_PLUS_INFINITY = Value_Type_TYPE_PLUS_INFINITY;
		static const Value_Type TYPE_MINUS_INFINITY = Value_Type_TYPE_MINUS_INFINITY;
		static const Value_Type TYPE_NUMBER = Value_Type_TYPE_NUMBER;
		static const Value_Type TYPE_STRING = Value_Type_TYPE_STRING;
		static const Value_Type TYPE_OBJECT = Value_Type_TYPE_OBJECT;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Value(
			)
			: _type(Value_Type_TYPE_UNDEFINED)
			, _number(0.0)
			, _object(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * str_arg = NULL
			)
		{
			if (str_arg)
			{
				RETURN_IF_ERROR(_str.Set(*str_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}
		~Value()
		{
			OP_DELETE(_object);
		}

		// Checkers
		/**
		 * Check if the field @c type is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasType() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c number is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNumber() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c str is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStr() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c object is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObject() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c type.
		 * 
		 * The type of value.
		 * 
		 * @note Booleans are encoded as either TRUE or FALSE to shorten the number
		 * fields in use.
		 */
		ES_ScopeDebugFrontend_MessageSet::Value_Type GetType() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::Value_Type>(_type);
		}

		/**
		 * Get the field @c number.
		 * 
		 * The numeric value, set if type = NUMBER.
		 */
		double GetNumber() const
		{
			return _number;
		}

		/**
		 * Get the field @c str.
		 * 
		 * The string, set if type = STRING.
		 */
		const OpString & GetStr() const
		{
			return _str;
		}

		/**
		 * Get the field @c object.
		 * 
		 * Object information, set if type = OBJECT.
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetObject() const
		{
			return _object;
		}

		// Setters

		/**
		 * Set the field @c type.
		 * 
		 * The type of value.
		 * 
		 * @note Booleans are encoded as either TRUE or FALSE to shorten the number
		 * fields in use.
		 */
		void SetType(ES_ScopeDebugFrontend_MessageSet::Value_Type v);

		/**
		 * Set the field @c number.
		 * 
		 * The numeric value, set if type = NUMBER.
		 */
		void SetNumber(double v)
		{
			has_bits_.Reference().SetBit(1);
			_number = v;
		}

		/**
		 * Set the field @c str.
		 * 
		 * The string, set if type = STRING.
		 */
		OpString & GetStrRef();

		/**
		 * Set the field @c object.
		 * 
		 * Object information, set if type = OBJECT.
		 */
		void SetObject(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		double _number;
		OpString _str;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _object;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * The object representing return value of a function. Includes context
	 * information indicating where from and where to the value was returned (script
	 * id, line number), returned value and function object itself that returned
	 * the value.
	 * 
	 * @since 6.10
	 */
	class ReturnValue
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		ReturnValue(
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c functionFrom is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunctionFrom() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c positionFrom is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPositionFrom() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c positionTo is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPositionTo() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c value.
		 * 
		 * The value that was returned.
		 */
		const ES_ScopeDebugFrontend_MessageSet::Value & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c functionFrom.
		 * 
		 * The function object from which the value was returned.
		 */
		const ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetFunctionFrom() const
		{
			return _functionFrom;
		}

		/**
		 * Get the field @c positionFrom.
		 * 
		 * The position where the value was returned from.
		 */
		const ES_ScopeDebugFrontend_MessageSet::Position & GetPositionFrom() const
		{
			return _positionFrom;
		}

		/**
		 * Get the field @c positionTo.
		 * 
		 * The position where the value was returned to.
		 */
		const ES_ScopeDebugFrontend_MessageSet::Position & GetPositionTo() const
		{
			return _positionTo;
		}

		// Setters

		/**
		 * Set the field @c value.
		 * 
		 * The value that was returned.
		 */
		ES_ScopeDebugFrontend_MessageSet::Value & GetValueRef();

		/**
		 * Set the field @c functionFrom.
		 * 
		 * The function object from which the value was returned.
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetFunctionFromRef();

		/**
		 * Set the field @c positionFrom.
		 * 
		 * The position where the value was returned from.
		 */
		ES_ScopeDebugFrontend_MessageSet::Position & GetPositionFromRef();

		/**
		 * Set the field @c positionTo.
		 * 
		 * The position where the value was returned to.
		 */
		ES_ScopeDebugFrontend_MessageSet::Position & GetPositionToRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		ES_ScopeDebugFrontend_MessageSet::Value _value;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue _functionFrom;
		ES_ScopeDebugFrontend_MessageSet::Position _positionFrom;
		ES_ScopeDebugFrontend_MessageSet::Position _positionTo;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Frames are in innermost-first order.
	 */
	class BacktraceFrameList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		BacktraceFrameList(
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
		 * Check if the field @c frameList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c returnValueList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasReturnValueList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c frameList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> & GetFrameList() const
		{
			return _frameList;
		}

		/**
		 * Get the field @c returnValueList.
		 * 
		 * The list of return values that were returned from the most recent
		 * function calls. List is cleared upon calling a function.
		 * Most recently returned value is first in the list.
		 * 
		 * @since 6.10
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReturnValue> & GetReturnValueList() const
		{
			return _returnValueList;
		}

		// Setters

		/**
		 * Set the field @c frameList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> & GetFrameListRef();

		/**
		 * Set the field @c returnValueList.
		 * 
		 * The list of return values that were returned from the most recent
		 * function calls. List is cleared upon calling a function.
		 * Most recently returned value is first in the list.
		 * 
		 * @since 6.10
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReturnValue> & GetReturnValueListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::BacktraceFrame> _frameList;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ReturnValue> _returnValueList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class BacktraceFrame
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 10
		};
		// END: Internal enums


		BacktraceFrame(
			UINT32 function_id_arg = 0,
			UINT32 argument_object_arg = 0,
			UINT32 variable_object_arg = 0,
			UINT32 this_object_arg = 0
			)
			: _functionID(function_id_arg)
			, _argumentObject(argument_object_arg)
			, _variableObject(variable_object_arg)
			, _thisObject(this_object_arg)
			, _objectValue(NULL)
			, _scriptID(0)
			, _lineNumber(0)
			, _argumentValue(NULL)
			, _thisValue(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			)
		{
			return OpStatus::OK;
		}
		~BacktraceFrame()
		{
			OP_DELETE(_objectValue);
			OP_DELETE(_argumentValue);
			OP_DELETE(_thisValue);
		}

		// Checkers
		/**
		 * Check if the field @c functionID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunctionID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c argumentObject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArgumentObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c variableObject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVariableObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c thisObject is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThisObject() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectValue() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c scriptID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScriptID() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c lineNumber is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLineNumber() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c scopeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScopeList() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c argumentValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasArgumentValue() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		/**
		 * Check if the field @c thisValue is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThisValue() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		// Getters

		/**
		 * Get the field @c functionID.
		 */
		UINT32 GetFunctionID() const
		{
			return _functionID;
		}

		/**
		 * Get the field @c argumentObject.
		 */
		UINT32 GetArgumentObject() const
		{
			return _argumentObject;
		}

		/**
		 * Get the field @c variableObject.
		 */
		UINT32 GetVariableObject() const
		{
			return _variableObject;
		}

		/**
		 * Get the field @c thisObject.
		 */
		UINT32 GetThisObject() const
		{
			return _thisObject;
		}

		/**
		 * Get the field @c objectValue.
		 * 
		 * TODO: Spec says repeated, while the code only assumes one (required)
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetObjectValue() const
		{
			return _objectValue;
		}

		/**
		 * Get the field @c scriptID.
		 */
		UINT32 GetScriptID() const
		{
			return _scriptID;
		}

		/**
		 * Get the field @c lineNumber.
		 */
		UINT32 GetLineNumber() const
		{
			return _lineNumber;
		}

		/**
		 * Get the field @c scopeList.
		 * 
		 * The variable objects in the scope chain of the function. The first
		 * element in the list is the innermost scope (the scope of the function
		 * itself). The list includes the global scope.
		 * 
		 * @since 6.1
		 */
		const OpValueVector<UINT32> & GetScopeList() const
		{
			return _scopeList;
		}

		/**
		 * Get the field @c argumentValue.
		 * 
		 * The full value of the 'arguments' object.
		 * 
		 * @since 6.2
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetArgumentValue() const
		{
			return _argumentValue;
		}

		/**
		 * Get the field @c thisValue.
		 * 
		 * The full value of the 'this' object.
		 * 
		 * @since 6.2
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * GetThisValue() const
		{
			return _thisValue;
		}

		// Setters

		/**
		 * Set the field @c functionID.
		 */
		void SetFunctionID(UINT32 v)
		{
			_functionID = v;
		}

		/**
		 * Set the field @c argumentObject.
		 */
		void SetArgumentObject(UINT32 v)
		{
			_argumentObject = v;
		}

		/**
		 * Set the field @c variableObject.
		 */
		void SetVariableObject(UINT32 v)
		{
			_variableObject = v;
		}

		/**
		 * Set the field @c thisObject.
		 */
		void SetThisObject(UINT32 v)
		{
			_thisObject = v;
		}

		/**
		 * Set the field @c objectValue.
		 * 
		 * TODO: Spec says repeated, while the code only assumes one (required)
		 */
		void SetObjectValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		/**
		 * Set the field @c scriptID.
		 */
		void SetScriptID(UINT32 v)
		{
			has_bits_.Reference().SetBit(5);
			_scriptID = v;
		}

		/**
		 * Set the field @c lineNumber.
		 */
		void SetLineNumber(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_lineNumber = v;
		}

		/**
		 * Set the field @c scopeList.
		 * 
		 * The variable objects in the scope chain of the function. The first
		 * element in the list is the innermost scope (the scope of the function
		 * itself). The list includes the global scope.
		 * 
		 * @since 6.1
		 */
		OpValueVector<UINT32> & GetScopeListRef();

		/**
		 * Set the field @c scopeList.
		 * 
		 * The variable objects in the scope chain of the function. The first
		 * element in the list is the innermost scope (the scope of the function
		 * itself). The list includes the global scope.
		 * 
		 * @since 6.1
		 */
		OP_STATUS AppendToScopeList(UINT32 v);

		/**
		 * Set the field @c argumentValue.
		 * 
		 * The full value of the 'arguments' object.
		 * 
		 * @since 6.2
		 */
		void SetArgumentValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		/**
		 * Set the field @c thisValue.
		 * 
		 * The full value of the 'this' object.
		 * 
		 * @since 6.2
		 */
		void SetThisValue(ES_ScopeDebugFrontend_MessageSet::ObjectValue * v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _functionID;
		UINT32 _argumentObject;
		UINT32 _variableObject;
		UINT32 _thisObject;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _objectValue;
		UINT32 _scriptID;
		UINT32 _lineNumber;
		OpValueVector<UINT32> _scopeList;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _argumentValue;
		ES_ScopeDebugFrontend_MessageSet::ObjectValue * _thisValue;

		OpProtobufBitField<10> has_bits_;
		mutable int                 encoded_size_;
	};


	class ThreadResult
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		ThreadResult(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & status_arg
			)
		{
			RETURN_IF_ERROR(_status.Set(status_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

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
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c status.
		 * 
		 * One of:
		 * - `"completed"`
		 * - `"unhandled-exception"`
		 * - `"aborted"`
		 * - `"cancelled-by-scheduler"`
		 */
		const OpString & GetStatus() const
		{
			return _status;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c status.
		 * 
		 * One of:
		 * - `"completed"`
		 * - `"unhandled-exception"`
		 * - `"aborted"`
		 * - `"cancelled-by-scheduler"`
		 */
		OP_STATUS SetStatus(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		OpString _status;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class DomEvent
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		DomEvent(
			UINT32 object_id_arg = 0,
			UINT32 handler_id_arg = 0
			)
			: _objectID(object_id_arg)
			, _handlerID(handler_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & event_type_arg
			)
		{
			RETURN_IF_ERROR(_eventType.Set(event_type_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c handlerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHandlerID() const
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

		// Getters

		/**
		 * Get the field @c objectID.
		 * 
		 * Refers to the target of the event.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c handlerID.
		 */
		UINT32 GetHandlerID() const
		{
			return _handlerID;
		}

		/**
		 * Get the field @c eventType.
		 * 
		 * The event type is e.g., `"click"`, `"mousemove"`
		 * More examples are at http://www.w3.org/TR/2000/REC-DOM-Level-2-Events-20001113/events.html
		 * Exactly which events are implemented depends on the host, and is not defined in this protocol.
		 */
		const OpString & GetEventType() const
		{
			return _eventType;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 * 
		 * Refers to the target of the event.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c handlerID.
		 */
		void SetHandlerID(UINT32 v)
		{
			_handlerID = v;
		}

		/**
		 * Set the field @c eventType.
		 * 
		 * The event type is e.g., `"click"`, `"mousemove"`
		 * More examples are at http://www.w3.org/TR/2000/REC-DOM-Level-2-Events-20001113/events.html
		 * Exactly which events are implemented depends on the host, and is not defined in this protocol.
		 */
		OP_STATUS SetEventType(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		UINT32 _handlerID;
		OpString _eventType;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssElementSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		CssElementSelection(
			UINT32 runtime_id_arg = 0,
			UINT32 object_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _objectID(object_id_arg)
			, _pseudoElement(PSEUDOSELECTOR_NONE)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c pseudoSelectorList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPseudoSelectorList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c pseudoElement is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPseudoElement() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c pseudoSelectorList.
		 * 
		 * Set this field to match rules with the specified pseudo selectors, even
		 * if that rule is not currently applied.
		 * 
		 * The rule will match if either of the specified pseudo classes or pseudo
		 * elements are used in the selector. Order does not matter.
		 * 
		 * This is handy for inspecting and modifying style rules for non-current
		 * element states.
		 * 
		 * LINK and VISISTED are not supported for elements that are not links.
		 * 
		 * Using this field will not alter the state of the element. Selecting
		 * HOVER, for instance, when an element is currently not hovered will
		 * therefore not *apply* the HOVER style rules.
		 * 
		 * @since 6.5
		 */
		const OpValueVector<INT32> & GetPseudoSelectorList() const
		{
			return _pseudoSelectorList;
		}

		/**
		 * Get the field @c pseudoSelectorList.
		 * 
		 * Set this field to match rules with the specified pseudo selectors, even
		 * if that rule is not currently applied.
		 * 
		 * The rule will match if either of the specified pseudo classes or pseudo
		 * elements are used in the selector. Order does not matter.
		 * 
		 * This is handy for inspecting and modifying style rules for non-current
		 * element states.
		 * 
		 * LINK and VISISTED are not supported for elements that are not links.
		 * 
		 * Using this field will not alter the state of the element. Selecting
		 * HOVER, for instance, when an element is currently not hovered will
		 * therefore not *apply* the HOVER style rules.
		 * 
		 * @since 6.5
		 */
		UINT32 GetPseudoSelectorListCount() const
		{
			return _pseudoSelectorList.GetCount();
		}

		/**
		 * Get the field @c pseudoSelectorList.
		 * 
		 * Set this field to match rules with the specified pseudo selectors, even
		 * if that rule is not currently applied.
		 * 
		 * The rule will match if either of the specified pseudo classes or pseudo
		 * elements are used in the selector. Order does not matter.
		 * 
		 * This is handy for inspecting and modifying style rules for non-current
		 * element states.
		 * 
		 * LINK and VISISTED are not supported for elements that are not links.
		 * 
		 * Using this field will not alter the state of the element. Selecting
		 * HOVER, for instance, when an element is currently not hovered will
		 * therefore not *apply* the HOVER style rules.
		 * 
		 * @since 6.5
		 */
		ES_ScopeDebugFrontend_MessageSet::PseudoSelector GetPseudoSelectorListItem(UINT32 i) const
		{
			OP_ASSERT(i < _pseudoSelectorList.GetCount());
			return static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoSelector>(_pseudoSelectorList.Get(i));
		}

		/**
		 * Get the field @c pseudoElement.
		 * 
		 * If this field is set, select the specified pseudo-element as the target
		 * for inspection.
		 * 
		 * The field (if set) may only contain pseudo-elements, not pseudo-classes.
		 * Attemting to use a pseudo-class will cause an error. This field may not
		 * be used with the 'pseudoSelectorList' field, as pseudo-elements do not
		 * have their own states (hovered, visited, etc).
		 * 
		 * @since 6.9
		 */
		ES_ScopeDebugFrontend_MessageSet::PseudoSelector GetPseudoElement() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoSelector>(_pseudoElement);
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c pseudoSelectorList.
		 * 
		 * Set this field to match rules with the specified pseudo selectors, even
		 * if that rule is not currently applied.
		 * 
		 * The rule will match if either of the specified pseudo classes or pseudo
		 * elements are used in the selector. Order does not matter.
		 * 
		 * This is handy for inspecting and modifying style rules for non-current
		 * element states.
		 * 
		 * LINK and VISISTED are not supported for elements that are not links.
		 * 
		 * Using this field will not alter the state of the element. Selecting
		 * HOVER, for instance, when an element is currently not hovered will
		 * therefore not *apply* the HOVER style rules.
		 * 
		 * @since 6.5
		 */
		OpValueVector<INT32> & GetPseudoSelectorListRef();

		/**
		 * Set the field @c pseudoSelectorList.
		 * 
		 * Set this field to match rules with the specified pseudo selectors, even
		 * if that rule is not currently applied.
		 * 
		 * The rule will match if either of the specified pseudo classes or pseudo
		 * elements are used in the selector. Order does not matter.
		 * 
		 * This is handy for inspecting and modifying style rules for non-current
		 * element states.
		 * 
		 * LINK and VISISTED are not supported for elements that are not links.
		 * 
		 * Using this field will not alter the state of the element. Selecting
		 * HOVER, for instance, when an element is currently not hovered will
		 * therefore not *apply* the HOVER style rules.
		 * 
		 * @since 6.5
		 */
		OP_STATUS AppendToPseudoSelectorList(ES_ScopeDebugFrontend_MessageSet::PseudoSelector v);

		/**
		 * Set the field @c pseudoSelectorList.
		 * 
		 * Set this field to match rules with the specified pseudo selectors, even
		 * if that rule is not currently applied.
		 * 
		 * The rule will match if either of the specified pseudo classes or pseudo
		 * elements are used in the selector. Order does not matter.
		 * 
		 * This is handy for inspecting and modifying style rules for non-current
		 * element states.
		 * 
		 * LINK and VISISTED are not supported for elements that are not links.
		 * 
		 * Using this field will not alter the state of the element. Selecting
		 * HOVER, for instance, when an element is currently not hovered will
		 * therefore not *apply* the HOVER style rules.
		 * 
		 * @since 6.5
		 */
		OP_STATUS SetPseudoSelectorListItem(UINT32 i, ES_ScopeDebugFrontend_MessageSet::PseudoSelector v);

		/**
		 * Set the field @c pseudoElement.
		 * 
		 * If this field is set, select the specified pseudo-element as the target
		 * for inspection.
		 * 
		 * The field (if set) may only contain pseudo-elements, not pseudo-classes.
		 * Attemting to use a pseudo-class will cause an error. This field may not
		 * be used with the 'pseudoSelectorList' field, as pseudo-elements do not
		 * have their own states (hovered, visited, etc).
		 * 
		 * @since 6.9
		 */
		void SetPseudoElement(ES_ScopeDebugFrontend_MessageSet::PseudoSelector v);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _objectID;
		OpValueVector<INT32> _pseudoSelectorList;
		INT32 _pseudoElement;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains the result of fetching the script positions for the specified
	 * function objects.
	 * 
	 * @since 6.11
	 */
	class FunctionPositionList
	{
	public:
		// BEGIN: Nested items

		// Message FunctionPositionList.FunctionPosition
		typedef FunctionPositionList_FunctionPosition FunctionPosition;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		FunctionPositionList(
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
		 * Check if the field @c functionPositionList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFunctionPositionList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c functionPositionList.
		 * 
		 * A list of function positions. The number of items in the list
		 * corresponds to the number of object IDs sent in GetFunctionPositions.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition> & GetFunctionPositionList() const
		{
			return _functionPositionList;
		}

		// Setters

		/**
		 * Set the field @c functionPositionList.
		 * 
		 * A list of function positions. The number of items in the list
		 * corresponds to the number of object IDs sent in GetFunctionPositions.
		 */
		ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition * AppendNewFunctionPositionList();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::FunctionPositionList_FunctionPosition> _functionPositionList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ObjectInfo
	{
	public:
		// BEGIN: Nested items

		// Message ObjectInfo.Property
		typedef ObjectInfo_Property Property;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ObjectInfo(
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c propertyList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPropertyList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c value.
		 */
		const ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c propertyList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property> & GetPropertyList() const
		{
			return _propertyList;
		}

		// Setters

		/**
		 * Set the field @c value.
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectValue & GetValueRef();

		/**
		 * Set the field @c propertyList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property> & GetPropertyListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		ES_ScopeDebugFrontend_MessageSet::ObjectValue _value;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::ObjectInfo_Property> _propertyList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RuntimeSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		RuntimeSelection(
			)
			: _allRuntimes(FALSE)
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
		 * Check if the field @c runtimeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c allRuntimes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAllRuntimes() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c runtimeList.
		 * 
		 * List the ones you want to see, or none if you want all (also set `allRuntimes`).
		 */
		const OpValueVector<UINT32> & GetRuntimeList() const
		{
			return _runtimeList;
		}

		/**
		 * Get the field @c allRuntimes.
		 * 
		 * Create runtimes for all documents. Runtimes are normally not created for documents
		 * without ECMAScript.
		 */
		BOOL GetAllRuntimes() const
		{
			return _allRuntimes;
		}

		// Setters

		/**
		 * Set the field @c runtimeList.
		 * 
		 * List the ones you want to see, or none if you want all (also set `allRuntimes`).
		 */
		OpValueVector<UINT32> & GetRuntimeListRef();

		/**
		 * Set the field @c runtimeList.
		 * 
		 * List the ones you want to see, or none if you want all (also set `allRuntimes`).
		 */
		OP_STATUS AppendToRuntimeList(UINT32 v);

		/**
		 * Set the field @c allRuntimes.
		 * 
		 * Create runtimes for all documents. Runtimes are normally not created for documents
		 * without ECMAScript.
		 */
		void SetAllRuntimes(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_allRuntimes = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpValueVector<UINT32> _runtimeList;
		BOOL _allRuntimes;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RuntimeID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RuntimeID(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ThreadInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		ThreadInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0,
			UINT32 parent_thread_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, _parentThreadID(parent_thread_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & thread_type_arg,
			const OpString * event_namespace_arg = NULL,
			const OpString * event_type_arg = NULL
			)
		{
			RETURN_IF_ERROR(_threadType.Set(thread_type_arg));
			if (event_namespace_arg)
			{
				RETURN_IF_ERROR(_eventNamespace.Set(*event_namespace_arg));
				has_bits_.Reference().SetBit(4);

			}
			if (event_type_arg)
			{
				RETURN_IF_ERROR(_eventType.Set(*event_type_arg));
				has_bits_.Reference().SetBit(5);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c parentThreadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParentThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c eventNamespace is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventNamespace() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c eventType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventType() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c parentThreadID.
		 */
		UINT32 GetParentThreadID() const
		{
			return _parentThreadID;
		}

		/**
		 * Get the field @c threadType.
		 * 
		 * One of:
		 * - `"inline"`
		 * - `"event"`
		 * - `"linked"`
		 * - `"timeout"`
		 * - `"java"`
		 * - `"unknown"`
		 */
		const OpString & GetThreadType() const
		{
			return _threadType;
		}

		/**
		 * Get the field @c eventNamespace.
		 * 
		 * present if `threadType` is `"event"`
		 */
		const OpString & GetEventNamespace() const
		{
			return _eventNamespace;
		}

		/**
		 * Get the field @c eventType.
		 * 
		 * present if `threadType` is `"event"`
		 */
		const OpString & GetEventType() const
		{
			return _eventType;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c parentThreadID.
		 */
		void SetParentThreadID(UINT32 v)
		{
			_parentThreadID = v;
		}

		/**
		 * Set the field @c threadType.
		 * 
		 * One of:
		 * - `"inline"`
		 * - `"event"`
		 * - `"linked"`
		 * - `"timeout"`
		 * - `"java"`
		 * - `"unknown"`
		 */
		OP_STATUS SetThreadType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c eventNamespace.
		 * 
		 * present if `threadType` is `"event"`
		 */
		OP_STATUS SetEventNamespace(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c eventType.
		 * 
		 * present if `threadType` is `"event"`
		 */
		OP_STATUS SetEventType(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		UINT32 _parentThreadID;
		OpString _threadType;
		OpString _eventNamespace;
		OpString _eventType;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	class EventHandlerID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		EventHandlerID(
			UINT32 handler_id_arg = 0
			)
			: _handlerID(handler_id_arg)
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
		 * Check if the field @c handlerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHandlerID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c handlerID.
		 * 
		 * `handlerID` as specified in EventHandler.handlerID.
		 */
		UINT32 GetHandlerID() const
		{
			return _handlerID;
		}

		// Setters

		/**
		 * Set the field @c handlerID.
		 * 
		 * `handlerID` as specified in EventHandler.handlerID.
		 */
		void SetHandlerID(UINT32 v)
		{
			_handlerID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _handlerID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class NodeInfo
	{
	public:
		// BEGIN: Nested items

		// Enum NodeInfo.MatchReason
		typedef NodeInfo_MatchReason MatchReason;
		static const NodeInfo_MatchReason MATCHREASON_TRAVERSAL = NodeInfo_MatchReason_MATCHREASON_TRAVERSAL;
		static const NodeInfo_MatchReason MATCHREASON_SEARCH_ANCESTOR = NodeInfo_MatchReason_MATCHREASON_SEARCH_ANCESTOR;
		static const NodeInfo_MatchReason MATCHREASON_SEARCH_HIT = NodeInfo_MatchReason_MATCHREASON_SEARCH_HIT;

		// Message NodeInfo.Attribute
		typedef NodeInfo_Attribute Attribute;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 16
		};
		// END: Internal enums


		NodeInfo(
			UINT32 object_id_arg = 0,
			NodeType type_arg = NODETYPE_UNKNOWN,
			UINT32 depth_arg = 0
			)
			: _objectID(object_id_arg)
			, _type(type_arg)
			, _depth(depth_arg)
			, _childrenLength(0)
			, _runtimeID(0)
			, _contentDocument(NULL)
			, _frameElement(NULL)
			, _matchReason(NodeInfo_MatchReason_MATCHREASON_TRAVERSAL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString * namespace_prefix_arg = NULL,
			const OpString * value_arg = NULL,
			const OpString * public_id_arg = NULL,
			const OpString * system_id_arg = NULL
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			if (namespace_prefix_arg)
			{
				RETURN_IF_ERROR(_namespacePrefix.Set(*namespace_prefix_arg));
				has_bits_.Reference().SetBit(4);

			}
			if (value_arg)
			{
				RETURN_IF_ERROR(_value.Set(*value_arg));
				has_bits_.Reference().SetBit(7);

			}
			if (public_id_arg)
			{
				RETURN_IF_ERROR(_publicID.Set(*public_id_arg));
				has_bits_.Reference().SetBit(8);

			}
			if (system_id_arg)
			{
				RETURN_IF_ERROR(_systemID.Set(*system_id_arg));
				has_bits_.Reference().SetBit(9);

			}
			return OpStatus::OK;
		}
		~NodeInfo()
		{
			OP_DELETE(_contentDocument);
			OP_DELETE(_frameElement);
		}

		// Checkers
		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
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
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c depth is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDepth() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c namespacePrefix is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNamespacePrefix() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c attributeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAttributeList() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c childrenLength is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasChildrenLength() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c publicID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPublicID() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		/**
		 * Check if the field @c systemID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSystemID() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return has_bits_.Reference().IsSet(10);
		}

		/**
		 * Check if the field @c contentDocument is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContentDocument() const
		{
			return has_bits_.Reference().IsSet(11);
		}

		/**
		 * Check if the field @c frameElement is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFrameElement() const
		{
			return has_bits_.Reference().IsSet(12);
		}

		/**
		 * Check if the field @c matchReason is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMatchReason() const
		{
			return has_bits_.Reference().IsSet(13);
		}

		/**
		 * Check if the field @c pseudoElementList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPseudoElementList() const
		{
			return has_bits_.Reference().IsSet(14);
		}

		/**
		 * Check if the field @c eventListenerList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventListenerList() const
		{
			return has_bits_.Reference().IsSet(15);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c type.
		 * 
		 * The type for this Node.
		 */
		ES_ScopeDebugFrontend_MessageSet::NodeType GetType() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::NodeType>(_type);
		}

		/**
		 * Get the field @c name.
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c depth.
		 */
		UINT32 GetDepth() const
		{
			return _depth;
		}

		/**
		 * Get the field @c namespacePrefix.
		 * 
		 * Used if type is `ELEMENT`.
		 */
		const OpString & GetNamespacePrefix() const
		{
			return _namespacePrefix;
		}

		/**
		 * Get the field @c attributeList.
		 * 
		 * Used if type is `ELEMENT`.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute> & GetAttributeList() const
		{
			return _attributeList;
		}

		/**
		 * Get the field @c childrenLength.
		 * 
		 * Used if type is `ELEMENT`.
		 */
		UINT32 GetChildrenLength() const
		{
			return _childrenLength;
		}

		/**
		 * Get the field @c value.
		 * 
		 * Used if type is `TEXT`, `CDATA_SECTION`, `PROCESSING_INSTRUCTION` or
		 * `COMMENT`.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c publicID.
		 * 
		 * Used if type is `DOCUMENT_TYPE`.
		 */
		const OpString & GetPublicID() const
		{
			return _publicID;
		}

		/**
		 * Get the field @c systemID.
		 * 
		 * Used if type is `DOCUMENT_TYPE`.
		 */
		const OpString & GetSystemID() const
		{
			return _systemID;
		}

		/**
		 * Get the field @c runtimeID.
		 * 
		 * The runtime ID of this node. This field will always be set.
		 * 
		 * @since 6.5
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c contentDocument.
		 * 
		 * If the node type is an `ELEMENT` which contains another document,
		 * (frame, iframe, or object), this field will be set with a reference to
		 * the document node contained within that element.
		 * 
		 * The field will not be set if the element does not contain a document.
		 * 
		 * @since 6.5
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectReference * GetContentDocument() const
		{
			return _contentDocument;
		}

		/**
		 * Get the field @c frameElement.
		 * 
		 * Like 'contentDocument', but the other direction; if this node is
		 * a `DOCUMENT` node, then this field will be set with a reference to the
		 * element that contains the document in the parent runtime.
		 * 
		 * The field will not be set if the document node represents a top-level
		 * document.
		 * 
		 * @since 6.5
		 */
		ES_ScopeDebugFrontend_MessageSet::ObjectReference * GetFrameElement() const
		{
			return _frameElement;
		}

		/**
		 * Get the field @c matchReason.
		 * 
		 * Explains why the node was included in the response. This field will
		 * always be set.
		 * 
		 * When this message is a response to DOM inspection, this field will be set
		 * to TRAVERSAL. When sent as a response to a search, it will either be set
		 * to SEARCH_HIT, or SEARCH_PARENT.
		 * 
		 * @since 6.5
		 */
		ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason GetMatchReason() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason>(_matchReason);
		}

		/**
		 * Get the field @c pseudoElementList.
		 * 
		 * If the node has pseudo elements applied, this list will contain those
		 * elements.
		 * 
		 * @since 6.5
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PseudoElement> & GetPseudoElementList() const
		{
			return _pseudoElementList;
		}

		/**
		 * Get the field @c eventListenerList.
		 * 
		 * A list of event listeners registered on this node.
		 * 
		 * @since 6.11
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventListener> & GetEventListenerList() const
		{
			return _eventListenerList;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c type.
		 * 
		 * The type for this Node.
		 */
		void SetType(ES_ScopeDebugFrontend_MessageSet::NodeType v);

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c depth.
		 */
		void SetDepth(UINT32 v)
		{
			_depth = v;
		}

		/**
		 * Set the field @c namespacePrefix.
		 * 
		 * Used if type is `ELEMENT`.
		 */
		OP_STATUS SetNamespacePrefix(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c attributeList.
		 * 
		 * Used if type is `ELEMENT`.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute> & GetAttributeListRef();

		/**
		 * Set the field @c childrenLength.
		 * 
		 * Used if type is `ELEMENT`.
		 */
		void SetChildrenLength(UINT32 v)
		{
			has_bits_.Reference().SetBit(6);
			_childrenLength = v;
		}

		/**
		 * Set the field @c value.
		 * 
		 * Used if type is `TEXT`, `CDATA_SECTION`, `PROCESSING_INSTRUCTION` or
		 * `COMMENT`.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c publicID.
		 * 
		 * Used if type is `DOCUMENT_TYPE`.
		 */
		OP_STATUS SetPublicID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c systemID.
		 * 
		 * Used if type is `DOCUMENT_TYPE`.
		 */
		OP_STATUS SetSystemID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c runtimeID.
		 * 
		 * The runtime ID of this node. This field will always be set.
		 * 
		 * @since 6.5
		 */
		void SetRuntimeID(UINT32 v)
		{
			has_bits_.Reference().SetBit(10);
			_runtimeID = v;
		}

		/**
		 * Set the field @c contentDocument.
		 * 
		 * If the node type is an `ELEMENT` which contains another document,
		 * (frame, iframe, or object), this field will be set with a reference to
		 * the document node contained within that element.
		 * 
		 * The field will not be set if the element does not contain a document.
		 * 
		 * @since 6.5
		 */
		void SetContentDocument(ES_ScopeDebugFrontend_MessageSet::ObjectReference * v);

		/**
		 * Set the field @c frameElement.
		 * 
		 * Like 'contentDocument', but the other direction; if this node is
		 * a `DOCUMENT` node, then this field will be set with a reference to the
		 * element that contains the document in the parent runtime.
		 * 
		 * The field will not be set if the document node represents a top-level
		 * document.
		 * 
		 * @since 6.5
		 */
		void SetFrameElement(ES_ScopeDebugFrontend_MessageSet::ObjectReference * v);

		/**
		 * Set the field @c matchReason.
		 * 
		 * Explains why the node was included in the response. This field will
		 * always be set.
		 * 
		 * When this message is a response to DOM inspection, this field will be set
		 * to TRAVERSAL. When sent as a response to a search, it will either be set
		 * to SEARCH_HIT, or SEARCH_PARENT.
		 * 
		 * @since 6.5
		 */
		void SetMatchReason(ES_ScopeDebugFrontend_MessageSet::NodeInfo_MatchReason v);

		/**
		 * Set the field @c pseudoElementList.
		 * 
		 * If the node has pseudo elements applied, this list will contain those
		 * elements.
		 * 
		 * @since 6.5
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PseudoElement> & GetPseudoElementListRef();

		/**
		 * Set the field @c eventListenerList.
		 * 
		 * A list of event listeners registered on this node.
		 * 
		 * @since 6.11
		 */
		ES_ScopeDebugFrontend_MessageSet::EventListener * AppendNewEventListenerList();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		INT32 _type;
		OpString _name;
		UINT32 _depth;
		OpString _namespacePrefix;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::NodeInfo_Attribute> _attributeList;
		UINT32 _childrenLength;
		OpString _value;
		OpString _publicID;
		OpString _systemID;
		UINT32 _runtimeID;
		ES_ScopeDebugFrontend_MessageSet::ObjectReference * _contentDocument;
		ES_ScopeDebugFrontend_MessageSet::ObjectReference * _frameElement;
		INT32 _matchReason;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::PseudoElement> _pseudoElementList;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::EventListener> _eventListenerList;

		OpProtobufBitField<16> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Defines a DOM event listener which will be called when a matching DOM
	 * event is triggered. The listener is registered on a DOM Node for a
	 * given event type, e.g. "click", either by calling EventTarget.addEventListener()
	 * or by setting an attribute e.g. onclick="...". Use the field
	 * `origin` to determine where it was registered.
	 * 
	 * The origin dictates which fields are set in this message.
	 * 
	 * If origin.type is `EVENT_TARGET` then the following fields are set:
	 * - useCapture
	 * - listenerObjectID
	 * - position
	 * 
	 * If origin.type is `ATTRIBUTE` then the following fields are set:
	 * - listenerObjectID or listenerScriptData
	 * 
	 * @since 6.11
	 */
	class EventListener
	{
	public:
		// BEGIN: Nested items

		// Enum EventListener.Origin
		typedef EventListener_Origin Origin;
		static const EventListener_Origin ORIGIN_EVENT_TARGET = EventListener_Origin_ORIGIN_EVENT_TARGET;
		static const EventListener_Origin ORIGIN_ATTRIBUTE = EventListener_Origin_ORIGIN_ATTRIBUTE;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 6
		};
		// END: Internal enums


		EventListener(
			EventListener_Origin origin_arg = EventListener_Origin_ORIGIN_EVENT_TARGET
			)
			: _origin(origin_arg)
			, _position(NULL)
			, _useCapture(FALSE)
			, _listenerObjectID(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & event_type_arg,
			const OpString * listener_script_data_arg = NULL
			)
		{
			RETURN_IF_ERROR(_eventType.Set(event_type_arg));
			if (listener_script_data_arg)
			{
				RETURN_IF_ERROR(_listenerScriptData.Set(*listener_script_data_arg));
				has_bits_.Reference().SetBit(5);

			}
			return OpStatus::OK;
		}
		~EventListener()
		{
			OP_DELETE(_position);
		}

		// Checkers
		/**
		 * Check if the field @c eventType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEventType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c origin is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrigin() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c position is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPosition() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c useCapture is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUseCapture() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c listenerObjectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasListenerObjectID() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		/**
		 * Check if the field @c listenerScriptData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasListenerScriptData() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		// Getters

		/**
		 * Get the field @c eventType.
		 * 
		 * The event type which the listener triggers on e.g., `"click"`, `"mousemove"`
		 * More examples at http://www.w3.org/TR/2000/REC-DOM-Level-2-Events-20001113/events.html
		 */
		const OpString & GetEventType() const
		{
			return _eventType;
		}

		/**
		 * Get the field @c origin.
		 * 
		 * Determines the origin of the registration.
		 */
		ES_ScopeDebugFrontend_MessageSet::EventListener_Origin GetOrigin() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::EventListener_Origin>(_origin);
		}

		/**
		 * Get the field @c position.
		 * 
		 * Contains the script ID and line number in the script where the listener
		 * was registered.
		 * This is only set when a script registered the listener with
		 * EventTarget.addEventListener().
		 */
		ES_ScopeDebugFrontend_MessageSet::Position * GetPosition() const
		{
			return _position;
		}

		/**
		 * Get the field @c useCapture.
		 * 
		 * The value of the useCapture parameter sent to addEventListener().
		 * Only set when origin is EVENT_TARGET.
		 */
		BOOL GetUseCapture() const
		{
			return _useCapture;
		}

		/**
		 * Get the field @c listenerObjectID.
		 * 
		 * The function object which was registered as the EventListener.
		 * This is either set by calling EventTarget.addEventListener() or by
		 * setting an attribute on a node, e.g. node.onclick=handleClick.
		 */
		UINT32 GetListenerObjectID() const
		{
			return _listenerObjectID;
		}

		/**
		 * Get the field @c listenerScriptData.
		 * 
		 * The script data which will be used as the EventListener. This is
		 * only set for attribute based listeners e.g. <div onclick="..." /> or
		 * node.onclick="...". When the listener is triggered by an event the
		 * script is compiled into a function and `listenerObjectID` will be set
		 * and this field unset.
		 */
		const OpString & GetListenerScriptData() const
		{
			return _listenerScriptData;
		}

		// Setters

		/**
		 * Set the field @c eventType.
		 * 
		 * The event type which the listener triggers on e.g., `"click"`, `"mousemove"`
		 * More examples at http://www.w3.org/TR/2000/REC-DOM-Level-2-Events-20001113/events.html
		 */
		OP_STATUS SetEventType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c eventType.
		 * 
		 * The event type which the listener triggers on e.g., `"click"`, `"mousemove"`
		 * More examples at http://www.w3.org/TR/2000/REC-DOM-Level-2-Events-20001113/events.html
		 */
		OP_STATUS SetEventType(const char * v, int l = KAll);

		/**
		 * Set the field @c origin.
		 * 
		 * Determines the origin of the registration.
		 */
		void SetOrigin(ES_ScopeDebugFrontend_MessageSet::EventListener_Origin v);

		/**
		 * Set the field @c position.
		 * 
		 * Contains the script ID and line number in the script where the listener
		 * was registered.
		 * This is only set when a script registered the listener with
		 * EventTarget.addEventListener().
		 */
		void SetPosition(ES_ScopeDebugFrontend_MessageSet::Position * v);

		/**
		 * Set the field @c useCapture.
		 * 
		 * The value of the useCapture parameter sent to addEventListener().
		 * Only set when origin is EVENT_TARGET.
		 */
		void SetUseCapture(BOOL v)
		{
			has_bits_.Reference().SetBit(3);
			_useCapture = v;
		}

		/**
		 * Set the field @c listenerObjectID.
		 * 
		 * The function object which was registered as the EventListener.
		 * This is either set by calling EventTarget.addEventListener() or by
		 * setting an attribute on a node, e.g. node.onclick=handleClick.
		 */
		void SetListenerObjectID(UINT32 v)
		{
			has_bits_.Reference().SetBit(4);
			_listenerObjectID = v;
		}

		/**
		 * Set the field @c listenerScriptData.
		 * 
		 * The script data which will be used as the EventListener. This is
		 * only set for attribute based listeners e.g. <div onclick="..." /> or
		 * node.onclick="...". When the listener is triggered by an event the
		 * script is compiled into a function and `listenerObjectID` will be set
		 * and this field unset.
		 */
		OP_STATUS SetListenerScriptData(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _eventType;
		INT32 _origin;
		ES_ScopeDebugFrontend_MessageSet::Position * _position;
		BOOL _useCapture;
		UINT32 _listenerObjectID;
		OpString _listenerScriptData;

		OpProtobufBitField<6> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Represents a pseudo element, such as ::after, ::before, and so forth.
	 * 
	 * @since 6.5
	 */
	class PseudoElement
	{
	public:
		// BEGIN: Nested items

		// Enum PseudoElement.Type
		typedef PseudoElement_Type Type;
		static const PseudoElement_Type TYPE_BEFORE = PseudoElement_Type_TYPE_BEFORE;
		static const PseudoElement_Type TYPE_AFTER = PseudoElement_Type_TYPE_AFTER;
		static const PseudoElement_Type TYPE_FIRST_LETTER = PseudoElement_Type_TYPE_FIRST_LETTER;
		static const PseudoElement_Type TYPE_FIRST_LINE = PseudoElement_Type_TYPE_FIRST_LINE;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		PseudoElement(
			PseudoElement_Type type_arg = PseudoElement_Type_TYPE_BEFORE
			)
			: _type(type_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * content_arg = NULL
			)
		{
			if (content_arg)
			{
				RETURN_IF_ERROR(_content.Set(*content_arg));
				has_bits_.Reference().SetBit(1);

			}
			return OpStatus::OK;
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
		 * Check if the field @c content is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContent() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c type.
		 */
		ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type GetType() const
		{
			return static_cast<ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type>(_type);
		}

		/**
		 * Get the field @c content.
		 * 
		 * If a ::before or ::after rule uses the 'content' property to insert
		 * text content, this field will contain that content.
		 */
		const OpString & GetContent() const
		{
			return _content;
		}

		// Setters

		/**
		 * Set the field @c type.
		 */
		void SetType(ES_ScopeDebugFrontend_MessageSet::PseudoElement_Type v);

		/**
		 * Set the field @c content.
		 * 
		 * If a ::before or ::after rule uses the 'content' property to insert
		 * text content, this field will contain that content.
		 */
		OP_STATUS SetContent(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		OpString _content;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Refers to an object and its parent runtime.
	 */
	class ObjectReference
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ObjectReference(
			UINT32 runtime_id_arg = 0,
			UINT32 object_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _objectID(object_id_arg)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _objectID;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class RuntimeInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 8
		};
		// END: Internal enums


		RuntimeInfo(
			UINT32 runtime_id_arg = 0,
			UINT32 window_id_arg = 0,
			UINT32 object_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _windowID(window_id_arg)
			, _objectID(object_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & html_frame_path_arg,
			const OpString & uri_arg,
			const OpString * description_arg = NULL,
			const OpString * extension_name_arg = NULL
			)
		{
			RETURN_IF_ERROR(_htmlFramePath.Set(html_frame_path_arg));
			RETURN_IF_ERROR(_uri.Set(uri_arg));
			if (description_arg)
			{
				RETURN_IF_ERROR(_description.Set(*description_arg));
				has_bits_.Reference().SetBit(5);

			}
			if (extension_name_arg)
			{
				RETURN_IF_ERROR(_extensionName.Set(*extension_name_arg));
				has_bits_.Reference().SetBit(7);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c htmlFramePath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHtmlFramePath() const
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

		/**
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c uri is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUri() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c windowIDList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWindowIDList() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c extensionName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExtensionName() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c htmlFramePath.
		 */
		const OpString & GetHtmlFramePath() const
		{
			return _htmlFramePath;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * The ID of the window this runtime is associated with, if the runtime is
		 * associated with a single window. If the runtime is associated with more
		 * (or less) than one window, the field will be set to zero. Refer to the
		 * ``windowIDList`` field for more information.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c objectID.
		 * 
		 * the 'global' object
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c uri.
		 * 
		 * the document's URI
		 */
		const OpString & GetUri() const
		{
			return _uri;
		}

		/**
		 * Get the field @c description.
		 * 
		 * A short description of the nature of the runtime, for instance
		 * "document", or "webworker".
		 * 
		 * @since 6.2
		 */
		const OpString & GetDescription() const
		{
			return _description;
		}

		/**
		 * Get the field @c windowIDList.
		 * 
		 * A list of all windows this runtime is associated with. Normally, this
		 * will only contain one window, but some runtimes, for instance shared
		 * WebWorkers, can be associated with multiple (zero or more) windows.
		 * 
		 * @since 6.2
		 */
		const OpValueVector<UINT32> & GetWindowIDList() const
		{
			return _windowIDList;
		}

		/**
		 * Get the field @c extensionName.
		 * 
		 * The name of the extension if this runtime is associated with an extension.
		 * Only set for an 'extensionjs' runtime.
		 * 
		 * @since 6.14
		 */
		const OpString & GetExtensionName() const
		{
			return _extensionName;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c htmlFramePath.
		 */
		OP_STATUS SetHtmlFramePath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c windowID.
		 * 
		 * The ID of the window this runtime is associated with, if the runtime is
		 * associated with a single window. If the runtime is associated with more
		 * (or less) than one window, the field will be set to zero. Refer to the
		 * ``windowIDList`` field for more information.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c objectID.
		 * 
		 * the 'global' object
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c uri.
		 * 
		 * the document's URI
		 */
		OP_STATUS SetUri(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c description.
		 * 
		 * A short description of the nature of the runtime, for instance
		 * "document", or "webworker".
		 * 
		 * @since 6.2
		 */
		OpString & GetDescriptionRef();

		/**
		 * Set the field @c windowIDList.
		 * 
		 * A list of all windows this runtime is associated with. Normally, this
		 * will only contain one window, but some runtimes, for instance shared
		 * WebWorkers, can be associated with multiple (zero or more) windows.
		 * 
		 * @since 6.2
		 */
		OpValueVector<UINT32> & GetWindowIDListRef();

		/**
		 * Set the field @c windowIDList.
		 * 
		 * A list of all windows this runtime is associated with. Normally, this
		 * will only contain one window, but some runtimes, for instance shared
		 * WebWorkers, can be associated with multiple (zero or more) windows.
		 * 
		 * @since 6.2
		 */
		OP_STATUS AppendToWindowIDList(UINT32 v);

		/**
		 * Set the field @c extensionName.
		 * 
		 * The name of the extension if this runtime is associated with an extension.
		 * Only set for an 'extensionjs' runtime.
		 * 
		 * @since 6.14
		 */
		OP_STATUS SetExtensionName(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpString _htmlFramePath;
		UINT32 _windowID;
		UINT32 _objectID;
		OpString _uri;
		OpString _description;
		OpValueVector<UINT32> _windowIDList;
		OpString _extensionName;

		OpProtobufBitField<8> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * The drawing order is box, reference-box-frame, box-frame, grid.
	 */
	class SpotlightObject
	{
	public:
		// BEGIN: Nested items

		// Message SpotlightObject.SpotlightBox
		typedef SpotlightObject_SpotlightBox SpotlightBox;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		SpotlightObject(
			UINT32 object_id_arg = 0,
			BOOL scroll_into_view_arg = FALSE
			)
			: _objectID(object_id_arg)
			, _scrollIntoView(scroll_into_view_arg)
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
		 * Check if the field @c objectID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c scrollIntoView is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasScrollIntoView() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c boxList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBoxList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c objectID.
		 */
		UINT32 GetObjectID() const
		{
			return _objectID;
		}

		/**
		 * Get the field @c scrollIntoView.
		 * 
		 * Chooses whether the given object should be scrolled into view or not.
		 */
		BOOL GetScrollIntoView() const
		{
			return _scrollIntoView;
		}

		/**
		 * Get the field @c boxList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox> & GetBoxList() const
		{
			return _boxList;
		}

		// Setters

		/**
		 * Set the field @c objectID.
		 */
		void SetObjectID(UINT32 v)
		{
			_objectID = v;
		}

		/**
		 * Set the field @c scrollIntoView.
		 * 
		 * Chooses whether the given object should be scrolled into view or not.
		 */
		void SetScrollIntoView(BOOL v)
		{
			_scrollIntoView = v;
		}

		/**
		 * Set the field @c boxList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox> & GetBoxListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _objectID;
		BOOL _scrollIntoView;
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::SpotlightObject_SpotlightBox> _boxList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class BacktraceSelection
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		BacktraceSelection(
			UINT32 runtime_id_arg = 0,
			UINT32 thread_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _threadID(thread_id_arg)
			, _maxFrames(0)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c threadID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasThreadID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c maxFrames is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxFrames() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c threadID.
		 */
		UINT32 GetThreadID() const
		{
			return _threadID;
		}

		/**
		 * Get the field @c maxFrames.
		 * 
		 * If omitted (or 0) all frames are returned.
		 */
		UINT32 GetMaxFrames() const
		{
			return _maxFrames;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c threadID.
		 */
		void SetThreadID(UINT32 v)
		{
			_threadID = v;
		}

		/**
		 * Set the field @c maxFrames.
		 * 
		 * If omitted (or 0) all frames are returned.
		 */
		void SetMaxFrames(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_maxFrames = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		UINT32 _threadID;
		UINT32 _maxFrames;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class BreakpointID
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		BreakpointID(
			UINT32 breakpoint_id_arg = 0
			)
			: _breakpointID(breakpoint_id_arg)
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
		 * Check if the field @c breakpointID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasBreakpointID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c breakpointID.
		 * 
		 * See Breakpoint.breakpointID.
		 */
		UINT32 GetBreakpointID() const
		{
			return _breakpointID;
		}

		// Setters

		/**
		 * Set the field @c breakpointID.
		 * 
		 * See Breakpoint.breakpointID.
		 */
		void SetBreakpointID(UINT32 v)
		{
			_breakpointID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _breakpointID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ExamineList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 5
		};
		// END: Internal enums


		ExamineList(
			UINT32 runtime_id_arg = 0
			)
			: _runtimeID(runtime_id_arg)
			, _examinePrototypes(FALSE)
			, _skipNonenumerables(FALSE)
			, _filterProperties(FALSE)
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
		 * Check if the field @c runtimeID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasRuntimeID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c objectList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasObjectList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c examinePrototypes is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExaminePrototypes() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c skipNonenumerables is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSkipNonenumerables() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c filterProperties is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFilterProperties() const
		{
			return has_bits_.Reference().IsSet(4);
		}

		// Getters

		/**
		 * Get the field @c runtimeID.
		 */
		UINT32 GetRuntimeID() const
		{
			return _runtimeID;
		}

		/**
		 * Get the field @c objectList.
		 */
		const OpValueVector<UINT32> & GetObjectList() const
		{
			return _objectList;
		}

		/**
		 * Get the field @c examinePrototypes.
		 */
		BOOL GetExaminePrototypes() const
		{
			return _examinePrototypes;
		}

		/**
		 * Get the field @c skipNonenumerables.
		 */
		BOOL GetSkipNonenumerables() const
		{
			return _skipNonenumerables;
		}

		/**
		 * Get the field @c filterProperties.
		 */
		BOOL GetFilterProperties() const
		{
			return _filterProperties;
		}

		// Setters

		/**
		 * Set the field @c runtimeID.
		 */
		void SetRuntimeID(UINT32 v)
		{
			_runtimeID = v;
		}

		/**
		 * Set the field @c objectList.
		 */
		OpValueVector<UINT32> & GetObjectListRef();

		/**
		 * Set the field @c objectList.
		 */
		OP_STATUS AppendToObjectList(UINT32 v);

		/**
		 * Set the field @c examinePrototypes.
		 */
		void SetExaminePrototypes(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_examinePrototypes = v;
		}

		/**
		 * Set the field @c skipNonenumerables.
		 */
		void SetSkipNonenumerables(BOOL v)
		{
			has_bits_.Reference().SetBit(3);
			_skipNonenumerables = v;
		}

		/**
		 * Set the field @c filterProperties.
		 */
		void SetFilterProperties(BOOL v)
		{
			has_bits_.Reference().SetBit(4);
			_filterProperties = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _runtimeID;
		OpValueVector<UINT32> _objectList;
		BOOL _examinePrototypes;
		BOOL _skipNonenumerables;
		BOOL _filterProperties;

		OpProtobufBitField<5> has_bits_;
		mutable int                 encoded_size_;
	};


	class CssStylesheetList
	{
	public:
		// BEGIN: Nested items

		// Message CssStylesheetList.Stylesheet
		typedef CssStylesheetList_Stylesheet Stylesheet;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CssStylesheetList(
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
		 * Check if the field @c stylesheetList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStylesheetList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c stylesheetList.
		 */
		const OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet> & GetStylesheetList() const
		{
			return _stylesheetList;
		}

		// Setters

		/**
		 * Set the field @c stylesheetList.
		 */
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet> & GetStylesheetListRef();

		static const OpProtobufMessage *GetMessageDescriptor(ES_ScopeDebugFrontend_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<ES_ScopeDebugFrontend_MessageSet::CssStylesheetList_Stylesheet> _stylesheetList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class ES_ScopeDebugFrontend_Descriptors
{
public:
	ES_ScopeDebugFrontend_Descriptors();
	~ES_ScopeDebugFrontend_Descriptors();

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
		_gen_MessageOffs_node_info_attribute_,
		_gen_MessageOffs_backtrace_frame_,
		_gen_MessageOffs_backtrace_frame_list_,
		_gen_MessageOffs_backtrace_selection_,
		_gen_MessageOffs_break_selection_,
		_gen_MessageOffs_breakpoint_,
		_gen_MessageOffs_breakpoint_id_,
		_gen_MessageOffs_property_filter_class_mask_,
		_gen_MessageOffs_configuration_,
		_gen_MessageOffs_console_log_info_,
		_gen_MessageOffs_console_profile_end_info_,
		_gen_MessageOffs_console_profile_info_,
		_gen_MessageOffs_console_time_end_info_,
		_gen_MessageOffs_console_time_info_,
		_gen_MessageOffs_console_trace_info_,
		_gen_MessageOffs_css_element_selection_,
		_gen_MessageOffs_css_index_map_,
		_gen_MessageOffs_css_style_declarations_,
		_gen_MessageOffs_css_stylesheet_list_,
		_gen_MessageOffs_css_stylesheet_rules_,
		_gen_MessageOffs_css_stylesheet_selection_,
		_gen_MessageOffs_dom_event_,
		_gen_MessageOffs_dom_parse_error_,
		_gen_MessageOffs_dom_traversal_,
		_gen_MessageOffs_eval_data_,
		_gen_MessageOffs_eval_result_,
		_gen_MessageOffs_event_breakpoint_,
		_gen_MessageOffs_event_handler_,
		_gen_MessageOffs_event_handler_id_,
		_gen_MessageOffs_event_listener_,
		_gen_MessageOffs_event_names_,
		_gen_MessageOffs_event_target_,
		_gen_MessageOffs_event_targets_,
		_gen_MessageOffs_examine_list_,
		_gen_MessageOffs_frame_selection_,
		_gen_MessageOffs_function_call_completed_info_,
		_gen_MessageOffs_function_call_starting_info_,
		_gen_MessageOffs_function_filter_,
		_gen_MessageOffs_function_position_list_function_position_,
		_gen_MessageOffs_function_position_list_,
		_gen_MessageOffs_get_event_listeners_arg_,
		_gen_MessageOffs_get_event_names_arg_,
		_gen_MessageOffs_get_function_positions_arg_,
		_gen_MessageOffs_node_info_,
		_gen_MessageOffs_node_list_,
		_gen_MessageOffs_css_style_declarations_node_style_,
		_gen_MessageOffs_object_chain_list_,
		_gen_MessageOffs_object_info_,
		_gen_MessageOffs_object_list_,
		_gen_MessageOffs_object_reference_,
		_gen_MessageOffs_object_selection_,
		_gen_MessageOffs_object_value_,
		_gen_MessageOffs_position_,
		_gen_MessageOffs_object_info_property_,
		_gen_MessageOffs_property_filter_,
		_gen_MessageOffs_property_filter_class_mask_property_mask_,
		_gen_MessageOffs_pseudo_element_,
		_gen_MessageOffs_ready_state_info_,
		_gen_MessageOffs_release_objects_arg_,
		_gen_MessageOffs_return_value_,
		_gen_MessageOffs_runtime_id_,
		_gen_MessageOffs_runtime_info_,
		_gen_MessageOffs_runtime_list_,
		_gen_MessageOffs_runtime_selection_,
		_gen_MessageOffs_script_info_,
		_gen_MessageOffs_search_dom_arg_,
		_gen_MessageOffs_set_property_filter_arg_,
		_gen_MessageOffs_spotlight_object_spotlight_box_,
		_gen_MessageOffs_spotlight_object_,
		_gen_MessageOffs_spotlight_object_selection_,
		_gen_MessageOffs_spotlight_selection_,
		_gen_MessageOffs_css_style_declarations_node_style_style_declaration_,
		_gen_MessageOffs_css_stylesheet_list_stylesheet_,
		_gen_MessageOffs_css_stylesheet_rules_stylesheet_rule_,
		_gen_MessageOffs_thread_info_,
		_gen_MessageOffs_thread_migration_,
		_gen_MessageOffs_thread_mode_,
		_gen_MessageOffs_thread_result_,
		_gen_MessageOffs_thread_stop_info_,
		_gen_MessageOffs_console_log_info_value_,
		_gen_MessageOffs_value_,
		_gen_MessageOffs_eval_data_variable_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_node_info_attribute_
		, _gen_MsgID_backtrace_frame_
		, _gen_MsgID_backtrace_frame_list_
		, _gen_MsgID_backtrace_selection_
		, _gen_MsgID_break_selection_
		, _gen_MsgID_breakpoint_
		, _gen_MsgID_breakpoint_id_
		, _gen_MsgID_property_filter_class_mask_
		, _gen_MsgID_configuration_
		, _gen_MsgID_console_log_info_
		, _gen_MsgID_console_profile_end_info_
		, _gen_MsgID_console_profile_info_
		, _gen_MsgID_console_time_end_info_
		, _gen_MsgID_console_time_info_
		, _gen_MsgID_console_trace_info_
		, _gen_MsgID_css_element_selection_
		, _gen_MsgID_css_index_map_
		, _gen_MsgID_css_style_declarations_
		, _gen_MsgID_css_stylesheet_list_
		, _gen_MsgID_css_stylesheet_rules_
		, _gen_MsgID_css_stylesheet_selection_
		, _gen_MsgID_dom_event_
		, _gen_MsgID_dom_parse_error_
		, _gen_MsgID_dom_traversal_
		, _gen_MsgID_eval_data_
		, _gen_MsgID_eval_result_
		, _gen_MsgID_event_breakpoint_
		, _gen_MsgID_event_handler_
		, _gen_MsgID_event_handler_id_
		, _gen_MsgID_event_listener_
		, _gen_MsgID_event_names_
		, _gen_MsgID_event_target_
		, _gen_MsgID_event_targets_
		, _gen_MsgID_examine_list_
		, _gen_MsgID_frame_selection_
		, _gen_MsgID_function_call_completed_info_
		, _gen_MsgID_function_call_starting_info_
		, _gen_MsgID_function_filter_
		, _gen_MsgID_function_position_list_function_position_
		, _gen_MsgID_function_position_list_
		, _gen_MsgID_get_event_listeners_arg_
		, _gen_MsgID_get_event_names_arg_
		, _gen_MsgID_get_function_positions_arg_
		, _gen_MsgID_node_info_
		, _gen_MsgID_node_list_
		, _gen_MsgID_css_style_declarations_node_style_
		, _gen_MsgID_object_chain_list_
		, _gen_MsgID_object_info_
		, _gen_MsgID_object_list_
		, _gen_MsgID_object_reference_
		, _gen_MsgID_object_selection_
		, _gen_MsgID_object_value_
		, _gen_MsgID_position_
		, _gen_MsgID_object_info_property_
		, _gen_MsgID_property_filter_
		, _gen_MsgID_property_filter_class_mask_property_mask_
		, _gen_MsgID_pseudo_element_
		, _gen_MsgID_ready_state_info_
		, _gen_MsgID_release_objects_arg_
		, _gen_MsgID_return_value_
		, _gen_MsgID_runtime_id_
		, _gen_MsgID_runtime_info_
		, _gen_MsgID_runtime_list_
		, _gen_MsgID_runtime_selection_
		, _gen_MsgID_script_info_
		, _gen_MsgID_search_dom_arg_
		, _gen_MsgID_set_property_filter_arg_
		, _gen_MsgID_spotlight_object_spotlight_box_
		, _gen_MsgID_spotlight_object_
		, _gen_MsgID_spotlight_object_selection_
		, _gen_MsgID_spotlight_selection_
		, _gen_MsgID_css_style_declarations_node_style_style_declaration_
		, _gen_MsgID_css_stylesheet_list_stylesheet_
		, _gen_MsgID_css_stylesheet_rules_stylesheet_rule_
		, _gen_MsgID_thread_info_
		, _gen_MsgID_thread_migration_
		, _gen_MsgID_thread_mode_
		, _gen_MsgID_thread_result_
		, _gen_MsgID_thread_stop_info_
		, _gen_MsgID_console_log_info_value_
		, _gen_MsgID_value_
		, _gen_MsgID_eval_data_variable_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for Type
		_gen_EnumID_PseudoElement_Type,
		// Meta info for NodeType
		_gen_EnumID_NodeType,
		// Meta info for Origin
		_gen_EnumID_EventListener_Origin,
		// Meta info for MatchReason
		_gen_EnumID_NodeInfo_MatchReason,
		// Meta info for PseudoSelector
		_gen_EnumID_PseudoSelector,
		// Meta info for Type
		_gen_EnumID_Value_Type,
		// Meta info for RuleOrigin
		_gen_EnumID_RuleOrigin,
		// Meta info for DeclarationStatus
		_gen_EnumID_DeclarationStatus,
		// Meta info for Type
		_gen_EnumID_SearchDomArg_Type,
		// Meta info for ConsoleLogType
		_gen_EnumID_ConsoleLogType,
		// Meta info for Result
		_gen_EnumID_FunctionCallCompletedInfo_Result,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for Type
		_gen_EnumValueCount_PseudoElement_Type = 4,
		// Meta info for NodeType
		_gen_EnumValueCount_NodeType = 15,
		// Meta info for Origin
		_gen_EnumValueCount_EventListener_Origin = 2,
		// Meta info for MatchReason
		_gen_EnumValueCount_NodeInfo_MatchReason = 3,
		// Meta info for PseudoSelector
		_gen_EnumValueCount_PseudoSelector = 11,
		// Meta info for Type
		_gen_EnumValueCount_Value_Type = 10,
		// Meta info for RuleOrigin
		_gen_EnumValueCount_RuleOrigin = 5,
		// Meta info for DeclarationStatus
		_gen_EnumValueCount_DeclarationStatus = 2,
		// Meta info for Type
		_gen_EnumValueCount_SearchDomArg_Type = 5,
		// Meta info for ConsoleLogType
		_gen_EnumValueCount_ConsoleLogType = 14,
		// Meta info for Result
		_gen_EnumValueCount_FunctionCallCompletedInfo_Result = 2,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for Type
		_gen_Enum_PseudoElement_Type,
		// Meta info for NodeType
		_gen_Enum_NodeType,
		// Meta info for Origin
		_gen_Enum_EventListener_Origin,
		// Meta info for MatchReason
		_gen_Enum_NodeInfo_MatchReason,
		// Meta info for PseudoSelector
		_gen_Enum_PseudoSelector,
		// Meta info for Type
		_gen_Enum_Value_Type,
		// Meta info for RuleOrigin
		_gen_Enum_RuleOrigin,
		// Meta info for DeclarationStatus
		_gen_Enum_DeclarationStatus,
		// Meta info for Type
		_gen_Enum_SearchDomArg_Type,
		// Meta info for ConsoleLogType
		_gen_Enum_ConsoleLogType,
		// Meta info for Result
		_gen_Enum_FunctionCallCompletedInfo_Result,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[11];

};


class ES_ScopeDebugFrontend_SI
	: public OpScopeService
	, public ES_ScopeDebugFrontend_MessageSet
{
public:
	ES_ScopeDebugFrontend_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~ES_ScopeDebugFrontend_SI();

	enum CommandEnum
	{
		  Command_ListRuntimes = 1
		, Command_ContinueThread = 2
		, Command_Eval = 3
		, Command_ExamineObjects = 4
		, Command_SpotlightObject = 5
		, Command_AddBreakpoint = 6
		, Command_RemoveBreakpoint = 7
		, Command_AddEventHandler = 8
		, Command_RemoveEventHandler = 9
		, Command_SetConfiguration = 10
		, Command_GetBacktrace = 11
		, Command_Break = 12
		, Command_InspectDom = 13
		, Command_OnRuntimeStarted = 14
		, Command_OnRuntimeStopped = 15
		, Command_OnNewScript = 16
		, Command_OnThreadStarted = 17
		, Command_OnThreadFinished = 18
		, Command_OnThreadStoppedAt = 19
		, Command_OnHandleEvent = 20
		, Command_OnObjectSelected = 21
		, Command_CssGetIndexMap = 22
		, Command_CssGetAllStylesheets = 23
		, Command_CssGetStylesheet = 24
		, Command_CssGetStyleDeclarations = 25
		, Command_GetSelectedObject = 26
		, Command_SpotlightObjects = 27
		, Command_OnParseError = 28
		, Command_ReleaseObjects = 29
		, Command_SetPropertyFilter = 30
		, Command_OnReadyStateChanged = 31
		, Command_OnConsoleLog = 32
		, Command_OnConsoleTime = 33
		, Command_OnConsoleTimeEnd = 34
		, Command_OnConsoleTrace = 35
		, Command_OnConsoleProfile = 36
		, Command_OnConsoleProfileEnd = 37
		, Command_AddEventBreakpoint = 38
		, Command_SetFunctionFilter = 39
		, Command_OnFunctionCallStarting = 40
		, Command_OnFunctionCallCompleted = 41
		, Command_SearchDom = 42
		, Command_OnThreadMigrated = 43
		, Command_GetFunctionPositions = 44
		, Command_GetEventNames = 45
		, Command_GetEventListeners = 46

		, Command_Count = 46 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public ES_ScopeDebugFrontend_Descriptors
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
	virtual OP_STATUS DoListRuntimes(const RuntimeSelection &in, RuntimeList &out) = 0;
	virtual OP_STATUS DoContinueThread(const ThreadMode &in) = 0;
	virtual OP_STATUS DoSpotlightObject(const SpotlightObjectSelection &in) = 0;
	virtual OP_STATUS DoAddBreakpoint(const Breakpoint &in) = 0;
	virtual OP_STATUS DoRemoveBreakpoint(const BreakpointID &in) = 0;
	virtual OP_STATUS DoAddEventHandler(const EventHandler &in) = 0;
	virtual OP_STATUS DoRemoveEventHandler(const EventHandlerID &in) = 0;
	virtual OP_STATUS DoSetConfiguration(const Configuration &in) = 0;
	virtual OP_STATUS DoGetBacktrace(const BacktraceSelection &in, BacktraceFrameList &out) = 0;
	virtual OP_STATUS DoBreak(const BreakSelection &in) = 0;
	virtual OP_STATUS DoInspectDom(const DomTraversal &in, NodeList &out) = 0;
	virtual OP_STATUS DoCssGetIndexMap(CssIndexMap &out) = 0;
	virtual OP_STATUS DoCssGetAllStylesheets(const RuntimeID &in, CssStylesheetList &out) = 0;
	virtual OP_STATUS DoCssGetStylesheet(const CssStylesheetSelection &in, CssStylesheetRules &out) = 0;
	virtual OP_STATUS DoCssGetStyleDeclarations(const CssElementSelection &in, CssStyleDeclarations &out) = 0;
	virtual OP_STATUS DoGetSelectedObject(ObjectSelection &out) = 0;
	virtual OP_STATUS DoSpotlightObjects(const SpotlightSelection &in) = 0;
	virtual OP_STATUS DoReleaseObjects(const ReleaseObjectsArg &in) = 0;
	virtual OP_STATUS DoSetPropertyFilter(const SetPropertyFilterArg &in) = 0;
	virtual OP_STATUS DoAddEventBreakpoint(const EventBreakpoint &in) = 0;
	virtual OP_STATUS DoSetFunctionFilter(const FunctionFilter &in) = 0;
	virtual OP_STATUS DoSearchDom(const SearchDomArg &in, NodeList &out) = 0;
	virtual OP_STATUS DoGetFunctionPositions(const GetFunctionPositionsArg &in, FunctionPositionList &out) = 0;
	virtual OP_STATUS DoGetEventNames(const GetEventNamesArg &in, EventNames &out) = 0;
	virtual OP_STATUS DoGetEventListeners(const GetEventListenersArg &in, EventTargets &out) = 0;
	virtual OP_STATUS DoEval(const EvalData &in, unsigned int async_tag) = 0;
	virtual OP_STATUS DoExamineObjects(const ExamineList &in, unsigned int async_tag) = 0;

	// Event functions
	OP_STATUS SendOnRuntimeStarted(const RuntimeInfo &msg);
	OP_STATUS SendOnRuntimeStopped(const RuntimeID &msg);
	OP_STATUS SendOnNewScript(const ScriptInfo &msg);
	OP_STATUS SendOnThreadStarted(const ThreadInfo &msg);
	OP_STATUS SendOnThreadFinished(const ThreadResult &msg);
	OP_STATUS SendOnThreadStoppedAt(const ThreadStopInfo &msg);
	OP_STATUS SendOnHandleEvent(const DomEvent &msg);
	OP_STATUS SendOnObjectSelected(const ObjectSelection &msg);
	OP_STATUS SendOnParseError(const DomParseError &msg);
	OP_STATUS SendOnReadyStateChanged(const ReadyStateInfo &msg);
	OP_STATUS SendOnConsoleLog(const ConsoleLogInfo &msg);
	OP_STATUS SendOnConsoleTime(const ConsoleTimeInfo &msg);
	OP_STATUS SendOnConsoleTimeEnd(const ConsoleTimeEndInfo &msg);
	OP_STATUS SendOnConsoleTrace(const ConsoleTraceInfo &msg);
	OP_STATUS SendOnConsoleProfile(const ConsoleProfileInfo &msg);
	OP_STATUS SendOnConsoleProfileEnd(const ConsoleProfileEndInfo &msg);
	OP_STATUS SendOnFunctionCallStarting(const FunctionCallStartingInfo &msg);
	OP_STATUS SendOnFunctionCallCompleted(const FunctionCallCompletedInfo &msg);
	OP_STATUS SendOnThreadMigrated(const ThreadMigration &msg);
	OP_STATUS SendEval(const EvalResult &msg, unsigned int tag);
	OP_STATUS SendExamineObjects(const ObjectChainList &msg, unsigned int tag);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_ECMASCRIPT_DEBUGGER

#endif // G_SCOPE_ECMASCRIPT_DEBUGGER_INTERFACE_H
