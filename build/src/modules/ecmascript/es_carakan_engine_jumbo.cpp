/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2017 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

// Please don't modify this file.

// This file is automatically generated by operasetup.py

#include "core/pch_jumbo.h"

#include "modules/ecmascript/carakan/src/builtins/es_array_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_boolean_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_date_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_error_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_function_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_global_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_debug_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_json_export.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_json_import.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_math_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_number_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_object_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_regexp_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_string_builtins.cpp"
#include "modules/ecmascript/carakan/src/builtins/es_typedarray_builtins.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_analyzer.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_compiler.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_compiler_expr.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_compiler_stmt.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_compiler_unroll.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_code.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_disassembler.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_disassemble_instr.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_lexer.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native_codegen.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native_regalloc.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native_ia32.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native_arm.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native_mips.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_native_stack_frame.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_parser.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_parser_expr.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_parser_stmt.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_process_instr.cpp"
#include "modules/ecmascript/carakan/src/compiler/es_source_location.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_string.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_collector.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_mark_sweep_heap.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_page.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_rts.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_value.cpp"
#include "modules/ecmascript/carakan/src/kernel/es_box.cpp"
#include "modules/ecmascript/carakan/src/util/es_formatter.cpp"
#include "modules/ecmascript/carakan/src/util/es_hash_table.cpp"
#include "modules/ecmascript/carakan/src/object/es_class.cpp"
#include "modules/ecmascript/carakan/src/object/es_clone_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_array_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_boolean_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_date_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_error_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_number_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_regexp_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_string_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_typedarray.cpp"
#include "modules/ecmascript/carakan/src/object/es_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_host_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_property.cpp"
#include "modules/ecmascript/carakan/src/object/es_property_table.cpp"
#include "modules/ecmascript/carakan/src/object/es_function.cpp"
#include "modules/ecmascript/carakan/src/object/es_global_object.cpp"
#include "modules/ecmascript/carakan/src/object/es_indexed.cpp"
#include "modules/ecmascript/carakan/src/object/es_special_property.cpp"
#include "modules/ecmascript/carakan/src/object/es_arguments.cpp"
#include "modules/ecmascript/carakan/src/util/es_bcdebugger.cpp"
#include "modules/ecmascript/carakan/src/util/es_bclogger.cpp"
#include "modules/ecmascript/carakan/src/util/es_codegenerator_ia32.cpp"
#include "modules/ecmascript/carakan/src/util/es_codegenerator_arm.cpp"
#include "modules/ecmascript/carakan/src/util/es_codegenerator_mips.cpp"
#include "modules/ecmascript/carakan/src/util/es_strtod.cpp"
#include "modules/ecmascript/carakan/src/util/es_util.cpp"
#include "modules/ecmascript/carakan/src/util/es_tempbuf.cpp"
#include "modules/ecmascript/carakan/src/vm/es_allocation_context.cpp"
#include "modules/ecmascript/carakan/src/vm/es_context.cpp"
#include "modules/ecmascript/carakan/src/vm/es_engine.cpp"
#include "modules/ecmascript/carakan/src/vm/es_execution_context.cpp"
#include "modules/ecmascript/carakan/src/vm/es_frame.cpp"
#include "modules/ecmascript/carakan/src/vm/es_instructionhandlers.cpp"
#include "modules/ecmascript/carakan/src/vm/es_register_blocks.cpp"
#include "modules/ecmascript/carakan/src/vm/es_suspended_call.cpp"
