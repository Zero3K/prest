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

#include "core/pch.h"

#ifdef SCOPE_WIDGET_MANAGER_SUPPORT

#include "modules/scope/src/generated/g_scope_widget_manager_interface.h"

// BEGIN: OpScopeWidgetManager_Descriptors

OpScopeWidgetManager_Descriptors::OpScopeWidgetManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		message_list[i] = NULL;
	}
}

OpScopeWidgetManager_Descriptors::~OpScopeWidgetManager_Descriptors()
{
	for (unsigned i = 0; i < _gen_Message_Count; ++i)
	{
		OP_DELETE(message_list[i]);
	}
}

OP_STATUS
OpScopeWidgetManager_Descriptors::Construct()
{
	enum_id_list[0] = _gen_EnumID_ExtensionFlag_FlagType;
	enum_id_list[1] = _gen_EnumID_Widget_Type;
	enum_id_list[2] = _gen_EnumID_Widget_WidgetType;
	enum_id_list[3] = _gen_EnumID_Widget_ViewMode;
	enum_id_list[4] = _gen_EnumID_Widget_Signature_State;
	enum_id_list[5] = _gen_EnumID_Widget_UniteInfo_Type;
	enum_id_list[6] = _gen_EnumID_Widget_UpdateInfo_UpdateType;
	enum_id_list[7] = _gen_EnumID_WidgetInstallResult_Result;
	enum_id_list[8] = _gen_EnumID_WidgetUpdateResult_Result;
	return OpStatus::OK;
}

const OpProtobufMessage *
OpScopeWidgetManager_Descriptors::Get(unsigned id) const
{
	OpScopeWidgetManager_Descriptors *descriptors = const_cast<OpScopeWidgetManager_Descriptors *>(this);
	switch (id)
	{
	case _gen_MsgID_widget_author_:
		return OpScopeWidgetManager_MessageSet::Widget_Author::GetMessageDescriptor(descriptors);

	case _gen_MsgID_close_widget_arg_:
		return OpScopeWidgetManager_MessageSet::CloseWidgetArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_content_:
		return OpScopeWidgetManager_MessageSet::Widget_Content::GetMessageDescriptor(descriptors);

	case _gen_MsgID_create_installer_arg_:
		return OpScopeWidgetManager_MessageSet::CreateInstallerArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_description_:
		return OpScopeWidgetManager_MessageSet::Widget_Description::GetMessageDescriptor(descriptors);

	case _gen_MsgID_extension_flag_:
		return OpScopeWidgetManager_MessageSet::ExtensionFlag::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_extension_info_:
		return OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_feature_:
		return OpScopeWidgetManager_MessageSet::Widget_Feature::GetMessageDescriptor(descriptors);

	case _gen_MsgID_get_extension_flag_arg_:
		return OpScopeWidgetManager_MessageSet::GetExtensionFlagArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_icon_:
		return OpScopeWidgetManager_MessageSet::Widget_Icon::GetMessageDescriptor(descriptors);

	case _gen_MsgID_install_widget_arg_:
		return OpScopeWidgetManager_MessageSet::InstallWidgetArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_install_widget_by_url_arg_:
		return OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_installer_:
		return OpScopeWidgetManager_MessageSet::Installer::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_license_:
		return OpScopeWidgetManager_MessageSet::Widget_License::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_name_:
		return OpScopeWidgetManager_MessageSet::Widget_Name::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_network_:
		return OpScopeWidgetManager_MessageSet::Widget_Network::GetMessageDescriptor(descriptors);

	case _gen_MsgID_open_widget_arg_:
		return OpScopeWidgetManager_MessageSet::OpenWidgetArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_feature_param_:
		return OpScopeWidgetManager_MessageSet::Widget_Feature_Param::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_security_access_port_:
		return OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_preference_:
		return OpScopeWidgetManager_MessageSet::Widget_Preference::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_properties_:
		return OpScopeWidgetManager_MessageSet::Widget_Properties::GetMessageDescriptor(descriptors);

	case _gen_MsgID_remove_installer_arg_:
		return OpScopeWidgetManager_MessageSet::RemoveInstallerArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_security_access_:
		return OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::GetMessageDescriptor(descriptors);

	case _gen_MsgID_set_extension_flag_arg_:
		return OpScopeWidgetManager_MessageSet::SetExtensionFlagArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_settings_:
		return OpScopeWidgetManager_MessageSet::Settings::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_signature_:
		return OpScopeWidgetManager_MessageSet::Widget_Signature::GetMessageDescriptor(descriptors);

	case _gen_MsgID_uninstall_widget_arg_:
		return OpScopeWidgetManager_MessageSet::UninstallWidgetArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_unite_info_:
		return OpScopeWidgetManager_MessageSet::Widget_UniteInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_update_info_:
		return OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::GetMessageDescriptor(descriptors);

	case _gen_MsgID_update_installer_arg_:
		return OpScopeWidgetManager_MessageSet::UpdateInstallerArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_update_widget_arg_:
		return OpScopeWidgetManager_MessageSet::UpdateWidgetArg::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_user_js_:
		return OpScopeWidgetManager_MessageSet::Widget_UserJS::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_:
		return OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_install_result_:
		return OpScopeWidgetManager_MessageSet::WidgetInstallResult::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_list_:
		return OpScopeWidgetManager_MessageSet::WidgetList::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_uninstalled_:
		return OpScopeWidgetManager_MessageSet::WidgetUninstalled::GetMessageDescriptor(descriptors);

	case _gen_MsgID_widget_update_result_:
		return OpScopeWidgetManager_MessageSet::WidgetUpdateResult::GetMessageDescriptor(descriptors);

	default:
		return NULL;
	}
}


// END: OpScopeWidgetManager_Descriptors


// BEGIN: OpScopeWidgetManager_MessageSet

OpScopeWidgetManager_MessageSet::OpScopeWidgetManager_MessageSet()
{
}

/*virtual*/
OpScopeWidgetManager_MessageSet::~OpScopeWidgetManager_MessageSet()
{
}

// END: OpScopeWidgetManager_MessageSet

// BEGIN: Messages

//   BEGIN: Message: Author
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Author::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_author_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("email"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("href"),
						OpProtobufField::Optional
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("organization"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Author,
						_text
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Author,
						_email
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Author,
						_href
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Author,
						_organization
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_author_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Author, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Author, encoded_size_),
					"Author",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Author>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Author>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Author: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Author::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Author::SetEmail(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _email.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Author::SetHref(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _href.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Author::SetOrganization(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(3);
	return _organization.Set(v, l);
}

// END: Widget.Author: Implementation

//   END: Message: Author

//   BEGIN: Message: CloseWidgetArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::CloseWidgetArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_close_widget_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::CloseWidgetArg,
						_widgetID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_close_widget_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::CloseWidgetArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::CloseWidgetArg, encoded_size_),
					"CloseWidgetArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::CloseWidgetArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::CloseWidgetArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CloseWidgetArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::CloseWidgetArg::SetWidgetID(const uni_char * v, int l) 
{
	return _widgetID.Set(v, l);
}

// END: CloseWidgetArg: Implementation

//   END: Message: CloseWidgetArg

//   BEGIN: Message: Content
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Content::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_content_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("src"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("type"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("encoding"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Content,
						_src
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Content,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Content,
						_encoding
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_content_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Content, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Content, encoded_size_),
					"Content",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Content>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Content>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Content: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Content::SetSrc(const uni_char * v, int l) 
{
	return _src.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Content::SetType(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _type.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Content::SetEncoding(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _encoding.Set(v, l);
}

// END: Widget.Content: Implementation

//   END: Message: Content

//   BEGIN: Message: CreateInstallerArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::CreateInstallerArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_create_installer_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Optional
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("widgetType"),
						OpProtobufField::Optional
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Type // unsigned enum_id
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::CreateInstallerArg,
						_widgetID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::CreateInstallerArg,
						_widgetType
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_create_installer_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::CreateInstallerArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::CreateInstallerArg, encoded_size_),
					"CreateInstallerArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::CreateInstallerArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::CreateInstallerArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: CreateInstallerArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::CreateInstallerArg::SetWidgetID(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(0);
	return _widgetID.Set(v, l);
}


void
OpScopeWidgetManager_MessageSet::CreateInstallerArg::SetWidgetType(OpScopeWidgetManager_MessageSet::Widget_Type v) 
{
	has_bits_.Reference().SetBit(1);
	_widgetType = static_cast<OpScopeWidgetManager_MessageSet::Widget_Type>(v);
}

// END: CreateInstallerArg: Implementation

//   END: Message: CreateInstallerArg

//   BEGIN: Message: Description
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Description::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_description_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("locale"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Description,
						_text
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Description,
						_locale
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_description_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Description, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Description, encoded_size_),
					"Description",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Description>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Description>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Description: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Description::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Description::SetLocale(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _locale.Set(v, l);
}

// END: Widget.Description: Implementation

//   END: Message: Description

//   BEGIN: Message: ExtensionFlag
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::ExtensionFlag::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_extension_flag_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("flag"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_ExtensionFlag_FlagType // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("value"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::ExtensionFlag,
						_flag
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::ExtensionFlag,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_extension_flag_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::ExtensionFlag, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::ExtensionFlag, encoded_size_),
					"ExtensionFlag",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::ExtensionFlag>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::ExtensionFlag>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: ExtensionFlag: Implementation

// Enum value ExtensionFlag.FlagType.ALLOW_USERJS_HTTPS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType OpScopeWidgetManager_MessageSet::ExtensionFlag::FLAGTYPE_ALLOW_USERJS_HTTPS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value ExtensionFlag.FlagType.ALLOW_USERJS_PRIVATE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType OpScopeWidgetManager_MessageSet::ExtensionFlag::FLAGTYPE_ALLOW_USERJS_PRIVATE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeWidgetManager_MessageSet::ExtensionFlag::SetFlag(OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType v) 
{
	_flag = static_cast<OpScopeWidgetManager_MessageSet::ExtensionFlag_FlagType>(v);
}

// END: ExtensionFlag: Implementation

//   END: Message: ExtensionFlag

//   BEGIN: Message: ExtensionInfo
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_extension_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("includesPath"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isRunning"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo,
						_includesPath
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo,
						_isRunning
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_extension_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo, encoded_size_),
					"ExtensionInfo",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.ExtensionInfo: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo::SetIncludesPath(const uni_char * v, int l) 
{
	return _includesPath.Set(v, l);
}

// END: Widget.ExtensionInfo: Implementation

//   END: Message: ExtensionInfo

//   BEGIN: Message: Feature
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Feature::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_feature_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isRequired"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("paramList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Feature,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Feature,
						_isRequired
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Feature,
						_paramList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_feature_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Feature, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Feature, encoded_size_),
					"Feature",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Widget_Feature_Param::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Feature: Implementation


// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Feature::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OpScopeWidgetManager_MessageSet::Widget_Feature_Param *
OpScopeWidgetManager_MessageSet::Widget_Feature::AppendNewParamList() 
{
	has_bits_.Reference().SetBit(2);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_Feature_Param> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_Feature_Param, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_paramList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: Widget.Feature: Implementation

//   END: Message: Feature

//   BEGIN: Message: GetExtensionFlagArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::GetExtensionFlagArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_get_extension_flag_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("flag"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::GetExtensionFlagArg,
						_widgetID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::GetExtensionFlagArg,
						_flag
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_get_extension_flag_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::GetExtensionFlagArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::GetExtensionFlagArg, encoded_size_),
					"GetExtensionFlagArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::GetExtensionFlagArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::GetExtensionFlagArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(ExtensionFlag::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: GetExtensionFlagArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::GetExtensionFlagArg::SetWidgetID(const uni_char * v, int l) 
{
	return _widgetID.Set(v, l);
}


OpScopeWidgetManager_MessageSet::ExtensionFlag &
OpScopeWidgetManager_MessageSet::GetExtensionFlagArg::GetFlagRef() 
{
	return _flag;
}

// END: GetExtensionFlagArg: Implementation

//   END: Message: GetExtensionFlagArg

//   BEGIN: Message: Icon
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Icon::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_icon_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("src"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("width"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Uint32,
						3,
						UNI_L("height"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Icon,
						_src
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Icon,
						_width
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Icon,
						_height
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_icon_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Icon, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Icon, encoded_size_),
					"Icon",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Icon>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Icon>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Icon: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Icon::SetSrc(const uni_char * v, int l) 
{
	return _src.Set(v, l);
}

// END: Widget.Icon: Implementation

//   END: Message: Icon

//   BEGIN: Message: InstallWidgetArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::InstallWidgetArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_install_widget_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("installerID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::InstallWidgetArg,
						_installerID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_install_widget_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::InstallWidgetArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::InstallWidgetArg, encoded_size_),
					"InstallWidgetArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::InstallWidgetArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::InstallWidgetArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: InstallWidgetArg: Implementation


// END: InstallWidgetArg: Implementation

//   END: Message: InstallWidgetArg

//   BEGIN: Message: InstallWidgetByURLArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_install_widget_by_url_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("url"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_install_widget_by_url_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg, encoded_size_),
					"InstallWidgetByURLArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: InstallWidgetByURLArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::InstallWidgetByURLArg::SetUrl(const uni_char * v, int l) 
{
	return _url.Set(v, l);
}

// END: InstallWidgetByURLArg: Implementation

//   END: Message: InstallWidgetByURLArg

//   BEGIN: Message: Installer
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Installer::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_installer_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("installerID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Installer,
						_installerID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_installer_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Installer, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Installer, encoded_size_),
					"Installer",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Installer>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Installer>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Installer: Implementation


// END: Installer: Implementation

//   END: Message: Installer

//   BEGIN: Message: License
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_License::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_license_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("href"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("locale"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_License,
						_text
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_License,
						_href
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_License,
						_locale
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_license_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_License, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_License, encoded_size_),
					"License",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_License>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_License>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.License: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_License::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_License::SetHref(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _href.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_License::SetLocale(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _locale.Set(v, l);
}

// END: Widget.License: Implementation

//   END: Message: License

//   BEGIN: Message: Name
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Name::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_name_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("text"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("shortName"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("locale"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Name,
						_text
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Name,
						_shortName
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Name,
						_locale
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_name_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Name, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Name, encoded_size_),
					"Name",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Name>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Name>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Name: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Name::SetText(const uni_char * v, int l) 
{
	return _text.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Name::SetShortName(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _shortName.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Name::SetLocale(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _locale.Set(v, l);
}

// END: Widget.Name: Implementation

//   END: Message: Name

//   BEGIN: Message: Network
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Network::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_network_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("origin"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("allowSubdomains"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Network,
						_origin
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Network,
						_allowSubdomains
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_network_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Network, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Network, encoded_size_),
					"Network",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Network>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Network>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Network: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Network::SetOrigin(const uni_char * v, int l) 
{
	return _origin.Set(v, l);
}

// END: Widget.Network: Implementation

//   END: Message: Network

//   BEGIN: Message: OpenWidgetArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::OpenWidgetArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_open_widget_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("allowMutablePolicy"),
						OpProtobufField::Optional
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::String,
						3,
						UNI_L("globalPolicy"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::OpenWidgetArg,
						_widgetID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::OpenWidgetArg,
						_allowMutablePolicy
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::OpenWidgetArg,
						_globalPolicy
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_open_widget_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::OpenWidgetArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::OpenWidgetArg, encoded_size_),
					"OpenWidgetArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::OpenWidgetArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::OpenWidgetArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: OpenWidgetArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::OpenWidgetArg::SetWidgetID(const uni_char * v, int l) 
{
	return _widgetID.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::OpenWidgetArg::SetGlobalPolicy(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(2);
	return _globalPolicy.Set(v, l);
}

// END: OpenWidgetArg: Implementation

//   END: Message: OpenWidgetArg

//   BEGIN: Message: Param
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Feature_Param::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_feature_param_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("value"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Feature_Param,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Feature_Param,
						_value
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_feature_param_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Feature_Param, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Feature_Param, encoded_size_),
					"Param",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature_Param>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Feature_Param>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget_Feature::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Feature.Param: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Feature_Param::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Feature_Param::SetValue(const uni_char * v, int l) 
{
	return _value.Set(v, l);
}

// END: Widget.Feature.Param: Implementation

//   END: Message: Param

//   BEGIN: Message: Port
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_security_access_port_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("low"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Uint32,
						2,
						UNI_L("high"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port,
						_low
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port,
						_high
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_security_access_port_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port, encoded_size_),
					"Port",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.SecurityAccess.Port: Implementation


// END: Widget.SecurityAccess.Port: Implementation

//   END: Message: Port

//   BEGIN: Message: Preference
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Preference::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_preference_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("name"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("value"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("isReadOnly"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Preference,
						_name
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Preference,
						_value
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Preference,
						_isReadOnly
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_preference_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Preference, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Preference, encoded_size_),
					"Preference",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Preference>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Preference>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Preference: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Preference::SetName(const uni_char * v, int l) 
{
	return _name.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Preference::SetValue(const uni_char * v, int l) 
{
	return _value.Set(v, l);
}

// END: Widget.Preference: Implementation

//   END: Message: Preference

//   BEGIN: Message: Properties
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Properties::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_properties_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Bool,
						1,
						UNI_L("isActive"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bool,
						2,
						UNI_L("isEnabled"),
						OpProtobufField::Required
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("isDockable"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Bool,
						4,
						UNI_L("hasFileAccess"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Bool,
						5,
						UNI_L("isPersistent"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Bool,
						6,
						UNI_L("hasTransparentFeatures"),
						OpProtobufField::Required
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Bool,
						8,
						UNI_L("hasJSPluginsAccess"),
						OpProtobufField::Required
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::Bool,
						9,
						UNI_L("hasJILFilesystemAccess"),
						OpProtobufField::Required
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Bool,
						10,
						UNI_L("hasFeatureTagSupport"),
						OpProtobufField::Required
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::String,
						11,
						UNI_L("path"),
						OpProtobufField::Required
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::String,
						12,
						UNI_L("fileName"),
						OpProtobufField::Required
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::String,
						13,
						UNI_L("configFilePath"),
						OpProtobufField::Required
						);
	fields[12] = OpProtobufField(
						OpProtobufFormat::String,
						14,
						UNI_L("downloadURL"),
						OpProtobufField::Required
						);
	fields[13] = OpProtobufField(
						OpProtobufFormat::Uint32,
						15,
						UNI_L("windowID"),
						OpProtobufField::Required
						);
	fields[14] = OpProtobufField(
						OpProtobufFormat::Bool,
						16,
						UNI_L("publicNetwork"),
						OpProtobufField::Required
						);
	fields[15] = OpProtobufField(
						OpProtobufFormat::Bool,
						17,
						UNI_L("privateNetwork"),
						OpProtobufField::Required
						);
	fields[16] = OpProtobufField(
						OpProtobufFormat::String,
						18,
						UNI_L("disabledDetails"),
						OpProtobufField::Optional
						);
	fields[17] = OpProtobufField(
						OpProtobufFormat::String,
						19,
						UNI_L("resolvedStartPath"),
						OpProtobufField::Optional
						);
	fields[18] = OpProtobufField(
						OpProtobufFormat::String,
						20,
						UNI_L("startfileLocale"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_isActive
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_isEnabled
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_isDockable
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_hasFileAccess
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_isPersistent
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_hasTransparentFeatures
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_hasJSPluginsAccess
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_hasJILFilesystemAccess
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_hasFeatureTagSupport
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_path
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_fileName
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_configFilePath
						);
	offsets[12] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_downloadURL
						);
	offsets[13] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_windowID
						);
	offsets[14] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_publicNetwork
						);
	offsets[15] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_privateNetwork
						);
	offsets[16] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_disabledDetails
						);
	offsets[17] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_resolvedStartPath
						);
	offsets[18] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Properties,
						_startfileLocale
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_properties_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Properties, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Properties, encoded_size_),
					"Properties",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Properties>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Properties>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Properties: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Properties::SetPath(const uni_char * v, int l) 
{
	return _path.Set(v, l);
}


OpString &
OpScopeWidgetManager_MessageSet::Widget_Properties::GetFileNameRef() 
{
	return _fileName;
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Properties::SetConfigFilePath(const uni_char * v, int l) 
{
	return _configFilePath.Set(v, l);
}


OpString &
OpScopeWidgetManager_MessageSet::Widget_Properties::GetDownloadURLRef() 
{
	return _downloadURL;
}


OpString &
OpScopeWidgetManager_MessageSet::Widget_Properties::GetDisabledDetailsRef() 
{
	has_bits_.Reference().SetBit(16);
	return _disabledDetails;
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Properties::SetResolvedStartPath(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(17);
	return _resolvedStartPath.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Properties::SetStartfileLocale(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(18);
	return _startfileLocale.Set(v, l);
}

// END: Widget.Properties: Implementation

//   END: Message: Properties

//   BEGIN: Message: RemoveInstallerArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::RemoveInstallerArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_remove_installer_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("installerID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::RemoveInstallerArg,
						_installerID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_remove_installer_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::RemoveInstallerArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::RemoveInstallerArg, encoded_size_),
					"RemoveInstallerArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::RemoveInstallerArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::RemoveInstallerArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: RemoveInstallerArg: Implementation


// END: RemoveInstallerArg: Implementation

//   END: Message: RemoveInstallerArg

//   BEGIN: Message: SecurityAccess
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_security_access_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("protocolList"),
						OpProtobufField::Repeated
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("hostList"),
						OpProtobufField::Repeated
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Message,
						3,
						UNI_L("portList"),
						OpProtobufField::Repeated
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("pathList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_SecurityAccess,
						_protocolList
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_SecurityAccess,
						_hostList
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_SecurityAccess,
						_portList
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_SecurityAccess,
						_pathList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_security_access_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_SecurityAccess, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_SecurityAccess, encoded_size_),
					"SecurityAccess",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[2].SetMessage(Widget_SecurityAccess_Port::GetMessageDescriptor(descriptors));
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.SecurityAccess: Implementation


// Setters

OpString *
OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::AppendNewProtocolList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_protocolList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpString *
OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::AppendNewHostList() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_hostList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port *
OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::AppendNewPortList() 
{
	has_bits_.Reference().SetBit(2);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_SecurityAccess_Port, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_portList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpString *
OpScopeWidgetManager_MessageSet::Widget_SecurityAccess::AppendNewPathList() 
{
	has_bits_.Reference().SetBit(3);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_pathList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: Widget.SecurityAccess: Implementation

//   END: Message: SecurityAccess

//   BEGIN: Message: SetExtensionFlagArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::SetExtensionFlagArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_set_extension_flag_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Message,
						2,
						UNI_L("flag"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::SetExtensionFlagArg,
						_widgetID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::SetExtensionFlagArg,
						_flag
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_set_extension_flag_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::SetExtensionFlagArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::SetExtensionFlagArg, encoded_size_),
					"SetExtensionFlagArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::SetExtensionFlagArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::SetExtensionFlagArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[1].SetMessage(ExtensionFlag::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: SetExtensionFlagArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::SetExtensionFlagArg::SetWidgetID(const uni_char * v, int l) 
{
	return _widgetID.Set(v, l);
}


OpScopeWidgetManager_MessageSet::ExtensionFlag &
OpScopeWidgetManager_MessageSet::SetExtensionFlagArg::GetFlagRef() 
{
	return _flag;
}

// END: SetExtensionFlagArg: Implementation

//   END: Message: SetExtensionFlagArg

//   BEGIN: Message: Settings
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Settings::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_settings_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("maxChunkSize"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("localeList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Settings,
						_maxChunkSize
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Settings,
						_localeList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_settings_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Settings, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Settings, encoded_size_),
					"Settings",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Settings>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Settings>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: Settings: Implementation

// Setters

OpString *
OpScopeWidgetManager_MessageSet::Settings::AppendNewLocaleList() 
{
	has_bits_.Reference().SetBit(1);
	OpAutoPtr<OpString> tmp(OP_NEW(OpString, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_localeList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: Settings: Implementation

//   END: Message: Settings

//   BEGIN: Message: Signature
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_Signature::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_signature_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("id"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("state"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Signature_State // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("isPrivilegedCert"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Signature,
						_id
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Signature,
						_state
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_Signature,
						_isPrivilegedCert
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_signature_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Signature, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_Signature, encoded_size_),
					"Signature",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Signature>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_Signature>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.Signature: Implementation

// Enum value Widget.Signature.State.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Signature_State OpScopeWidgetManager_MessageSet::Widget_Signature::STATE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.Signature.State.UNSIGNED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Signature_State OpScopeWidgetManager_MessageSet::Widget_Signature::STATE_UNSIGNED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.Signature.State.SIGNED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Signature_State OpScopeWidgetManager_MessageSet::Widget_Signature::STATE_SIGNED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.Signature.State.VERIFICATION_FAILED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Signature_State OpScopeWidgetManager_MessageSet::Widget_Signature::STATE_VERIFICATION_FAILED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.Signature.State.PENDING
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Signature_State OpScopeWidgetManager_MessageSet::Widget_Signature::STATE_PENDING;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_Signature::SetId(const uni_char * v, int l) 
{
	return _id.Set(v, l);
}


void
OpScopeWidgetManager_MessageSet::Widget_Signature::SetState(OpScopeWidgetManager_MessageSet::Widget_Signature_State v) 
{
	_state = static_cast<OpScopeWidgetManager_MessageSet::Widget_Signature_State>(v);
}

// END: Widget.Signature: Implementation

//   END: Message: Signature

//   BEGIN: Message: UninstallWidgetArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::UninstallWidgetArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_uninstall_widget_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::UninstallWidgetArg,
						_widgetID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_uninstall_widget_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::UninstallWidgetArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::UninstallWidgetArg, encoded_size_),
					"UninstallWidgetArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::UninstallWidgetArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::UninstallWidgetArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UninstallWidgetArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::UninstallWidgetArg::SetWidgetID(const uni_char * v, int l) 
{
	return _widgetID.Set(v, l);
}

// END: UninstallWidgetArg: Implementation

//   END: Message: UninstallWidgetArg

//   BEGIN: Message: UniteInfo
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_UniteInfo::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_unite_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UniteInfo_Type // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("servicePath"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UniteInfo,
						_type
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UniteInfo,
						_servicePath
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_unite_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_UniteInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_UniteInfo, encoded_size_),
					"UniteInfo",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UniteInfo>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UniteInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.UniteInfo: Implementation

// Enum value Widget.UniteInfo.Type.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type OpScopeWidgetManager_MessageSet::Widget_UniteInfo::TYPE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UniteInfo.Type.SERVICE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type OpScopeWidgetManager_MessageSet::Widget_UniteInfo::TYPE_SERVICE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UniteInfo.Type.APPLICATION
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type OpScopeWidgetManager_MessageSet::Widget_UniteInfo::TYPE_APPLICATION;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeWidgetManager_MessageSet::Widget_UniteInfo::SetType(OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type v) 
{
	_type = static_cast<OpScopeWidgetManager_MessageSet::Widget_UniteInfo_Type>(v);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UniteInfo::SetServicePath(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _servicePath.Set(v, l);
}

// END: Widget.UniteInfo: Implementation

//   END: Message: UniteInfo

//   BEGIN: Message: UpdateInfo
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_update_info_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("customWidgetID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("updateType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UpdateInfo_UpdateType // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Bool,
						3,
						UNI_L("isMandatory"),
						OpProtobufField::Required
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::String,
						4,
						UNI_L("version"),
						OpProtobufField::Required
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Double,
						5,
						UNI_L("lastModified"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::String,
						6,
						UNI_L("src"),
						OpProtobufField::Required
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::Uint32,
						7,
						UNI_L("size"),
						OpProtobufField::Required
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("details"),
						OpProtobufField::Required
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::String,
						9,
						UNI_L("documentUri"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_customWidgetID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_updateType
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_isMandatory
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_version
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_lastModified
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_src
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_size
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_details
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UpdateInfo,
						_documentUri
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_update_info_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_UpdateInfo, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_UpdateInfo, encoded_size_),
					"UpdateInfo",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UpdateInfo>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UpdateInfo>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.UpdateInfo: Implementation

// Enum value Widget.UpdateInfo.UpdateType.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::UPDATETYPE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UpdateInfo.UpdateType.UPDATE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::UPDATETYPE_UPDATE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UpdateInfo.UpdateType.DISABLE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::UPDATETYPE_DISABLE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UpdateInfo.UpdateType.ACTIVATE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::UPDATETYPE_ACTIVATE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UpdateInfo.UpdateType.DELETE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::UPDATETYPE_DELETE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.UpdateInfo.UpdateType.NO_UPDATE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::UPDATETYPE_NO_UPDATE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::SetCustomWidgetID(const uni_char * v, int l) 
{
	return _customWidgetID.Set(v, l);
}


void
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::SetUpdateType(OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType v) 
{
	_updateType = static_cast<OpScopeWidgetManager_MessageSet::Widget_UpdateInfo_UpdateType>(v);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::SetVersion(const uni_char * v, int l) 
{
	return _version.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::SetSrc(const uni_char * v, int l) 
{
	return _src.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::SetDetails(const uni_char * v, int l) 
{
	return _details.Set(v, l);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UpdateInfo::SetDocumentUri(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(8);
	return _documentUri.Set(v, l);
}

// END: Widget.UpdateInfo: Implementation

//   END: Message: UpdateInfo

//   BEGIN: Message: UpdateInstallerArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::UpdateInstallerArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_update_installer_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Uint32,
						1,
						UNI_L("installerID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Bytes,
						2,
						UNI_L("byteData"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::UpdateInstallerArg,
						_installerID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::UpdateInstallerArg,
						_byteData
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_update_installer_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::UpdateInstallerArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::UpdateInstallerArg, encoded_size_),
					"UpdateInstallerArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::UpdateInstallerArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::UpdateInstallerArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UpdateInstallerArg: Implementation

// Setters

ByteBuffer &
OpScopeWidgetManager_MessageSet::UpdateInstallerArg::GetByteDataRef() 
{
	return _byteData;
}

// END: UpdateInstallerArg: Implementation

//   END: Message: UpdateInstallerArg

//   BEGIN: Message: UpdateWidgetArg
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::UpdateWidgetArg::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_update_widget_arg_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::UpdateWidgetArg,
						_widgetID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_update_widget_arg_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::UpdateWidgetArg, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::UpdateWidgetArg, encoded_size_),
					"UpdateWidgetArg",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::UpdateWidgetArg>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::UpdateWidgetArg>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: UpdateWidgetArg: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::UpdateWidgetArg::SetWidgetID(const uni_char * v, int l) 
{
	return _widgetID.Set(v, l);
}

// END: UpdateWidgetArg: Implementation

//   END: Message: UpdateWidgetArg

//   BEGIN: Message: UserJS
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget_UserJS::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_user_js_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("filename"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget_UserJS,
						_filename
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_user_js_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_UserJS, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget_UserJS, encoded_size_),
					"UserJS",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UserJS>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_UserJS>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	const OpProtobufMessage *parent = OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(descriptors);
	if (!parent)
		return NULL;
	message->SetParentId(parent->GetInternalId());

	return message;
}

// BEGIN: Widget.UserJS: Implementation

// Setters

OP_STATUS
OpScopeWidgetManager_MessageSet::Widget_UserJS::SetFilename(const uni_char * v, int l) 
{
	return _filename.Set(v, l);
}

// END: Widget.UserJS: Implementation

//   END: Message: UserJS

//   BEGIN: Message: Widget
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::Widget::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::Int32,
						2,
						UNI_L("type"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Type // unsigned enum_id
						);
	fields[2] = OpProtobufField(
						OpProtobufFormat::Int32,
						3,
						UNI_L("widgetType"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_WidgetType // unsigned enum_id
						);
	fields[3] = OpProtobufField(
						OpProtobufFormat::Message,
						4,
						UNI_L("name"),
						OpProtobufField::Optional
						);
	fields[4] = OpProtobufField(
						OpProtobufFormat::Message,
						5,
						UNI_L("properties"),
						OpProtobufField::Required
						);
	fields[5] = OpProtobufField(
						OpProtobufFormat::Message,
						6,
						UNI_L("author"),
						OpProtobufField::Optional
						);
	fields[6] = OpProtobufField(
						OpProtobufFormat::String,
						7,
						UNI_L("namespace"),
						OpProtobufField::Optional
						);
	fields[7] = OpProtobufField(
						OpProtobufFormat::String,
						8,
						UNI_L("version"),
						OpProtobufField::Optional
						);
	fields[8] = OpProtobufField(
						OpProtobufFormat::Int32,
						9,
						UNI_L("width"),
						OpProtobufField::Optional
						);
	fields[9] = OpProtobufField(
						OpProtobufFormat::Int32,
						10,
						UNI_L("height"),
						OpProtobufField::Optional
						);
	fields[10] = OpProtobufField(
						OpProtobufFormat::Int32,
						11,
						UNI_L("currentWidth"),
						OpProtobufField::Optional
						);
	fields[11] = OpProtobufField(
						OpProtobufFormat::Int32,
						12,
						UNI_L("currentHeight"),
						OpProtobufField::Optional
						);
	fields[12] = OpProtobufField(
						OpProtobufFormat::Int32,
						13,
						UNI_L("currentViewMode"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_ViewMode // unsigned enum_id
						);
	fields[13] = OpProtobufField(
						OpProtobufFormat::Int32,
						14,
						UNI_L("defaultViewMode"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_ViewMode // unsigned enum_id
						);
	fields[14] = OpProtobufField(
						OpProtobufFormat::Int32,
						15,
						UNI_L("viewModeList"),
						OpProtobufField::Repeated
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_ViewMode // unsigned enum_id
						);
	fields[15] = OpProtobufField(
						OpProtobufFormat::Message,
						16,
						UNI_L("description"),
						OpProtobufField::Optional
						);
	fields[16] = OpProtobufField(
						OpProtobufFormat::Message,
						17,
						UNI_L("license"),
						OpProtobufField::Optional
						);
	fields[17] = OpProtobufField(
						OpProtobufFormat::Message,
						18,
						UNI_L("iconList"),
						OpProtobufField::Repeated
						);
	fields[18] = OpProtobufField(
						OpProtobufFormat::Message,
						19,
						UNI_L("content"),
						OpProtobufField::Optional
						);
	fields[19] = OpProtobufField(
						OpProtobufFormat::Message,
						20,
						UNI_L("featureList"),
						OpProtobufField::Repeated
						);
	fields[20] = OpProtobufField(
						OpProtobufFormat::Message,
						21,
						UNI_L("preferenceList"),
						OpProtobufField::Repeated
						);
	fields[21] = OpProtobufField(
						OpProtobufFormat::Message,
						22,
						UNI_L("signature"),
						OpProtobufField::Optional
						);
	fields[22] = OpProtobufField(
						OpProtobufFormat::String,
						23,
						UNI_L("updateURL"),
						OpProtobufField::Optional
						);
	fields[23] = OpProtobufField(
						OpProtobufFormat::Message,
						24,
						UNI_L("networkAccessList"),
						OpProtobufField::Repeated
						);
	fields[24] = OpProtobufField(
						OpProtobufFormat::Message,
						25,
						UNI_L("securityAccessList"),
						OpProtobufField::Repeated
						);
	fields[25] = OpProtobufField(
						OpProtobufFormat::String,
						26,
						UNI_L("iriIdentifier"),
						OpProtobufField::Optional
						);
	fields[26] = OpProtobufField(
						OpProtobufFormat::Message,
						27,
						UNI_L("extensionInfo"),
						OpProtobufField::Optional
						);
	fields[27] = OpProtobufField(
						OpProtobufFormat::Message,
						28,
						UNI_L("uniteInfo"),
						OpProtobufField::Optional
						);
	fields[28] = OpProtobufField(
						OpProtobufFormat::Message,
						29,
						UNI_L("updateInfo"),
						OpProtobufField::Optional
						);
	fields[29] = OpProtobufField(
						OpProtobufFormat::Message,
						30,
						UNI_L("userJSList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_widgetID
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_type
						);
	offsets[2] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_widgetType
						);
	offsets[3] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_name
						);
	offsets[4] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_properties
						);
	offsets[5] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_author
						);
	offsets[6] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_namespace
						);
	offsets[7] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_version
						);
	offsets[8] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_width
						);
	offsets[9] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_height
						);
	offsets[10] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_currentWidth
						);
	offsets[11] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_currentHeight
						);
	offsets[12] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_currentViewMode
						);
	offsets[13] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_defaultViewMode
						);
	offsets[14] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_viewModeList
						);
	offsets[15] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_description
						);
	offsets[16] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_license
						);
	offsets[17] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_iconList
						);
	offsets[18] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_content
						);
	offsets[19] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_featureList
						);
	offsets[20] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_preferenceList
						);
	offsets[21] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_signature
						);
	offsets[22] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_updateURL
						);
	offsets[23] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_networkAccessList
						);
	offsets[24] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_securityAccessList
						);
	offsets[25] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_iriIdentifier
						);
	offsets[26] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_extensionInfo
						);
	offsets[27] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_uniteInfo
						);
	offsets[28] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_updateInfo
						);
	offsets[29] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::Widget,
						_userJSList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::Widget, encoded_size_),
					"Widget",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[3].SetMessage(Widget_Name::GetMessageDescriptor(descriptors));
	fields[4].SetMessage(Widget_Properties::GetMessageDescriptor(descriptors));
	fields[5].SetMessage(Widget_Author::GetMessageDescriptor(descriptors));
	fields[15].SetMessage(Widget_Description::GetMessageDescriptor(descriptors));
	fields[16].SetMessage(Widget_License::GetMessageDescriptor(descriptors));
	fields[17].SetMessage(Widget_Icon::GetMessageDescriptor(descriptors));
	fields[18].SetMessage(Widget_Content::GetMessageDescriptor(descriptors));
	fields[19].SetMessage(Widget_Feature::GetMessageDescriptor(descriptors));
	fields[20].SetMessage(Widget_Preference::GetMessageDescriptor(descriptors));
	fields[21].SetMessage(Widget_Signature::GetMessageDescriptor(descriptors));
	fields[23].SetMessage(Widget_Network::GetMessageDescriptor(descriptors));
	fields[24].SetMessage(Widget_SecurityAccess::GetMessageDescriptor(descriptors));
	fields[26].SetMessage(Widget_ExtensionInfo::GetMessageDescriptor(descriptors));
	fields[27].SetMessage(Widget_UniteInfo::GetMessageDescriptor(descriptors));
	fields[28].SetMessage(Widget_UpdateInfo::GetMessageDescriptor(descriptors));
	fields[29].SetMessage(Widget_UserJS::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: Widget: Implementation

// Enum value Widget.Type.WIDGET
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Type OpScopeWidgetManager_MessageSet::Widget::TYPE_WIDGET;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.Type.UNITE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Type OpScopeWidgetManager_MessageSet::Widget::TYPE_UNITE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.Type.EXTENSION
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_Type OpScopeWidgetManager_MessageSet::Widget::TYPE_EXTENSION;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)




// Enum value Widget.WidgetType.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_WidgetType OpScopeWidgetManager_MessageSet::Widget::WIDGETTYPE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.WidgetType.CHROMELESS
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_WidgetType OpScopeWidgetManager_MessageSet::Widget::WIDGETTYPE_CHROMELESS;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.WidgetType.WINDOWED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_WidgetType OpScopeWidgetManager_MessageSet::Widget::WIDGETTYPE_WINDOWED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.WidgetType.TOOLBAR
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_WidgetType OpScopeWidgetManager_MessageSet::Widget::WIDGETTYPE_TOOLBAR;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)




// Enum value Widget.ViewMode.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.WIDGET
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_WIDGET;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.FLOATING
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_FLOATING;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.DOCKED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_DOCKED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.APPLICATION
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_APPLICATION;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.FULLSCREEN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_FULLSCREEN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.MAXIMIZED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_MAXIMIZED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.MINIMIZED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_MINIMIZED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value Widget.ViewMode.WINDOWED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::Widget_ViewMode OpScopeWidgetManager_MessageSet::Widget::VIEWMODE_WINDOWED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



































// Setters

OpString &
OpScopeWidgetManager_MessageSet::Widget::GetWidgetIDRef() 
{
	return _widgetID;
}


void
OpScopeWidgetManager_MessageSet::Widget::SetType(OpScopeWidgetManager_MessageSet::Widget_Type v) 
{
	_type = static_cast<OpScopeWidgetManager_MessageSet::Widget_Type>(v);
}


void
OpScopeWidgetManager_MessageSet::Widget::SetWidgetType(OpScopeWidgetManager_MessageSet::Widget_WidgetType v) 
{
	_widgetType = static_cast<OpScopeWidgetManager_MessageSet::Widget_WidgetType>(v);
}


void
OpScopeWidgetManager_MessageSet::Widget::SetName(OpScopeWidgetManager_MessageSet::Widget_Name * v) 
{
	has_bits_.Reference().SetBit(3);
	OP_DELETE(_name);
	_name = v;
}


OpScopeWidgetManager_MessageSet::Widget_Properties &
OpScopeWidgetManager_MessageSet::Widget::GetPropertiesRef() 
{
	return _properties;
}


void
OpScopeWidgetManager_MessageSet::Widget::SetAuthor(OpScopeWidgetManager_MessageSet::Widget_Author * v) 
{
	has_bits_.Reference().SetBit(5);
	OP_DELETE(_author);
	_author = v;
}


OpString &
OpScopeWidgetManager_MessageSet::Widget::GetNamespaceRef() 
{
	has_bits_.Reference().SetBit(6);
	return _namespace;
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget::SetVersion(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(7);
	return _version.Set(v, l);
}


void
OpScopeWidgetManager_MessageSet::Widget::SetCurrentViewMode(OpScopeWidgetManager_MessageSet::Widget_ViewMode v) 
{
	_currentViewMode = static_cast<OpScopeWidgetManager_MessageSet::Widget_ViewMode>(v);
}


void
OpScopeWidgetManager_MessageSet::Widget::SetDefaultViewMode(OpScopeWidgetManager_MessageSet::Widget_ViewMode v) 
{
	_defaultViewMode = static_cast<OpScopeWidgetManager_MessageSet::Widget_ViewMode>(v);
}


OpValueVector<INT32> &
OpScopeWidgetManager_MessageSet::Widget::GetViewModeListRef() 
{
	has_bits_.Reference().SetBit(14);
	return _viewModeList;
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget::AppendToViewModeList(OpScopeWidgetManager_MessageSet::Widget_ViewMode v) 
{
	has_bits_.Reference().SetBit(14);
	return _viewModeList.Add(static_cast<INT32>(v));
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget::SetViewModeListItem(UINT32 i, OpScopeWidgetManager_MessageSet::Widget_ViewMode v) 
{
	has_bits_.Reference().SetBit(14);
	OP_ASSERT(i < _viewModeList.GetCount());
	return _viewModeList.Replace(i, static_cast<INT32>(v));
}


void
OpScopeWidgetManager_MessageSet::Widget::SetDescription(OpScopeWidgetManager_MessageSet::Widget_Description * v) 
{
	has_bits_.Reference().SetBit(15);
	OP_DELETE(_description);
	_description = v;
}


void
OpScopeWidgetManager_MessageSet::Widget::SetLicense(OpScopeWidgetManager_MessageSet::Widget_License * v) 
{
	has_bits_.Reference().SetBit(16);
	OP_DELETE(_license);
	_license = v;
}


OpScopeWidgetManager_MessageSet::Widget_Icon *
OpScopeWidgetManager_MessageSet::Widget::AppendNewIconList() 
{
	has_bits_.Reference().SetBit(17);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_Icon> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_Icon, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_iconList.Add(tmp.get()), NULL);
	return tmp.release();
}


void
OpScopeWidgetManager_MessageSet::Widget::SetContent(OpScopeWidgetManager_MessageSet::Widget_Content * v) 
{
	has_bits_.Reference().SetBit(18);
	OP_DELETE(_content);
	_content = v;
}


OpScopeWidgetManager_MessageSet::Widget_Feature *
OpScopeWidgetManager_MessageSet::Widget::AppendNewFeatureList() 
{
	has_bits_.Reference().SetBit(19);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_Feature> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_Feature, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_featureList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpScopeWidgetManager_MessageSet::Widget_Preference *
OpScopeWidgetManager_MessageSet::Widget::AppendNewPreferenceList() 
{
	has_bits_.Reference().SetBit(20);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_Preference> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_Preference, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_preferenceList.Add(tmp.get()), NULL);
	return tmp.release();
}


void
OpScopeWidgetManager_MessageSet::Widget::SetSignature(OpScopeWidgetManager_MessageSet::Widget_Signature * v) 
{
	has_bits_.Reference().SetBit(21);
	OP_DELETE(_signature);
	_signature = v;
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget::SetUpdateURL(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(22);
	return _updateURL.Set(v, l);
}


OpScopeWidgetManager_MessageSet::Widget_Network *
OpScopeWidgetManager_MessageSet::Widget::AppendNewNetworkAccessList() 
{
	has_bits_.Reference().SetBit(23);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_Network> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_Network, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_networkAccessList.Add(tmp.get()), NULL);
	return tmp.release();
}


OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess> &
OpScopeWidgetManager_MessageSet::Widget::GetSecurityAccessListRef() 
{
	has_bits_.Reference().SetBit(24);
	return _securityAccessList;
}


OpScopeWidgetManager_MessageSet::Widget_SecurityAccess *
OpScopeWidgetManager_MessageSet::Widget::AppendNewSecurityAccessList() 
{
	has_bits_.Reference().SetBit(24);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_SecurityAccess> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_SecurityAccess, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_securityAccessList.Add(tmp.get()), NULL);
	return tmp.release();
}


OP_STATUS
OpScopeWidgetManager_MessageSet::Widget::SetIriIdentifier(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(25);
	return _iriIdentifier.Set(v, l);
}


void
OpScopeWidgetManager_MessageSet::Widget::SetExtensionInfo(OpScopeWidgetManager_MessageSet::Widget_ExtensionInfo * v) 
{
	has_bits_.Reference().SetBit(26);
	OP_DELETE(_extensionInfo);
	_extensionInfo = v;
}


void
OpScopeWidgetManager_MessageSet::Widget::SetUniteInfo(OpScopeWidgetManager_MessageSet::Widget_UniteInfo * v) 
{
	has_bits_.Reference().SetBit(27);
	OP_DELETE(_uniteInfo);
	_uniteInfo = v;
}


void
OpScopeWidgetManager_MessageSet::Widget::SetUpdateInfo(OpScopeWidgetManager_MessageSet::Widget_UpdateInfo * v) 
{
	has_bits_.Reference().SetBit(28);
	OP_DELETE(_updateInfo);
	_updateInfo = v;
}


OpScopeWidgetManager_MessageSet::Widget_UserJS *
OpScopeWidgetManager_MessageSet::Widget::AppendNewUserJSList() 
{
	has_bits_.Reference().SetBit(29);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget_UserJS> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget_UserJS, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_userJSList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: Widget: Implementation

//   END: Message: Widget

//   BEGIN: Message: WidgetInstallResult
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::WidgetInstallResult::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_install_result_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("result"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetInstallResult_Result // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("url"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::WidgetInstallResult,
						_result
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::WidgetInstallResult,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_install_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetInstallResult, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetInstallResult, encoded_size_),
					"WidgetInstallResult",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetInstallResult>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetInstallResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WidgetInstallResult: Implementation

// Enum value WidgetInstallResult.Result.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result OpScopeWidgetManager_MessageSet::WidgetInstallResult::RESULT_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetInstallResult.Result.DOWNLOAD_FAILED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result OpScopeWidgetManager_MessageSet::WidgetInstallResult::RESULT_DOWNLOAD_FAILED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetInstallResult.Result.NOT_ENOUGH_SPACE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result OpScopeWidgetManager_MessageSet::WidgetInstallResult::RESULT_NOT_ENOUGH_SPACE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetInstallResult.Result.INSTALL_FAILED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result OpScopeWidgetManager_MessageSet::WidgetInstallResult::RESULT_INSTALL_FAILED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetInstallResult.Result.INSTALL_SUCCESSFUL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result OpScopeWidgetManager_MessageSet::WidgetInstallResult::RESULT_INSTALL_SUCCESSFUL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeWidgetManager_MessageSet::WidgetInstallResult::SetResult(OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result v) 
{
	_result = static_cast<OpScopeWidgetManager_MessageSet::WidgetInstallResult_Result>(v);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::WidgetInstallResult::SetUrl(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _url.Set(v, l);
}

// END: WidgetInstallResult: Implementation

//   END: Message: WidgetInstallResult

//   BEGIN: Message: WidgetList
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::WidgetList::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_list_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Message,
						1,
						UNI_L("widgetList"),
						OpProtobufField::Repeated
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::WidgetList,
						_widgetList
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_list_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetList, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetList, encoded_size_),
					"WidgetList",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetList>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetList>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);
	fields[0].SetMessage(Widget::GetMessageDescriptor(descriptors));

	return message;
}

// BEGIN: WidgetList: Implementation

// Setters

OpScopeWidgetManager_MessageSet::Widget *
OpScopeWidgetManager_MessageSet::WidgetList::AppendNewWidgetList() 
{
	has_bits_.Reference().SetBit(0);
	OpAutoPtr<OpScopeWidgetManager_MessageSet::Widget> tmp(OP_NEW(OpScopeWidgetManager_MessageSet::Widget, ()));
	if (!tmp.get())
	    return NULL;
	RETURN_VALUE_IF_ERROR(_widgetList.Add(tmp.get()), NULL);
	return tmp.release();
}

// END: WidgetList: Implementation

//   END: Message: WidgetList

//   BEGIN: Message: WidgetUninstalled
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::WidgetUninstalled::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_uninstalled_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::String,
						1,
						UNI_L("widgetID"),
						OpProtobufField::Required
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::WidgetUninstalled,
						_widgetID
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_uninstalled_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetUninstalled, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetUninstalled, encoded_size_),
					"WidgetUninstalled",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetUninstalled>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetUninstalled>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WidgetUninstalled: Implementation

// Setters

OpString &
OpScopeWidgetManager_MessageSet::WidgetUninstalled::GetWidgetIDRef() 
{
	return _widgetID;
}

// END: WidgetUninstalled: Implementation

//   END: Message: WidgetUninstalled

//   BEGIN: Message: WidgetUpdateResult
/*static*/
const OpProtobufMessage *
OpScopeWidgetManager_MessageSet::WidgetUpdateResult::GetMessageDescriptor(OpScopeWidgetManager_Descriptors *descriptors)
{
	OP_ASSERT(descriptors);
	if (!descriptors)
		return NULL;
	OpProtobufMessage *&message = descriptors->message_list[OpScopeWidgetManager_Descriptors::_gen_MessageOffs_widget_update_result_];
	if (message)
		return message;

	OpProtobufField *fields = OP_NEWA(OpProtobufField, FieldCount);
	if (fields == NULL)
		return NULL;
	fields[0] = OpProtobufField(
						OpProtobufFormat::Int32,
						1,
						UNI_L("result"),
						OpProtobufField::Required
						, NULL // const OpProtobufMessage *message
						, 0 // int message_id
						, OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetUpdateResult_Result // unsigned enum_id
						);
	fields[1] = OpProtobufField(
						OpProtobufFormat::String,
						2,
						UNI_L("url"),
						OpProtobufField::Optional
						);

	int *offsets = OP_NEWA(int, FieldCount);
	if (offsets == NULL)
	{
		OP_DELETEA(fields);
		return NULL;
	}
	offsets[0] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::WidgetUpdateResult,
						_result
						);
	offsets[1] = OP_PROTO_OFFSETOF(
						OpScopeWidgetManager_MessageSet::WidgetUpdateResult,
						_url
						);

	message = OP_NEW(OpProtobufMessage,
					(OpScopeWidgetManager_Descriptors::_gen_MsgID_widget_update_result_, 0,
					FieldCount, fields, offsets,
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetUpdateResult, has_bits_),
					OP_PROTO_OFFSETOF(OpScopeWidgetManager_MessageSet::WidgetUpdateResult, encoded_size_),
					"WidgetUpdateResult",
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetUpdateResult>::Make,
					OpProtobufMessageVector<OpScopeWidgetManager_MessageSet::WidgetUpdateResult>::Destroy));
	if (message == NULL)
	{
		OP_DELETEA(fields);
		OP_DELETEA(offsets);
		return NULL;
	}
	message->SetIsInitialized(TRUE);

	return message;
}

// BEGIN: WidgetUpdateResult: Implementation

// Enum value WidgetUpdateResult.Result.UNKNOWN
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result OpScopeWidgetManager_MessageSet::WidgetUpdateResult::RESULT_UNKNOWN;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetUpdateResult.Result.DOWNLOAD_FAILED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result OpScopeWidgetManager_MessageSet::WidgetUpdateResult::RESULT_DOWNLOAD_FAILED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetUpdateResult.Result.NOT_ENOUGH_SPACE
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result OpScopeWidgetManager_MessageSet::WidgetUpdateResult::RESULT_NOT_ENOUGH_SPACE;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetUpdateResult.Result.UPDATE_FAILED
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result OpScopeWidgetManager_MessageSet::WidgetUpdateResult::RESULT_UPDATE_FAILED;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)


// Enum value WidgetUpdateResult.Result.UPDATE_SUCCESSFUL
#if defined(OP_PROTO_STATIC_CONST_DEFINITION)
/*static*/ const OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result OpScopeWidgetManager_MessageSet::WidgetUpdateResult::RESULT_UPDATE_SUCCESSFUL;
#endif // defined(OP_PROTO_STATIC_CONST_DEFINITION)



// Setters

void
OpScopeWidgetManager_MessageSet::WidgetUpdateResult::SetResult(OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result v) 
{
	_result = static_cast<OpScopeWidgetManager_MessageSet::WidgetUpdateResult_Result>(v);
}


OP_STATUS
OpScopeWidgetManager_MessageSet::WidgetUpdateResult::SetUrl(const uni_char * v, int l) 
{
	has_bits_.Reference().SetBit(1);
	return _url.Set(v, l);
}

// END: WidgetUpdateResult: Implementation

//   END: Message: WidgetUpdateResult


// END: Messages


#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/scope/src/scope_tp_message.h"
#include "modules/scope/src/scope_default_message.h"
#include "modules/scope/src/scope_manager.h"
#include "modules/scope/src/generated/g_scope_manager.h"
#include "modules/scope/src/generated/g_scope_widget_manager_interface.h"
#include "modules/scope/src/scope_widget_manager.h"

// BEGIN: OpScopeWidgetManager_SI::Descriptors

OpScopeWidgetManager_SI::Descriptors::Descriptors()
{
}

OpScopeWidgetManager_SI::Descriptors::~Descriptors()
{
}

OP_STATUS
OpScopeWidgetManager_SI::Descriptors::Construct()
{
    RETURN_IF_ERROR(OpScopeWidgetManager_Descriptors::Construct());
	// Initialize commands
	command_list[0] = OpScopeCommand("GetSettings",
						Command_GetSettings,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_settings_
						);
	command_list[1] = OpScopeCommand("ListWidgets",
						Command_ListWidgets,
						OpScopeCommand::Type_Call,
						_gen_void_MsgID,
						_gen_MsgID_widget_list_
						);
	command_list[2] = OpScopeCommand("OpenWidget",
						Command_OpenWidget,
						OpScopeCommand::Type_Call,
						_gen_MsgID_open_widget_arg_,
						_gen_void_MsgID
						);
	command_list[3] = OpScopeCommand("CloseWidget",
						Command_CloseWidget,
						OpScopeCommand::Type_Call,
						_gen_MsgID_close_widget_arg_,
						_gen_void_MsgID
						);
	command_list[4] = OpScopeCommand("CreateInstaller",
						Command_CreateInstaller,
						OpScopeCommand::Type_Call,
						_gen_MsgID_create_installer_arg_,
						_gen_MsgID_installer_
						);
	command_list[5] = OpScopeCommand("UpdateInstaller",
						Command_UpdateInstaller,
						OpScopeCommand::Type_Call,
						_gen_MsgID_update_installer_arg_,
						_gen_void_MsgID
						);
	command_list[6] = OpScopeCommand("RemoveInstaller",
						Command_RemoveInstaller,
						OpScopeCommand::Type_Call,
						_gen_MsgID_remove_installer_arg_,
						_gen_void_MsgID
						);
	command_list[7] = OpScopeCommand("InstallWidget",
						Command_InstallWidget,
						OpScopeCommand::Type_Call,
						_gen_MsgID_install_widget_arg_,
						_gen_MsgID_widget_install_result_
						);
	command_list[8] = OpScopeCommand("InstallWidgetByURL",
						Command_InstallWidgetByURL,
						OpScopeCommand::Type_Call,
						_gen_MsgID_install_widget_by_url_arg_,
						_gen_MsgID_widget_install_result_
						);
	command_list[9] = OpScopeCommand("UninstallWidget",
						Command_UninstallWidget,
						OpScopeCommand::Type_Call,
						_gen_MsgID_uninstall_widget_arg_,
						_gen_void_MsgID
						);
	command_list[10] = OpScopeCommand("OnWidgetInstalled",
						Command_OnWidgetInstalled,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_widget_
						);
	command_list[11] = OpScopeCommand("OnWidgetUpgraded",
						Command_OnWidgetUpgraded,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_widget_
						);
	command_list[12] = OpScopeCommand("OnWidgetInstallFailed",
						Command_OnWidgetInstallFailed,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_widget_install_result_
						);
	command_list[13] = OpScopeCommand("OnWidgetUninstalled",
						Command_OnWidgetUninstalled,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_widget_uninstalled_
						);
	command_list[14] = OpScopeCommand("OnWidgetUpgradeAvailable",
						Command_OnWidgetUpgradeAvailable,
						OpScopeCommand::Type_Event,
						_gen_void_MsgID,
						_gen_MsgID_widget_
						);
	command_list[15] = OpScopeCommand("UpdateWidget",
						Command_UpdateWidget,
						OpScopeCommand::Type_Call,
						_gen_MsgID_update_widget_arg_,
						_gen_MsgID_widget_update_result_
						);
	command_list[16] = OpScopeCommand("SetExtensionFlag",
						Command_SetExtensionFlag,
						OpScopeCommand::Type_Call,
						_gen_MsgID_set_extension_flag_arg_,
						_gen_void_MsgID
						);
	command_list[17] = OpScopeCommand("GetExtensionFlag",
						Command_GetExtensionFlag,
						OpScopeCommand::Type_Call,
						_gen_MsgID_get_extension_flag_arg_,
						_gen_MsgID_extension_flag_
						);
	return OpStatus::OK;
}

// END: OpScopeWidgetManager_SI::Descriptors
// Service implementation: BEGIN


// Service implementation

OpScopeWidgetManager_SI::OpScopeWidgetManager_SI(const uni_char* id, OpScopeServiceManager *manager, ControlType control)
		: OpScopeService(id == NULL ? UNI_L("widget-manager") : id, manager, control)
{
}

/*virtual*/
OpScopeWidgetManager_SI::~OpScopeWidgetManager_SI()
{
}

/*virtual*/
int
OpScopeWidgetManager_SI::GetCommandCount() const
{
	return Command_Count;
}

/*virtual*/
OpScopeService::CommandRange
OpScopeWidgetManager_SI::GetCommands() const
{
	Descriptors *descriptors = g_scope_manager->GetDescriptorSet().widget_manager_;
	OP_ASSERT(descriptors);
	return CommandRange(descriptors ? descriptors->command_list : NULL, Command_Count);
}

/*virtual*/
OP_STATUS
OpScopeWidgetManager_SI::DoReceive( OpScopeClient *client, const OpScopeTPMessage &msg )
{
	// Check for invalid request data
	if (msg.Status() != OpScopeTPMessage::OK) // All calls must have status OK
		return SetCommandError(OpScopeTPMessage::BadRequest, GetInvalidStatusFieldText());
	if (msg.ServiceName().Compare(GetName()) != 0) // Make sure the service name matches the one in the message
		return SetCommandError(OpScopeTPMessage::InternalError, GetIncorrectServiceText());

	if (msg.CommandID() == Command_GetSettings) // GetSettings
	{
		OP_STATUS status = OpStatus::OK;
		Settings out;

		status = DoGetSettings(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(Settings::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_ListWidgets) // ListWidgets
	{
		OP_STATUS status = OpStatus::OK;
		WidgetList out;

		status = DoListWidgets(out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(WidgetList::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_OpenWidget) // OpenWidget
	{
		OP_STATUS status = OpStatus::OK;
		OpenWidgetArg in;

		OpProtobufInstanceProxy in_proxy(OpenWidgetArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoOpenWidget(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_CloseWidget) // CloseWidget
	{
		OP_STATUS status = OpStatus::OK;
		CloseWidgetArg in;

		OpProtobufInstanceProxy in_proxy(CloseWidgetArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCloseWidget(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_CreateInstaller) // CreateInstaller
	{
		OP_STATUS status = OpStatus::OK;
		CreateInstallerArg in;
		Installer out;

		OpProtobufInstanceProxy in_proxy(CreateInstallerArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoCreateInstaller(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(Installer::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_UpdateInstaller) // UpdateInstaller
	{
		OP_STATUS status = OpStatus::OK;
		UpdateInstallerArg in;

		OpProtobufInstanceProxy in_proxy(UpdateInstallerArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoUpdateInstaller(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_RemoveInstaller) // RemoveInstaller
	{
		OP_STATUS status = OpStatus::OK;
		RemoveInstallerArg in;

		OpProtobufInstanceProxy in_proxy(RemoveInstallerArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoRemoveInstaller(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_InstallWidget) // InstallWidget
	{
		OP_STATUS status = OpStatus::OK;
		InstallWidgetArg in;
		WidgetInstallResult out;

		OpProtobufInstanceProxy in_proxy(InstallWidgetArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoInstallWidget(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(WidgetInstallResult::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_SetExtensionFlag) // SetExtensionFlag
	{
		OP_STATUS status = OpStatus::OK;
		SetExtensionFlagArg in;

		OpProtobufInstanceProxy in_proxy(SetExtensionFlagArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoSetExtensionFlag(in);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		// The request does not define a response message so we send the default response which is an empty message
		OpProtobufInstanceProxy out_proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = SendResponse(client, msg, out_proxy);
		if (OpStatus::IsError(status))
		{
			if (!IsResponseSent() && GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if response sending failed or no error was set by response code
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandResponseFailedText()));
			return status;
		}
	}
	else if (msg.CommandID() == Command_GetExtensionFlag) // GetExtensionFlag
	{
		OP_STATUS status = OpStatus::OK;
		GetExtensionFlagArg in;
		ExtensionFlag out;

		OpProtobufInstanceProxy in_proxy(GetExtensionFlagArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoGetExtensionFlag(in, out);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText()));
			return status;
		}

		OpProtobufInstanceProxy out_proxy(ExtensionFlag::GetMessageDescriptor(GetDescriptors()), &out);
		if (out_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		RETURN_IF_ERROR(SendResponse(client, msg, out_proxy));
	}
	else if (msg.CommandID() == Command_InstallWidgetByURL) // InstallWidgetByURL
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		InstallWidgetByURLArg in;

		OpProtobufInstanceProxy in_proxy(InstallWidgetByURLArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoInstallWidgetByURL(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
			return status;
		}
	}
	else if (msg.CommandID() == Command_UninstallWidget) // UninstallWidget
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		UninstallWidgetArg in;

		OpProtobufInstanceProxy in_proxy(UninstallWidgetArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoUninstallWidget(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
			return status;
		}
	}
	else if (msg.CommandID() == Command_UpdateWidget) // UpdateWidget
	{
		OP_STATUS status = OpStatus::OK;
		unsigned async_tag;
		status = InitAsyncCommand(msg, async_tag); // Needed for async requests, the response will use this info when request is done
		if (OpStatus::IsError(status))
		{
			RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetInitAsyncCommandFailedText()));
			return status;
		}
		UpdateWidgetArg in;

		OpProtobufInstanceProxy in_proxy(UpdateWidgetArg::GetMessageDescriptor(GetDescriptors()), &in);
		if (in_proxy.GetProtoMessage() == NULL)
			return OpStatus::ERR_NO_MEMORY;
		status = ParseMessage(client, msg, in_proxy);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by a parser
				RETURN_IF_ERROR(SetCommandError(OpScopeTPHeader::InternalError, GetParseCommandMessageFailedText()));
			return status;
		}

		status = DoUpdateWidget(in, async_tag);
		if (OpStatus::IsError(status))
		{
			if (GetCommandError().GetStatus() == OpScopeTPHeader::OK) // Set a generic error if none was set by command
			{
				OP_STATUS tmp_status = SetCommandError(OpScopeTPHeader::InternalError, GetCommandExecutionFailedText());
				OpStatus::Ignore(tmp_status);
			}
			// Remove the async command since the command failed to send an async response
			CleanupAsyncCommand(async_tag);
			return status;
		}
	}
	else
	{
		SetCommandError(OpScopeTPMessage::CommandNotFound, GetCommandNotFoundText());
		return OpStatus::ERR;
	}
	return OpStatus::OK;
}

/*virtual*/
const OpProtobufMessage *
OpScopeWidgetManager_SI::GetMessage(unsigned message_id) const
{
	Descriptors *descriptors = GetDescriptors();
	if (!descriptors)
		return NULL;
	return descriptors->Get(message_id);
}

OpScopeWidgetManager_SI::Descriptors *
OpScopeWidgetManager_SI::GetDescriptors() const
{
	Descriptors *d = g_scope_manager->GetDescriptorSet().widget_manager_;
	OP_ASSERT(d);
	return d;
}

/*virtual*/
unsigned
OpScopeWidgetManager_SI::GetMessageCount() const
{
	return OpScopeWidgetManager_Descriptors::_gen_Message_Count;
}

/*virtual*/
OpScopeService::MessageIDRange
OpScopeWidgetManager_SI::GetMessageIDs() const
{
	unsigned start = OpScopeWidgetManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageIDRange(start, start + OpScopeWidgetManager_Descriptors::_gen_Message_Count);
}

/*virtual*/
OpScopeService::MessageRange
OpScopeWidgetManager_SI::GetMessages() const
{
	unsigned start = OpScopeWidgetManager_Descriptors::_gen_Message_Count > 0 ? 1 : 0;
	return MessageRange(this, start, start + OpScopeWidgetManager_Descriptors::_gen_Message_Count);
}

/* virtual */
const char *
OpScopeWidgetManager_SI::GetVersionString() const
{
	return "1.1";
}

/* virtual */
int
OpScopeWidgetManager_SI::GetMajorVersion() const
{
	return 1;
}

/* virtual */
int
OpScopeWidgetManager_SI::GetMinorVersion() const
{
	return 1;
}

/* virtual */
const char *
OpScopeWidgetManager_SI::GetPatchVersion() const
{
	return "0";
}

OP_STATUS
OpScopeWidgetManager_SI::SendOnWidgetInstalled(const Widget &msg) // OnWidgetInstalled
{
	OpProtobufInstanceProxy proxy(Widget::GetMessageDescriptor(GetDescriptors()), const_cast<Widget *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWidgetInstalled);
}


OP_STATUS
OpScopeWidgetManager_SI::SendOnWidgetUpgraded(const Widget &msg) // OnWidgetUpgraded
{
	OpProtobufInstanceProxy proxy(Widget::GetMessageDescriptor(GetDescriptors()), const_cast<Widget *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWidgetUpgraded);
}


OP_STATUS
OpScopeWidgetManager_SI::SendOnWidgetInstallFailed(const WidgetInstallResult &msg) // OnWidgetInstallFailed
{
	OpProtobufInstanceProxy proxy(WidgetInstallResult::GetMessageDescriptor(GetDescriptors()), const_cast<WidgetInstallResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWidgetInstallFailed);
}


OP_STATUS
OpScopeWidgetManager_SI::SendOnWidgetUninstalled(const WidgetUninstalled &msg) // OnWidgetUninstalled
{
	OpProtobufInstanceProxy proxy(WidgetUninstalled::GetMessageDescriptor(GetDescriptors()), const_cast<WidgetUninstalled *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWidgetUninstalled);
}


OP_STATUS
OpScopeWidgetManager_SI::SendOnWidgetUpgradeAvailable(const Widget &msg) // OnWidgetUpgradeAvailable
{
	OpProtobufInstanceProxy proxy(Widget::GetMessageDescriptor(GetDescriptors()), const_cast<Widget *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendEvent(proxy, Command_OnWidgetUpgradeAvailable);
}


OP_STATUS
OpScopeWidgetManager_SI::SendInstallWidgetByURL(const WidgetInstallResult &msg, unsigned int tag) // InstallWidgetByURL
{
	OpProtobufInstanceProxy proxy(WidgetInstallResult::GetMessageDescriptor(GetDescriptors()), const_cast<WidgetInstallResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_InstallWidgetByURL);
}


OP_STATUS
OpScopeWidgetManager_SI::SendUninstallWidget(unsigned int tag) // UninstallWidget
{
	OpProtobufInstanceProxy proxy(OpScopeDefaultMessage::GetMessageDescriptor(), &g_scope_manager->default_message_instance);
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_UninstallWidget);
}


OP_STATUS
OpScopeWidgetManager_SI::SendUpdateWidget(const WidgetUpdateResult &msg, unsigned int tag) // UpdateWidget
{
	OpProtobufInstanceProxy proxy(WidgetUpdateResult::GetMessageDescriptor(GetDescriptors()), const_cast<WidgetUpdateResult *>(&msg));
	if (proxy.GetProtoMessage() == NULL)
		return OpStatus::ERR_NO_MEMORY;
	return SendAsyncResponse(tag, proxy, Command_UpdateWidget);
}

// Enum introspection: BEGIN

/*virtual*/
OpScopeService::EnumIDRange
OpScopeWidgetManager_SI::GetEnumIDs() const
{
	Descriptors *descriptors = GetDescriptors();
	return EnumIDRange(descriptors ? descriptors->enum_id_list : NULL, OpScopeWidgetManager_Descriptors::_gen_Enum_Count);
}

/*virtual*/
unsigned
OpScopeWidgetManager_SI::GetEnumCount() const
{
	return OpScopeWidgetManager_Descriptors::_gen_Enum_Count;
}

/*virtual*/
BOOL
OpScopeWidgetManager_SI::HasEnum(unsigned enum_id) const
{
	switch (enum_id)
	{
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_ExtensionFlag_FlagType:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Type:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_WidgetType:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_ViewMode:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Signature_State:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UniteInfo_Type:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UpdateInfo_UpdateType:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetInstallResult_Result:
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetUpdateResult_Result:
			return TRUE;
	}
	return FALSE;
}

/*virtual*/
OP_STATUS
OpScopeWidgetManager_SI::GetEnum(unsigned enum_id, const uni_char *&name, unsigned &value_count) const
{
	switch (enum_id)
	{
		// ExtensionFlag_FlagType
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_ExtensionFlag_FlagType:
			name = UNI_L("FlagType");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_ExtensionFlag_FlagType;
			return OpStatus::OK;
		// Widget_Type
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Type:
			name = UNI_L("Type");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_Type;
			return OpStatus::OK;
		// Widget_WidgetType
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_WidgetType:
			name = UNI_L("WidgetType");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_WidgetType;
			return OpStatus::OK;
		// Widget_ViewMode
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_ViewMode:
			name = UNI_L("ViewMode");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_ViewMode;
			return OpStatus::OK;
		// Widget_Signature_State
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Signature_State:
			name = UNI_L("State");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_Signature_State;
			return OpStatus::OK;
		// Widget_UniteInfo_Type
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UniteInfo_Type:
			name = UNI_L("Type");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_UniteInfo_Type;
			return OpStatus::OK;
		// Widget_UpdateInfo_UpdateType
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UpdateInfo_UpdateType:
			name = UNI_L("UpdateType");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_UpdateInfo_UpdateType;
			return OpStatus::OK;
		// WidgetInstallResult_Result
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetInstallResult_Result:
			name = UNI_L("Result");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_WidgetInstallResult_Result;
			return OpStatus::OK;
		// WidgetUpdateResult_Result
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetUpdateResult_Result:
			name = UNI_L("Result");
			value_count = OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_WidgetUpdateResult_Result;
			return OpStatus::OK;
	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}

/*virtual*/
OP_STATUS
OpScopeWidgetManager_SI::GetEnumValue(unsigned enum_id, unsigned idx, const uni_char *&value_name, unsigned &value_number) const
{
	switch (enum_id)
	{
		// ExtensionFlag_FlagType
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_ExtensionFlag_FlagType:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_ExtensionFlag_FlagType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for ExtensionFlag_FlagType
			const unsigned enum_numbers[] = {
				  1
				, 2
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 19
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "ALLOW_USERJS_HTTPS\0ALLOW_USERJS_PRIVATE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Widget_Type
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Type:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Widget_Type
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 7
				, 13
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "WIDGET\0UNITE\0EXTENSION" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Widget_WidgetType
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_WidgetType:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_WidgetType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Widget_WidgetType
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 19
				, 28
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0CHROMELESS\0WINDOWED\0TOOLBAR" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Widget_ViewMode
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_ViewMode:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_ViewMode)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Widget_ViewMode
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
				, 6
				, 7
				, 8
				, 9
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 15
				, 24
				, 31
				, 43
				, 54
				, 64
				, 74
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0WIDGET\0FLOATING\0DOCKED\0APPLICATION\0FULLSCREEN\0MAXIMIZED\0MINIMIZED\0WINDOWED" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Widget_Signature_State
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_Signature_State:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_Signature_State)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Widget_Signature_State
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 17
				, 24
				, 44
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0UNSIGNED\0SIGNED\0VERIFICATION_FAILED\0PENDING" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Widget_UniteInfo_Type
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UniteInfo_Type:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_UniteInfo_Type)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Widget_UniteInfo_Type
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 16
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0SERVICE\0APPLICATION" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// Widget_UpdateInfo_UpdateType
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_Widget_UpdateInfo_UpdateType:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_Widget_UpdateInfo_UpdateType)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for Widget_UpdateInfo_UpdateType
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
				, 6
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 15
				, 23
				, 32
				, 39
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0UPDATE\0DISABLE\0ACTIVATE\0DELETE\0NO_UPDATE" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// WidgetInstallResult_Result
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetInstallResult_Result:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_WidgetInstallResult_Result)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for WidgetInstallResult_Result
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 24
				, 41
				, 56
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0DOWNLOAD_FAILED\0NOT_ENOUGH_SPACE\0INSTALL_FAILED\0INSTALL_SUCCESSFUL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

		// WidgetUpdateResult_Result
		case OpScopeWidgetManager_Descriptors::_gen_EnumID_WidgetUpdateResult_Result:
		{
			if (idx > OpScopeWidgetManager_Descriptors::_gen_EnumValueCount_WidgetUpdateResult_Result)
				return OpStatus::ERR_OUT_OF_RANGE;
			// Values for WidgetUpdateResult_Result
			const unsigned enum_numbers[] = {
				  1
				, 2
				, 3
				, 4
				, 5
			}; // ARRAY OK 2010-04-14 jborsodi
			const unsigned name_offsets[] = {
				  0
				, 8
				, 24
				, 41
				, 55
			}; // ARRAY OK 2010-04-14 jborsodi
			const uni_char *names = UNI_L( "UNKNOWN\0DOWNLOAD_FAILED\0NOT_ENOUGH_SPACE\0UPDATE_FAILED\0UPDATE_SUCCESSFUL" );
			OP_ASSERT(idx < sizeof(name_offsets));
			OP_ASSERT(idx < sizeof(enum_numbers));
			value_name = names + name_offsets[idx];
			value_number = enum_numbers[idx];
			return OpStatus::OK;
		}

	}
	return OpStatus::ERR_NO_SUCH_RESOURCE;
}
// Enum introspection: END

// Service implementation: END

#endif // SCOPE_WIDGET_MANAGER_SUPPORT
