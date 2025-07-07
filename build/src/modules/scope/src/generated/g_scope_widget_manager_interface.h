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

// Generated from ../../modules/scope/services/widget_manager/widget_manager.proto



#ifndef G_SCOPE_WIDGET_MANAGER_INTERFACE_H
#define G_SCOPE_WIDGET_MANAGER_INTERFACE_H

#ifdef SCOPE_WIDGET_MANAGER_SUPPORT

#include "modules/protobuf/src/opvaluevector.h"
#include "modules/protobuf/src/protobuf_message.h"
#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/bytebuffer.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeWidgetManager_Descriptors;

class OpScopeWidgetManager_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeWidgetManager_MessageSet();
	virtual ~OpScopeWidgetManager_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum ExtensionFlag_FlagType
	{
	    ExtensionFlag_FlagType_FLAGTYPE_ALLOW_USERJS_HTTPS = 1,
	    ExtensionFlag_FlagType_FLAGTYPE_ALLOW_USERJS_PRIVATE = 2
	};

	enum Widget_Type
	{
	    Widget_Type_TYPE_WIDGET = 1,
	    Widget_Type_TYPE_UNITE = 2,
	    Widget_Type_TYPE_EXTENSION = 3
	};

	enum Widget_WidgetType
	{
	    Widget_WidgetType_WIDGETTYPE_UNKNOWN = 1,
	    Widget_WidgetType_WIDGETTYPE_CHROMELESS = 2,
	    Widget_WidgetType_WIDGETTYPE_WINDOWED = 3,
	    Widget_WidgetType_WIDGETTYPE_TOOLBAR = 4
	};

	enum Widget_ViewMode
	{
	    Widget_ViewMode_VIEWMODE_UNKNOWN = 1,
	    Widget_ViewMode_VIEWMODE_WIDGET = 2,
	    Widget_ViewMode_VIEWMODE_FLOATING = 3,
	    Widget_ViewMode_VIEWMODE_DOCKED = 4,
	    Widget_ViewMode_VIEWMODE_APPLICATION = 5,
	    Widget_ViewMode_VIEWMODE_FULLSCREEN = 6,
	    Widget_ViewMode_VIEWMODE_MAXIMIZED = 7,
	    Widget_ViewMode_VIEWMODE_MINIMIZED = 8,
	    Widget_ViewMode_VIEWMODE_WINDOWED = 9
	};

	enum Widget_Signature_State
	{
	    Widget_Signature_State_STATE_UNKNOWN = 1,
	    Widget_Signature_State_STATE_UNSIGNED = 2,
	    Widget_Signature_State_STATE_SIGNED = 3,
	    Widget_Signature_State_STATE_VERIFICATION_FAILED = 4,
	    Widget_Signature_State_STATE_PENDING = 5
	};

	enum Widget_UniteInfo_Type
	{
	    Widget_UniteInfo_Type_TYPE_UNKNOWN = 1,
	    Widget_UniteInfo_Type_TYPE_SERVICE = 2,
	    Widget_UniteInfo_Type_TYPE_APPLICATION = 3
	};

	enum Widget_UpdateInfo_UpdateType
	{
	    Widget_UpdateInfo_UpdateType_UPDATETYPE_UNKNOWN = 1,
	    Widget_UpdateInfo_UpdateType_UPDATETYPE_UPDATE = 2,
	    Widget_UpdateInfo_UpdateType_UPDATETYPE_DISABLE = 3,
	    Widget_UpdateInfo_UpdateType_UPDATETYPE_ACTIVATE = 4,
	    Widget_UpdateInfo_UpdateType_UPDATETYPE_DELETE = 5,
	    Widget_UpdateInfo_UpdateType_UPDATETYPE_NO_UPDATE = 6
	};

	enum WidgetInstallResult_Result
	{
	    WidgetInstallResult_Result_RESULT_UNKNOWN = 1,
	    WidgetInstallResult_Result_RESULT_DOWNLOAD_FAILED = 2,
	    WidgetInstallResult_Result_RESULT_NOT_ENOUGH_SPACE = 3,
	    WidgetInstallResult_Result_RESULT_INSTALL_FAILED = 4,
	    WidgetInstallResult_Result_RESULT_INSTALL_SUCCESSFUL = 5
	};

	enum WidgetUpdateResult_Result
	{
	    WidgetUpdateResult_Result_RESULT_UNKNOWN = 1,
	    WidgetUpdateResult_Result_RESULT_DOWNLOAD_FAILED = 2,
	    WidgetUpdateResult_Result_RESULT_NOT_ENOUGH_SPACE = 3,
	    WidgetUpdateResult_Result_RESULT_UPDATE_FAILED = 4,
	    WidgetUpdateResult_Result_RESULT_UPDATE_SUCCESSFUL = 5
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class Widget_SecurityAccess_Port;
	class Widget_Feature_Param;
	class Widget_UserJS;
	class Widget_UpdateInfo;
	class Widget_UniteInfo;
	class Widget_ExtensionInfo;
	class Widget_SecurityAccess;
	class Widget_Network;
	class Widget_Signature;
	class Widget_Preference;
	class Widget_Feature;
	class Widget_Content;
	class Widget_Icon;
	class Widget_License;
	class Widget_Description;
	class Widget_Author;
	class Widget_Name;
	class WidgetUninstalled;
	class WidgetUpdateResult;
	class WidgetInstallResult;
	class UninstallWidgetArg;
	class InstallWidgetByURLArg;
	class ExtensionFlag;
	class GetExtensionFlagArg;
	class SetExtensionFlagArg;
	class UpdateWidgetArg;
	class InstallWidgetArg;
	class RemoveInstallerArg;
	class UpdateInstallerArg;
	class Installer;
	class CreateInstallerArg;
	class CloseWidgetArg;
	class OpenWidgetArg;
	class WidgetList;
	class Widget_Properties;
	class Widget;
	class Settings;

	/**
	 * Represents a range of ports the widget may use, e.g. 1024-2048
	 * If only a single port is defined then both low and high will contain the same value.
	 */
	class Widget_SecurityAccess_Port
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Widget_SecurityAccess_Port(
			UINT32 low_arg = 0,
			UINT32 high_arg = 0
			)
			: _low(low_arg)
			, _high(high_arg)
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
		 * Check if the field @c low is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLow() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c high is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHigh() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c low.
		 */
		UINT32 GetLow() const
		{
			return _low;
		}

		/**
		 * Get the field @c high.
		 */
		UINT32 GetHigh() const
		{
			return _high;
		}

		// Setters

		/**
		 * Set the field @c low.
		 */
		void SetLow(UINT32 v)
		{
			_low = v;
		}

		/**
		 * Set the field @c high.
		 */
		void SetHigh(UINT32 v)
		{
			_high = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _low;
		UINT32 _high;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A parameter for a feature, defined as a name/value pair. The meaning
	 * of the name and value depends entirely on the feature.
	 * 
	 * 7.14
	 * http://www.w3.org/TR/widgets/#param
	 */
	class Widget_Feature_Param
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Widget_Feature_Param(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_value.Set(value_arg));
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
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
		 * Get the field @c value.
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c name.
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpString _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Widget_UserJS
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Widget_UserJS(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & filename_arg
			)
		{
			RETURN_IF_ERROR(_filename.Set(filename_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c filename is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFilename() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c filename.
		 * 
		 * Absolute path to the file representing this userjs.
		 */
		const OpString & GetFilename() const
		{
			return _filename;
		}

		// Setters

		/**
		 * Set the field @c filename.
		 * 
		 * Absolute path to the file representing this userjs.
		 */
		OP_STATUS SetFilename(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _filename;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class Widget_UpdateInfo
	{
	public:
		// BEGIN: Nested items

		// Enum Widget.UpdateInfo.UpdateType
		typedef Widget_UpdateInfo_UpdateType UpdateType;
		static const Widget_UpdateInfo_UpdateType UPDATETYPE_UNKNOWN = Widget_UpdateInfo_UpdateType_UPDATETYPE_UNKNOWN;
		static const Widget_UpdateInfo_UpdateType UPDATETYPE_UPDATE = Widget_UpdateInfo_UpdateType_UPDATETYPE_UPDATE;
		static const Widget_UpdateInfo_UpdateType UPDATETYPE_DISABLE = Widget_UpdateInfo_UpdateType_UPDATETYPE_DISABLE;
		static const Widget_UpdateInfo_UpdateType UPDATETYPE_ACTIVATE = Widget_UpdateInfo_UpdateType_UPDATETYPE_ACTIVATE;
		static const Widget_UpdateInfo_UpdateType UPDATETYPE_DELETE = Widget_UpdateInfo_UpdateType_UPDATETYPE_DELETE;
		static const Widget_UpdateInfo_UpdateType UPDATETYPE_NO_UPDATE = Widget_UpdateInfo_UpdateType_UPDATETYPE_NO_UPDATE;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 9
		};
		// END: Internal enums


		Widget_UpdateInfo(
			Widget_UpdateInfo_UpdateType update_type_arg = Widget_UpdateInfo_UpdateType_UPDATETYPE_UNKNOWN,
			BOOL is_mandatory_arg = FALSE,
			double last_modified_arg = 0.0,
			UINT32 size_arg = 0
			)
			: _updateType(update_type_arg)
			, _isMandatory(is_mandatory_arg)
			, _lastModified(last_modified_arg)
			, _size(size_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & custom_widget_id_arg,
			const OpString & version_arg,
			const OpString & src_arg,
			const OpString & details_arg,
			const OpString * document_uri_arg = NULL
			)
		{
			RETURN_IF_ERROR(_customWidgetID.Set(custom_widget_id_arg));
			RETURN_IF_ERROR(_version.Set(version_arg));
			RETURN_IF_ERROR(_src.Set(src_arg));
			RETURN_IF_ERROR(_details.Set(details_arg));
			if (document_uri_arg)
			{
				RETURN_IF_ERROR(_documentUri.Set(*document_uri_arg));
				has_bits_.Reference().SetBit(8);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c customWidgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCustomWidgetID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c updateType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUpdateType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isMandatory is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsMandatory() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c version is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVersion() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c lastModified is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLastModified() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c src is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSrc() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c size is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSize() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c details is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDetails() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c documentUri is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDocumentUri() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		// Getters

		/**
		 * Get the field @c customWidgetID.
		 * 
		 * Widget id (not the same as widget uid, which is called id...), specified in config.xml
		 */
		const OpString & GetCustomWidgetID() const
		{
			return _customWidgetID;
		}

		/**
		 * Get the field @c updateType.
		 * 
		 * What type of update this is (update, disable, activate, delete)
		 */
		OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType GetUpdateType() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType>(_updateType);
		}

		/**
		 * Get the field @c isMandatory.
		 * 
		 * This is a mandatory update.
		 */
		BOOL GetIsMandatory() const
		{
			return _isMandatory;
		}

		/**
		 * Get the field @c version.
		 * 
		 * Version of the updated widget.
		 */
		const OpString & GetVersion() const
		{
			return _version;
		}

		/**
		 * Get the field @c lastModified.
		 * 
		 * Last visited time on 'src' URI
		 */
		double GetLastModified() const
		{
			return _lastModified;
		}

		/**
		 * Get the field @c src.
		 * 
		 * URI pointing to the updated widget.
		 */
		const OpString & GetSrc() const
		{
			return _src;
		}

		/**
		 * Get the field @c size.
		 * 
		 * Size of the widget archive (or 0 if unknown).
		 */
		UINT32 GetSize() const
		{
			return _size;
		}

		/**
		 * Get the field @c details.
		 * 
		 * Detail text as returned by the update server.
		 */
		const OpString & GetDetails() const
		{
			return _details;
		}

		/**
		 * Get the field @c documentUri.
		 * 
		 * URI that could point to an additional information document.
		 */
		const OpString & GetDocumentUri() const
		{
			return _documentUri;
		}

		// Setters

		/**
		 * Set the field @c customWidgetID.
		 * 
		 * Widget id (not the same as widget uid, which is called id...), specified in config.xml
		 */
		OP_STATUS SetCustomWidgetID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c updateType.
		 * 
		 * What type of update this is (update, disable, activate, delete)
		 */
		void SetUpdateType(OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType v);

		/**
		 * Set the field @c isMandatory.
		 * 
		 * This is a mandatory update.
		 */
		void SetIsMandatory(BOOL v)
		{
			_isMandatory = v;
		}

		/**
		 * Set the field @c version.
		 * 
		 * Version of the updated widget.
		 */
		OP_STATUS SetVersion(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c lastModified.
		 * 
		 * Last visited time on 'src' URI
		 */
		void SetLastModified(double v)
		{
			_lastModified = v;
		}

		/**
		 * Set the field @c src.
		 * 
		 * URI pointing to the updated widget.
		 */
		OP_STATUS SetSrc(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c size.
		 * 
		 * Size of the widget archive (or 0 if unknown).
		 */
		void SetSize(UINT32 v)
		{
			_size = v;
		}

		/**
		 * Set the field @c details.
		 * 
		 * Detail text as returned by the update server.
		 */
		OP_STATUS SetDetails(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c documentUri.
		 * 
		 * URI that could point to an additional information document.
		 */
		OP_STATUS SetDocumentUri(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _customWidgetID;
		INT32 _updateType;
		BOOL _isMandatory;
		OpString _version;
		double _lastModified;
		OpString _src;
		UINT32 _size;
		OpString _details;
		OpString _documentUri;

		OpProtobufBitField<9> has_bits_;
		mutable int                 encoded_size_;
	};


	class Widget_UniteInfo
	{
	public:
		// BEGIN: Nested items

		// Enum Widget.UniteInfo.Type
		typedef Widget_UniteInfo_Type Type;
		static const Widget_UniteInfo_Type TYPE_UNKNOWN = Widget_UniteInfo_Type_TYPE_UNKNOWN;
		static const Widget_UniteInfo_Type TYPE_SERVICE = Widget_UniteInfo_Type_TYPE_SERVICE;
		static const Widget_UniteInfo_Type TYPE_APPLICATION = Widget_UniteInfo_Type_TYPE_APPLICATION;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Widget_UniteInfo(
			Widget_UniteInfo_Type type_arg = Widget_UniteInfo_Type_TYPE_UNKNOWN
			)
			: _type(type_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * service_path_arg = NULL
			)
		{
			if (service_path_arg)
			{
				RETURN_IF_ERROR(_servicePath.Set(*service_path_arg));
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
		 * Check if the field @c servicePath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasServicePath() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c type.
		 */
		OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type GetType() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type>(_type);
		}

		/**
		 * Get the field @c servicePath.
		 * 
		 * The service path, e.g. "fridge".
		 */
		const OpString & GetServicePath() const
		{
			return _servicePath;
		}

		// Setters

		/**
		 * Set the field @c type.
		 */
		void SetType(OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type v);

		/**
		 * Set the field @c servicePath.
		 * 
		 * The service path, e.g. "fridge".
		 */
		OP_STATUS SetServicePath(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _type;
		OpString _servicePath;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Widget_ExtensionInfo
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Widget_ExtensionInfo(
			BOOL is_running_arg = FALSE
			)
			: _isRunning(is_running_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & includes_path_arg
			)
		{
			RETURN_IF_ERROR(_includesPath.Set(includes_path_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c includesPath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIncludesPath() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isRunning is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsRunning() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c includesPath.
		 * 
		 * Specifies the includes folder for the extension.
		 */
		const OpString & GetIncludesPath() const
		{
			return _includesPath;
		}

		/**
		 * Get the field @c isRunning.
		 * 
		 * True if the extension is currently running.
		 */
		BOOL GetIsRunning() const
		{
			return _isRunning;
		}

		// Setters

		/**
		 * Set the field @c includesPath.
		 * 
		 * Specifies the includes folder for the extension.
		 */
		OP_STATUS SetIncludesPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c isRunning.
		 * 
		 * True if the extension is currently running.
		 */
		void SetIsRunning(BOOL v)
		{
			_isRunning = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _includesPath;
		BOOL _isRunning;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Declares which protocols, hosts, ports, and paths the widget may use.
	 * 
	 * http://dev.opera.com/articles/view/opera-widgets-specification-1-0/#xmlsecurity
	 */
	class Widget_SecurityAccess
	{
	public:
		// BEGIN: Nested items

		// Message Widget.SecurityAccess.Port
		typedef Widget_SecurityAccess_Port Port;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Widget_SecurityAccess(
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
		 * Check if the field @c protocolList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProtocolList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c hostList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHostList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c portList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPortList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c pathList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPathList() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c protocolList.
		 * 
		 * The protocols the widget will be using to contact external servers. All protocols, except the file protocol is permitted.
		 * e.g. "http", "https"
		 * If the list is empty it means any protocol (excluding exceptions).
		 */
		const OpAutoVector<OpString> & GetProtocolList() const
		{
			return _protocolList;
		}

		/**
		 * Get the field @c hostList.
		 * 
		 * The hostnames/ip-addresses which the widget may use, e.g. "www.example.com" or "192.168.1.1"
		 * The hostnames is an exact match, so a widget specifying www.example.com will not be able to contact example.com.
		 * If the list is empty it means any host.
		 */
		const OpAutoVector<OpString> & GetHostList() const
		{
			return _hostList;
		}

		/**
		 * Get the field @c portList.
		 * 
		 * Ports which may be used by the widget.
		 * Each entry is a range of ports, e.g. 1024-2048
		 * If the list is empty it means port.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port> & GetPortList() const
		{
			return _portList;
		}

		/**
		 * Get the field @c pathList.
		 * 
		 * The path elements the widget may contact, e.g. "/foo"
		 * If the list is empty it means any path.
		 */
		const OpAutoVector<OpString> & GetPathList() const
		{
			return _pathList;
		}

		// Setters

		/**
		 * Set the field @c protocolList.
		 * 
		 * The protocols the widget will be using to contact external servers. All protocols, except the file protocol is permitted.
		 * e.g. "http", "https"
		 * If the list is empty it means any protocol (excluding exceptions).
		 */
		OpString * AppendNewProtocolList();

		/**
		 * Set the field @c hostList.
		 * 
		 * The hostnames/ip-addresses which the widget may use, e.g. "www.example.com" or "192.168.1.1"
		 * The hostnames is an exact match, so a widget specifying www.example.com will not be able to contact example.com.
		 * If the list is empty it means any host.
		 */
		OpString * AppendNewHostList();

		/**
		 * Set the field @c portList.
		 * 
		 * Ports which may be used by the widget.
		 * Each entry is a range of ports, e.g. 1024-2048
		 * If the list is empty it means port.
		 */
		OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port * AppendNewPortList();

		/**
		 * Set the field @c pathList.
		 * 
		 * The path elements the widget may contact, e.g. "/foo"
		 * If the list is empty it means any path.
		 */
		OpString * AppendNewPathList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _protocolList;
		OpAutoVector<OpString> _hostList;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port> _portList;
		OpAutoVector<OpString> _pathList;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Defines a request for permission to access a set of network resources.
	 * http://www.w3.org/TR/widgets-access/#the-access-element
	 */
	class Widget_Network
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Widget_Network(
			BOOL allow_subdomains_arg = FALSE
			)
			: _allowSubdomains(allow_subdomains_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & origin_arg
			)
		{
			RETURN_IF_ERROR(_origin.Set(origin_arg));
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
		 * Check if the field @c allowSubdomains is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAllowSubdomains() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c origin.
		 * 
		 * Defines the URL that the widget should get access to, e.g. "https://example.net"
		 * A special value of U+002A ASTERISK (*) means unrestricted access to any network resources.
		 */
		const OpString & GetOrigin() const
		{
			return _origin;
		}

		/**
		 * Get the field @c allowSubdomains.
		 * 
		 * Indicates whether or not the host component part of origin applies to subdomains as well.
		 * The default is not to allow subdomains.
		 */
		BOOL GetAllowSubdomains() const
		{
			return _allowSubdomains;
		}

		// Setters

		/**
		 * Set the field @c origin.
		 * 
		 * Defines the URL that the widget should get access to, e.g. "https://example.net"
		 * A special value of U+002A ASTERISK (*) means unrestricted access to any network resources.
		 */
		OP_STATUS SetOrigin(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c allowSubdomains.
		 * 
		 * Indicates whether or not the host component part of origin applies to subdomains as well.
		 * The default is not to allow subdomains.
		 */
		void SetAllowSubdomains(BOOL v)
		{
			_allowSubdomains = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _origin;
		BOOL _allowSubdomains;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Widget_Signature
	{
	public:
		// BEGIN: Nested items

		// Enum Widget.Signature.State
		typedef Widget_Signature_State State;
		static const Widget_Signature_State STATE_UNKNOWN = Widget_Signature_State_STATE_UNKNOWN;
		static const Widget_Signature_State STATE_UNSIGNED = Widget_Signature_State_STATE_UNSIGNED;
		static const Widget_Signature_State STATE_SIGNED = Widget_Signature_State_STATE_SIGNED;
		static const Widget_Signature_State STATE_VERIFICATION_FAILED = Widget_Signature_State_STATE_VERIFICATION_FAILED;
		static const Widget_Signature_State STATE_PENDING = Widget_Signature_State_STATE_PENDING;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_Signature(
			Widget_Signature_State state_arg = Widget_Signature_State_STATE_UNKNOWN
			)
			: _state(state_arg)
			, _isPrivilegedCert(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & id_arg
			)
		{
			RETURN_IF_ERROR(_id.Set(id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c id is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasId() const
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

		/**
		 * Check if the field @c isPrivilegedCert is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsPrivilegedCert() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c id.
		 * 
		 * Short name of the signature used.
		 */
		const OpString & GetId() const
		{
			return _id;
		}

		/**
		 * Get the field @c state.
		 * 
		 * The state of the signature, for instance whether verification failed
		 * or it was properly signed.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Signature_State GetState() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_Signature_State>(_state);
		}

		/**
		 * Get the field @c isPrivilegedCert.
		 * 
		 * Set to true if the widget has been signed with a privileged certificate.
		 */
		BOOL GetIsPrivilegedCert() const
		{
			return _isPrivilegedCert;
		}

		// Setters

		/**
		 * Set the field @c id.
		 * 
		 * Short name of the signature used.
		 */
		OP_STATUS SetId(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c state.
		 * 
		 * The state of the signature, for instance whether verification failed
		 * or it was properly signed.
		 */
		void SetState(OpScopeWidgetManager_MessageSet::Widget_Signature_State v);

		/**
		 * Set the field @c isPrivilegedCert.
		 * 
		 * Set to true if the widget has been signed with a privileged certificate.
		 */
		void SetIsPrivilegedCert(BOOL v)
		{
			has_bits_.Reference().SetBit(2);
			_isPrivilegedCert = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _id;
		INT32 _state;
		BOOL _isPrivilegedCert;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * The preference element allows authors to declare one or more preferences.
	 * Preferences are persistently stored in the browser.
	 * 
	 * 7.15
	 * http://www.w3.org/TR/widgets/#preference
	 */
	class Widget_Preference
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_Preference(
			BOOL is_read_only_arg = FALSE
			)
			: _isReadOnly(is_read_only_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & name_arg,
			const OpString & value_arg
			)
		{
			RETURN_IF_ERROR(_name.Set(name_arg));
			RETURN_IF_ERROR(_value.Set(value_arg));
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
		 * Check if the field @c value is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasValue() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isReadOnly is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsReadOnly() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c name.
		 * 
		 * The name of the preference
		 * e.g. "skin"
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c value.
		 * 
		 * The value of the preference
		 * e.g. "alien"
		 */
		const OpString & GetValue() const
		{
			return _value;
		}

		/**
		 * Get the field @c isReadOnly.
		 * 
		 * Controls whether this preference can, or cannot, be overwritten at runtime (e.g. via scripts).
		 */
		BOOL GetIsReadOnly() const
		{
			return _isReadOnly;
		}

		// Setters

		/**
		 * Set the field @c name.
		 * 
		 * The name of the preference
		 * e.g. "skin"
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c value.
		 * 
		 * The value of the preference
		 * e.g. "alien"
		 */
		OP_STATUS SetValue(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c isReadOnly.
		 * 
		 * Controls whether this preference can, or cannot, be overwritten at runtime (e.g. via scripts).
		 */
		void SetIsReadOnly(BOOL v)
		{
			_isReadOnly = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		OpString _value;
		BOOL _isReadOnly;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A feature is a URI identifiable runtime component. (e.g. an API).
	 * 
	 * 7.13
	 * http://www.w3.org/TR/widgets/#feature
	 */
	class Widget_Feature
	{
	public:
		// BEGIN: Nested items

		// Message Widget.Feature.Param
		typedef Widget_Feature_Param Param;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_Feature(
			BOOL is_required_arg = FALSE
			)
			: _isRequired(is_required_arg)
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
		 * Check if the field @c isRequired is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsRequired() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c paramList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasParamList() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c name.
		 * 
		 * An IRI attribute that identifies a feature that is needed by the widget at runtime (such as an API).
		 */
		const OpString & GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c isRequired.
		 * 
		 * A boolean attribute that indicates whether or not this feature has to be available to the widget at runtime.
		 */
		BOOL GetIsRequired() const
		{
			return _isRequired;
		}

		/**
		 * Get the field @c paramList.
		 * 
		 * List of parameters for the feature.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature_Param> & GetParamList() const
		{
			return _paramList;
		}

		// Setters

		/**
		 * Set the field @c name.
		 * 
		 * An IRI attribute that identifies a feature that is needed by the widget at runtime (such as an API).
		 */
		OP_STATUS SetName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c isRequired.
		 * 
		 * A boolean attribute that indicates whether or not this feature has to be available to the widget at runtime.
		 */
		void SetIsRequired(BOOL v)
		{
			_isRequired = v;
		}

		/**
		 * Set the field @c paramList.
		 * 
		 * List of parameters for the feature.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Feature_Param * AppendNewParamList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _name;
		BOOL _isRequired;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature_Param> _paramList;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Defines the start file for a widget, the file is defined by a path
	 * and optionally which MIME-Type and encoding it has.
	 * If no content has been defined the widget is started from "index.html".
	 */
	class Widget_Content
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_Content(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & src_arg,
			const OpString * type_arg = NULL,
			const OpString * encoding_arg = NULL
			)
		{
			RETURN_IF_ERROR(_src.Set(src_arg));
			if (type_arg)
			{
				RETURN_IF_ERROR(_type.Set(*type_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (encoding_arg)
			{
				RETURN_IF_ERROR(_encoding.Set(*encoding_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c src is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSrc() const
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
		 * Check if the field @c encoding is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEncoding() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c src.
		 * 
		 * A path which points to a file within the widget package.
		 * e.g. "mywidget.html"
		 */
		const OpString & GetSrc() const
		{
			return _src;
		}

		/**
		 * Get the field @c type.
		 * 
		 * Defines the MIME-Type for the file referenced in 'src'.
		 * The default MIME-Type is "text/html".
		 */
		const OpString & GetType() const
		{
			return _type;
		}

		/**
		 * Get the field @c encoding.
		 * 
		 * Defines the encoding for the file referenced in 'src'.
		 * The default encoding is "UTF-8".
		 */
		const OpString & GetEncoding() const
		{
			return _encoding;
		}

		// Setters

		/**
		 * Set the field @c src.
		 * 
		 * A path which points to a file within the widget package.
		 * e.g. "mywidget.html"
		 */
		OP_STATUS SetSrc(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c type.
		 * 
		 * Defines the MIME-Type for the file referenced in 'src'.
		 * The default MIME-Type is "text/html".
		 */
		OP_STATUS SetType(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c encoding.
		 * 
		 * Defines the encoding for the file referenced in 'src'.
		 * The default encoding is "UTF-8".
		 */
		OP_STATUS SetEncoding(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _src;
		OpString _type;
		OpString _encoding;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * A custom icon for the widget.
	 * 
	 * 7.11
	 * http://www.w3.org/TR/widgets/#the-icon-element-and-its-attributes
	 */
	class Widget_Icon
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_Icon(
			)
			: _width(0)
			, _height(0)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & src_arg
			)
		{
			RETURN_IF_ERROR(_src.Set(src_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c src is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSrc() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c width is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidth() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c height is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeight() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c src.
		 * 
		 * A path attribute that points to a file inside the widget package.
		 */
		const OpString & GetSrc() const
		{
			return _src;
		}

		/**
		 * Get the field @c width.
		 * 
		 * The author's preferred width for the icon if any. Only set for values
		 * 1 and up.
		 */
		UINT32 GetWidth() const
		{
			return _width;
		}

		/**
		 * Get the field @c height.
		 * 
		 * The author's preferred height for the icon if any. Only set for values
		 * 1 and up.
		 */
		UINT32 GetHeight() const
		{
			return _height;
		}

		// Setters

		/**
		 * Set the field @c src.
		 * 
		 * A path attribute that points to a file inside the widget package.
		 */
		OP_STATUS SetSrc(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c width.
		 * 
		 * The author's preferred width for the icon if any. Only set for values
		 * 1 and up.
		 */
		void SetWidth(UINT32 v)
		{
			has_bits_.Reference().SetBit(1);
			_width = v;
		}

		/**
		 * Set the field @c height.
		 * 
		 * The author's preferred height for the icon if any. Only set for values
		 * 1 and up.
		 */
		void SetHeight(UINT32 v)
		{
			has_bits_.Reference().SetBit(2);
			_height = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _src;
		UINT32 _width;
		UINT32 _height;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * The software license for this widget.
	 */
	class Widget_License
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_License(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg,
			const OpString * href_arg = NULL,
			const OpString * locale_arg = NULL
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			if (href_arg)
			{
				RETURN_IF_ERROR(_href.Set(*href_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (locale_arg)
			{
				RETURN_IF_ERROR(_locale.Set(*locale_arg));
				has_bits_.Reference().SetBit(2);

			}
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

		/**
		 * Check if the field @c href is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHref() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c locale is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLocale() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c text.
		 * 
		 * The license text.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c href.
		 * 
		 * A URL or path that points to a representation of a software and/or content license
		 */
		const OpString & GetHref() const
		{
			return _href;
		}

		/**
		 * Get the field @c locale.
		 * 
		 * The locale used for this license.
		 * If the field is unlocalized the field is not set.
		 */
		const OpString & GetLocale() const
		{
			return _locale;
		}

		// Setters

		/**
		 * Set the field @c text.
		 * 
		 * The license text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c href.
		 * 
		 * A URL or path that points to a representation of a software and/or content license
		 */
		OP_STATUS SetHref(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c locale.
		 * 
		 * The locale used for this license.
		 * If the field is unlocalized the field is not set.
		 */
		OP_STATUS SetLocale(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _text;
		OpString _href;
		OpString _locale;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Represents a human-readable description of the widget.
	 * 
	 * 7.8
	 * http://www.w3.org/TR/widgets/#description
	 */
	class Widget_Description
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Widget_Description(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg,
			const OpString * locale_arg = NULL
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			if (locale_arg)
			{
				RETURN_IF_ERROR(_locale.Set(*locale_arg));
				has_bits_.Reference().SetBit(1);

			}
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

		/**
		 * Check if the field @c locale is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLocale() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c text.
		 * 
		 * The description text.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c locale.
		 * 
		 * The locale used for the description field.
		 * If the field is unlocalized the field is not set.
		 */
		const OpString & GetLocale() const
		{
			return _locale;
		}

		// Setters

		/**
		 * Set the field @c text.
		 * 
		 * The description text.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c locale.
		 * 
		 * The locale used for the description field.
		 * If the field is unlocalized the field is not set.
		 */
		OP_STATUS SetLocale(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _text;
		OpString _locale;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Represents people or an organization attributed with the creation of the widget.
	 * 
	 * 7.9
	 * http://www.w3.org/TR/widgets/#author0
	 */
	class Widget_Author
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 4
		};
		// END: Internal enums


		Widget_Author(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg,
			const OpString * email_arg = NULL,
			const OpString * href_arg = NULL,
			const OpString * organization_arg = NULL
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			if (email_arg)
			{
				RETURN_IF_ERROR(_email.Set(*email_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (href_arg)
			{
				RETURN_IF_ERROR(_href.Set(*href_arg));
				has_bits_.Reference().SetBit(2);

			}
			if (organization_arg)
			{
				RETURN_IF_ERROR(_organization.Set(*organization_arg));
				has_bits_.Reference().SetBit(3);

			}
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

		/**
		 * Check if the field @c email is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasEmail() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c href is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHref() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		/**
		 * Check if the field @c organization is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOrganization() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		// Getters

		/**
		 * Get the field @c text.
		 * 
		 * People or organization attributed with the creation of the widget.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c email.
		 * 
		 * Email address associated with the author.
		 */
		const OpString & GetEmail() const
		{
			return _email;
		}

		/**
		 * Get the field @c href.
		 * 
		 * URI that represents a link associated with the author.
		 */
		const OpString & GetHref() const
		{
			return _href;
		}

		/**
		 * Get the field @c organization.
		 * 
		 * Represents the name of an organization that the author is affiliated with.
		 */
		const OpString & GetOrganization() const
		{
			return _organization;
		}

		// Setters

		/**
		 * Set the field @c text.
		 * 
		 * People or organization attributed with the creation of the widget.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c email.
		 * 
		 * Email address associated with the author.
		 */
		OP_STATUS SetEmail(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c href.
		 * 
		 * URI that represents a link associated with the author.
		 */
		OP_STATUS SetHref(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c organization.
		 * 
		 * Represents the name of an organization that the author is affiliated with.
		 */
		OP_STATUS SetOrganization(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _text;
		OpString _email;
		OpString _href;
		OpString _organization;

		OpProtobufBitField<4> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Represents the full human-readable name for a widget that is used, for example, in an application menu or in other contexts.
	 * 
	 * 7.7
	 * http://www.w3.org/TR/widgets/#name
	 */
	class Widget_Name
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		Widget_Name(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & text_arg,
			const OpString * short_name_arg = NULL,
			const OpString * locale_arg = NULL
			)
		{
			RETURN_IF_ERROR(_text.Set(text_arg));
			if (short_name_arg)
			{
				RETURN_IF_ERROR(_shortName.Set(*short_name_arg));
				has_bits_.Reference().SetBit(1);

			}
			if (locale_arg)
			{
				RETURN_IF_ERROR(_locale.Set(*locale_arg));
				has_bits_.Reference().SetBit(2);

			}
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

		/**
		 * Check if the field @c shortName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasShortName() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c locale is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLocale() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c text.
		 * 
		 * The full human-readable name for the widget.
		 */
		const OpString & GetText() const
		{
			return _text;
		}

		/**
		 * Get the field @c shortName.
		 * 
		 * A displayable string intended to represent a condensed name for a widget,
		 * e.g. as a name for an icon.
		 * 
		 * note: This is the unlocalized version.
		 */
		const OpString & GetShortName() const
		{
			return _shortName;
		}

		/**
		 * Get the field @c locale.
		 * 
		 * The locale used for the name and shortName fields.
		 * If the fields are unlocalized the field is not set.
		 */
		const OpString & GetLocale() const
		{
			return _locale;
		}

		// Setters

		/**
		 * Set the field @c text.
		 * 
		 * The full human-readable name for the widget.
		 */
		OP_STATUS SetText(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c shortName.
		 * 
		 * A displayable string intended to represent a condensed name for a widget,
		 * e.g. as a name for an icon.
		 * 
		 * note: This is the unlocalized version.
		 */
		OP_STATUS SetShortName(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c locale.
		 * 
		 * The locale used for the name and shortName fields.
		 * If the fields are unlocalized the field is not set.
		 */
		OP_STATUS SetLocale(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _text;
		OpString _shortName;
		OpString _locale;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class WidgetUninstalled
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		WidgetUninstalled(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 */
		OpString & GetWidgetIDRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class WidgetUpdateResult
	{
	public:
		// BEGIN: Nested items

		// Enum WidgetUpdateResult.Result
		typedef WidgetUpdateResult_Result Result;
		static const WidgetUpdateResult_Result RESULT_UNKNOWN = WidgetUpdateResult_Result_RESULT_UNKNOWN;
		static const WidgetUpdateResult_Result RESULT_DOWNLOAD_FAILED = WidgetUpdateResult_Result_RESULT_DOWNLOAD_FAILED;
		static const WidgetUpdateResult_Result RESULT_NOT_ENOUGH_SPACE = WidgetUpdateResult_Result_RESULT_NOT_ENOUGH_SPACE;
		static const WidgetUpdateResult_Result RESULT_UPDATE_FAILED = WidgetUpdateResult_Result_RESULT_UPDATE_FAILED;
		static const WidgetUpdateResult_Result RESULT_UPDATE_SUCCESSFUL = WidgetUpdateResult_Result_RESULT_UPDATE_SUCCESSFUL;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		WidgetUpdateResult(
			WidgetUpdateResult_Result result_arg = WidgetUpdateResult_Result_RESULT_UNKNOWN
			)
			: _result(result_arg)
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
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
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
		 * Get the field @c result.
		 * 
		 * Result of an installation attempt.
		 */
		OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result GetResult() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result>(_result);
		}

		/**
		 * Get the field @c url.
		 * 
		 * The URL that was used to (download and) install the widget.
		 * Should be the same URL as InstallWidgetByURLArg.url
		 * @note Only set if it was installed from a URL.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c result.
		 * 
		 * Result of an installation attempt.
		 */
		void SetResult(OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result v);

		/**
		 * Set the field @c url.
		 * 
		 * The URL that was used to (download and) install the widget.
		 * Should be the same URL as InstallWidgetByURLArg.url
		 * @note Only set if it was installed from a URL.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _result;
		OpString _url;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class WidgetInstallResult
	{
	public:
		// BEGIN: Nested items

		// Enum WidgetInstallResult.Result
		typedef WidgetInstallResult_Result Result;
		static const WidgetInstallResult_Result RESULT_UNKNOWN = WidgetInstallResult_Result_RESULT_UNKNOWN;
		static const WidgetInstallResult_Result RESULT_DOWNLOAD_FAILED = WidgetInstallResult_Result_RESULT_DOWNLOAD_FAILED;
		static const WidgetInstallResult_Result RESULT_NOT_ENOUGH_SPACE = WidgetInstallResult_Result_RESULT_NOT_ENOUGH_SPACE;
		static const WidgetInstallResult_Result RESULT_INSTALL_FAILED = WidgetInstallResult_Result_RESULT_INSTALL_FAILED;
		static const WidgetInstallResult_Result RESULT_INSTALL_SUCCESSFUL = WidgetInstallResult_Result_RESULT_INSTALL_SUCCESSFUL;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		WidgetInstallResult(
			WidgetInstallResult_Result result_arg = WidgetInstallResult_Result_RESULT_UNKNOWN
			)
			: _result(result_arg)
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
		 * Check if the field @c result is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResult() const
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
		 * Get the field @c result.
		 * 
		 * Result of an installation attempt.
		 */
		OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result GetResult() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result>(_result);
		}

		/**
		 * Get the field @c url.
		 * 
		 * The URL that was used to (download and) install the widget.
		 * Should be the same URL as InstallWidgetByURLArg.url
		 * @note Only set if it was installed from a URL.
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c result.
		 * 
		 * Result of an installation attempt.
		 */
		void SetResult(OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result v);

		/**
		 * Set the field @c url.
		 * 
		 * The URL that was used to (download and) install the widget.
		 * Should be the same URL as InstallWidgetByURLArg.url
		 * @note Only set if it was installed from a URL.
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _result;
		OpString _url;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class UninstallWidgetArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		UninstallWidgetArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class InstallWidgetByURLArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		InstallWidgetByURLArg(
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
		 * Any URL which the host can reach can be used. This includes data URLs
		 * and file URLs available on the host.
		 * 
		 * The only requirements is that the MIME-Type is set when the resource is
		 * fetched and the MIME-Type must be a widget. For data URLs remember to
		 * set the MIME-Type and encoding, e.g.::
		 * 
		 *  data:application/x-opera-widgets;base64,
		 */
		const OpString & GetUrl() const
		{
			return _url;
		}

		// Setters

		/**
		 * Set the field @c url.
		 * 
		 * Any URL which the host can reach can be used. This includes data URLs
		 * and file URLs available on the host.
		 * 
		 * The only requirements is that the MIME-Type is set when the resource is
		 * fetched and the MIME-Type must be a widget. For data URLs remember to
		 * set the MIME-Type and encoding, e.g.::
		 * 
		 *  data:application/x-opera-widgets;base64,
		 */
		OP_STATUS SetUrl(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _url;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class ExtensionFlag
	{
	public:
		// BEGIN: Nested items

		// Enum ExtensionFlag.FlagType
		typedef ExtensionFlag_FlagType FlagType;
		static const ExtensionFlag_FlagType FLAGTYPE_ALLOW_USERJS_HTTPS = ExtensionFlag_FlagType_FLAGTYPE_ALLOW_USERJS_HTTPS;
		static const ExtensionFlag_FlagType FLAGTYPE_ALLOW_USERJS_PRIVATE = ExtensionFlag_FlagType_FLAGTYPE_ALLOW_USERJS_PRIVATE;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		ExtensionFlag(
			ExtensionFlag_FlagType flag_arg = ExtensionFlag_FlagType_FLAGTYPE_ALLOW_USERJS_HTTPS,
			BOOL value_arg = FALSE
			)
			: _flag(flag_arg)
			, _value(value_arg)
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
		 * Check if the field @c flag is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFlag() const
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
		 * Get the field @c flag.
		 * 
		 * Flag type.
		 */
		OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType GetFlag() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType>(_flag);
		}

		/**
		 * Get the field @c value.
		 * 
		 * The value of 'flag'
		 */
		BOOL GetValue() const
		{
			return _value;
		}

		// Setters

		/**
		 * Set the field @c flag.
		 * 
		 * Flag type.
		 */
		void SetFlag(OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType v);

		/**
		 * Set the field @c value.
		 * 
		 * The value of 'flag'
		 */
		void SetValue(BOOL v)
		{
			_value = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		INT32 _flag;
		BOOL _value;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class GetExtensionFlagArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		GetExtensionFlagArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c flag is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFlag() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 * 
		 * The uid of the widget.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		/**
		 * Get the field @c flag.
		 * 
		 * Flagtype and value.
		 */
		const OpScopeWidgetManager_MessageSet::ExtensionFlag & GetFlag() const
		{
			return _flag;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 * 
		 * The uid of the widget.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c flag.
		 * 
		 * Flagtype and value.
		 */
		OpScopeWidgetManager_MessageSet::ExtensionFlag & GetFlagRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;
		OpScopeWidgetManager_MessageSet::ExtensionFlag _flag;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class SetExtensionFlagArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		SetExtensionFlagArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c flag is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFlag() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 * 
		 * The uid of the widget.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		/**
		 * Get the field @c flag.
		 * 
		 * Flagtype and value.
		 */
		const OpScopeWidgetManager_MessageSet::ExtensionFlag & GetFlag() const
		{
			return _flag;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 * 
		 * The uid of the widget.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c flag.
		 * 
		 * Flagtype and value.
		 */
		OpScopeWidgetManager_MessageSet::ExtensionFlag & GetFlagRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;
		OpScopeWidgetManager_MessageSet::ExtensionFlag _flag;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class UpdateWidgetArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		UpdateWidgetArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 * 
		 * The uid of the widget to update.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 * 
		 * The uid of the widget to update.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class InstallWidgetArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		InstallWidgetArg(
			UINT32 installer_id_arg = 0
			)
			: _installerID(installer_id_arg)
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
		 * Check if the field @c installerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInstallerID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c installerID.
		 */
		UINT32 GetInstallerID() const
		{
			return _installerID;
		}

		// Setters

		/**
		 * Set the field @c installerID.
		 */
		void SetInstallerID(UINT32 v)
		{
			_installerID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _installerID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class RemoveInstallerArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		RemoveInstallerArg(
			UINT32 installer_id_arg = 0
			)
			: _installerID(installer_id_arg)
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
		 * Check if the field @c installerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInstallerID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c installerID.
		 */
		UINT32 GetInstallerID() const
		{
			return _installerID;
		}

		// Setters

		/**
		 * Set the field @c installerID.
		 */
		void SetInstallerID(UINT32 v)
		{
			_installerID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _installerID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class UpdateInstallerArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		UpdateInstallerArg(
			UINT32 installer_id_arg = 0
			)
			: _installerID(installer_id_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const ByteBuffer & byte_data_arg
			)
		{
			RETURN_IF_ERROR(OpProtobufAppend(_byteData, byte_data_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c installerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInstallerID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c byteData is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasByteData() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c installerID.
		 */
		UINT32 GetInstallerID() const
		{
			return _installerID;
		}

		/**
		 * Get the field @c byteData.
		 * 
		 * Byte data which will be appended to the temporary file.
		 * 
		 * @note Must not exceed the max size set by the host, see GetSettings.
		 */
		const ByteBuffer & GetByteData() const
		{
			return _byteData;
		}

		// Setters

		/**
		 * Set the field @c installerID.
		 */
		void SetInstallerID(UINT32 v)
		{
			_installerID = v;
		}

		/**
		 * Set the field @c byteData.
		 * 
		 * Byte data which will be appended to the temporary file.
		 * 
		 * @note Must not exceed the max size set by the host, see GetSettings.
		 */
		ByteBuffer & GetByteDataRef();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _installerID;
		ByteBuffer _byteData;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class Installer
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		Installer(
			UINT32 installer_id_arg = 0
			)
			: _installerID(installer_id_arg)
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
		 * Check if the field @c installerID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasInstallerID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c installerID.
		 */
		UINT32 GetInstallerID() const
		{
			return _installerID;
		}

		// Setters

		/**
		 * Set the field @c installerID.
		 */
		void SetInstallerID(UINT32 v)
		{
			_installerID = v;
		}

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _installerID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class CreateInstallerArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		CreateInstallerArg(
			)
			: _widgetType(Widget_Type_TYPE_WIDGET)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString * widget_id_arg = NULL
			)
		{
			if (widget_id_arg)
			{
				RETURN_IF_ERROR(_widgetID.Set(*widget_id_arg));
				has_bits_.Reference().SetBit(0);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c widgetType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetType() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 * 
		 * If specified makes the installer perform an upgrade instead of a new
		 * installation. An upgrade causes the widget on the host to use the
		 * new widget file once installed.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		/**
		 * Get the field @c widgetType.
		 * 
		 * Which type the installer should be created for.
		 * The default is to create it for a widget installation.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Type GetWidgetType() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_Type>(_widgetType);
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 * 
		 * If specified makes the installer perform an upgrade instead of a new
		 * installation. An upgrade causes the widget on the host to use the
		 * new widget file once installed.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c widgetType.
		 * 
		 * Which type the installer should be created for.
		 * The default is to create it for a widget installation.
		 */
		void SetWidgetType(OpScopeWidgetManager_MessageSet::Widget_Type v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;
		INT32 _widgetType;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};


	class CloseWidgetArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		CloseWidgetArg(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class OpenWidgetArg
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 3
		};
		// END: Internal enums


		OpenWidgetArg(
			)
			: _allowMutablePolicy(FALSE)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg,
			const OpString * global_policy_arg = NULL
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			if (global_policy_arg)
			{
				RETURN_IF_ERROR(_globalPolicy.Set(*global_policy_arg));
				has_bits_.Reference().SetBit(2);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c allowMutablePolicy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAllowMutablePolicy() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		/**
		 * Check if the field @c globalPolicy is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasGlobalPolicy() const
		{
			return has_bits_.Reference().IsSet(2);
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		/**
		 * Get the field @c allowMutablePolicy.
		 * 
		 * Set this to true to give the widget programmatic access
		 * to the global security policy (the widget.setGlobalPolicy
		 * function).
		 * 
		 * This should only be set for widgets deployed for testing
		 * purposes.
		 */
		BOOL GetAllowMutablePolicy() const
		{
			return _allowMutablePolicy;
		}

		/**
		 * Get the field @c globalPolicy.
		 * 
		 * Override the regular global policy. This field may contain
		 * a full XML global policy file, starting with the <widgets>
		 * tag. The 'allowMutablePolicy' must be set to true when using
		 * this field.
		 * 
		 * If a security policy was specified, but could not be parsed,
		 * this command fails and the widget will not be opened.
		 */
		const OpString & GetGlobalPolicy() const
		{
			return _globalPolicy;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 */
		OP_STATUS SetWidgetID(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c allowMutablePolicy.
		 * 
		 * Set this to true to give the widget programmatic access
		 * to the global security policy (the widget.setGlobalPolicy
		 * function).
		 * 
		 * This should only be set for widgets deployed for testing
		 * purposes.
		 */
		void SetAllowMutablePolicy(BOOL v)
		{
			has_bits_.Reference().SetBit(1);
			_allowMutablePolicy = v;
		}

		/**
		 * Set the field @c globalPolicy.
		 * 
		 * Override the regular global policy. This field may contain
		 * a full XML global policy file, starting with the <widgets>
		 * tag. The 'allowMutablePolicy' must be set to true when using
		 * this field.
		 * 
		 * If a security policy was specified, but could not be parsed,
		 * this command fails and the widget will not be opened.
		 */
		OP_STATUS SetGlobalPolicy(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;
		BOOL _allowMutablePolicy;
		OpString _globalPolicy;

		OpProtobufBitField<3> has_bits_;
		mutable int                 encoded_size_;
	};


	class WidgetList
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		WidgetList(
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
		 * Check if the field @c widgetList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		// Getters

		/**
		 * Get the field @c widgetList.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget> & GetWidgetList() const
		{
			return _widgetList;
		}

		// Setters

		/**
		 * Set the field @c widgetList.
		 */
		OpScopeWidgetManager_MessageSet::Widget * AppendNewWidgetList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget> _widgetList;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Various properties specific to Opera
	 */
	class Widget_Properties
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 19
		};
		// END: Internal enums


		Widget_Properties(
			BOOL is_active_arg = FALSE,
			BOOL is_enabled_arg = FALSE,
			BOOL is_dockable_arg = FALSE,
			BOOL has_file_access_arg = FALSE,
			BOOL is_persistent_arg = FALSE,
			BOOL has_transparent_features_arg = FALSE,
			BOOL has_js_plugins_access_arg = FALSE,
			BOOL has_jil_filesystem_access_arg = FALSE,
			BOOL has_feature_tag_support_arg = FALSE,
			UINT32 window_id_arg = 0,
			BOOL public_network_arg = FALSE,
			BOOL private_network_arg = FALSE
			)
			: _isActive(is_active_arg)
			, _isEnabled(is_enabled_arg)
			, _isDockable(is_dockable_arg)
			, _hasFileAccess(has_file_access_arg)
			, _isPersistent(is_persistent_arg)
			, _hasTransparentFeatures(has_transparent_features_arg)
			, _hasJSPluginsAccess(has_js_plugins_access_arg)
			, _hasJILFilesystemAccess(has_jil_filesystem_access_arg)
			, _hasFeatureTagSupport(has_feature_tag_support_arg)
			, _windowID(window_id_arg)
			, _publicNetwork(public_network_arg)
			, _privateNetwork(private_network_arg)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & path_arg,
			const OpString & file_name_arg,
			const OpString & config_file_path_arg,
			const OpString & download_url_arg,
			const OpString * disabled_details_arg = NULL,
			const OpString * resolved_start_path_arg = NULL,
			const OpString * startfile_locale_arg = NULL
			)
		{
			RETURN_IF_ERROR(_path.Set(path_arg));
			RETURN_IF_ERROR(_fileName.Set(file_name_arg));
			RETURN_IF_ERROR(_configFilePath.Set(config_file_path_arg));
			RETURN_IF_ERROR(_downloadURL.Set(download_url_arg));
			if (disabled_details_arg)
			{
				RETURN_IF_ERROR(_disabledDetails.Set(*disabled_details_arg));
				has_bits_.Reference().SetBit(16);

			}
			if (resolved_start_path_arg)
			{
				RETURN_IF_ERROR(_resolvedStartPath.Set(*resolved_start_path_arg));
				has_bits_.Reference().SetBit(17);

			}
			if (startfile_locale_arg)
			{
				RETURN_IF_ERROR(_startfileLocale.Set(*startfile_locale_arg));
				has_bits_.Reference().SetBit(18);

			}
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c isActive is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsActive() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isEnabled is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsEnabled() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isDockable is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsDockable() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c hasFileAccess is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHasFileAccess() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c isPersistent is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIsPersistent() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c hasTransparentFeatures is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHasTransparentFeatures() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c hasJSPluginsAccess is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHasJSPluginsAccess() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c hasJILFilesystemAccess is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHasJILFilesystemAccess() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c hasFeatureTagSupport is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHasFeatureTagSupport() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c path is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPath() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c fileName is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFileName() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c configFilePath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasConfigFilePath() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c downloadURL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDownloadURL() const
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
		 * Check if the field @c publicNetwork is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPublicNetwork() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c privateNetwork is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPrivateNetwork() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c disabledDetails is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDisabledDetails() const
		{
			return has_bits_.Reference().IsSet(16);
		}

		/**
		 * Check if the field @c resolvedStartPath is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasResolvedStartPath() const
		{
			return has_bits_.Reference().IsSet(17);
		}

		/**
		 * Check if the field @c startfileLocale is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasStartfileLocale() const
		{
			return has_bits_.Reference().IsSet(18);
		}

		// Getters

		/**
		 * Get the field @c isActive.
		 * 
		 * Specifies whether the widget is currently running or not.
		 */
		BOOL GetIsActive() const
		{
			return _isActive;
		}

		/**
		 * Get the field @c isEnabled.
		 * 
		 * Specifies whether the widget is enabled or not. If the widget is
		 * disabled details on this may be found in disabledDetails.
		 */
		BOOL GetIsEnabled() const
		{
			return _isEnabled;
		}

		/**
		 * Get the field @c isDockable.
		 * 
		 * Specifies whether the widget is dockable or not. This is only used
		 * by older Opera widgets (not W3C), other types sets this to false.
		 */
		BOOL GetIsDockable() const
		{
			return _isDockable;
		}

		/**
		 * Get the field @c hasFileAccess.
		 * 
		 * Specifies whether the widget as access to the filesystem or not.
		 */
		BOOL GetHasFileAccess() const
		{
			return _hasFileAccess;
		}

		/**
		 * Get the field @c isPersistent.
		 * 
		 * Specifies whether the widget is considered persistent or not.
		 * Persistent widgets cannot be removed. Widgets are by default not
		 * persistent.
		 */
		BOOL GetIsPersistent() const
		{
			return _isPersistent;
		}

		/**
		 * Get the field @c hasTransparentFeatures.
		 * 
		 * True if the widget has transparent features or not, false otherwise.
		 */
		BOOL GetHasTransparentFeatures() const
		{
			return _hasTransparentFeatures;
		}

		/**
		 * Get the field @c hasJSPluginsAccess.
		 * 
		 * Specifies whether the widget can use JS plugins or not. This is
		 * specific to older Opera widget (not W3C), other types sets this to
		 * false.
		 */
		BOOL GetHasJSPluginsAccess() const
		{
			return _hasJSPluginsAccess;
		}

		/**
		 * Get the field @c hasJILFilesystemAccess.
		 * 
		 * Specific flag for JIL widgets, set to true if the widget has
		 * filesystem access.
		 */
		BOOL GetHasJILFilesystemAccess() const
		{
			return _hasJILFilesystemAccess;
		}

		/**
		 * Get the field @c hasFeatureTagSupport.
		 * 
		 * Is true if the widget namespace supports feature tags.
		 * Currently W3C and JIL widgets support this.
		 */
		BOOL GetHasFeatureTagSupport() const
		{
			return _hasFeatureTagSupport;
		}

		/**
		 * Get the field @c path.
		 * 
		 * The entire path of the widget as it is stored on the host.
		 */
		const OpString & GetPath() const
		{
			return _path;
		}

		/**
		 * Get the field @c fileName.
		 * 
		 * The filename of the widget as it stored on the host.
		 */
		const OpString & GetFileName() const
		{
			return _fileName;
		}

		/**
		 * Get the field @c configFilePath.
		 * 
		 * The relative path to the config file, this is usually config.xml
		 * but may differ depending on the widget namespace in use.
		 * e.g. "config.xml"
		 */
		const OpString & GetConfigFilePath() const
		{
			return _configFilePath;
		}

		/**
		 * Get the field @c downloadURL.
		 * 
		 * The URL which was used to download and install the widget. This
		 * may be empty in some cases even though it was downloaded from a URL.
		 */
		const OpString & GetDownloadURL() const
		{
			return _downloadURL;
		}

		/**
		 * Get the field @c windowID.
		 * 
		 * The ID of the window the widget was opened in or 0 if there is no window.
		 */
		UINT32 GetWindowID() const
		{
			return _windowID;
		}

		/**
		 * Get the field @c publicNetwork.
		 * 
		 * Set to true if the widget has access to public networks.
		 * Some widget namespaces allow this to be controlled per widget
		 * while others have it set globally.
		 */
		BOOL GetPublicNetwork() const
		{
			return _publicNetwork;
		}

		/**
		 * Get the field @c privateNetwork.
		 * 
		 * Set to true if the widget has access to private networks.
		 * Some widget namespaces allow this to be controlled per widget
		 * while others have it set globally.
		 */
		BOOL GetPrivateNetwork() const
		{
			return _privateNetwork;
		}

		/**
		 * Get the field @c disabledDetails.
		 * 
		 * Details on why a widget is disabled. Only set when disabled.
		 */
		const OpString & GetDisabledDetails() const
		{
			return _disabledDetails;
		}

		/**
		 * Get the field @c resolvedStartPath.
		 * 
		 * Full path of the widget resource in the filesystem. (eg '/opera/widgets/somewidget.wgt/index.html')
		 */
		const OpString & GetResolvedStartPath() const
		{
			return _resolvedStartPath;
		}

		/**
		 * Get the field @c startfileLocale.
		 * 
		 * The current locale used in the widget/extension. (eg 'en', 'en-gb', 'nb-no')
		 */
		const OpString & GetStartfileLocale() const
		{
			return _startfileLocale;
		}

		// Setters

		/**
		 * Set the field @c isActive.
		 * 
		 * Specifies whether the widget is currently running or not.
		 */
		void SetIsActive(BOOL v)
		{
			_isActive = v;
		}

		/**
		 * Set the field @c isEnabled.
		 * 
		 * Specifies whether the widget is enabled or not. If the widget is
		 * disabled details on this may be found in disabledDetails.
		 */
		void SetIsEnabled(BOOL v)
		{
			_isEnabled = v;
		}

		/**
		 * Set the field @c isDockable.
		 * 
		 * Specifies whether the widget is dockable or not. This is only used
		 * by older Opera widgets (not W3C), other types sets this to false.
		 */
		void SetIsDockable(BOOL v)
		{
			_isDockable = v;
		}

		/**
		 * Set the field @c hasFileAccess.
		 * 
		 * Specifies whether the widget as access to the filesystem or not.
		 */
		void SetHasFileAccess(BOOL v)
		{
			_hasFileAccess = v;
		}

		/**
		 * Set the field @c isPersistent.
		 * 
		 * Specifies whether the widget is considered persistent or not.
		 * Persistent widgets cannot be removed. Widgets are by default not
		 * persistent.
		 */
		void SetIsPersistent(BOOL v)
		{
			_isPersistent = v;
		}

		/**
		 * Set the field @c hasTransparentFeatures.
		 * 
		 * True if the widget has transparent features or not, false otherwise.
		 */
		void SetHasTransparentFeatures(BOOL v)
		{
			_hasTransparentFeatures = v;
		}

		/**
		 * Set the field @c hasJSPluginsAccess.
		 * 
		 * Specifies whether the widget can use JS plugins or not. This is
		 * specific to older Opera widget (not W3C), other types sets this to
		 * false.
		 */
		void SetHasJSPluginsAccess(BOOL v)
		{
			_hasJSPluginsAccess = v;
		}

		/**
		 * Set the field @c hasJILFilesystemAccess.
		 * 
		 * Specific flag for JIL widgets, set to true if the widget has
		 * filesystem access.
		 */
		void SetHasJILFilesystemAccess(BOOL v)
		{
			_hasJILFilesystemAccess = v;
		}

		/**
		 * Set the field @c hasFeatureTagSupport.
		 * 
		 * Is true if the widget namespace supports feature tags.
		 * Currently W3C and JIL widgets support this.
		 */
		void SetHasFeatureTagSupport(BOOL v)
		{
			_hasFeatureTagSupport = v;
		}

		/**
		 * Set the field @c path.
		 * 
		 * The entire path of the widget as it is stored on the host.
		 */
		OP_STATUS SetPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c fileName.
		 * 
		 * The filename of the widget as it stored on the host.
		 */
		OpString & GetFileNameRef();

		/**
		 * Set the field @c configFilePath.
		 * 
		 * The relative path to the config file, this is usually config.xml
		 * but may differ depending on the widget namespace in use.
		 * e.g. "config.xml"
		 */
		OP_STATUS SetConfigFilePath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c downloadURL.
		 * 
		 * The URL which was used to download and install the widget. This
		 * may be empty in some cases even though it was downloaded from a URL.
		 */
		OpString & GetDownloadURLRef();

		/**
		 * Set the field @c windowID.
		 * 
		 * The ID of the window the widget was opened in or 0 if there is no window.
		 */
		void SetWindowID(UINT32 v)
		{
			_windowID = v;
		}

		/**
		 * Set the field @c publicNetwork.
		 * 
		 * Set to true if the widget has access to public networks.
		 * Some widget namespaces allow this to be controlled per widget
		 * while others have it set globally.
		 */
		void SetPublicNetwork(BOOL v)
		{
			_publicNetwork = v;
		}

		/**
		 * Set the field @c privateNetwork.
		 * 
		 * Set to true if the widget has access to private networks.
		 * Some widget namespaces allow this to be controlled per widget
		 * while others have it set globally.
		 */
		void SetPrivateNetwork(BOOL v)
		{
			_privateNetwork = v;
		}

		/**
		 * Set the field @c disabledDetails.
		 * 
		 * Details on why a widget is disabled. Only set when disabled.
		 */
		OpString & GetDisabledDetailsRef();

		/**
		 * Set the field @c resolvedStartPath.
		 * 
		 * Full path of the widget resource in the filesystem. (eg '/opera/widgets/somewidget.wgt/index.html')
		 */
		OP_STATUS SetResolvedStartPath(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c startfileLocale.
		 * 
		 * The current locale used in the widget/extension. (eg 'en', 'en-gb', 'nb-no')
		 */
		OP_STATUS SetStartfileLocale(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		BOOL _isActive;
		BOOL _isEnabled;
		BOOL _isDockable;
		BOOL _hasFileAccess;
		BOOL _isPersistent;
		BOOL _hasTransparentFeatures;
		BOOL _hasJSPluginsAccess;
		BOOL _hasJILFilesystemAccess;
		BOOL _hasFeatureTagSupport;
		OpString _path;
		OpString _fileName;
		OpString _configFilePath;
		OpString _downloadURL;
		UINT32 _windowID;
		BOOL _publicNetwork;
		BOOL _privateNetwork;
		OpString _disabledDetails;
		OpString _resolvedStartPath;
		OpString _startfileLocale;

		OpProtobufBitField<19> has_bits_;
		mutable int                 encoded_size_;
	};


	/**
	 * Contains detailed information on a widget. The structure is modeled after
	 * the W3C spec but with additional information for opera specific widgets.
	 * 
	 * The same structure is also used for Unite apps/services and browser
	 * extensions.
	 */
	class Widget
	{
	public:
		// BEGIN: Nested items

		// Enum Widget.Type
		typedef Widget_Type Type;
		static const Widget_Type TYPE_WIDGET = Widget_Type_TYPE_WIDGET;
		static const Widget_Type TYPE_UNITE = Widget_Type_TYPE_UNITE;
		static const Widget_Type TYPE_EXTENSION = Widget_Type_TYPE_EXTENSION;

		// Enum Widget.WidgetType
		typedef Widget_WidgetType WidgetType;
		static const Widget_WidgetType WIDGETTYPE_UNKNOWN = Widget_WidgetType_WIDGETTYPE_UNKNOWN;
		static const Widget_WidgetType WIDGETTYPE_CHROMELESS = Widget_WidgetType_WIDGETTYPE_CHROMELESS;
		static const Widget_WidgetType WIDGETTYPE_WINDOWED = Widget_WidgetType_WIDGETTYPE_WINDOWED;
		static const Widget_WidgetType WIDGETTYPE_TOOLBAR = Widget_WidgetType_WIDGETTYPE_TOOLBAR;

		// Enum Widget.ViewMode
		typedef Widget_ViewMode ViewMode;
		static const Widget_ViewMode VIEWMODE_UNKNOWN = Widget_ViewMode_VIEWMODE_UNKNOWN;
		static const Widget_ViewMode VIEWMODE_WIDGET = Widget_ViewMode_VIEWMODE_WIDGET;
		static const Widget_ViewMode VIEWMODE_FLOATING = Widget_ViewMode_VIEWMODE_FLOATING;
		static const Widget_ViewMode VIEWMODE_DOCKED = Widget_ViewMode_VIEWMODE_DOCKED;
		static const Widget_ViewMode VIEWMODE_APPLICATION = Widget_ViewMode_VIEWMODE_APPLICATION;
		static const Widget_ViewMode VIEWMODE_FULLSCREEN = Widget_ViewMode_VIEWMODE_FULLSCREEN;
		static const Widget_ViewMode VIEWMODE_MAXIMIZED = Widget_ViewMode_VIEWMODE_MAXIMIZED;
		static const Widget_ViewMode VIEWMODE_MINIMIZED = Widget_ViewMode_VIEWMODE_MINIMIZED;
		static const Widget_ViewMode VIEWMODE_WINDOWED = Widget_ViewMode_VIEWMODE_WINDOWED;

		// Message Widget.Name
		typedef Widget_Name Name;

		// Message Widget.Properties
		typedef Widget_Properties Properties;

		// Message Widget.Author
		typedef Widget_Author Author;

		// Message Widget.Description
		typedef Widget_Description Description;

		// Message Widget.License
		typedef Widget_License License;

		// Message Widget.Icon
		typedef Widget_Icon Icon;

		// Message Widget.Content
		typedef Widget_Content Content;

		// Message Widget.Feature
		typedef Widget_Feature Feature;

		// Message Widget.Preference
		typedef Widget_Preference Preference;

		// Message Widget.Signature
		typedef Widget_Signature Signature;

		// Message Widget.Network
		typedef Widget_Network Network;

		// Message Widget.SecurityAccess
		typedef Widget_SecurityAccess SecurityAccess;

		// Message Widget.ExtensionInfo
		typedef Widget_ExtensionInfo ExtensionInfo;

		// Message Widget.UniteInfo
		typedef Widget_UniteInfo UniteInfo;

		// Message Widget.UpdateInfo
		typedef Widget_UpdateInfo UpdateInfo;

		// Message Widget.UserJS
		typedef Widget_UserJS UserJS;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 30
		};
		// END: Internal enums


		Widget(
			Widget_Type type_arg = Widget_Type_TYPE_WIDGET,
			Widget_WidgetType widget_type_arg = Widget_WidgetType_WIDGETTYPE_UNKNOWN,
			Widget_ViewMode current_view_mode_arg = Widget_ViewMode_VIEWMODE_UNKNOWN,
			Widget_ViewMode default_view_mode_arg = Widget_ViewMode_VIEWMODE_UNKNOWN
			)
			: _type(type_arg)
			, _widgetType(widget_type_arg)
			, _name(NULL)
			, _author(NULL)
			, _width(0)
			, _height(0)
			, _currentWidth(0)
			, _currentHeight(0)
			, _currentViewMode(current_view_mode_arg)
			, _defaultViewMode(default_view_mode_arg)
			, _description(NULL)
			, _license(NULL)
			, _content(NULL)
			, _signature(NULL)
			, _extensionInfo(NULL)
			, _uniteInfo(NULL)
			, _updateInfo(NULL)
			, encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & widget_id_arg,
			const OpString * namespace_arg = NULL,
			const OpString * version_arg = NULL,
			const OpString * update_url_arg = NULL,
			const OpString * iri_identifier_arg = NULL
			)
		{
			RETURN_IF_ERROR(_widgetID.Set(widget_id_arg));
			if (namespace_arg)
			{
				RETURN_IF_ERROR(_namespace.Set(*namespace_arg));
				has_bits_.Reference().SetBit(6);

			}
			if (version_arg)
			{
				RETURN_IF_ERROR(_version.Set(*version_arg));
				has_bits_.Reference().SetBit(7);

			}
			if (update_url_arg)
			{
				RETURN_IF_ERROR(_updateURL.Set(*update_url_arg));
				has_bits_.Reference().SetBit(22);

			}
			if (iri_identifier_arg)
			{
				RETURN_IF_ERROR(_iriIdentifier.Set(*iri_identifier_arg));
				has_bits_.Reference().SetBit(25);

			}
			return OpStatus::OK;
		}
		~Widget()
		{
			OP_DELETE(_name);
			OP_DELETE(_author);
			OP_DELETE(_description);
			OP_DELETE(_license);
			OP_DELETE(_content);
			OP_DELETE(_signature);
			OP_DELETE(_extensionInfo);
			OP_DELETE(_uniteInfo);
			OP_DELETE(_updateInfo);
		}

		// Checkers
		/**
		 * Check if the field @c widgetID is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetID() const
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
		 * Check if the field @c widgetType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidgetType() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c name is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasName() const
		{
			return has_bits_.Reference().IsSet(3);
		}

		/**
		 * Check if the field @c properties is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasProperties() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c author is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasAuthor() const
		{
			return has_bits_.Reference().IsSet(5);
		}

		/**
		 * Check if the field @c namespace is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNamespace() const
		{
			return has_bits_.Reference().IsSet(6);
		}

		/**
		 * Check if the field @c version is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasVersion() const
		{
			return has_bits_.Reference().IsSet(7);
		}

		/**
		 * Check if the field @c width is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasWidth() const
		{
			return has_bits_.Reference().IsSet(8);
		}

		/**
		 * Check if the field @c height is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasHeight() const
		{
			return has_bits_.Reference().IsSet(9);
		}

		/**
		 * Check if the field @c currentWidth is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCurrentWidth() const
		{
			return has_bits_.Reference().IsSet(10);
		}

		/**
		 * Check if the field @c currentHeight is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCurrentHeight() const
		{
			return has_bits_.Reference().IsSet(11);
		}

		/**
		 * Check if the field @c currentViewMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasCurrentViewMode() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c defaultViewMode is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDefaultViewMode() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c viewModeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasViewModeList() const
		{
			return has_bits_.Reference().IsSet(14);
		}

		/**
		 * Check if the field @c description is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasDescription() const
		{
			return has_bits_.Reference().IsSet(15);
		}

		/**
		 * Check if the field @c license is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLicense() const
		{
			return has_bits_.Reference().IsSet(16);
		}

		/**
		 * Check if the field @c iconList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIconList() const
		{
			return has_bits_.Reference().IsSet(17);
		}

		/**
		 * Check if the field @c content is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasContent() const
		{
			return has_bits_.Reference().IsSet(18);
		}

		/**
		 * Check if the field @c featureList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasFeatureList() const
		{
			return has_bits_.Reference().IsSet(19);
		}

		/**
		 * Check if the field @c preferenceList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasPreferenceList() const
		{
			return has_bits_.Reference().IsSet(20);
		}

		/**
		 * Check if the field @c signature is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSignature() const
		{
			return has_bits_.Reference().IsSet(21);
		}

		/**
		 * Check if the field @c updateURL is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUpdateURL() const
		{
			return has_bits_.Reference().IsSet(22);
		}

		/**
		 * Check if the field @c networkAccessList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasNetworkAccessList() const
		{
			return has_bits_.Reference().IsSet(23);
		}

		/**
		 * Check if the field @c securityAccessList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasSecurityAccessList() const
		{
			return has_bits_.Reference().IsSet(24);
		}

		/**
		 * Check if the field @c iriIdentifier is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasIriIdentifier() const
		{
			return has_bits_.Reference().IsSet(25);
		}

		/**
		 * Check if the field @c extensionInfo is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasExtensionInfo() const
		{
			return has_bits_.Reference().IsSet(26);
		}

		/**
		 * Check if the field @c uniteInfo is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUniteInfo() const
		{
			return has_bits_.Reference().IsSet(27);
		}

		/**
		 * Check if the field @c updateInfo is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUpdateInfo() const
		{
			return has_bits_.Reference().IsSet(28);
		}

		/**
		 * Check if the field @c userJSList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasUserJSList() const
		{
			return has_bits_.Reference().IsSet(29);
		}

		// Getters

		/**
		 * Get the field @c widgetID.
		 * 
		 * A unique identifier for the widget.
		 * 
		 * e.g. "wuid-351f0e9d-24f2-080b-07e7-13b724cdaef8"
		 */
		const OpString & GetWidgetID() const
		{
			return _widgetID;
		}

		/**
		 * Get the field @c type.
		 * 
		 * The major type for the widget, most fields are common among
		 * the types but certain fields are type specific.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Type GetType() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_Type>(_type);
		}

		/**
		 * Get the field @c widgetType.
		 */
		OpScopeWidgetManager_MessageSet::Widget_WidgetType GetWidgetType() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_WidgetType>(_widgetType);
		}

		/**
		 * Get the field @c name.
		 * 
		 * Represents the full human-readable name for a widget. This field will
		 * only be set if there is a name element defined in the widget
		 * specification.
		 * 
		 * Note: This is either the localized name that matches the gadget locales, or the unlocalized name.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Name * GetName() const
		{
			return _name;
		}

		/**
		 * Get the field @c properties.
		 */
		const OpScopeWidgetManager_MessageSet::Widget_Properties & GetProperties() const
		{
			return _properties;
		}

		/**
		 * Get the field @c author.
		 * 
		 * Represents people or an organization attributed with the creation of the widget.
		 * This field will only be set if there is an author element defined in the
		 * widget specification.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Author * GetAuthor() const
		{
			return _author;
		}

		/**
		 * Get the field @c namespace.
		 * 
		 * The namespaces this widget uses. If no namespace is defined the field is not set.
		 * e.g. "http://www.w3.org/ns/widgets" or "http://xmlns.opera.com/2006/widget"
		 */
		const OpString & GetNamespace() const
		{
			return _namespace;
		}

		/**
		 * Get the field @c version.
		 * 
		 * The version of the widget.
		 */
		const OpString & GetVersion() const
		{
			return _version;
		}

		/**
		 * Get the field @c width.
		 * 
		 * If specified defines the preferred viewport width in pixels. The value,
		 * when set, is from 1 and up.
		 */
		INT32 GetWidth() const
		{
			return _width;
		}

		/**
		 * Get the field @c height.
		 * 
		 * If specified defines the preferred viewport height in pixels. The value,
		 * when set, is from 1 and up.
		 */
		INT32 GetHeight() const
		{
			return _height;
		}

		/**
		 * Get the field @c currentWidth.
		 * 
		 * The current width of the widget in pixels.
		 */
		INT32 GetCurrentWidth() const
		{
			return _currentWidth;
		}

		/**
		 * Get the field @c currentHeight.
		 * 
		 * The current height of the widget in pixels.
		 */
		INT32 GetCurrentHeight() const
		{
			return _currentHeight;
		}

		/**
		 * Get the field @c currentViewMode.
		 * 
		 * The current viewmode used by the widget.
		 */
		OpScopeWidgetManager_MessageSet::Widget_ViewMode GetCurrentViewMode() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_ViewMode>(_currentViewMode);
		}

		/**
		 * Get the field @c defaultViewMode.
		 * 
		 * The default viewmode for the widget.
		 */
		OpScopeWidgetManager_MessageSet::Widget_ViewMode GetDefaultViewMode() const
		{
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_ViewMode>(_defaultViewMode);
		}

		/**
		 * Get the field @c viewModeList.
		 * 
		 * All viewmodes defined for this widget.
		 */
		const OpValueVector<INT32> & GetViewModeList() const
		{
			return _viewModeList;
		}

		/**
		 * Get the field @c viewModeList.
		 * 
		 * All viewmodes defined for this widget.
		 */
		UINT32 GetViewModeListCount() const
		{
			return _viewModeList.GetCount();
		}

		/**
		 * Get the field @c viewModeList.
		 * 
		 * All viewmodes defined for this widget.
		 */
		OpScopeWidgetManager_MessageSet::Widget_ViewMode GetViewModeListItem(UINT32 i) const
		{
			OP_ASSERT(i < _viewModeList.GetCount());
			return static_cast<OpScopeWidgetManager_MessageSet::Widget_ViewMode>(_viewModeList.Get(i));
		}

		/**
		 * Get the field @c description.
		 * 
		 * Represents a human-readable description of the widget.
		 * This field will only be set if there is a description element defined
		 * in the widget specification.
		 * 
		 * Note: This is either the localized description that matches the gadget locales, or the unlocalized description.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Description * GetDescription() const
		{
			return _description;
		}

		/**
		 * Get the field @c license.
		 * 
		 * The license information for the widget if one is present.
		 * This field will only be set if there is a license element defined in
		 * the widget specification.
		 */
		OpScopeWidgetManager_MessageSet::Widget_License * GetLicense() const
		{
			return _license;
		}

		/**
		 * Get the field @c iconList.
		 * 
		 * All icons defined for the widget.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Icon> & GetIconList() const
		{
			return _iconList;
		}

		/**
		 * Get the field @c content.
		 * 
		 * Declare a custom start file the user agent is expected to use when it
		 * instantiates the widget.
		 * This field will only be set if there is a content element defined in
		 * the widget specification.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Content * GetContent() const
		{
			return _content;
		}

		/**
		 * Get the field @c featureList.
		 * 
		 * List of all features requested by the widget.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature> & GetFeatureList() const
		{
			return _featureList;
		}

		/**
		 * Get the field @c preferenceList.
		 * 
		 * List of all preferences defined by the widget.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Preference> & GetPreferenceList() const
		{
			return _preferenceList;
		}

		/**
		 * Get the field @c signature.
		 * 
		 * If the widget was signed with a digital signature this is set with
		 * information on the signature.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Signature * GetSignature() const
		{
			return _signature;
		}

		/**
		 * Get the field @c updateURL.
		 * 
		 * The URL used for updating the widget.
		 */
		const OpString & GetUpdateURL() const
		{
			return _updateURL;
		}

		/**
		 * Get the field @c networkAccessList.
		 * 
		 * List of requests to access network resources.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Network> & GetNetworkAccessList() const
		{
			return _networkAccessList;
		}

		/**
		 * Get the field @c securityAccessList.
		 * 
		 * Lists of security access the widget requests.
		 * Note: This only applies to Opera Widgets (namespace "http://xmlns.opera.com/2006/widget" and ""), not W3C and other widget formats.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess> & GetSecurityAccessList() const
		{
			return _securityAccessList;
		}

		/**
		 * Get the field @c iriIdentifier.
		 * 
		 * An IRI identifier chosen by widget itself.
		 */
		const OpString & GetIriIdentifier() const
		{
			return _iriIdentifier;
		}

		/**
		 * Get the field @c extensionInfo.
		 * 
		 * Additional information which is specific to extensions. Only set when
		 * it contains an extension.
		 */
		OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo * GetExtensionInfo() const
		{
			return _extensionInfo;
		}

		/**
		 * Get the field @c uniteInfo.
		 * 
		 * Additional information which is specific to Unite apps and services.
		 * Only set when it contains a Unite app or service.
		 */
		OpScopeWidgetManager_MessageSet::Widget_UniteInfo * GetUniteInfo() const
		{
			return _uniteInfo;
		}

		/**
		 * Get the field @c updateInfo.
		 * 
		 * Information about an available update for the widget.
		 * Set when available, which will be during an update.
		 */
		OpScopeWidgetManager_MessageSet::Widget_UpdateInfo * GetUpdateInfo() const
		{
			return _updateInfo;
		}

		/**
		 * Get the field @c userJSList.
		 * 
		 * Added UserJS files, this applies to extensions.
		 */
		const OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UserJS> & GetUserJSList() const
		{
			return _userJSList;
		}

		// Setters

		/**
		 * Set the field @c widgetID.
		 * 
		 * A unique identifier for the widget.
		 * 
		 * e.g. "wuid-351f0e9d-24f2-080b-07e7-13b724cdaef8"
		 */
		OpString & GetWidgetIDRef();

		/**
		 * Set the field @c type.
		 * 
		 * The major type for the widget, most fields are common among
		 * the types but certain fields are type specific.
		 */
		void SetType(OpScopeWidgetManager_MessageSet::Widget_Type v);

		/**
		 * Set the field @c widgetType.
		 */
		void SetWidgetType(OpScopeWidgetManager_MessageSet::Widget_WidgetType v);

		/**
		 * Set the field @c name.
		 * 
		 * Represents the full human-readable name for a widget. This field will
		 * only be set if there is a name element defined in the widget
		 * specification.
		 * 
		 * Note: This is either the localized name that matches the gadget locales, or the unlocalized name.
		 */
		void SetName(OpScopeWidgetManager_MessageSet::Widget_Name * v);

		/**
		 * Set the field @c properties.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Properties & GetPropertiesRef();

		/**
		 * Set the field @c author.
		 * 
		 * Represents people or an organization attributed with the creation of the widget.
		 * This field will only be set if there is an author element defined in the
		 * widget specification.
		 */
		void SetAuthor(OpScopeWidgetManager_MessageSet::Widget_Author * v);

		/**
		 * Set the field @c namespace.
		 * 
		 * The namespaces this widget uses. If no namespace is defined the field is not set.
		 * e.g. "http://www.w3.org/ns/widgets" or "http://xmlns.opera.com/2006/widget"
		 */
		OpString & GetNamespaceRef();

		/**
		 * Set the field @c version.
		 * 
		 * The version of the widget.
		 */
		OP_STATUS SetVersion(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c width.
		 * 
		 * If specified defines the preferred viewport width in pixels. The value,
		 * when set, is from 1 and up.
		 */
		void SetWidth(INT32 v)
		{
			has_bits_.Reference().SetBit(8);
			_width = v;
		}

		/**
		 * Set the field @c height.
		 * 
		 * If specified defines the preferred viewport height in pixels. The value,
		 * when set, is from 1 and up.
		 */
		void SetHeight(INT32 v)
		{
			has_bits_.Reference().SetBit(9);
			_height = v;
		}

		/**
		 * Set the field @c currentWidth.
		 * 
		 * The current width of the widget in pixels.
		 */
		void SetCurrentWidth(INT32 v)
		{
			has_bits_.Reference().SetBit(10);
			_currentWidth = v;
		}

		/**
		 * Set the field @c currentHeight.
		 * 
		 * The current height of the widget in pixels.
		 */
		void SetCurrentHeight(INT32 v)
		{
			has_bits_.Reference().SetBit(11);
			_currentHeight = v;
		}

		/**
		 * Set the field @c currentViewMode.
		 * 
		 * The current viewmode used by the widget.
		 */
		void SetCurrentViewMode(OpScopeWidgetManager_MessageSet::Widget_ViewMode v);

		/**
		 * Set the field @c defaultViewMode.
		 * 
		 * The default viewmode for the widget.
		 */
		void SetDefaultViewMode(OpScopeWidgetManager_MessageSet::Widget_ViewMode v);

		/**
		 * Set the field @c viewModeList.
		 * 
		 * All viewmodes defined for this widget.
		 */
		OpValueVector<INT32> & GetViewModeListRef();

		/**
		 * Set the field @c viewModeList.
		 * 
		 * All viewmodes defined for this widget.
		 */
		OP_STATUS AppendToViewModeList(OpScopeWidgetManager_MessageSet::Widget_ViewMode v);

		/**
		 * Set the field @c viewModeList.
		 * 
		 * All viewmodes defined for this widget.
		 */
		OP_STATUS SetViewModeListItem(UINT32 i, OpScopeWidgetManager_MessageSet::Widget_ViewMode v);

		/**
		 * Set the field @c description.
		 * 
		 * Represents a human-readable description of the widget.
		 * This field will only be set if there is a description element defined
		 * in the widget specification.
		 * 
		 * Note: This is either the localized description that matches the gadget locales, or the unlocalized description.
		 */
		void SetDescription(OpScopeWidgetManager_MessageSet::Widget_Description * v);

		/**
		 * Set the field @c license.
		 * 
		 * The license information for the widget if one is present.
		 * This field will only be set if there is a license element defined in
		 * the widget specification.
		 */
		void SetLicense(OpScopeWidgetManager_MessageSet::Widget_License * v);

		/**
		 * Set the field @c iconList.
		 * 
		 * All icons defined for the widget.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Icon * AppendNewIconList();

		/**
		 * Set the field @c content.
		 * 
		 * Declare a custom start file the user agent is expected to use when it
		 * instantiates the widget.
		 * This field will only be set if there is a content element defined in
		 * the widget specification.
		 */
		void SetContent(OpScopeWidgetManager_MessageSet::Widget_Content * v);

		/**
		 * Set the field @c featureList.
		 * 
		 * List of all features requested by the widget.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Feature * AppendNewFeatureList();

		/**
		 * Set the field @c preferenceList.
		 * 
		 * List of all preferences defined by the widget.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Preference * AppendNewPreferenceList();

		/**
		 * Set the field @c signature.
		 * 
		 * If the widget was signed with a digital signature this is set with
		 * information on the signature.
		 */
		void SetSignature(OpScopeWidgetManager_MessageSet::Widget_Signature * v);

		/**
		 * Set the field @c updateURL.
		 * 
		 * The URL used for updating the widget.
		 */
		OP_STATUS SetUpdateURL(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c networkAccessList.
		 * 
		 * List of requests to access network resources.
		 */
		OpScopeWidgetManager_MessageSet::Widget_Network * AppendNewNetworkAccessList();

		/**
		 * Set the field @c securityAccessList.
		 * 
		 * Lists of security access the widget requests.
		 * Note: This only applies to Opera Widgets (namespace "http://xmlns.opera.com/2006/widget" and ""), not W3C and other widget formats.
		 */
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess> & GetSecurityAccessListRef();

		/**
		 * Set the field @c securityAccessList.
		 * 
		 * Lists of security access the widget requests.
		 * Note: This only applies to Opera Widgets (namespace "http://xmlns.opera.com/2006/widget" and ""), not W3C and other widget formats.
		 */
		OpScopeWidgetManager_MessageSet::Widget_SecurityAccess * AppendNewSecurityAccessList();

		/**
		 * Set the field @c iriIdentifier.
		 * 
		 * An IRI identifier chosen by widget itself.
		 */
		OP_STATUS SetIriIdentifier(const uni_char * v, int l = KAll);

		/**
		 * Set the field @c extensionInfo.
		 * 
		 * Additional information which is specific to extensions. Only set when
		 * it contains an extension.
		 */
		void SetExtensionInfo(OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo * v);

		/**
		 * Set the field @c uniteInfo.
		 * 
		 * Additional information which is specific to Unite apps and services.
		 * Only set when it contains a Unite app or service.
		 */
		void SetUniteInfo(OpScopeWidgetManager_MessageSet::Widget_UniteInfo * v);

		/**
		 * Set the field @c updateInfo.
		 * 
		 * Information about an available update for the widget.
		 * Set when available, which will be during an update.
		 */
		void SetUpdateInfo(OpScopeWidgetManager_MessageSet::Widget_UpdateInfo * v);

		/**
		 * Set the field @c userJSList.
		 * 
		 * Added UserJS files, this applies to extensions.
		 */
		OpScopeWidgetManager_MessageSet::Widget_UserJS * AppendNewUserJSList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _widgetID;
		INT32 _type;
		INT32 _widgetType;
		OpScopeWidgetManager_MessageSet::Widget_Name * _name;
		OpScopeWidgetManager_MessageSet::Widget_Properties _properties;
		OpScopeWidgetManager_MessageSet::Widget_Author * _author;
		OpString _namespace;
		OpString _version;
		INT32 _width;
		INT32 _height;
		INT32 _currentWidth;
		INT32 _currentHeight;
		INT32 _currentViewMode;
		INT32 _defaultViewMode;
		OpValueVector<INT32> _viewModeList;
		OpScopeWidgetManager_MessageSet::Widget_Description * _description;
		OpScopeWidgetManager_MessageSet::Widget_License * _license;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Icon> _iconList;
		OpScopeWidgetManager_MessageSet::Widget_Content * _content;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature> _featureList;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Preference> _preferenceList;
		OpScopeWidgetManager_MessageSet::Widget_Signature * _signature;
		OpString _updateURL;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Network> _networkAccessList;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess> _securityAccessList;
		OpString _iriIdentifier;
		OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo * _extensionInfo;
		OpScopeWidgetManager_MessageSet::Widget_UniteInfo * _uniteInfo;
		OpScopeWidgetManager_MessageSet::Widget_UpdateInfo * _updateInfo;
		OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UserJS> _userJSList;

		OpProtobufBitField<30> has_bits_;
		mutable int                 encoded_size_;
	};


	class Settings
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		Settings(
			UINT32 max_chunk_size_arg = 0
			)
			: _maxChunkSize(max_chunk_size_arg)
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
		 * Check if the field @c maxChunkSize is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasMaxChunkSize() const
		{
			return TRUE;
		}

		/**
		 * Check if the field @c localeList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasLocaleList() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c maxChunkSize.
		 * 
		 * This host requires that the size of a chunk does not exceed this value.
		 * The host may run on a limited machine such as a mobile device and might
		 * not have enough memory to decode chunks larger than this size.
		 * 
		 * All clients must adhere to this maximum value and never send a larger
		 * chunk.
		 */
		UINT32 GetMaxChunkSize() const
		{
			return _maxChunkSize;
		}

		/**
		 * Get the field @c localeList.
		 * 
		 * Contains the user agent locales used to determine localized content.
		 * e.g. "en", "en-us", "*"
		 */
		const OpAutoVector<OpString> & GetLocaleList() const
		{
			return _localeList;
		}

		// Setters

		/**
		 * Set the field @c maxChunkSize.
		 * 
		 * This host requires that the size of a chunk does not exceed this value.
		 * The host may run on a limited machine such as a mobile device and might
		 * not have enough memory to decode chunks larger than this size.
		 * 
		 * All clients must adhere to this maximum value and never send a larger
		 * chunk.
		 */
		void SetMaxChunkSize(UINT32 v)
		{
			_maxChunkSize = v;
		}

		/**
		 * Set the field @c localeList.
		 * 
		 * Contains the user agent locales used to determine localized content.
		 * e.g. "en", "en-us", "*"
		 */
		OpString * AppendNewLocaleList();

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		UINT32 _maxChunkSize;
		OpAutoVector<OpString> _localeList;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeWidgetManager_Descriptors
{
public:
	OpScopeWidgetManager_Descriptors();
	~OpScopeWidgetManager_Descriptors();

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
		_gen_MessageOffs_widget_author_,
		_gen_MessageOffs_close_widget_arg_,
		_gen_MessageOffs_widget_content_,
		_gen_MessageOffs_create_installer_arg_,
		_gen_MessageOffs_widget_description_,
		_gen_MessageOffs_extension_flag_,
		_gen_MessageOffs_widget_extension_info_,
		_gen_MessageOffs_widget_feature_,
		_gen_MessageOffs_get_extension_flag_arg_,
		_gen_MessageOffs_widget_icon_,
		_gen_MessageOffs_install_widget_arg_,
		_gen_MessageOffs_install_widget_by_url_arg_,
		_gen_MessageOffs_installer_,
		_gen_MessageOffs_widget_license_,
		_gen_MessageOffs_widget_name_,
		_gen_MessageOffs_widget_network_,
		_gen_MessageOffs_open_widget_arg_,
		_gen_MessageOffs_widget_feature_param_,
		_gen_MessageOffs_widget_security_access_port_,
		_gen_MessageOffs_widget_preference_,
		_gen_MessageOffs_widget_properties_,
		_gen_MessageOffs_remove_installer_arg_,
		_gen_MessageOffs_widget_security_access_,
		_gen_MessageOffs_set_extension_flag_arg_,
		_gen_MessageOffs_settings_,
		_gen_MessageOffs_widget_signature_,
		_gen_MessageOffs_uninstall_widget_arg_,
		_gen_MessageOffs_widget_unite_info_,
		_gen_MessageOffs_widget_update_info_,
		_gen_MessageOffs_update_installer_arg_,
		_gen_MessageOffs_update_widget_arg_,
		_gen_MessageOffs_widget_user_js_,
		_gen_MessageOffs_widget_,
		_gen_MessageOffs_widget_install_result_,
		_gen_MessageOffs_widget_list_,
		_gen_MessageOffs_widget_uninstalled_,
		_gen_MessageOffs_widget_update_result_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_widget_author_
		, _gen_MsgID_close_widget_arg_
		, _gen_MsgID_widget_content_
		, _gen_MsgID_create_installer_arg_
		, _gen_MsgID_widget_description_
		, _gen_MsgID_extension_flag_
		, _gen_MsgID_widget_extension_info_
		, _gen_MsgID_widget_feature_
		, _gen_MsgID_get_extension_flag_arg_
		, _gen_MsgID_widget_icon_
		, _gen_MsgID_install_widget_arg_
		, _gen_MsgID_install_widget_by_url_arg_
		, _gen_MsgID_installer_
		, _gen_MsgID_widget_license_
		, _gen_MsgID_widget_name_
		, _gen_MsgID_widget_network_
		, _gen_MsgID_open_widget_arg_
		, _gen_MsgID_widget_feature_param_
		, _gen_MsgID_widget_security_access_port_
		, _gen_MsgID_widget_preference_
		, _gen_MsgID_widget_properties_
		, _gen_MsgID_remove_installer_arg_
		, _gen_MsgID_widget_security_access_
		, _gen_MsgID_set_extension_flag_arg_
		, _gen_MsgID_settings_
		, _gen_MsgID_widget_signature_
		, _gen_MsgID_uninstall_widget_arg_
		, _gen_MsgID_widget_unite_info_
		, _gen_MsgID_widget_update_info_
		, _gen_MsgID_update_installer_arg_
		, _gen_MsgID_update_widget_arg_
		, _gen_MsgID_widget_user_js_
		, _gen_MsgID_widget_
		, _gen_MsgID_widget_install_result_
		, _gen_MsgID_widget_list_
		, _gen_MsgID_widget_uninstalled_
		, _gen_MsgID_widget_update_result_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for FlagType
		_gen_EnumID_ExtensionFlag_FlagType,
		// Meta info for Type
		_gen_EnumID_Widget_Type,
		// Meta info for WidgetType
		_gen_EnumID_Widget_WidgetType,
		// Meta info for ViewMode
		_gen_EnumID_Widget_ViewMode,
		// Meta info for State
		_gen_EnumID_Widget_Signature_State,
		// Meta info for Type
		_gen_EnumID_Widget_UniteInfo_Type,
		// Meta info for UpdateType
		_gen_EnumID_Widget_UpdateInfo_UpdateType,
		// Meta info for Result
		_gen_EnumID_WidgetInstallResult_Result,
		// Meta info for Result
		_gen_EnumID_WidgetUpdateResult_Result,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for FlagType
		_gen_EnumValueCount_ExtensionFlag_FlagType = 2,
		// Meta info for Type
		_gen_EnumValueCount_Widget_Type = 3,
		// Meta info for WidgetType
		_gen_EnumValueCount_Widget_WidgetType = 4,
		// Meta info for ViewMode
		_gen_EnumValueCount_Widget_ViewMode = 9,
		// Meta info for State
		_gen_EnumValueCount_Widget_Signature_State = 5,
		// Meta info for Type
		_gen_EnumValueCount_Widget_UniteInfo_Type = 3,
		// Meta info for UpdateType
		_gen_EnumValueCount_Widget_UpdateInfo_UpdateType = 6,
		// Meta info for Result
		_gen_EnumValueCount_WidgetInstallResult_Result = 5,
		// Meta info for Result
		_gen_EnumValueCount_WidgetUpdateResult_Result = 5,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for FlagType
		_gen_Enum_ExtensionFlag_FlagType,
		// Meta info for Type
		_gen_Enum_Widget_Type,
		// Meta info for WidgetType
		_gen_Enum_Widget_WidgetType,
		// Meta info for ViewMode
		_gen_Enum_Widget_ViewMode,
		// Meta info for State
		_gen_Enum_Widget_Signature_State,
		// Meta info for Type
		_gen_Enum_Widget_UniteInfo_Type,
		// Meta info for UpdateType
		_gen_Enum_Widget_UpdateInfo_UpdateType,
		// Meta info for Result
		_gen_Enum_WidgetInstallResult_Result,
		// Meta info for Result
		_gen_Enum_WidgetUpdateResult_Result,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[9];

};


class OpScopeWidgetManager_SI
	: public OpScopeService
	, public OpScopeWidgetManager_MessageSet
{
public:
	OpScopeWidgetManager_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeWidgetManager_SI();

	enum CommandEnum
	{
		  Command_GetSettings = 1
		, Command_ListWidgets = 2
		, Command_OpenWidget = 3
		, Command_CloseWidget = 4
		, Command_CreateInstaller = 5
		, Command_UpdateInstaller = 6
		, Command_RemoveInstaller = 7
		, Command_InstallWidget = 8
		, Command_InstallWidgetByURL = 9
		, Command_UninstallWidget = 10
		, Command_OnWidgetInstalled = 11
		, Command_OnWidgetUpgraded = 12
		, Command_OnWidgetInstallFailed = 13
		, Command_OnWidgetUninstalled = 14
		, Command_OnWidgetUpgradeAvailable = 15
		, Command_UpdateWidget = 16
		, Command_SetExtensionFlag = 17
		, Command_GetExtensionFlag = 18

		, Command_Count = 18 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeWidgetManager_Descriptors
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
	virtual OP_STATUS DoGetSettings(Settings &out) = 0;
	virtual OP_STATUS DoListWidgets(WidgetList &out) = 0;
	virtual OP_STATUS DoOpenWidget(const OpenWidgetArg &in) = 0;
	virtual OP_STATUS DoCloseWidget(const CloseWidgetArg &in) = 0;
	virtual OP_STATUS DoCreateInstaller(const CreateInstallerArg &in, Installer &out) = 0;
	virtual OP_STATUS DoUpdateInstaller(const UpdateInstallerArg &in) = 0;
	virtual OP_STATUS DoRemoveInstaller(const RemoveInstallerArg &in) = 0;
	virtual OP_STATUS DoInstallWidget(const InstallWidgetArg &in, WidgetInstallResult &out) = 0;
	virtual OP_STATUS DoSetExtensionFlag(const SetExtensionFlagArg &in) = 0;
	virtual OP_STATUS DoGetExtensionFlag(const GetExtensionFlagArg &in, ExtensionFlag &out) = 0;
	virtual OP_STATUS DoInstallWidgetByURL(const InstallWidgetByURLArg &in, unsigned int async_tag) = 0;
	virtual OP_STATUS DoUninstallWidget(const UninstallWidgetArg &in, unsigned int async_tag) = 0;
	virtual OP_STATUS DoUpdateWidget(const UpdateWidgetArg &in, unsigned int async_tag) = 0;

	// Event functions
	OP_STATUS SendOnWidgetInstalled(const Widget &msg);
	OP_STATUS SendOnWidgetUpgraded(const Widget &msg);
	OP_STATUS SendOnWidgetInstallFailed(const WidgetInstallResult &msg);
	OP_STATUS SendOnWidgetUninstalled(const WidgetUninstalled &msg);
	OP_STATUS SendOnWidgetUpgradeAvailable(const Widget &msg);
	OP_STATUS SendInstallWidgetByURL(const WidgetInstallResult &msg, unsigned int tag);
	OP_STATUS SendUninstallWidget(unsigned int tag);
	OP_STATUS SendUpdateWidget(const WidgetUpdateResult &msg, unsigned int tag);


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SCOPE_WIDGET_MANAGER_SUPPORT

#endif // G_SCOPE_WIDGET_MANAGER_INTERFACE_H
