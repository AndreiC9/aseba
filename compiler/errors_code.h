#ifndef __ERRORS_H
#define __ERRORS_H

// define error codes
namespace Aseba
{
	enum ErrorCode
	{
		ERROR_BROKEN_TARGET = 0,
		ERROR_STACK_OVERFLOW,
		ERROR_SCRIPT_TOO_BIG,
		//
		ERROR_VARIABLE_NOT_DEFINED,
		ERROR_VARIABLE_NOT_DEFINED_GUESS,
		ERROR_FUNCTION_NOT_DEFINED,
		ERROR_FUNCTION_NOT_DEFINED_GUESS,
		ERROR_CONSTANT_NOT_DEFINED,
		ERROR_CONSTANT_NOT_DEFINED_GUESS,
		ERROR_EVENT_NOT_DEFINED,
		ERROR_EVENT_NOT_DEFINED_GUESS,
		ERROR_EMIT_LOCAL_EVENT,
		ERROR_SUBROUTINE_NOT_DEFINED,
		ERROR_SUBROUTINE_NOT_DEFINED_GUESS,
		// lexer.cpp
		//ERROR_TOKEN_END_OF_STREAM,
		ERROR_LINE,
		ERROR_COL,
		ERROR_UNBALANCED_COMMENT_BLOCK,
		ERROR_SYNTAX,
		ERROR_INVALID_IDENTIFIER,
		ERROR_INVALID_HEXA_NUMBER,
		ERROR_INVALID_BINARY_NUMBER,
		ERROR_NUMBER_INVALID_BASE,
		ERROR_IN_NUMBER,
		// parser.cpp
		ERROR_INTERNAL,
		ERROR_EXPECTING,
		ERROR_UINT12_OUT_OF_RANGE,
		ERROR_UINT16_OUT_OF_RANGE,
		ERROR_PINT16_OUT_OF_RANGE,
		ERROR_INT16_OUT_OF_RANGE,
		ERROR_PCONSTANT_OUT_OF_RANGE,
		ERROR_CONSTANT_OUT_OF_RANGE,
		ERROR_EXPECTING_ONE_OF,
		ERROR_NOT_ENOUGH_TEMP_SPACE,
		ERROR_MISPLACED_VARDEF,
		ERROR_EXPECTING_IDENTIFIER,
		ERROR_VAR_ALREADY_DEFINED,
		ERROR_VAR_CONST_COLLISION,
		ERROR_UNDEFINED_SIZE,
		ERROR_NOT_ENOUGH_SPACE,
		ERROR_EXPECTING_ASSIGNMENT,
		ERROR_FOR_NULL_STEPS,
		ERROR_FOR_START_HIGHER_THAN_END,
		ERROR_FOR_START_LOWER_THAN_END,
		ERROR_EVENT_ALREADY_IMPL,
		ERROR_EVENT_WRONG_ARG_SIZE,
		ERROR_SUBROUTINE_ALREADY_DEF,
		ERROR_INDEX_EXPECTING_CONSTANT,
		ERROR_INDEX_WRONG_END,
		ERROR_SIZE_IS_NEGATIVE,
		ERROR_SIZE_IS_NULL,
		ERROR_NOT_CONST_EXPR,
		ERROR_FUNCTION_HAS_NO_ARG,
		ERROR_FUNCTION_NO_ENOUGH_ARG,
		ERROR_FUNCTION_WRONG_ARG_SIZE,
		ERROR_FUNCTION_WRONG_ARG_SIZE_TEMPLATE,
		ERROR_FUNCTION_TOO_MANY_ARG,
		// tree-build.cpp
		ERROR_UNARY_ARITH_BUILD_UNEXPECTED,
		// tree-expand.cpp
		ERROR_ARRAY_OUT_OF_BOUND,
		ERROR_ARRAY_SIZE_MISMATCH,
		ERROR_IF_VECTOR_CONDITION,
		ERROR_WHILE_VECTOR_CONDITION,
		ERROR_ARRAY_ILLEGAL_ACCESS,
		// tree-optimize.cpp
		ERROR_INFINITE_LOOP,
		ERROR_DIVISION_BY_ZERO,
		ERROR_ABS_NOT_POSSIBLE,
		ERROR_ARRAY_OUT_OF_BOUND_READ,
		ERROR_ARRAY_OUT_OF_BOUND_WRITE,
		// tree-typecheck.cpp
		ERROR_EXPECTING_TYPE,
		ERROR_EXPECTING_CONDITION,
		ERROR_END
	};
};

#endif // __ERRORS_H
