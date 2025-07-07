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

// Generated from ../../modules/scope/services/selftest/selftest.proto



#ifndef G_SCOPE_SELFTEST_INTERFACE_H
#define G_SCOPE_SELFTEST_INTERFACE_H

#ifdef SELFTEST

#include "modules/scope/src/scope_service.h"
#include "modules/util/adt/opvector.h"
#include "modules/util/opstring.h"



#include "modules/protobuf/src/protobuf_utils.h"
#include "modules/protobuf/src/protobuf_message.h"

class OpScopeTPMessage;
class OpProtobufField;
class OpProtobufMessage;


class OpScopeSelftest_Descriptors;

class OpScopeSelftest_MessageSet
{
public:
	// BEGIN: ctor/dtor

	OpScopeSelftest_MessageSet();
	virtual ~OpScopeSelftest_MessageSet();

	// END: ctor/dtor
	// BEGIN: Enums

	enum RunModulesArg_OutputType
	{
	    RunModulesArg_OutputType_OUTPUTTYPE_HUMAN_READABLE = 1,
	    RunModulesArg_OutputType_OUTPUTTYPE_MACHINE_READABLE = 2
	};

	// End: Enums

	// BEGIN: Message classes

	// Forward declarations
	class SelftestOutput;
	class RunModulesArg;

	class SelftestOutput
	{
	public:
		// BEGIN: Nested items

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 1
		};
		// END: Internal enums


		SelftestOutput(
			)
			: encoded_size_(-1)
		{
		}
		OP_STATUS Construct(
			const OpString & output_arg
			)
		{
			RETURN_IF_ERROR(_output.Set(output_arg));
			return OpStatus::OK;
		}

		// Checkers
		/**
		 * Check if the field @c output is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOutput() const
		{
			return TRUE;
		}

		// Getters

		/**
		 * Get the field @c output.
		 */
		const OpString & GetOutput() const
		{
			return _output;
		}

		// Setters

		/**
		 * Set the field @c output.
		 */
		OP_STATUS SetOutput(const uni_char * v, int l = KAll);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeSelftest_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpString _output;

		OpProtobufBitField<1> has_bits_;
		mutable int                 encoded_size_;
	};


	class RunModulesArg
	{
	public:
		// BEGIN: Nested items

		// Enum RunModulesArg.OutputType
		typedef RunModulesArg_OutputType OutputType;
		static const RunModulesArg_OutputType OUTPUTTYPE_HUMAN_READABLE = RunModulesArg_OutputType_OUTPUTTYPE_HUMAN_READABLE;
		static const RunModulesArg_OutputType OUTPUTTYPE_MACHINE_READABLE = RunModulesArg_OutputType_OUTPUTTYPE_MACHINE_READABLE;

		// END: Nested items

		// BEGIN: Internal enums
		enum _MetaInfo {
			FieldCount = 2
		};
		// END: Internal enums


		RunModulesArg(
			)
			: _outputType(RunModulesArg_OutputType_OUTPUTTYPE_HUMAN_READABLE)
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
		 * Check if the field @c moduleList is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasModuleList() const
		{
			return has_bits_.Reference().IsSet(0);
		}

		/**
		 * Check if the field @c outputType is set.
		 * @return TRUE if the field has been set, @c FALSE otherwise.
		 */
		BOOL HasOutputType() const
		{
			return has_bits_.Reference().IsSet(1);
		}

		// Getters

		/**
		 * Get the field @c moduleList.
		 */
		const OpAutoVector<OpString> & GetModuleList() const
		{
			return _moduleList;
		}

		/**
		 * Get the field @c outputType.
		 * 
		 * Specifies the output type for this selftest run.
		 * 
		 * @since 1.1
		 */
		OpScopeSelftest_MessageSet::RunModulesArg_OutputType GetOutputType() const
		{
			return static_cast<OpScopeSelftest_MessageSet::RunModulesArg_OutputType>(_outputType);
		}

		// Setters

		/**
		 * Set the field @c moduleList.
		 */
		OpAutoVector<OpString> & GetModuleListRef();

		/**
		 * Set the field @c outputType.
		 * 
		 * Specifies the output type for this selftest run.
		 * 
		 * @since 1.1
		 */
		void SetOutputType(OpScopeSelftest_MessageSet::RunModulesArg_OutputType v);

		static const OpProtobufMessage *GetMessageDescriptor(OpScopeSelftest_Descriptors *descriptors);
		void ResetEncodedSize() { encoded_size_ = -1; }

	private:
		OpAutoVector<OpString> _moduleList;
		INT32 _outputType;

		OpProtobufBitField<2> has_bits_;
		mutable int                 encoded_size_;
	};



	// END: Message classes

};


class OpProtobufMessage;

// This class contains the descriptors of all messages in the given set
// When a message descriptor is first requested it is allocated and put in this structure,
// subsequent uses of the descriptor will just use the previously allocated object.
class OpScopeSelftest_Descriptors
{
public:
	OpScopeSelftest_Descriptors();
	~OpScopeSelftest_Descriptors();

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
		_gen_MessageOffs_run_modules_arg_,
		_gen_MessageOffs_selftest_output_,

		// Message count is calculated at compile time
		_gen_Message_Count
	};

	// The IDs for all messages
	enum // message IDs
	{
		  _gen_void_MsgID // The Default/void message. Also ensures that all other IDs start at 1
		, _gen_MsgID_run_modules_arg_
		, _gen_MsgID_selftest_output_
	};
	enum // Enum IDs
	{
		Enum_void_ID_, // Dummy entry, ensures IDs starts at 1
		// Meta info for OutputType
		_gen_EnumID_RunModulesArg_OutputType,

		_gen_dummy_EnumID // Only present to allow preceding entries to always end in a comma
	};

	enum // Enum values
	{
		// Meta info for OutputType
		_gen_EnumValueCount_RunModulesArg_OutputType = 2,

		_gen_dummy_EnumValue // Only present to allow preceding entries to always end in a comma
	};
	enum // Enum names
	{
		// Meta info for OutputType
		_gen_Enum_RunModulesArg_OutputType,

		// Enum count is calculated at compile time
		_gen_Enum_Count
	};

	// List of message descriptors. They are initially NULL and assigned an object when the message is used.
	mutable OpProtobufMessage *message_list[_gen_Message_Count];

	// List of IDs for enums, assigned in Construct().
	unsigned enum_id_list[1];

};


class OpScopeSelftest_SI
	: public OpScopeService
	, public OpScopeSelftest_MessageSet
{
public:
	OpScopeSelftest_SI(const uni_char* id = NULL, OpScopeServiceManager *manager = NULL, ControlType control = CONTROL_MANUAL);
	virtual ~OpScopeSelftest_SI();

	enum CommandEnum
	{
		  Command_RunModules = 1
		, Command_OnSelftestOutput = 2
		, Command_OnSelftestFinished = 3

		, Command_Count = 3 // Number of commands in this service
	};
	// This class contains the descriptors or all commands of this service
	class Descriptors
	    : public OpScopeSelftest_Descriptors
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
	virtual OP_STATUS DoRunModules(const RunModulesArg &in) = 0;

	// Event functions
	OP_STATUS SendOnSelftestOutput(const SelftestOutput &msg);
	OP_STATUS SendOnSelftestFinished();


	Descriptors *GetDescriptors() const;



// Service API implementation: END

};




#endif // SELFTEST

#endif // G_SCOPE_SELFTEST_INTERFACE_H
