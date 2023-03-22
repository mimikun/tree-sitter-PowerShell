#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 448
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  aux_sym_function_definition_token1 = 1,
  aux_sym_function_definition_token2 = 2,
  aux_sym_filter_definition_token1 = 3,
  aux_sym_filter_definition_token2 = 4,
  aux_sym_class_definition_token1 = 5,
  aux_sym_class_definition_token2 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  aux_sym_enum_definition_token1 = 12,
  anon_sym_EQ = 13,
  anon_sym_PIPE = 14,
  aux_sym_if_statement_token1 = 15,
  aux_sym_elseif_statement_token1 = 16,
  aux_sym_else_statement_token1 = 17,
  aux_sym_while_statement_token1 = 18,
  aux_sym_do_while_statement_token1 = 19,
  anon_sym_AMP = 20,
  sym_command_parameter = 21,
  anon_sym_COLON = 22,
  anon_sym_DOLLAR_LPAREN = 23,
  aux_sym_param_block_token1 = 24,
  anon_sym_AT_LPAREN = 25,
  anon_sym_AT_LBRACE = 26,
  aux_sym_binary_operator_token1 = 27,
  aux_sym_binary_operator_token2 = 28,
  aux_sym_binary_operator_token3 = 29,
  aux_sym_binary_operator_token4 = 30,
  aux_sym_binary_operator_token5 = 31,
  aux_sym_binary_operator_token6 = 32,
  aux_sym_binary_operator_token7 = 33,
  aux_sym_binary_operator_token8 = 34,
  aux_sym_binary_operator_token9 = 35,
  aux_sym_binary_operator_token10 = 36,
  aux_sym_binary_operator_token11 = 37,
  aux_sym_binary_operator_token12 = 38,
  aux_sym_binary_operator_token13 = 39,
  aux_sym_binary_operator_token14 = 40,
  aux_sym_binary_operator_token15 = 41,
  aux_sym_binary_operator_token16 = 42,
  aux_sym_binary_operator_token17 = 43,
  aux_sym_binary_operator_token18 = 44,
  aux_sym_binary_operator_token19 = 45,
  aux_sym_binary_operator_token20 = 46,
  anon_sym_LF = 47,
  sym_simple_variable = 48,
  sym_splatted_variable = 49,
  sym__braced_variable = 50,
  anon_sym_DOLLAR_DOLLAR = 51,
  anon_sym_DOLLAR_CARET = 52,
  anon_sym_DOLLAR_QMARK = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  sym__typename_simple = 56,
  anon_sym_LBRACK_RBRACK = 57,
  sym_number_expr = 58,
  aux_sym_single_quote_string_token1 = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_double_quote_string_token1 = 61,
  anon_sym_DOLLAR = 62,
  sym_bareword_string = 63,
  sym_comment = 64,
  sym__statement_terminator = 65,
  sym_program = 66,
  sym__statement = 67,
  sym_function_definition = 68,
  sym_filter_definition = 69,
  sym_class_definition = 70,
  sym_class_property = 71,
  sym_class_method = 72,
  sym_class_parameter = 73,
  sym_class_method_body = 74,
  sym_enum_definition = 75,
  sym_assignment_statement = 76,
  sym_pipeline_statement = 77,
  sym_if_statement = 78,
  sym_elseif_statement = 79,
  sym_else_statement = 80,
  sym_while_statement = 81,
  sym_do_while_statement = 82,
  sym_command_expression = 83,
  sym_command_argument = 84,
  sym_subpipeline = 85,
  sym_subexpression = 86,
  sym_scriptblock = 87,
  sym_param_block = 88,
  sym_param_block_variable = 89,
  sym__pipeline_expression = 90,
  sym_array_expression = 91,
  sym_flat_array_expression = 92,
  sym_hashtable_expression = 93,
  sym_hashtable_entry = 94,
  sym_binary_operator = 95,
  sym_binary_operator_statement = 96,
  sym_property_name = 97,
  sym__attributed_variable = 98,
  sym_variable = 99,
  sym__newline = 100,
  sym__special_variable = 101,
  sym_type_expr = 102,
  sym__typename = 103,
  sym__typename_array = 104,
  sym__typename_generic = 105,
  sym_non_type_attribute = 106,
  sym__attribute = 107,
  sym__string_expr = 108,
  sym_single_quote_string = 109,
  sym_double_quote_string = 110,
  aux_sym_program_repeat1 = 111,
  aux_sym_class_definition_repeat1 = 112,
  aux_sym_class_definition_repeat2 = 113,
  aux_sym_class_method_repeat1 = 114,
  aux_sym_enum_definition_repeat1 = 115,
  aux_sym_pipeline_statement_repeat1 = 116,
  aux_sym_if_statement_repeat1 = 117,
  aux_sym_command_expression_repeat1 = 118,
  aux_sym_param_block_repeat1 = 119,
  aux_sym_param_block_variable_repeat1 = 120,
  aux_sym_array_expression_repeat1 = 121,
  aux_sym_flat_array_expression_repeat1 = 122,
  aux_sym_hashtable_expression_repeat1 = 123,
  aux_sym__typename_generic_repeat1 = 124,
  aux_sym_double_quote_string_repeat1 = 125,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_function_definition_token1] = "function_definition_token1",
  [aux_sym_function_definition_token2] = "function_definition_token2",
  [aux_sym_filter_definition_token1] = "filter_definition_token1",
  [aux_sym_filter_definition_token2] = "filter_definition_token2",
  [aux_sym_class_definition_token1] = "class_definition_token1",
  [aux_sym_class_definition_token2] = "class_definition_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_enum_definition_token1] = "enum_definition_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [aux_sym_if_statement_token1] = "if_statement_token1",
  [aux_sym_elseif_statement_token1] = "elseif_statement_token1",
  [aux_sym_else_statement_token1] = "else_statement_token1",
  [aux_sym_while_statement_token1] = "while_statement_token1",
  [aux_sym_do_while_statement_token1] = "do_while_statement_token1",
  [anon_sym_AMP] = "&",
  [sym_command_parameter] = "command_parameter",
  [anon_sym_COLON] = ":",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [aux_sym_param_block_token1] = "param_block_token1",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_AT_LBRACE] = "@{",
  [aux_sym_binary_operator_token1] = "binary_operator_token1",
  [aux_sym_binary_operator_token2] = "binary_operator_token2",
  [aux_sym_binary_operator_token3] = "binary_operator_token3",
  [aux_sym_binary_operator_token4] = "binary_operator_token4",
  [aux_sym_binary_operator_token5] = "binary_operator_token5",
  [aux_sym_binary_operator_token6] = "binary_operator_token6",
  [aux_sym_binary_operator_token7] = "binary_operator_token7",
  [aux_sym_binary_operator_token8] = "binary_operator_token8",
  [aux_sym_binary_operator_token9] = "binary_operator_token9",
  [aux_sym_binary_operator_token10] = "binary_operator_token10",
  [aux_sym_binary_operator_token11] = "binary_operator_token11",
  [aux_sym_binary_operator_token12] = "binary_operator_token12",
  [aux_sym_binary_operator_token13] = "binary_operator_token13",
  [aux_sym_binary_operator_token14] = "binary_operator_token14",
  [aux_sym_binary_operator_token15] = "binary_operator_token15",
  [aux_sym_binary_operator_token16] = "binary_operator_token16",
  [aux_sym_binary_operator_token17] = "binary_operator_token17",
  [aux_sym_binary_operator_token18] = "binary_operator_token18",
  [aux_sym_binary_operator_token19] = "binary_operator_token19",
  [aux_sym_binary_operator_token20] = "binary_operator_token20",
  [anon_sym_LF] = "\n",
  [sym_simple_variable] = "simple_variable",
  [sym_splatted_variable] = "splatted_variable",
  [sym__braced_variable] = "_braced_variable",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_DOLLAR_CARET] = "$^",
  [anon_sym_DOLLAR_QMARK] = "$?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__typename_simple] = "_typename_simple",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_number_expr] = "number_expr",
  [aux_sym_single_quote_string_token1] = "single_quote_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_token1] = "double_quote_string_token1",
  [anon_sym_DOLLAR] = "$",
  [sym_bareword_string] = "bareword_string",
  [sym_comment] = "comment",
  [sym__statement_terminator] = "_statement_terminator",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_function_definition] = "function_definition",
  [sym_filter_definition] = "filter_definition",
  [sym_class_definition] = "class_definition",
  [sym_class_property] = "class_property",
  [sym_class_method] = "class_method",
  [sym_class_parameter] = "class_parameter",
  [sym_class_method_body] = "class_method_body",
  [sym_enum_definition] = "enum_definition",
  [sym_assignment_statement] = "assignment_statement",
  [sym_pipeline_statement] = "pipeline_statement",
  [sym_if_statement] = "if_statement",
  [sym_elseif_statement] = "elseif_statement",
  [sym_else_statement] = "else_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym_command_expression] = "command_expression",
  [sym_command_argument] = "command_argument",
  [sym_subpipeline] = "subpipeline",
  [sym_subexpression] = "subexpression",
  [sym_scriptblock] = "scriptblock",
  [sym_param_block] = "param_block",
  [sym_param_block_variable] = "param_block_variable",
  [sym__pipeline_expression] = "_pipeline_expression",
  [sym_array_expression] = "array_expression",
  [sym_flat_array_expression] = "flat_array_expression",
  [sym_hashtable_expression] = "hashtable_expression",
  [sym_hashtable_entry] = "hashtable_entry",
  [sym_binary_operator] = "binary_operator",
  [sym_binary_operator_statement] = "binary_operator_statement",
  [sym_property_name] = "property_name",
  [sym__attributed_variable] = "_attributed_variable",
  [sym_variable] = "variable",
  [sym__newline] = "_newline",
  [sym__special_variable] = "_special_variable",
  [sym_type_expr] = "type_expr",
  [sym__typename] = "_typename",
  [sym__typename_array] = "_typename_array",
  [sym__typename_generic] = "_typename_generic",
  [sym_non_type_attribute] = "non_type_attribute",
  [sym__attribute] = "_attribute",
  [sym__string_expr] = "_string_expr",
  [sym_single_quote_string] = "single_quote_string",
  [sym_double_quote_string] = "double_quote_string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
  [aux_sym_class_method_repeat1] = "class_method_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_pipeline_statement_repeat1] = "pipeline_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_command_expression_repeat1] = "command_expression_repeat1",
  [aux_sym_param_block_repeat1] = "param_block_repeat1",
  [aux_sym_param_block_variable_repeat1] = "param_block_variable_repeat1",
  [aux_sym_array_expression_repeat1] = "array_expression_repeat1",
  [aux_sym_flat_array_expression_repeat1] = "flat_array_expression_repeat1",
  [aux_sym_hashtable_expression_repeat1] = "hashtable_expression_repeat1",
  [aux_sym__typename_generic_repeat1] = "_typename_generic_repeat1",
  [aux_sym_double_quote_string_repeat1] = "double_quote_string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_function_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_enum_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_elseif_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_while_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_command_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_param_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_operator_token20] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_simple_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_splatted_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__braced_variable] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__typename_simple] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_single_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_bareword_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_property] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method] = {
    .visible = true,
    .named = true,
  },
  [sym_class_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_command_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_subpipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_subexpression] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptblock] = {
    .visible = true,
    .named = true,
  },
  [sym_param_block] = {
    .visible = true,
    .named = true,
  },
  [sym_param_block_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_flat_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtable_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym__attributed_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__special_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__typename] = {
    .visible = false,
    .named = true,
  },
  [sym__typename_array] = {
    .visible = false,
    .named = true,
  },
  [sym__typename_generic] = {
    .visible = false,
    .named = true,
  },
  [sym_non_type_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__string_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_single_quote_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_method_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_block_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_flat_array_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hashtable_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__typename_generic_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '$') ADVANCE(247);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == '`') SKIP(120)
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '`') SKIP(108)
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '`') SKIP(107)
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '%' || ')' < lookahead) &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '%' || ')' < lookahead) &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(16);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '%' || ')' < lookahead) &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(291);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '$') ADVANCE(248);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(240);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '`') SKIP(109)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead == '+' ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '`') SKIP(110)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '`') SKIP(111)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '"' || ')' < lookahead) &&
          lookahead != '-' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '{' &&
          lookahead != '|') ADVANCE(291);
      END_STATE();
    case 15:
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '{') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 16:
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '{') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(191);
      if (lookahead == '{') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(216);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(175);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(177);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(82);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(226);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 49:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 50:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 52:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(202);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 61:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 64:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 71:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 72:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 73:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 74:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 87:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(193);
      END_STATE();
    case 89:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      END_STATE();
    case 92:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      END_STATE();
    case 94:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      END_STATE();
    case 95:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      END_STATE();
    case 96:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 97:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 102:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(33);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 114:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 117:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 118:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '%' || ')' < lookahead) &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(291);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '%' || ')' < lookahead) &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '|') ADVANCE(291);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_function_definition_token2);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_filter_definition_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_filter_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_filter_definition_token2);
      if (lookahead == '+' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_class_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_class_definition_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_enum_definition_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_enum_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_if_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_elseif_statement_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_else_statement_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_while_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_do_while_statement_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_do_while_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(159);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(165);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_command_parameter);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_param_block_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_param_block_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_binary_operator_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_binary_operator_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_binary_operator_token3);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_binary_operator_token4);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_binary_operator_token5);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_binary_operator_token6);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_binary_operator_token7);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_binary_operator_token8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_binary_operator_token9);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_binary_operator_token10);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_binary_operator_token11);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_binary_operator_token12);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_binary_operator_token13);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_binary_operator_token14);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_binary_operator_token15);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_binary_operator_token16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_binary_operator_token17);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_binary_operator_token18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_binary_operator_token19);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_binary_operator_token20);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(213);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '<') ADVANCE(11);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_simple_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_splatted_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__braced_variable);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DOLLAR_CARET);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOLLAR_QMARK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(225);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__typename_simple);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number_expr);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number_expr);
      if (lookahead == 'G' ||
          lookahead == 'K' ||
          lookahead == 'M' ||
          lookahead == 'T' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'm' ||
          lookahead == 't') ADVANCE(262);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_single_quote_string_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '`') ADVANCE(243);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '`') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '`') ADVANCE(239);
      if (('"' <= lookahead && lookahead <= '$')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '`') ADVANCE(239);
      if (('"' <= lookahead && lookahead <= '$')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(244);
      if (lookahead == '`') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(244);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '{') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(217);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '{') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == ']') ADVANCE(291);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(259);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == ']') ADVANCE(291);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == ']') ADVANCE(291);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(266);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == ']') ADVANCE(291);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '-') ADVANCE(290);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(291);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '!') ADVANCE(291);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(271);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_bareword_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_bareword_string);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_bareword_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '$' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '^' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(296);
      if (lookahead == '`') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '<') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '`') ADVANCE(239);
      if (('"' <= lookahead && lookahead <= '$')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '"' ||
          lookahead == '$') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '"') ||
          ('$' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '@' ||
          lookahead == '^' ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(298);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 118},
  [2] = {.lex_state = 118},
  [3] = {.lex_state = 118},
  [4] = {.lex_state = 118},
  [5] = {.lex_state = 118},
  [6] = {.lex_state = 119},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 119},
  [10] = {.lex_state = 119},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 119},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 119},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 119},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 119},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 119},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 119},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 119},
  [35] = {.lex_state = 119},
  [36] = {.lex_state = 119},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 119},
  [40] = {.lex_state = 119},
  [41] = {.lex_state = 119},
  [42] = {.lex_state = 119},
  [43] = {.lex_state = 119},
  [44] = {.lex_state = 119},
  [45] = {.lex_state = 119},
  [46] = {.lex_state = 119},
  [47] = {.lex_state = 119},
  [48] = {.lex_state = 119},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 5, .external_lex_state = 1},
  [75] = {.lex_state = 5, .external_lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5, .external_lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5, .external_lex_state = 1},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5, .external_lex_state = 1},
  [84] = {.lex_state = 119},
  [85] = {.lex_state = 119},
  [86] = {.lex_state = 119},
  [87] = {.lex_state = 119},
  [88] = {.lex_state = 119},
  [89] = {.lex_state = 119},
  [90] = {.lex_state = 2, .external_lex_state = 1},
  [91] = {.lex_state = 2, .external_lex_state = 1},
  [92] = {.lex_state = 119},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 119},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5, .external_lex_state = 1},
  [99] = {.lex_state = 5, .external_lex_state = 1},
  [100] = {.lex_state = 5, .external_lex_state = 1},
  [101] = {.lex_state = 5, .external_lex_state = 1},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5, .external_lex_state = 1},
  [105] = {.lex_state = 5, .external_lex_state = 1},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5, .external_lex_state = 1},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5, .external_lex_state = 1},
  [119] = {.lex_state = 5, .external_lex_state = 1},
  [120] = {.lex_state = 5, .external_lex_state = 1},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 5, .external_lex_state = 1},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 5, .external_lex_state = 1},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 5, .external_lex_state = 1},
  [132] = {.lex_state = 5, .external_lex_state = 1},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0, .external_lex_state = 1},
  [204] = {.lex_state = 0, .external_lex_state = 1},
  [205] = {.lex_state = 0, .external_lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 1},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0, .external_lex_state = 1},
  [213] = {.lex_state = 0, .external_lex_state = 1},
  [214] = {.lex_state = 0, .external_lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 14},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 14},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0, .external_lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0, .external_lex_state = 1},
  [229] = {.lex_state = 0, .external_lex_state = 1},
  [230] = {.lex_state = 0, .external_lex_state = 1},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 14},
  [238] = {.lex_state = 14},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0, .external_lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0, .external_lex_state = 1},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 0, .external_lex_state = 1},
  [279] = {.lex_state = 6},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 0, .external_lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 6},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 6},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 6},
  [329] = {.lex_state = 6},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 6},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0, .external_lex_state = 1},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0, .external_lex_state = 1},
  [341] = {.lex_state = 0, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 0, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0, .external_lex_state = 1},
  [349] = {.lex_state = 0, .external_lex_state = 1},
  [350] = {.lex_state = 0, .external_lex_state = 1},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0, .external_lex_state = 1},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 8},
  [360] = {.lex_state = 0, .external_lex_state = 1},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0, .external_lex_state = 1},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 0, .external_lex_state = 1},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0, .external_lex_state = 1},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0, .external_lex_state = 1},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 8},
  [407] = {.lex_state = 9},
  [408] = {.lex_state = 0, .external_lex_state = 1},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 0, .external_lex_state = 1},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0, .external_lex_state = 1},
  [429] = {.lex_state = 0, .external_lex_state = 1},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 10},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 10},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 9},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
};

enum {
  ts_external_token__statement_terminator = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__statement_terminator] = sym__statement_terminator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__statement_terminator] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_function_definition_token1] = ACTIONS(1),
    [aux_sym_filter_definition_token1] = ACTIONS(1),
    [aux_sym_class_definition_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_enum_definition_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_if_statement_token1] = ACTIONS(1),
    [aux_sym_elseif_statement_token1] = ACTIONS(1),
    [aux_sym_else_statement_token1] = ACTIONS(1),
    [aux_sym_while_statement_token1] = ACTIONS(1),
    [aux_sym_do_while_statement_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_command_parameter] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [aux_sym_param_block_token1] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [aux_sym_binary_operator_token1] = ACTIONS(1),
    [aux_sym_binary_operator_token2] = ACTIONS(1),
    [aux_sym_binary_operator_token3] = ACTIONS(1),
    [aux_sym_binary_operator_token4] = ACTIONS(1),
    [aux_sym_binary_operator_token5] = ACTIONS(1),
    [aux_sym_binary_operator_token6] = ACTIONS(1),
    [aux_sym_binary_operator_token7] = ACTIONS(1),
    [aux_sym_binary_operator_token8] = ACTIONS(1),
    [aux_sym_binary_operator_token9] = ACTIONS(1),
    [aux_sym_binary_operator_token10] = ACTIONS(1),
    [aux_sym_binary_operator_token11] = ACTIONS(1),
    [aux_sym_binary_operator_token12] = ACTIONS(1),
    [aux_sym_binary_operator_token13] = ACTIONS(1),
    [aux_sym_binary_operator_token14] = ACTIONS(1),
    [aux_sym_binary_operator_token15] = ACTIONS(1),
    [aux_sym_binary_operator_token16] = ACTIONS(1),
    [aux_sym_binary_operator_token17] = ACTIONS(1),
    [aux_sym_binary_operator_token18] = ACTIONS(1),
    [aux_sym_binary_operator_token19] = ACTIONS(1),
    [aux_sym_binary_operator_token20] = ACTIONS(1),
    [sym_simple_variable] = ACTIONS(1),
    [sym_splatted_variable] = ACTIONS(1),
    [sym__braced_variable] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_CARET] = ACTIONS(1),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [sym_number_expr] = ACTIONS(1),
    [aux_sym_single_quote_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(409),
    [sym__statement] = STATE(408),
    [sym_function_definition] = STATE(408),
    [sym_filter_definition] = STATE(408),
    [sym_class_definition] = STATE(408),
    [sym_enum_definition] = STATE(408),
    [sym_assignment_statement] = STATE(408),
    [sym_pipeline_statement] = STATE(408),
    [sym_if_statement] = STATE(408),
    [sym_while_statement] = STATE(408),
    [sym_do_while_statement] = STATE(408),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym_param_block] = STATE(25),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(408),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(30),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [aux_sym_param_block_token1] = ACTIONS(31),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [2] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym_param_block] = STATE(19),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [aux_sym_param_block_token1] = ACTIONS(53),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [3] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym_param_block] = STATE(37),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(6),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [aux_sym_param_block_token1] = ACTIONS(53),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [4] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym_param_block] = STATE(7),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(27),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [aux_sym_param_block_token1] = ACTIONS(53),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [5] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym_param_block] = STATE(38),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(39),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [aux_sym_param_block_token1] = ACTIONS(53),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [6] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [7] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(24),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [8] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [9] = {
    [sym__statement] = STATE(408),
    [sym_function_definition] = STATE(408),
    [sym_filter_definition] = STATE(408),
    [sym_class_definition] = STATE(408),
    [sym_enum_definition] = STATE(408),
    [sym_assignment_statement] = STATE(408),
    [sym_pipeline_statement] = STATE(408),
    [sym_if_statement] = STATE(408),
    [sym_while_statement] = STATE(408),
    [sym_do_while_statement] = STATE(408),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(408),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(9),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_function_definition_token1] = ACTIONS(69),
    [aux_sym_filter_definition_token1] = ACTIONS(72),
    [aux_sym_class_definition_token1] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(84),
    [aux_sym_enum_definition_token1] = ACTIONS(87),
    [aux_sym_if_statement_token1] = ACTIONS(90),
    [aux_sym_while_statement_token1] = ACTIONS(93),
    [aux_sym_do_while_statement_token1] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(102),
    [anon_sym_AT_LPAREN] = ACTIONS(105),
    [anon_sym_AT_LBRACE] = ACTIONS(108),
    [sym_simple_variable] = ACTIONS(111),
    [sym__braced_variable] = ACTIONS(111),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(111),
    [anon_sym_DOLLAR_CARET] = ACTIONS(111),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(114),
    [sym_number_expr] = ACTIONS(117),
    [aux_sym_single_quote_string_token1] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_bareword_string] = ACTIONS(126),
    [sym_comment] = ACTIONS(49),
  },
  [10] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(69),
    [aux_sym_filter_definition_token1] = ACTIONS(72),
    [aux_sym_class_definition_token1] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(84),
    [aux_sym_enum_definition_token1] = ACTIONS(87),
    [aux_sym_if_statement_token1] = ACTIONS(90),
    [aux_sym_while_statement_token1] = ACTIONS(93),
    [aux_sym_do_while_statement_token1] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(102),
    [anon_sym_AT_LPAREN] = ACTIONS(105),
    [anon_sym_AT_LBRACE] = ACTIONS(108),
    [sym_simple_variable] = ACTIONS(111),
    [sym__braced_variable] = ACTIONS(111),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(111),
    [anon_sym_DOLLAR_CARET] = ACTIONS(111),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(114),
    [sym_number_expr] = ACTIONS(117),
    [aux_sym_single_quote_string_token1] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_bareword_string] = ACTIONS(126),
    [sym_comment] = ACTIONS(49),
  },
  [11] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(13),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [12] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [13] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [14] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(15),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [15] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [16] = {
    [sym__statement] = STATE(408),
    [sym_function_definition] = STATE(408),
    [sym_filter_definition] = STATE(408),
    [sym_class_definition] = STATE(408),
    [sym_enum_definition] = STATE(408),
    [sym_assignment_statement] = STATE(408),
    [sym_pipeline_statement] = STATE(408),
    [sym_if_statement] = STATE(408),
    [sym_while_statement] = STATE(408),
    [sym_do_while_statement] = STATE(408),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(408),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(9),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [17] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(28),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [18] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(26),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [19] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(35),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [20] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [21] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [22] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [23] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(20),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [24] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [25] = {
    [sym__statement] = STATE(408),
    [sym_function_definition] = STATE(408),
    [sym_filter_definition] = STATE(408),
    [sym_class_definition] = STATE(408),
    [sym_enum_definition] = STATE(408),
    [sym_assignment_statement] = STATE(408),
    [sym_pipeline_statement] = STATE(408),
    [sym_if_statement] = STATE(408),
    [sym_while_statement] = STATE(408),
    [sym_do_while_statement] = STATE(408),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(408),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(16),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [26] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [27] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [28] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [29] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [30] = {
    [sym__statement] = STATE(408),
    [sym_function_definition] = STATE(408),
    [sym_filter_definition] = STATE(408),
    [sym_class_definition] = STATE(408),
    [sym_enum_definition] = STATE(408),
    [sym_assignment_statement] = STATE(408),
    [sym_pipeline_statement] = STATE(408),
    [sym_if_statement] = STATE(408),
    [sym_while_statement] = STATE(408),
    [sym_do_while_statement] = STATE(408),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(408),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(9),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [31] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(32),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [32] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [33] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [34] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [35] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [36] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(12),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [37] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(34),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [38] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(8),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [39] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [40] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(21),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [41] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(33),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [42] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [43] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(42),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [44] = {
    [sym__statement] = STATE(349),
    [sym_function_definition] = STATE(349),
    [sym_filter_definition] = STATE(349),
    [sym_class_definition] = STATE(349),
    [sym_enum_definition] = STATE(349),
    [sym_assignment_statement] = STATE(349),
    [sym_pipeline_statement] = STATE(349),
    [sym_if_statement] = STATE(349),
    [sym_while_statement] = STATE(349),
    [sym_do_while_statement] = STATE(349),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(349),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_program_repeat1] = STATE(29),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [aux_sym_function_definition_token1] = ACTIONS(7),
    [aux_sym_filter_definition_token1] = ACTIONS(9),
    [aux_sym_class_definition_token1] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_enum_definition_token1] = ACTIONS(19),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [45] = {
    [sym__statement] = STATE(352),
    [sym_function_definition] = STATE(352),
    [sym_filter_definition] = STATE(352),
    [sym_class_definition] = STATE(352),
    [sym_enum_definition] = STATE(352),
    [sym_assignment_statement] = STATE(352),
    [sym_pipeline_statement] = STATE(352),
    [sym_if_statement] = STATE(352),
    [sym_while_statement] = STATE(352),
    [sym_do_while_statement] = STATE(352),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym_binary_operator_statement] = STATE(352),
    [sym__attributed_variable] = STATE(202),
    [sym_variable] = STATE(93),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [aux_sym_function_definition_token1] = ACTIONS(189),
    [aux_sym_filter_definition_token1] = ACTIONS(191),
    [aux_sym_class_definition_token1] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [aux_sym_enum_definition_token1] = ACTIONS(201),
    [aux_sym_if_statement_token1] = ACTIONS(203),
    [aux_sym_while_statement_token1] = ACTIONS(205),
    [aux_sym_do_while_statement_token1] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [46] = {
    [sym__statement] = STATE(387),
    [sym_function_definition] = STATE(387),
    [sym_filter_definition] = STATE(387),
    [sym_class_definition] = STATE(387),
    [sym_enum_definition] = STATE(387),
    [sym_assignment_statement] = STATE(387),
    [sym_pipeline_statement] = STATE(387),
    [sym_if_statement] = STATE(387),
    [sym_while_statement] = STATE(387),
    [sym_do_while_statement] = STATE(387),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym_binary_operator_statement] = STATE(387),
    [sym__attributed_variable] = STATE(202),
    [sym_variable] = STATE(93),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [aux_sym_function_definition_token1] = ACTIONS(189),
    [aux_sym_filter_definition_token1] = ACTIONS(191),
    [aux_sym_class_definition_token1] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [aux_sym_enum_definition_token1] = ACTIONS(201),
    [aux_sym_if_statement_token1] = ACTIONS(203),
    [aux_sym_while_statement_token1] = ACTIONS(205),
    [aux_sym_do_while_statement_token1] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [47] = {
    [sym__statement] = STATE(379),
    [sym_function_definition] = STATE(379),
    [sym_filter_definition] = STATE(379),
    [sym_class_definition] = STATE(379),
    [sym_enum_definition] = STATE(379),
    [sym_assignment_statement] = STATE(379),
    [sym_pipeline_statement] = STATE(379),
    [sym_if_statement] = STATE(379),
    [sym_while_statement] = STATE(379),
    [sym_do_while_statement] = STATE(379),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym_binary_operator_statement] = STATE(379),
    [sym__attributed_variable] = STATE(202),
    [sym_variable] = STATE(93),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [aux_sym_function_definition_token1] = ACTIONS(189),
    [aux_sym_filter_definition_token1] = ACTIONS(191),
    [aux_sym_class_definition_token1] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [aux_sym_enum_definition_token1] = ACTIONS(201),
    [aux_sym_if_statement_token1] = ACTIONS(203),
    [aux_sym_while_statement_token1] = ACTIONS(205),
    [aux_sym_do_while_statement_token1] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [48] = {
    [sym__statement] = STATE(400),
    [sym_function_definition] = STATE(400),
    [sym_filter_definition] = STATE(400),
    [sym_class_definition] = STATE(400),
    [sym_enum_definition] = STATE(400),
    [sym_assignment_statement] = STATE(400),
    [sym_pipeline_statement] = STATE(400),
    [sym_if_statement] = STATE(400),
    [sym_while_statement] = STATE(400),
    [sym_do_while_statement] = STATE(400),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym_binary_operator_statement] = STATE(400),
    [sym__attributed_variable] = STATE(202),
    [sym_variable] = STATE(93),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [aux_sym_function_definition_token1] = ACTIONS(189),
    [aux_sym_filter_definition_token1] = ACTIONS(191),
    [aux_sym_class_definition_token1] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [aux_sym_enum_definition_token1] = ACTIONS(201),
    [aux_sym_if_statement_token1] = ACTIONS(203),
    [aux_sym_while_statement_token1] = ACTIONS(205),
    [aux_sym_do_while_statement_token1] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [49] = {
    [sym_assignment_statement] = STATE(398),
    [sym_pipeline_statement] = STATE(398),
    [sym_if_statement] = STATE(398),
    [sym_while_statement] = STATE(398),
    [sym_do_while_statement] = STATE(398),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym_binary_operator_statement] = STATE(398),
    [sym__attributed_variable] = STATE(202),
    [sym_variable] = STATE(93),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [aux_sym_if_statement_token1] = ACTIONS(203),
    [aux_sym_while_statement_token1] = ACTIONS(205),
    [aux_sym_do_while_statement_token1] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [50] = {
    [sym_assignment_statement] = STATE(412),
    [sym_pipeline_statement] = STATE(412),
    [sym_if_statement] = STATE(412),
    [sym_while_statement] = STATE(412),
    [sym_do_while_statement] = STATE(412),
    [sym_command_expression] = STATE(278),
    [sym_subpipeline] = STATE(213),
    [sym_subexpression] = STATE(213),
    [sym_scriptblock] = STATE(213),
    [sym__pipeline_expression] = STATE(278),
    [sym_array_expression] = STATE(278),
    [sym_flat_array_expression] = STATE(213),
    [sym_hashtable_expression] = STATE(213),
    [sym_binary_operator_statement] = STATE(412),
    [sym__attributed_variable] = STATE(193),
    [sym_variable] = STATE(91),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(150),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(213),
    [sym_single_quote_string] = STATE(213),
    [sym_double_quote_string] = STATE(213),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [aux_sym_if_statement_token1] = ACTIONS(21),
    [aux_sym_while_statement_token1] = ACTIONS(23),
    [aux_sym_do_while_statement_token1] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(29),
    [anon_sym_AT_LPAREN] = ACTIONS(33),
    [anon_sym_AT_LBRACE] = ACTIONS(35),
    [sym_simple_variable] = ACTIONS(37),
    [sym__braced_variable] = ACTIONS(37),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(37),
    [anon_sym_DOLLAR_CARET] = ACTIONS(37),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_number_expr] = ACTIONS(41),
    [aux_sym_single_quote_string_token1] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [51] = {
    [sym_pipeline_statement] = STATE(375),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [52] = {
    [sym_pipeline_statement] = STATE(337),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [53] = {
    [sym_pipeline_statement] = STATE(435),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [54] = {
    [sym_pipeline_statement] = STATE(377),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [55] = {
    [sym_pipeline_statement] = STATE(338),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [56] = {
    [sym_pipeline_statement] = STATE(432),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [57] = {
    [sym_pipeline_statement] = STATE(376),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [58] = {
    [sym_pipeline_statement] = STATE(431),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [59] = {
    [sym_pipeline_statement] = STATE(413),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [60] = {
    [sym_pipeline_statement] = STATE(339),
    [sym_command_expression] = STATE(264),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(264),
    [sym_array_expression] = STATE(264),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [61] = {
    [sym_command_expression] = STATE(399),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(399),
    [sym_array_expression] = STATE(399),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [62] = {
    [sym_command_expression] = STATE(384),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(384),
    [sym_array_expression] = STATE(384),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [63] = {
    [sym_command_expression] = STATE(351),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(351),
    [sym_array_expression] = STATE(351),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [64] = {
    [sym_command_expression] = STATE(386),
    [sym_subpipeline] = STATE(244),
    [sym_subexpression] = STATE(244),
    [sym_scriptblock] = STATE(244),
    [sym__pipeline_expression] = STATE(386),
    [sym_array_expression] = STATE(386),
    [sym_flat_array_expression] = STATE(244),
    [sym_hashtable_expression] = STATE(244),
    [sym__attributed_variable] = STATE(244),
    [sym_variable] = STATE(244),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(151),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(244),
    [sym_single_quote_string] = STATE(244),
    [sym_double_quote_string] = STATE(244),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_AT_LBRACE] = ACTIONS(215),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_number_expr] = ACTIONS(221),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [65] = {
    [sym_subpipeline] = STATE(191),
    [sym_subexpression] = STATE(191),
    [sym_scriptblock] = STATE(191),
    [sym_array_expression] = STATE(288),
    [sym_flat_array_expression] = STATE(191),
    [sym_hashtable_expression] = STATE(191),
    [sym__attributed_variable] = STATE(191),
    [sym_variable] = STATE(191),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(147),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(191),
    [sym_single_quote_string] = STATE(191),
    [sym_double_quote_string] = STATE(191),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(241),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_number_expr] = ACTIONS(247),
    [aux_sym_single_quote_string_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_subpipeline] = STATE(203),
    [sym_subexpression] = STATE(203),
    [sym_scriptblock] = STATE(203),
    [sym_array_expression] = STATE(306),
    [sym_flat_array_expression] = STATE(203),
    [sym_hashtable_expression] = STATE(203),
    [sym__attributed_variable] = STATE(203),
    [sym_variable] = STATE(203),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(146),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(203),
    [sym_single_quote_string] = STATE(203),
    [sym_double_quote_string] = STATE(203),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(241),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_number_expr] = ACTIONS(255),
    [aux_sym_single_quote_string_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [sym_subpipeline] = STATE(307),
    [sym_subexpression] = STATE(307),
    [sym_scriptblock] = STATE(307),
    [sym_array_expression] = STATE(371),
    [sym_flat_array_expression] = STATE(307),
    [sym_hashtable_expression] = STATE(307),
    [sym__attributed_variable] = STATE(307),
    [sym_variable] = STATE(307),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(160),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(307),
    [sym_single_quote_string] = STATE(307),
    [sym_double_quote_string] = STATE(307),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(241),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_number_expr] = ACTIONS(257),
    [aux_sym_single_quote_string_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_subpipeline] = STATE(226),
    [sym_subexpression] = STATE(226),
    [sym_scriptblock] = STATE(226),
    [sym_array_expression] = STATE(315),
    [sym_flat_array_expression] = STATE(226),
    [sym_hashtable_expression] = STATE(226),
    [sym__attributed_variable] = STATE(226),
    [sym_variable] = STATE(226),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(153),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(226),
    [sym_single_quote_string] = STATE(226),
    [sym_double_quote_string] = STATE(226),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(241),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_number_expr] = ACTIONS(259),
    [aux_sym_single_quote_string_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym_subpipeline] = STATE(276),
    [sym_subexpression] = STATE(276),
    [sym_scriptblock] = STATE(276),
    [sym_array_expression] = STATE(415),
    [sym_flat_array_expression] = STATE(276),
    [sym_hashtable_expression] = STATE(276),
    [sym__attributed_variable] = STATE(276),
    [sym_variable] = STATE(276),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(155),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(276),
    [sym_single_quote_string] = STATE(276),
    [sym_double_quote_string] = STATE(276),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [aux_sym_array_expression_repeat1] = STATE(204),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(241),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_number_expr] = ACTIONS(261),
    [aux_sym_single_quote_string_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_subpipeline] = STATE(291),
    [sym_subexpression] = STATE(291),
    [sym_scriptblock] = STATE(291),
    [sym_array_expression] = STATE(397),
    [sym_flat_array_expression] = STATE(291),
    [sym_hashtable_expression] = STATE(291),
    [sym__attributed_variable] = STATE(291),
    [sym_variable] = STATE(291),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(159),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(291),
    [sym_single_quote_string] = STATE(291),
    [sym_double_quote_string] = STATE(291),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [aux_sym_array_expression_repeat1] = STATE(250),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_AT_LPAREN] = ACTIONS(271),
    [anon_sym_AT_LBRACE] = ACTIONS(273),
    [sym_simple_variable] = ACTIONS(275),
    [sym__braced_variable] = ACTIONS(275),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(275),
    [anon_sym_DOLLAR_CARET] = ACTIONS(275),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_number_expr] = ACTIONS(279),
    [aux_sym_single_quote_string_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_subpipeline] = STATE(308),
    [sym_subexpression] = STATE(308),
    [sym_scriptblock] = STATE(308),
    [sym_flat_array_expression] = STATE(308),
    [sym_hashtable_expression] = STATE(308),
    [sym__attributed_variable] = STATE(308),
    [sym_variable] = STATE(308),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(156),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(308),
    [sym_single_quote_string] = STATE(308),
    [sym_double_quote_string] = STATE(308),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_AT_LPAREN] = ACTIONS(271),
    [anon_sym_AT_LBRACE] = ACTIONS(273),
    [sym_simple_variable] = ACTIONS(275),
    [sym__braced_variable] = ACTIONS(275),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(275),
    [anon_sym_DOLLAR_CARET] = ACTIONS(275),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_number_expr] = ACTIONS(287),
    [aux_sym_single_quote_string_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym_subpipeline] = STATE(205),
    [sym_subexpression] = STATE(205),
    [sym_scriptblock] = STATE(205),
    [sym_flat_array_expression] = STATE(205),
    [sym_hashtable_expression] = STATE(205),
    [sym__attributed_variable] = STATE(205),
    [sym_variable] = STATE(205),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(152),
    [sym_non_type_attribute] = STATE(136),
    [sym__attribute] = STATE(136),
    [sym__string_expr] = STATE(205),
    [sym_single_quote_string] = STATE(205),
    [sym_double_quote_string] = STATE(205),
    [aux_sym_param_block_variable_repeat1] = STATE(136),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_AT_LBRACE] = ACTIONS(241),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_number_expr] = ACTIONS(289),
    [aux_sym_single_quote_string_token1] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_subpipeline] = STATE(267),
    [sym_subexpression] = STATE(267),
    [sym_scriptblock] = STATE(267),
    [sym_flat_array_expression] = STATE(267),
    [sym_hashtable_expression] = STATE(267),
    [sym__attributed_variable] = STATE(267),
    [sym_variable] = STATE(267),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(158),
    [sym_non_type_attribute] = STATE(137),
    [sym__attribute] = STATE(137),
    [sym__string_expr] = STATE(267),
    [sym_single_quote_string] = STATE(267),
    [sym_double_quote_string] = STATE(267),
    [aux_sym_param_block_variable_repeat1] = STATE(137),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_AT_LPAREN] = ACTIONS(271),
    [anon_sym_AT_LBRACE] = ACTIONS(273),
    [sym_simple_variable] = ACTIONS(275),
    [sym__braced_variable] = ACTIONS(275),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(275),
    [anon_sym_DOLLAR_CARET] = ACTIONS(275),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_number_expr] = ACTIONS(291),
    [aux_sym_single_quote_string_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym_command_argument] = STATE(77),
    [sym_subpipeline] = STATE(118),
    [sym_subexpression] = STATE(118),
    [sym_scriptblock] = STATE(118),
    [sym_hashtable_expression] = STATE(118),
    [sym_variable] = STATE(118),
    [sym__special_variable] = STATE(107),
    [sym__string_expr] = STATE(118),
    [sym_single_quote_string] = STATE(118),
    [sym_double_quote_string] = STATE(118),
    [aux_sym_command_expression_repeat1] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(297),
    [sym_command_parameter] = ACTIONS(299),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(301),
    [anon_sym_AT_LBRACE] = ACTIONS(303),
    [sym_simple_variable] = ACTIONS(305),
    [sym_splatted_variable] = ACTIONS(307),
    [sym__braced_variable] = ACTIONS(305),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_CARET] = ACTIONS(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(305),
    [sym_number_expr] = ACTIONS(307),
    [aux_sym_single_quote_string_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_bareword_string] = ACTIONS(307),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(313),
  },
  [75] = {
    [sym_command_argument] = STATE(80),
    [sym_subpipeline] = STATE(118),
    [sym_subexpression] = STATE(118),
    [sym_scriptblock] = STATE(118),
    [sym_hashtable_expression] = STATE(118),
    [sym_variable] = STATE(118),
    [sym__special_variable] = STATE(107),
    [sym__string_expr] = STATE(118),
    [sym_single_quote_string] = STATE(118),
    [sym_double_quote_string] = STATE(118),
    [aux_sym_command_expression_repeat1] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(297),
    [sym_command_parameter] = ACTIONS(315),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(301),
    [anon_sym_AT_LBRACE] = ACTIONS(303),
    [sym_simple_variable] = ACTIONS(305),
    [sym_splatted_variable] = ACTIONS(307),
    [sym__braced_variable] = ACTIONS(305),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_CARET] = ACTIONS(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(305),
    [sym_number_expr] = ACTIONS(307),
    [aux_sym_single_quote_string_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_bareword_string] = ACTIONS(307),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(313),
  },
  [76] = {
    [sym_command_argument] = STATE(81),
    [sym_subpipeline] = STATE(97),
    [sym_subexpression] = STATE(97),
    [sym_scriptblock] = STATE(97),
    [sym_hashtable_expression] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__special_variable] = STATE(116),
    [sym__string_expr] = STATE(97),
    [sym_single_quote_string] = STATE(97),
    [sym_double_quote_string] = STATE(97),
    [aux_sym_command_expression_repeat1] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [sym_command_parameter] = ACTIONS(321),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [anon_sym_AT_LBRACE] = ACTIONS(325),
    [sym_simple_variable] = ACTIONS(327),
    [sym_splatted_variable] = ACTIONS(329),
    [sym__braced_variable] = ACTIONS(327),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_CARET] = ACTIONS(327),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(327),
    [sym_number_expr] = ACTIONS(329),
    [aux_sym_single_quote_string_token1] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [sym_bareword_string] = ACTIONS(329),
    [sym_comment] = ACTIONS(49),
  },
  [77] = {
    [sym_command_argument] = STATE(80),
    [sym_subpipeline] = STATE(118),
    [sym_subexpression] = STATE(118),
    [sym_scriptblock] = STATE(118),
    [sym_hashtable_expression] = STATE(118),
    [sym_variable] = STATE(118),
    [sym__special_variable] = STATE(107),
    [sym__string_expr] = STATE(118),
    [sym_single_quote_string] = STATE(118),
    [sym_double_quote_string] = STATE(118),
    [aux_sym_command_expression_repeat1] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(335),
    [sym_command_parameter] = ACTIONS(315),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(301),
    [anon_sym_AT_LBRACE] = ACTIONS(303),
    [sym_simple_variable] = ACTIONS(305),
    [sym_splatted_variable] = ACTIONS(307),
    [sym__braced_variable] = ACTIONS(305),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_CARET] = ACTIONS(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(305),
    [sym_number_expr] = ACTIONS(307),
    [aux_sym_single_quote_string_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_bareword_string] = ACTIONS(307),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(337),
  },
  [78] = {
    [sym_command_argument] = STATE(82),
    [sym_subpipeline] = STATE(97),
    [sym_subexpression] = STATE(97),
    [sym_scriptblock] = STATE(97),
    [sym_hashtable_expression] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__special_variable] = STATE(116),
    [sym__string_expr] = STATE(97),
    [sym_single_quote_string] = STATE(97),
    [sym_double_quote_string] = STATE(97),
    [aux_sym_command_expression_repeat1] = STATE(82),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [sym_command_parameter] = ACTIONS(339),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [anon_sym_AT_LBRACE] = ACTIONS(325),
    [sym_simple_variable] = ACTIONS(327),
    [sym_splatted_variable] = ACTIONS(329),
    [sym__braced_variable] = ACTIONS(327),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_CARET] = ACTIONS(327),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(327),
    [sym_number_expr] = ACTIONS(329),
    [aux_sym_single_quote_string_token1] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [sym_bareword_string] = ACTIONS(329),
    [sym_comment] = ACTIONS(49),
  },
  [79] = {
    [sym_command_argument] = STATE(76),
    [sym_subpipeline] = STATE(97),
    [sym_subexpression] = STATE(97),
    [sym_scriptblock] = STATE(97),
    [sym_hashtable_expression] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__special_variable] = STATE(116),
    [sym__string_expr] = STATE(97),
    [sym_single_quote_string] = STATE(97),
    [sym_double_quote_string] = STATE(97),
    [aux_sym_command_expression_repeat1] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [sym_command_parameter] = ACTIONS(343),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [anon_sym_AT_LBRACE] = ACTIONS(325),
    [sym_simple_variable] = ACTIONS(327),
    [sym_splatted_variable] = ACTIONS(329),
    [sym__braced_variable] = ACTIONS(327),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_CARET] = ACTIONS(327),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(327),
    [sym_number_expr] = ACTIONS(329),
    [aux_sym_single_quote_string_token1] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [sym_bareword_string] = ACTIONS(329),
    [sym_comment] = ACTIONS(49),
  },
  [80] = {
    [sym_command_argument] = STATE(80),
    [sym_subpipeline] = STATE(118),
    [sym_subexpression] = STATE(118),
    [sym_scriptblock] = STATE(118),
    [sym_hashtable_expression] = STATE(118),
    [sym_variable] = STATE(118),
    [sym__special_variable] = STATE(107),
    [sym__string_expr] = STATE(118),
    [sym_single_quote_string] = STATE(118),
    [sym_double_quote_string] = STATE(118),
    [aux_sym_command_expression_repeat1] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(351),
    [sym_command_parameter] = ACTIONS(353),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(356),
    [anon_sym_AT_LBRACE] = ACTIONS(359),
    [sym_simple_variable] = ACTIONS(362),
    [sym_splatted_variable] = ACTIONS(365),
    [sym__braced_variable] = ACTIONS(362),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(362),
    [anon_sym_DOLLAR_CARET] = ACTIONS(362),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(362),
    [sym_number_expr] = ACTIONS(365),
    [aux_sym_single_quote_string_token1] = ACTIONS(368),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym_bareword_string] = ACTIONS(365),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(374),
  },
  [81] = {
    [sym_command_argument] = STATE(81),
    [sym_subpipeline] = STATE(97),
    [sym_subexpression] = STATE(97),
    [sym_scriptblock] = STATE(97),
    [sym_hashtable_expression] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__special_variable] = STATE(116),
    [sym__string_expr] = STATE(97),
    [sym_single_quote_string] = STATE(97),
    [sym_double_quote_string] = STATE(97),
    [aux_sym_command_expression_repeat1] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [sym_command_parameter] = ACTIONS(382),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(385),
    [anon_sym_AT_LBRACE] = ACTIONS(388),
    [sym_simple_variable] = ACTIONS(391),
    [sym_splatted_variable] = ACTIONS(394),
    [sym__braced_variable] = ACTIONS(391),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(391),
    [anon_sym_DOLLAR_CARET] = ACTIONS(391),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(391),
    [sym_number_expr] = ACTIONS(394),
    [aux_sym_single_quote_string_token1] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [sym_bareword_string] = ACTIONS(394),
    [sym_comment] = ACTIONS(49),
  },
  [82] = {
    [sym_command_argument] = STATE(81),
    [sym_subpipeline] = STATE(97),
    [sym_subexpression] = STATE(97),
    [sym_scriptblock] = STATE(97),
    [sym_hashtable_expression] = STATE(97),
    [sym_variable] = STATE(97),
    [sym__special_variable] = STATE(116),
    [sym__string_expr] = STATE(97),
    [sym_single_quote_string] = STATE(97),
    [sym_double_quote_string] = STATE(97),
    [aux_sym_command_expression_repeat1] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [sym_command_parameter] = ACTIONS(321),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [anon_sym_AT_LBRACE] = ACTIONS(325),
    [sym_simple_variable] = ACTIONS(327),
    [sym_splatted_variable] = ACTIONS(329),
    [sym__braced_variable] = ACTIONS(327),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_CARET] = ACTIONS(327),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(327),
    [sym_number_expr] = ACTIONS(329),
    [aux_sym_single_quote_string_token1] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [sym_bareword_string] = ACTIONS(329),
    [sym_comment] = ACTIONS(49),
  },
  [83] = {
    [sym_command_argument] = STATE(75),
    [sym_subpipeline] = STATE(118),
    [sym_subexpression] = STATE(118),
    [sym_scriptblock] = STATE(118),
    [sym_hashtable_expression] = STATE(118),
    [sym_variable] = STATE(118),
    [sym__special_variable] = STATE(107),
    [sym__string_expr] = STATE(118),
    [sym_single_quote_string] = STATE(118),
    [sym_double_quote_string] = STATE(118),
    [aux_sym_command_expression_repeat1] = STATE(75),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(341),
    [sym_command_parameter] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(301),
    [anon_sym_AT_LBRACE] = ACTIONS(303),
    [sym_simple_variable] = ACTIONS(305),
    [sym_splatted_variable] = ACTIONS(307),
    [sym__braced_variable] = ACTIONS(305),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_CARET] = ACTIONS(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(305),
    [sym_number_expr] = ACTIONS(307),
    [aux_sym_single_quote_string_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_bareword_string] = ACTIONS(307),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(405),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym_function_definition_token1] = ACTIONS(129),
    [aux_sym_filter_definition_token1] = ACTIONS(129),
    [aux_sym_class_definition_token1] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [aux_sym_enum_definition_token1] = ACTIONS(129),
    [aux_sym_if_statement_token1] = ACTIONS(129),
    [aux_sym_while_statement_token1] = ACTIONS(129),
    [aux_sym_do_while_statement_token1] = ACTIONS(129),
    [anon_sym_AMP] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(129),
    [anon_sym_AT_LPAREN] = ACTIONS(129),
    [anon_sym_AT_LBRACE] = ACTIONS(129),
    [sym_simple_variable] = ACTIONS(129),
    [sym__braced_variable] = ACTIONS(129),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_CARET] = ACTIONS(129),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_number_expr] = ACTIONS(129),
    [aux_sym_single_quote_string_token1] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_bareword_string] = ACTIONS(129),
    [sym_comment] = ACTIONS(49),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_function_definition_token1] = ACTIONS(409),
    [aux_sym_filter_definition_token1] = ACTIONS(409),
    [aux_sym_class_definition_token1] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(409),
    [aux_sym_enum_definition_token1] = ACTIONS(409),
    [aux_sym_if_statement_token1] = ACTIONS(409),
    [aux_sym_while_statement_token1] = ACTIONS(409),
    [aux_sym_do_while_statement_token1] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(409),
    [anon_sym_AT_LPAREN] = ACTIONS(409),
    [anon_sym_AT_LBRACE] = ACTIONS(409),
    [sym_simple_variable] = ACTIONS(409),
    [sym__braced_variable] = ACTIONS(409),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_CARET] = ACTIONS(409),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym_number_expr] = ACTIONS(409),
    [aux_sym_single_quote_string_token1] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [sym_bareword_string] = ACTIONS(409),
    [sym_comment] = ACTIONS(49),
  },
  [86] = {
    [aux_sym_function_definition_token1] = ACTIONS(411),
    [aux_sym_filter_definition_token1] = ACTIONS(411),
    [aux_sym_class_definition_token1] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [aux_sym_enum_definition_token1] = ACTIONS(411),
    [aux_sym_if_statement_token1] = ACTIONS(411),
    [aux_sym_while_statement_token1] = ACTIONS(411),
    [aux_sym_do_while_statement_token1] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(411),
    [anon_sym_AT_LPAREN] = ACTIONS(411),
    [anon_sym_AT_LBRACE] = ACTIONS(411),
    [sym_simple_variable] = ACTIONS(411),
    [sym__braced_variable] = ACTIONS(411),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(411),
    [anon_sym_DOLLAR_CARET] = ACTIONS(411),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_number_expr] = ACTIONS(411),
    [aux_sym_single_quote_string_token1] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [sym_bareword_string] = ACTIONS(411),
    [sym_comment] = ACTIONS(49),
  },
  [87] = {
    [aux_sym_function_definition_token1] = ACTIONS(413),
    [aux_sym_filter_definition_token1] = ACTIONS(413),
    [aux_sym_class_definition_token1] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(413),
    [aux_sym_enum_definition_token1] = ACTIONS(413),
    [aux_sym_if_statement_token1] = ACTIONS(413),
    [aux_sym_while_statement_token1] = ACTIONS(413),
    [aux_sym_do_while_statement_token1] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(413),
    [anon_sym_AT_LPAREN] = ACTIONS(413),
    [anon_sym_AT_LBRACE] = ACTIONS(413),
    [sym_simple_variable] = ACTIONS(413),
    [sym__braced_variable] = ACTIONS(413),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(413),
    [anon_sym_DOLLAR_CARET] = ACTIONS(413),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_number_expr] = ACTIONS(413),
    [aux_sym_single_quote_string_token1] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [sym_bareword_string] = ACTIONS(413),
    [sym_comment] = ACTIONS(49),
  },
  [88] = {
    [aux_sym_function_definition_token1] = ACTIONS(409),
    [aux_sym_filter_definition_token1] = ACTIONS(409),
    [aux_sym_class_definition_token1] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(409),
    [aux_sym_enum_definition_token1] = ACTIONS(409),
    [aux_sym_if_statement_token1] = ACTIONS(409),
    [aux_sym_while_statement_token1] = ACTIONS(409),
    [aux_sym_do_while_statement_token1] = ACTIONS(409),
    [anon_sym_AMP] = ACTIONS(409),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(409),
    [anon_sym_AT_LPAREN] = ACTIONS(409),
    [anon_sym_AT_LBRACE] = ACTIONS(409),
    [sym_simple_variable] = ACTIONS(409),
    [sym__braced_variable] = ACTIONS(409),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_CARET] = ACTIONS(409),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym_number_expr] = ACTIONS(409),
    [aux_sym_single_quote_string_token1] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [sym_bareword_string] = ACTIONS(409),
    [sym_comment] = ACTIONS(49),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [aux_sym_function_definition_token1] = ACTIONS(413),
    [aux_sym_filter_definition_token1] = ACTIONS(413),
    [aux_sym_class_definition_token1] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(413),
    [aux_sym_enum_definition_token1] = ACTIONS(413),
    [aux_sym_if_statement_token1] = ACTIONS(413),
    [aux_sym_while_statement_token1] = ACTIONS(413),
    [aux_sym_do_while_statement_token1] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(413),
    [anon_sym_AT_LPAREN] = ACTIONS(413),
    [anon_sym_AT_LBRACE] = ACTIONS(413),
    [sym_simple_variable] = ACTIONS(413),
    [sym__braced_variable] = ACTIONS(413),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(413),
    [anon_sym_DOLLAR_CARET] = ACTIONS(413),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_number_expr] = ACTIONS(413),
    [aux_sym_single_quote_string_token1] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [sym_bareword_string] = ACTIONS(413),
    [sym_comment] = ACTIONS(49),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [aux_sym_binary_operator_token1] = ACTIONS(417),
    [aux_sym_binary_operator_token2] = ACTIONS(417),
    [aux_sym_binary_operator_token3] = ACTIONS(417),
    [aux_sym_binary_operator_token4] = ACTIONS(417),
    [aux_sym_binary_operator_token5] = ACTIONS(417),
    [aux_sym_binary_operator_token6] = ACTIONS(417),
    [aux_sym_binary_operator_token7] = ACTIONS(417),
    [aux_sym_binary_operator_token8] = ACTIONS(417),
    [aux_sym_binary_operator_token9] = ACTIONS(417),
    [aux_sym_binary_operator_token10] = ACTIONS(417),
    [aux_sym_binary_operator_token11] = ACTIONS(417),
    [aux_sym_binary_operator_token12] = ACTIONS(417),
    [aux_sym_binary_operator_token13] = ACTIONS(417),
    [aux_sym_binary_operator_token14] = ACTIONS(417),
    [aux_sym_binary_operator_token15] = ACTIONS(417),
    [aux_sym_binary_operator_token16] = ACTIONS(417),
    [aux_sym_binary_operator_token17] = ACTIONS(417),
    [aux_sym_binary_operator_token18] = ACTIONS(419),
    [aux_sym_binary_operator_token19] = ACTIONS(417),
    [aux_sym_binary_operator_token20] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(417),
  },
  [91] = {
    [sym_binary_operator] = STATE(69),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_EQ] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [aux_sym_binary_operator_token1] = ACTIONS(423),
    [aux_sym_binary_operator_token2] = ACTIONS(423),
    [aux_sym_binary_operator_token3] = ACTIONS(423),
    [aux_sym_binary_operator_token4] = ACTIONS(423),
    [aux_sym_binary_operator_token5] = ACTIONS(423),
    [aux_sym_binary_operator_token6] = ACTIONS(423),
    [aux_sym_binary_operator_token7] = ACTIONS(423),
    [aux_sym_binary_operator_token8] = ACTIONS(423),
    [aux_sym_binary_operator_token9] = ACTIONS(423),
    [aux_sym_binary_operator_token10] = ACTIONS(423),
    [aux_sym_binary_operator_token11] = ACTIONS(423),
    [aux_sym_binary_operator_token12] = ACTIONS(423),
    [aux_sym_binary_operator_token13] = ACTIONS(423),
    [aux_sym_binary_operator_token14] = ACTIONS(423),
    [aux_sym_binary_operator_token15] = ACTIONS(423),
    [aux_sym_binary_operator_token16] = ACTIONS(423),
    [aux_sym_binary_operator_token17] = ACTIONS(423),
    [aux_sym_binary_operator_token18] = ACTIONS(425),
    [aux_sym_binary_operator_token19] = ACTIONS(423),
    [aux_sym_binary_operator_token20] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(421),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_function_definition_token1] = ACTIONS(411),
    [aux_sym_filter_definition_token1] = ACTIONS(411),
    [aux_sym_class_definition_token1] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [aux_sym_enum_definition_token1] = ACTIONS(411),
    [aux_sym_if_statement_token1] = ACTIONS(411),
    [aux_sym_while_statement_token1] = ACTIONS(411),
    [aux_sym_do_while_statement_token1] = ACTIONS(411),
    [anon_sym_AMP] = ACTIONS(411),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(411),
    [anon_sym_AT_LPAREN] = ACTIONS(411),
    [anon_sym_AT_LBRACE] = ACTIONS(411),
    [sym_simple_variable] = ACTIONS(411),
    [sym__braced_variable] = ACTIONS(411),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(411),
    [anon_sym_DOLLAR_CARET] = ACTIONS(411),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_number_expr] = ACTIONS(411),
    [aux_sym_single_quote_string_token1] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [sym_bareword_string] = ACTIONS(411),
    [sym_comment] = ACTIONS(49),
  },
  [93] = {
    [sym_binary_operator] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_EQ] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [aux_sym_binary_operator_token1] = ACTIONS(423),
    [aux_sym_binary_operator_token2] = ACTIONS(423),
    [aux_sym_binary_operator_token3] = ACTIONS(423),
    [aux_sym_binary_operator_token4] = ACTIONS(423),
    [aux_sym_binary_operator_token5] = ACTIONS(423),
    [aux_sym_binary_operator_token6] = ACTIONS(423),
    [aux_sym_binary_operator_token7] = ACTIONS(423),
    [aux_sym_binary_operator_token8] = ACTIONS(423),
    [aux_sym_binary_operator_token9] = ACTIONS(423),
    [aux_sym_binary_operator_token10] = ACTIONS(423),
    [aux_sym_binary_operator_token11] = ACTIONS(423),
    [aux_sym_binary_operator_token12] = ACTIONS(423),
    [aux_sym_binary_operator_token13] = ACTIONS(423),
    [aux_sym_binary_operator_token14] = ACTIONS(423),
    [aux_sym_binary_operator_token15] = ACTIONS(423),
    [aux_sym_binary_operator_token16] = ACTIONS(423),
    [aux_sym_binary_operator_token17] = ACTIONS(423),
    [aux_sym_binary_operator_token18] = ACTIONS(425),
    [aux_sym_binary_operator_token19] = ACTIONS(423),
    [aux_sym_binary_operator_token20] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
  },
  [94] = {
    [aux_sym_function_definition_token1] = ACTIONS(129),
    [aux_sym_filter_definition_token1] = ACTIONS(129),
    [aux_sym_class_definition_token1] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [aux_sym_enum_definition_token1] = ACTIONS(129),
    [aux_sym_if_statement_token1] = ACTIONS(129),
    [aux_sym_while_statement_token1] = ACTIONS(129),
    [aux_sym_do_while_statement_token1] = ACTIONS(129),
    [anon_sym_AMP] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(129),
    [anon_sym_AT_LPAREN] = ACTIONS(129),
    [anon_sym_AT_LBRACE] = ACTIONS(129),
    [sym_simple_variable] = ACTIONS(129),
    [sym__braced_variable] = ACTIONS(129),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_CARET] = ACTIONS(129),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_number_expr] = ACTIONS(129),
    [aux_sym_single_quote_string_token1] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_bareword_string] = ACTIONS(129),
    [sym_comment] = ACTIONS(49),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [aux_sym_binary_operator_token1] = ACTIONS(417),
    [aux_sym_binary_operator_token2] = ACTIONS(417),
    [aux_sym_binary_operator_token3] = ACTIONS(417),
    [aux_sym_binary_operator_token4] = ACTIONS(417),
    [aux_sym_binary_operator_token5] = ACTIONS(417),
    [aux_sym_binary_operator_token6] = ACTIONS(417),
    [aux_sym_binary_operator_token7] = ACTIONS(417),
    [aux_sym_binary_operator_token8] = ACTIONS(417),
    [aux_sym_binary_operator_token9] = ACTIONS(417),
    [aux_sym_binary_operator_token10] = ACTIONS(417),
    [aux_sym_binary_operator_token11] = ACTIONS(417),
    [aux_sym_binary_operator_token12] = ACTIONS(417),
    [aux_sym_binary_operator_token13] = ACTIONS(417),
    [aux_sym_binary_operator_token14] = ACTIONS(417),
    [aux_sym_binary_operator_token15] = ACTIONS(417),
    [aux_sym_binary_operator_token16] = ACTIONS(417),
    [aux_sym_binary_operator_token17] = ACTIONS(417),
    [aux_sym_binary_operator_token18] = ACTIONS(419),
    [aux_sym_binary_operator_token19] = ACTIONS(417),
    [aux_sym_binary_operator_token20] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [sym_command_parameter] = ACTIONS(429),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(429),
    [anon_sym_AT_LBRACE] = ACTIONS(429),
    [sym_simple_variable] = ACTIONS(429),
    [sym_splatted_variable] = ACTIONS(429),
    [sym__braced_variable] = ACTIONS(429),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(429),
    [anon_sym_DOLLAR_CARET] = ACTIONS(429),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(429),
    [sym_number_expr] = ACTIONS(429),
    [aux_sym_single_quote_string_token1] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [sym_bareword_string] = ACTIONS(429),
    [sym_comment] = ACTIONS(49),
  },
  [97] = {
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(431),
    [sym_command_parameter] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_splatted_variable] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [aux_sym_single_quote_string_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [sym_comment] = ACTIONS(49),
  },
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [sym_command_parameter] = ACTIONS(433),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(433),
    [anon_sym_AT_LBRACE] = ACTIONS(433),
    [sym_simple_variable] = ACTIONS(433),
    [sym_splatted_variable] = ACTIONS(433),
    [sym__braced_variable] = ACTIONS(433),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(433),
    [anon_sym_DOLLAR_CARET] = ACTIONS(433),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(433),
    [sym_number_expr] = ACTIONS(433),
    [aux_sym_single_quote_string_token1] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [sym_bareword_string] = ACTIONS(433),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(435),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [sym_command_parameter] = ACTIONS(437),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(437),
    [anon_sym_AT_LBRACE] = ACTIONS(437),
    [sym_simple_variable] = ACTIONS(437),
    [sym_splatted_variable] = ACTIONS(437),
    [sym__braced_variable] = ACTIONS(437),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(437),
    [anon_sym_DOLLAR_CARET] = ACTIONS(437),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(437),
    [sym_number_expr] = ACTIONS(437),
    [aux_sym_single_quote_string_token1] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [sym_bareword_string] = ACTIONS(437),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(439),
  },
  [100] = {
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [sym_command_parameter] = ACTIONS(441),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(441),
    [anon_sym_AT_LBRACE] = ACTIONS(441),
    [sym_simple_variable] = ACTIONS(441),
    [sym_splatted_variable] = ACTIONS(441),
    [sym__braced_variable] = ACTIONS(441),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(441),
    [anon_sym_DOLLAR_CARET] = ACTIONS(441),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(441),
    [sym_number_expr] = ACTIONS(441),
    [aux_sym_single_quote_string_token1] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym_bareword_string] = ACTIONS(441),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(443),
  },
  [101] = {
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [sym_command_parameter] = ACTIONS(445),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(445),
    [anon_sym_AT_LBRACE] = ACTIONS(445),
    [sym_simple_variable] = ACTIONS(445),
    [sym_splatted_variable] = ACTIONS(445),
    [sym__braced_variable] = ACTIONS(445),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(445),
    [anon_sym_DOLLAR_CARET] = ACTIONS(445),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(445),
    [sym_number_expr] = ACTIONS(445),
    [aux_sym_single_quote_string_token1] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_bareword_string] = ACTIONS(445),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(447),
  },
  [102] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [sym_command_parameter] = ACTIONS(449),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(449),
    [anon_sym_AT_LBRACE] = ACTIONS(449),
    [sym_simple_variable] = ACTIONS(449),
    [sym_splatted_variable] = ACTIONS(449),
    [sym__braced_variable] = ACTIONS(449),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(449),
    [anon_sym_DOLLAR_CARET] = ACTIONS(449),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(449),
    [sym_number_expr] = ACTIONS(449),
    [aux_sym_single_quote_string_token1] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_bareword_string] = ACTIONS(449),
    [sym_comment] = ACTIONS(49),
  },
  [103] = {
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(451),
    [sym_command_parameter] = ACTIONS(451),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(451),
    [anon_sym_AT_LBRACE] = ACTIONS(451),
    [sym_simple_variable] = ACTIONS(451),
    [sym_splatted_variable] = ACTIONS(451),
    [sym__braced_variable] = ACTIONS(451),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(451),
    [anon_sym_DOLLAR_CARET] = ACTIONS(451),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(451),
    [sym_number_expr] = ACTIONS(451),
    [aux_sym_single_quote_string_token1] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym_bareword_string] = ACTIONS(451),
    [sym_comment] = ACTIONS(49),
  },
  [104] = {
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [sym_command_parameter] = ACTIONS(429),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(429),
    [anon_sym_AT_LBRACE] = ACTIONS(429),
    [sym_simple_variable] = ACTIONS(429),
    [sym_splatted_variable] = ACTIONS(429),
    [sym__braced_variable] = ACTIONS(429),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(429),
    [anon_sym_DOLLAR_CARET] = ACTIONS(429),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(429),
    [sym_number_expr] = ACTIONS(429),
    [aux_sym_single_quote_string_token1] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [sym_bareword_string] = ACTIONS(429),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(453),
  },
  [105] = {
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [sym_command_parameter] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_AT_LBRACE] = ACTIONS(455),
    [sym_simple_variable] = ACTIONS(455),
    [sym_splatted_variable] = ACTIONS(455),
    [sym__braced_variable] = ACTIONS(455),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_CARET] = ACTIONS(455),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(455),
    [sym_number_expr] = ACTIONS(455),
    [aux_sym_single_quote_string_token1] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_bareword_string] = ACTIONS(455),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(457),
  },
  [106] = {
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [sym_command_parameter] = ACTIONS(433),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(433),
    [anon_sym_AT_LBRACE] = ACTIONS(433),
    [sym_simple_variable] = ACTIONS(433),
    [sym_splatted_variable] = ACTIONS(433),
    [sym__braced_variable] = ACTIONS(433),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(433),
    [anon_sym_DOLLAR_CARET] = ACTIONS(433),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(433),
    [sym_number_expr] = ACTIONS(433),
    [aux_sym_single_quote_string_token1] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [sym_bareword_string] = ACTIONS(433),
    [sym_comment] = ACTIONS(49),
  },
  [107] = {
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [sym_command_parameter] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_AT_LBRACE] = ACTIONS(419),
    [sym_simple_variable] = ACTIONS(419),
    [sym_splatted_variable] = ACTIONS(419),
    [sym__braced_variable] = ACTIONS(419),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_CARET] = ACTIONS(419),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(419),
    [sym_number_expr] = ACTIONS(419),
    [aux_sym_single_quote_string_token1] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_bareword_string] = ACTIONS(419),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(417),
  },
  [108] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(459),
    [sym_simple_variable] = ACTIONS(461),
    [sym__braced_variable] = ACTIONS(461),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(461),
    [anon_sym_DOLLAR_CARET] = ACTIONS(461),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(461),
    [aux_sym_single_quote_string_token1] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_bareword_string] = ACTIONS(470),
    [sym_comment] = ACTIONS(49),
  },
  [109] = {
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [sym_command_parameter] = ACTIONS(437),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(437),
    [anon_sym_AT_LBRACE] = ACTIONS(437),
    [sym_simple_variable] = ACTIONS(437),
    [sym_splatted_variable] = ACTIONS(437),
    [sym__braced_variable] = ACTIONS(437),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(437),
    [anon_sym_DOLLAR_CARET] = ACTIONS(437),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(437),
    [sym_number_expr] = ACTIONS(437),
    [aux_sym_single_quote_string_token1] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [sym_bareword_string] = ACTIONS(437),
    [sym_comment] = ACTIONS(49),
  },
  [110] = {
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [sym_command_parameter] = ACTIONS(441),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(441),
    [anon_sym_AT_LBRACE] = ACTIONS(441),
    [sym_simple_variable] = ACTIONS(441),
    [sym_splatted_variable] = ACTIONS(441),
    [sym__braced_variable] = ACTIONS(441),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(441),
    [anon_sym_DOLLAR_CARET] = ACTIONS(441),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(441),
    [sym_number_expr] = ACTIONS(441),
    [aux_sym_single_quote_string_token1] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym_bareword_string] = ACTIONS(441),
    [sym_comment] = ACTIONS(49),
  },
  [111] = {
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [sym_command_parameter] = ACTIONS(445),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(445),
    [anon_sym_AT_LBRACE] = ACTIONS(445),
    [sym_simple_variable] = ACTIONS(445),
    [sym_splatted_variable] = ACTIONS(445),
    [sym__braced_variable] = ACTIONS(445),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(445),
    [anon_sym_DOLLAR_CARET] = ACTIONS(445),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(445),
    [sym_number_expr] = ACTIONS(445),
    [aux_sym_single_quote_string_token1] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_bareword_string] = ACTIONS(445),
    [sym_comment] = ACTIONS(49),
  },
  [112] = {
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [sym_command_parameter] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_AT_LBRACE] = ACTIONS(455),
    [sym_simple_variable] = ACTIONS(455),
    [sym_splatted_variable] = ACTIONS(455),
    [sym__braced_variable] = ACTIONS(455),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_CARET] = ACTIONS(455),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(455),
    [sym_number_expr] = ACTIONS(455),
    [aux_sym_single_quote_string_token1] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_bareword_string] = ACTIONS(455),
    [sym_comment] = ACTIONS(49),
  },
  [113] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(125),
    [anon_sym_RBRACE] = ACTIONS(473),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [114] = {
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(477),
    [sym_command_parameter] = ACTIONS(477),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(477),
    [anon_sym_AT_LBRACE] = ACTIONS(477),
    [sym_simple_variable] = ACTIONS(477),
    [sym_splatted_variable] = ACTIONS(477),
    [sym__braced_variable] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [sym_number_expr] = ACTIONS(477),
    [aux_sym_single_quote_string_token1] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym_bareword_string] = ACTIONS(477),
    [sym_comment] = ACTIONS(49),
  },
  [115] = {
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(479),
    [sym_command_parameter] = ACTIONS(479),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(479),
    [anon_sym_AT_LBRACE] = ACTIONS(479),
    [sym_simple_variable] = ACTIONS(479),
    [sym_splatted_variable] = ACTIONS(479),
    [sym__braced_variable] = ACTIONS(479),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_CARET] = ACTIONS(479),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(479),
    [sym_number_expr] = ACTIONS(479),
    [aux_sym_single_quote_string_token1] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [sym_bareword_string] = ACTIONS(479),
    [sym_comment] = ACTIONS(49),
  },
  [116] = {
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [sym_command_parameter] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_AT_LBRACE] = ACTIONS(419),
    [sym_simple_variable] = ACTIONS(419),
    [sym_splatted_variable] = ACTIONS(419),
    [sym__braced_variable] = ACTIONS(419),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_CARET] = ACTIONS(419),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(419),
    [sym_number_expr] = ACTIONS(419),
    [aux_sym_single_quote_string_token1] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_bareword_string] = ACTIONS(419),
    [sym_comment] = ACTIONS(49),
  },
  [117] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(481),
    [sym_command_parameter] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_AT_LBRACE] = ACTIONS(481),
    [sym_simple_variable] = ACTIONS(481),
    [sym_splatted_variable] = ACTIONS(481),
    [sym__braced_variable] = ACTIONS(481),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_CARET] = ACTIONS(481),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(481),
    [sym_number_expr] = ACTIONS(481),
    [aux_sym_single_quote_string_token1] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_bareword_string] = ACTIONS(481),
    [sym_comment] = ACTIONS(49),
  },
  [118] = {
    [anon_sym_LBRACE] = ACTIONS(431),
    [anon_sym_LPAREN] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(431),
    [sym_command_parameter] = ACTIONS(431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [anon_sym_AT_LBRACE] = ACTIONS(431),
    [sym_simple_variable] = ACTIONS(431),
    [sym_splatted_variable] = ACTIONS(431),
    [sym__braced_variable] = ACTIONS(431),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(431),
    [anon_sym_DOLLAR_CARET] = ACTIONS(431),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(431),
    [sym_number_expr] = ACTIONS(431),
    [aux_sym_single_quote_string_token1] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym_bareword_string] = ACTIONS(431),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(483),
  },
  [119] = {
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(477),
    [sym_command_parameter] = ACTIONS(477),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(477),
    [anon_sym_AT_LBRACE] = ACTIONS(477),
    [sym_simple_variable] = ACTIONS(477),
    [sym_splatted_variable] = ACTIONS(477),
    [sym__braced_variable] = ACTIONS(477),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_CARET] = ACTIONS(477),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(477),
    [sym_number_expr] = ACTIONS(477),
    [aux_sym_single_quote_string_token1] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym_bareword_string] = ACTIONS(477),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(485),
  },
  [120] = {
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(479),
    [sym_command_parameter] = ACTIONS(479),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(479),
    [anon_sym_AT_LBRACE] = ACTIONS(479),
    [sym_simple_variable] = ACTIONS(479),
    [sym_splatted_variable] = ACTIONS(479),
    [sym__braced_variable] = ACTIONS(479),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_CARET] = ACTIONS(479),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(479),
    [sym_number_expr] = ACTIONS(479),
    [aux_sym_single_quote_string_token1] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [sym_bareword_string] = ACTIONS(479),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(487),
  },
  [121] = {
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(489),
    [sym_command_parameter] = ACTIONS(489),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [anon_sym_AT_LBRACE] = ACTIONS(489),
    [sym_simple_variable] = ACTIONS(489),
    [sym_splatted_variable] = ACTIONS(489),
    [sym__braced_variable] = ACTIONS(489),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(489),
    [anon_sym_DOLLAR_CARET] = ACTIONS(489),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(489),
    [sym_number_expr] = ACTIONS(489),
    [aux_sym_single_quote_string_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_bareword_string] = ACTIONS(489),
    [sym_comment] = ACTIONS(49),
  },
  [122] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(491),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [123] = {
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [sym_command_parameter] = ACTIONS(449),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(449),
    [anon_sym_AT_LBRACE] = ACTIONS(449),
    [sym_simple_variable] = ACTIONS(449),
    [sym_splatted_variable] = ACTIONS(449),
    [sym__braced_variable] = ACTIONS(449),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(449),
    [anon_sym_DOLLAR_CARET] = ACTIONS(449),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(449),
    [sym_number_expr] = ACTIONS(449),
    [aux_sym_single_quote_string_token1] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_bareword_string] = ACTIONS(449),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(493),
  },
  [124] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(126),
    [anon_sym_RBRACE] = ACTIONS(495),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [125] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(497),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [126] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [127] = {
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(451),
    [sym_command_parameter] = ACTIONS(451),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(451),
    [anon_sym_AT_LBRACE] = ACTIONS(451),
    [sym_simple_variable] = ACTIONS(451),
    [sym_splatted_variable] = ACTIONS(451),
    [sym__braced_variable] = ACTIONS(451),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(451),
    [anon_sym_DOLLAR_CARET] = ACTIONS(451),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(451),
    [sym_number_expr] = ACTIONS(451),
    [aux_sym_single_quote_string_token1] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym_bareword_string] = ACTIONS(451),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(501),
  },
  [128] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(129),
    [anon_sym_RBRACE] = ACTIONS(503),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [129] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(505),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [130] = {
    [sym_hashtable_entry] = STATE(360),
    [sym_property_name] = STATE(355),
    [sym_variable] = STATE(444),
    [sym__special_variable] = STATE(95),
    [sym__string_expr] = STATE(444),
    [sym_single_quote_string] = STATE(444),
    [sym_double_quote_string] = STATE(444),
    [aux_sym_hashtable_expression_repeat1] = STATE(122),
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym_simple_variable] = ACTIONS(217),
    [sym__braced_variable] = ACTIONS(217),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_CARET] = ACTIONS(217),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(217),
    [aux_sym_single_quote_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym_bareword_string] = ACTIONS(475),
    [sym_comment] = ACTIONS(49),
  },
  [131] = {
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(489),
    [sym_command_parameter] = ACTIONS(489),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [anon_sym_AT_LBRACE] = ACTIONS(489),
    [sym_simple_variable] = ACTIONS(489),
    [sym_splatted_variable] = ACTIONS(489),
    [sym__braced_variable] = ACTIONS(489),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(489),
    [anon_sym_DOLLAR_CARET] = ACTIONS(489),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(489),
    [sym_number_expr] = ACTIONS(489),
    [aux_sym_single_quote_string_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_bareword_string] = ACTIONS(489),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(509),
  },
  [132] = {
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(481),
    [sym_command_parameter] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_AT_LBRACE] = ACTIONS(481),
    [sym_simple_variable] = ACTIONS(481),
    [sym_splatted_variable] = ACTIONS(481),
    [sym__braced_variable] = ACTIONS(481),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_CARET] = ACTIONS(481),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(481),
    [sym_number_expr] = ACTIONS(481),
    [aux_sym_single_quote_string_token1] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_bareword_string] = ACTIONS(481),
    [sym_comment] = ACTIONS(49),
    [sym__statement_terminator] = ACTIONS(511),
  },
  [133] = {
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_AT_LPAREN] = ACTIONS(513),
    [anon_sym_AT_LBRACE] = ACTIONS(513),
    [sym_simple_variable] = ACTIONS(513),
    [sym__braced_variable] = ACTIONS(513),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(513),
    [anon_sym_DOLLAR_CARET] = ACTIONS(513),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [sym_number_expr] = ACTIONS(513),
    [aux_sym_single_quote_string_token1] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [sym_property_name] = STATE(78),
    [sym_variable] = STATE(103),
    [sym__special_variable] = STATE(116),
    [sym__string_expr] = STATE(103),
    [sym_single_quote_string] = STATE(103),
    [sym_double_quote_string] = STATE(103),
    [sym_simple_variable] = ACTIONS(327),
    [sym__braced_variable] = ACTIONS(327),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_CARET] = ACTIONS(327),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(327),
    [aux_sym_single_quote_string_token1] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [sym_bareword_string] = ACTIONS(515),
    [sym_comment] = ACTIONS(49),
  },
  [135] = {
    [sym_property_name] = STATE(74),
    [sym_variable] = STATE(127),
    [sym__special_variable] = STATE(107),
    [sym__string_expr] = STATE(127),
    [sym_single_quote_string] = STATE(127),
    [sym_double_quote_string] = STATE(127),
    [sym_simple_variable] = ACTIONS(305),
    [sym__braced_variable] = ACTIONS(305),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_CARET] = ACTIONS(305),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(305),
    [aux_sym_single_quote_string_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_bareword_string] = ACTIONS(517),
    [sym_comment] = ACTIONS(49),
  },
  [136] = {
    [sym_variable] = STATE(197),
    [sym__special_variable] = STATE(90),
    [sym_type_expr] = STATE(154),
    [sym_non_type_attribute] = STATE(154),
    [sym__attribute] = STATE(154),
    [aux_sym_param_block_variable_repeat1] = STATE(154),
    [sym_simple_variable] = ACTIONS(243),
    [sym__braced_variable] = ACTIONS(243),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_CARET] = ACTIONS(243),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym_variable] = STATE(251),
    [sym__special_variable] = STATE(95),
    [sym_type_expr] = STATE(154),
    [sym_non_type_attribute] = STATE(154),
    [sym__attribute] = STATE(154),
    [aux_sym_param_block_variable_repeat1] = STATE(154),
    [sym_simple_variable] = ACTIONS(275),
    [sym__braced_variable] = ACTIONS(275),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(275),
    [anon_sym_DOLLAR_CARET] = ACTIONS(275),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [sym_variable] = STATE(138),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(138),
    [sym_simple_variable] = ACTIONS(519),
    [sym__braced_variable] = ACTIONS(519),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(519),
    [anon_sym_DOLLAR_CARET] = ACTIONS(519),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [aux_sym_double_quote_string_token1] = ACTIONS(524),
    [anon_sym_DOLLAR] = ACTIONS(522),
    [sym_comment] = ACTIONS(49),
  },
  [139] = {
    [sym_variable] = STATE(144),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(144),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [aux_sym_double_quote_string_token1] = ACTIONS(531),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [sym_comment] = ACTIONS(49),
  },
  [140] = {
    [sym_variable] = STATE(138),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(138),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [aux_sym_double_quote_string_token1] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(539),
    [sym_comment] = ACTIONS(49),
  },
  [141] = {
    [sym_variable] = STATE(140),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(140),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [aux_sym_double_quote_string_token1] = ACTIONS(543),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [sym_comment] = ACTIONS(49),
  },
  [142] = {
    [sym_variable] = STATE(138),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(138),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [aux_sym_double_quote_string_token1] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [sym_comment] = ACTIONS(49),
  },
  [143] = {
    [sym_variable] = STATE(142),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(142),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [aux_sym_double_quote_string_token1] = ACTIONS(553),
    [anon_sym_DOLLAR] = ACTIONS(555),
    [sym_comment] = ACTIONS(49),
  },
  [144] = {
    [sym_variable] = STATE(138),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(138),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [aux_sym_double_quote_string_token1] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(559),
    [sym_comment] = ACTIONS(49),
  },
  [145] = {
    [sym_variable] = STATE(148),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(148),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [aux_sym_double_quote_string_token1] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [sym_comment] = ACTIONS(49),
  },
  [146] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [aux_sym_flat_array_expression_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(567),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [147] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [aux_sym_flat_array_expression_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [148] = {
    [sym_variable] = STATE(138),
    [sym__special_variable] = STATE(168),
    [aux_sym_double_quote_string_repeat1] = STATE(138),
    [sym_simple_variable] = ACTIONS(527),
    [sym__braced_variable] = ACTIONS(527),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_CARET] = ACTIONS(527),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [aux_sym_double_quote_string_token1] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(577),
    [sym_comment] = ACTIONS(49),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [sym_simple_variable] = ACTIONS(579),
    [sym__braced_variable] = ACTIONS(579),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_CARET] = ACTIONS(579),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(579),
  },
  [150] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(581),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(581),
  },
  [151] = {
    [aux_sym_array_expression_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(581),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(583),
  },
  [153] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(585),
  },
  [154] = {
    [sym_type_expr] = STATE(154),
    [sym_non_type_attribute] = STATE(154),
    [sym__attribute] = STATE(154),
    [aux_sym_param_block_variable_repeat1] = STATE(154),
    [sym_simple_variable] = ACTIONS(587),
    [sym__braced_variable] = ACTIONS(587),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(587),
    [anon_sym_DOLLAR_CARET] = ACTIONS(587),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(589),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(592),
  },
  [156] = {
    [aux_sym_array_expression_repeat1] = STATE(304),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(594),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [anon_sym_RBRACE] = ACTIONS(459),
    [sym_simple_variable] = ACTIONS(459),
    [sym__braced_variable] = ACTIONS(459),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(459),
    [anon_sym_DOLLAR_CARET] = ACTIONS(459),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(459),
    [aux_sym_single_quote_string_token1] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [sym_bareword_string] = ACTIONS(459),
    [sym_comment] = ACTIONS(49),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
  },
  [159] = {
    [aux_sym_array_expression_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
  },
  [160] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_simple_variable] = ACTIONS(569),
    [sym__braced_variable] = ACTIONS(569),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(569),
    [anon_sym_DOLLAR_CARET] = ACTIONS(569),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(596),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [sym_simple_variable] = ACTIONS(579),
    [sym__braced_variable] = ACTIONS(579),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_CARET] = ACTIONS(579),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_param_block_variable] = STATE(293),
    [sym_type_expr] = STATE(190),
    [sym_non_type_attribute] = STATE(190),
    [sym__attribute] = STATE(190),
    [aux_sym_param_block_variable_repeat1] = STATE(190),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_simple_variable] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [163] = {
    [sym_param_block_variable] = STATE(300),
    [sym_type_expr] = STATE(190),
    [sym_non_type_attribute] = STATE(190),
    [sym__attribute] = STATE(190),
    [aux_sym_param_block_variable_repeat1] = STATE(190),
    [anon_sym_RPAREN] = ACTIONS(602),
    [sym_simple_variable] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_simple_variable] = ACTIONS(606),
    [anon_sym_LBRACK] = ACTIONS(609),
    [sym_bareword_string] = ACTIONS(612),
    [sym_comment] = ACTIONS(49),
  },
  [165] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(615),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [166] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(177),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(177),
    [anon_sym_RBRACE] = ACTIONS(615),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [167] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(173),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(173),
    [anon_sym_RBRACE] = ACTIONS(623),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [168] = {
    [sym_simple_variable] = ACTIONS(419),
    [sym__braced_variable] = ACTIONS(419),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_CARET] = ACTIONS(419),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [aux_sym_double_quote_string_token1] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [sym_comment] = ACTIONS(49),
  },
  [169] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(170),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(170),
    [anon_sym_RBRACE] = ACTIONS(625),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [170] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [171] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(172),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(172),
    [anon_sym_RBRACE] = ACTIONS(627),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [172] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(629),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [173] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [174] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(175),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(175),
    [anon_sym_RBRACE] = ACTIONS(629),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [175] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(633),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [176] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(165),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(165),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [177] = {
    [sym_class_property] = STATE(354),
    [sym_class_method] = STATE(164),
    [sym_type_expr] = STATE(329),
    [aux_sym_class_definition_repeat2] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_simple_variable] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_bareword_string] = ACTIONS(621),
    [sym_comment] = ACTIONS(49),
  },
  [178] = {
    [sym_param_block_variable] = STATE(322),
    [sym_type_expr] = STATE(190),
    [sym_non_type_attribute] = STATE(190),
    [sym__attribute] = STATE(190),
    [aux_sym_param_block_variable_repeat1] = STATE(190),
    [sym_simple_variable] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [179] = {
    [sym_elseif_statement] = STATE(185),
    [sym_else_statement] = STATE(378),
    [aux_sym_if_statement_repeat1] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(637),
    [aux_sym_elseif_statement_token1] = ACTIONS(639),
    [aux_sym_else_statement_token1] = ACTIONS(641),
    [sym_comment] = ACTIONS(3),
  },
  [180] = {
    [sym_elseif_statement] = STATE(182),
    [sym_else_statement] = STATE(417),
    [aux_sym_if_statement_repeat1] = STATE(182),
    [aux_sym_elseif_statement_token1] = ACTIONS(643),
    [aux_sym_else_statement_token1] = ACTIONS(645),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(637),
  },
  [181] = {
    [sym_elseif_statement] = STATE(184),
    [sym_else_statement] = STATE(388),
    [aux_sym_if_statement_repeat1] = STATE(184),
    [aux_sym_elseif_statement_token1] = ACTIONS(643),
    [aux_sym_else_statement_token1] = ACTIONS(645),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(647),
  },
  [182] = {
    [sym_elseif_statement] = STATE(199),
    [sym_else_statement] = STATE(388),
    [aux_sym_if_statement_repeat1] = STATE(199),
    [aux_sym_elseif_statement_token1] = ACTIONS(643),
    [aux_sym_else_statement_token1] = ACTIONS(645),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(647),
  },
  [183] = {
    [sym_simple_variable] = ACTIONS(649),
    [sym__braced_variable] = ACTIONS(649),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(649),
    [anon_sym_DOLLAR_CARET] = ACTIONS(649),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(649),
    [anon_sym_LBRACK] = ACTIONS(649),
    [sym_comment] = ACTIONS(3),
  },
  [184] = {
    [sym_elseif_statement] = STATE(199),
    [sym_else_statement] = STATE(364),
    [aux_sym_if_statement_repeat1] = STATE(199),
    [aux_sym_elseif_statement_token1] = ACTIONS(643),
    [aux_sym_else_statement_token1] = ACTIONS(645),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(651),
  },
  [185] = {
    [sym_elseif_statement] = STATE(196),
    [sym_else_statement] = STATE(372),
    [aux_sym_if_statement_repeat1] = STATE(196),
    [anon_sym_RPAREN] = ACTIONS(647),
    [aux_sym_elseif_statement_token1] = ACTIONS(639),
    [aux_sym_else_statement_token1] = ACTIONS(641),
    [sym_comment] = ACTIONS(3),
  },
  [186] = {
    [sym_simple_variable] = ACTIONS(653),
    [sym__braced_variable] = ACTIONS(653),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(653),
    [anon_sym_DOLLAR_CARET] = ACTIONS(653),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(653),
    [sym_comment] = ACTIONS(3),
  },
  [187] = {
    [sym_elseif_statement] = STATE(188),
    [sym_else_statement] = STATE(372),
    [aux_sym_if_statement_repeat1] = STATE(188),
    [anon_sym_RPAREN] = ACTIONS(647),
    [aux_sym_elseif_statement_token1] = ACTIONS(639),
    [aux_sym_else_statement_token1] = ACTIONS(641),
    [sym_comment] = ACTIONS(3),
  },
  [188] = {
    [sym_elseif_statement] = STATE(196),
    [sym_else_statement] = STATE(366),
    [aux_sym_if_statement_repeat1] = STATE(196),
    [anon_sym_RPAREN] = ACTIONS(651),
    [aux_sym_elseif_statement_token1] = ACTIONS(639),
    [aux_sym_else_statement_token1] = ACTIONS(641),
    [sym_comment] = ACTIONS(3),
  },
  [189] = {
    [sym_simple_variable] = ACTIONS(655),
    [sym__braced_variable] = ACTIONS(655),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(655),
    [anon_sym_DOLLAR_CARET] = ACTIONS(655),
    [anon_sym_DOLLAR_QMARK] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(655),
    [sym_comment] = ACTIONS(3),
  },
  [190] = {
    [sym_type_expr] = STATE(154),
    [sym_non_type_attribute] = STATE(154),
    [sym__attribute] = STATE(154),
    [aux_sym_param_block_variable_repeat1] = STATE(154),
    [sym_simple_variable] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [191] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [aux_sym_flat_array_expression_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [192] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [aux_sym_class_definition_token2] = ACTIONS(659),
    [anon_sym_LBRACE] = ACTIONS(659),
    [anon_sym_LF] = ACTIONS(661),
    [sym_comment] = ACTIONS(49),
  },
  [193] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(664),
    [anon_sym_PIPE] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(581),
  },
  [194] = {
    [aux_sym_array_expression_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(666),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(583),
  },
  [195] = {
    [sym_class_parameter] = STATE(269),
    [sym_type_expr] = STATE(347),
    [anon_sym_RPAREN] = ACTIONS(669),
    [sym_simple_variable] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [sym_elseif_statement] = STATE(196),
    [aux_sym_if_statement_repeat1] = STATE(196),
    [anon_sym_RPAREN] = ACTIONS(675),
    [aux_sym_elseif_statement_token1] = ACTIONS(677),
    [aux_sym_else_statement_token1] = ACTIONS(680),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_EQ] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(682),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(682),
  },
  [198] = {
    [aux_sym_array_expression_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_PIPE] = ACTIONS(684),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(684),
  },
  [199] = {
    [sym_elseif_statement] = STATE(199),
    [aux_sym_if_statement_repeat1] = STATE(199),
    [aux_sym_elseif_statement_token1] = ACTIONS(686),
    [aux_sym_else_statement_token1] = ACTIONS(680),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(675),
  },
  [200] = {
    [sym_class_parameter] = STATE(299),
    [sym_type_expr] = STATE(347),
    [anon_sym_RPAREN] = ACTIONS(689),
    [sym_simple_variable] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_comment] = ACTIONS(3),
  },
  [201] = {
    [aux_sym__typename_generic_repeat1] = STATE(303),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(695),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
  },
  [202] = {
    [aux_sym_array_expression_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_EQ] = ACTIONS(699),
    [anon_sym_PIPE] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
  },
  [203] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [aux_sym_flat_array_expression_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(567),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [204] = {
    [aux_sym_array_expression_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_PIPE] = ACTIONS(701),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(701),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(583),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(703),
  },
  [207] = {
    [anon_sym_RBRACE] = ACTIONS(705),
    [sym_simple_variable] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(705),
    [sym_bareword_string] = ACTIONS(705),
    [sym_comment] = ACTIONS(49),
  },
  [208] = {
    [sym_class_parameter] = STATE(326),
    [sym_type_expr] = STATE(347),
    [sym_simple_variable] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_comment] = ACTIONS(3),
  },
  [209] = {
    [sym__newline] = STATE(227),
    [aux_sym_class_definition_repeat1] = STATE(227),
    [aux_sym_class_definition_token2] = ACTIONS(707),
    [anon_sym_LF] = ACTIONS(709),
    [sym_comment] = ACTIONS(49),
  },
  [210] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [aux_sym_class_definition_token2] = ACTIONS(711),
    [anon_sym_LF] = ACTIONS(713),
    [sym_comment] = ACTIONS(49),
  },
  [211] = {
    [sym__newline] = STATE(210),
    [aux_sym_class_definition_repeat1] = STATE(210),
    [aux_sym_class_definition_token2] = ACTIONS(715),
    [anon_sym_LF] = ACTIONS(717),
    [sym_comment] = ACTIONS(49),
  },
  [212] = {
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(439),
  },
  [213] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(581),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(457),
  },
  [215] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(713),
    [sym_comment] = ACTIONS(49),
  },
  [216] = {
    [sym__typename] = STATE(292),
    [sym__typename_array] = STATE(292),
    [sym__typename_generic] = STATE(292),
    [sym__typename_simple] = ACTIONS(721),
    [sym_comment] = ACTIONS(3),
  },
  [217] = {
    [sym__newline] = STATE(215),
    [aux_sym_class_definition_repeat1] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(725),
    [sym_comment] = ACTIONS(49),
  },
  [218] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(713),
    [sym_comment] = ACTIONS(49),
  },
  [219] = {
    [sym__newline] = STATE(218),
    [aux_sym_class_definition_repeat1] = STATE(218),
    [anon_sym_LBRACE] = ACTIONS(727),
    [anon_sym_LF] = ACTIONS(729),
    [sym_comment] = ACTIONS(49),
  },
  [220] = {
    [anon_sym_RBRACE] = ACTIONS(731),
    [sym_simple_variable] = ACTIONS(731),
    [anon_sym_LBRACK] = ACTIONS(731),
    [sym_bareword_string] = ACTIONS(731),
    [sym_comment] = ACTIONS(49),
  },
  [221] = {
    [sym__typename] = STATE(292),
    [sym__typename_array] = STATE(292),
    [sym__typename_generic] = STATE(292),
    [sym__typename_simple] = ACTIONS(733),
    [sym_comment] = ACTIONS(3),
  },
  [222] = {
    [sym__typename] = STATE(261),
    [sym__typename_array] = STATE(261),
    [sym__typename_generic] = STATE(261),
    [sym__typename_simple] = ACTIONS(735),
    [sym_comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(737),
    [sym_simple_variable] = ACTIONS(737),
    [anon_sym_LBRACK] = ACTIONS(737),
    [sym_bareword_string] = ACTIONS(737),
    [sym_comment] = ACTIONS(49),
  },
  [224] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(739),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(739),
    [sym_comment] = ACTIONS(3),
  },
  [225] = {
    [sym__newline] = STATE(241),
    [aux_sym_class_definition_repeat1] = STATE(241),
    [anon_sym_LBRACE] = ACTIONS(743),
    [anon_sym_LF] = ACTIONS(745),
    [sym_comment] = ACTIONS(49),
  },
  [226] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(585),
  },
  [227] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [aux_sym_class_definition_token2] = ACTIONS(747),
    [anon_sym_LF] = ACTIONS(713),
    [sym_comment] = ACTIONS(49),
  },
  [228] = {
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(487),
  },
  [229] = {
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(453),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [anon_sym_PIPE] = ACTIONS(749),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(749),
  },
  [231] = {
    [anon_sym_RBRACE] = ACTIONS(751),
    [sym_simple_variable] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [sym_bareword_string] = ACTIONS(751),
    [sym_comment] = ACTIONS(49),
  },
  [232] = {
    [anon_sym_RBRACE] = ACTIONS(753),
    [sym_simple_variable] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(753),
    [sym_bareword_string] = ACTIONS(753),
    [sym_comment] = ACTIONS(49),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(755),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(447),
  },
  [235] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(485),
  },
  [236] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(713),
    [sym_comment] = ACTIONS(49),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_simple_variable] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [sym_bareword_string] = ACTIONS(604),
    [sym_comment] = ACTIONS(49),
  },
  [238] = {
    [anon_sym_RBRACE] = ACTIONS(759),
    [sym_simple_variable] = ACTIONS(759),
    [anon_sym_LBRACK] = ACTIONS(759),
    [sym_bareword_string] = ACTIONS(759),
    [sym_comment] = ACTIONS(49),
  },
  [239] = {
    [anon_sym_LPAREN] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(763),
    [anon_sym_RBRACK] = ACTIONS(765),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(765),
    [sym_comment] = ACTIONS(3),
  },
  [240] = {
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(443),
  },
  [241] = {
    [sym__newline] = STATE(192),
    [aux_sym_class_definition_repeat1] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(767),
    [anon_sym_LF] = ACTIONS(713),
    [sym_comment] = ACTIONS(49),
  },
  [242] = {
    [sym__newline] = STATE(236),
    [aux_sym_class_definition_repeat1] = STATE(236),
    [anon_sym_LBRACE] = ACTIONS(767),
    [anon_sym_LF] = ACTIONS(769),
    [sym_comment] = ACTIONS(49),
  },
  [243] = {
    [sym__typename] = STATE(268),
    [sym__typename_array] = STATE(268),
    [sym__typename_generic] = STATE(268),
    [sym__typename_simple] = ACTIONS(733),
    [sym_comment] = ACTIONS(3),
  },
  [244] = {
    [aux_sym_array_expression_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(493),
  },
  [247] = {
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_RBRACK] = ACTIONS(771),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(771),
    [sym_comment] = ACTIONS(3),
  },
  [248] = {
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(435),
  },
  [249] = {
    [sym__typename] = STATE(263),
    [sym__typename_array] = STATE(263),
    [sym__typename_generic] = STATE(263),
    [sym__typename_simple] = ACTIONS(775),
    [sym_comment] = ACTIONS(3),
  },
  [250] = {
    [aux_sym_array_expression_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_PIPE] = ACTIONS(701),
    [sym_comment] = ACTIONS(3),
  },
  [251] = {
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_EQ] = ACTIONS(682),
    [anon_sym_PIPE] = ACTIONS(682),
    [sym_comment] = ACTIONS(3),
  },
  [252] = {
    [aux_sym_array_expression_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [sym_comment] = ACTIONS(3),
  },
  [253] = {
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(509),
  },
  [255] = {
    [sym__typename] = STATE(201),
    [sym__typename_array] = STATE(201),
    [sym__typename_generic] = STATE(201),
    [sym__typename_simple] = ACTIONS(780),
    [sym_comment] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
  },
  [257] = {
    [aux_sym_array_expression_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_PIPE] = ACTIONS(684),
    [sym_comment] = ACTIONS(3),
  },
  [258] = {
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_EQ] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(511),
  },
  [260] = {
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(782),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(782),
    [sym_comment] = ACTIONS(3),
  },
  [261] = {
    [anon_sym_COMMA] = ACTIONS(786),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(786),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
  },
  [262] = {
    [aux_sym_elseif_statement_token1] = ACTIONS(788),
    [aux_sym_else_statement_token1] = ACTIONS(790),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(788),
  },
  [263] = {
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(792),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
  },
  [264] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(275),
    [anon_sym_RPAREN] = ACTIONS(794),
    [anon_sym_PIPE] = ACTIONS(796),
    [sym_comment] = ACTIONS(3),
  },
  [265] = {
    [aux_sym_class_method_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(3),
  },
  [266] = {
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
  },
  [267] = {
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [sym_comment] = ACTIONS(3),
  },
  [268] = {
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(802),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
  },
  [269] = {
    [aux_sym_class_method_repeat1] = STATE(297),
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym_comment] = ACTIONS(3),
  },
  [270] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [sym_comment] = ACTIONS(3),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
  },
  [272] = {
    [aux_sym_enum_definition_repeat1] = STATE(272),
    [anon_sym_RBRACE] = ACTIONS(804),
    [sym_bareword_string] = ACTIONS(806),
    [sym_comment] = ACTIONS(49),
  },
  [273] = {
    [aux_sym_elseif_statement_token1] = ACTIONS(809),
    [aux_sym_else_statement_token1] = ACTIONS(811),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(809),
  },
  [274] = {
    [sym_command_expression] = STATE(320),
    [anon_sym_AMP] = ACTIONS(209),
    [sym_bareword_string] = ACTIONS(227),
    [sym_comment] = ACTIONS(49),
  },
  [275] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(289),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_PIPE] = ACTIONS(796),
    [sym_comment] = ACTIONS(3),
  },
  [276] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(592),
  },
  [277] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(277),
    [anon_sym_PIPE] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(818),
  },
  [278] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(287),
    [anon_sym_PIPE] = ACTIONS(820),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(794),
  },
  [279] = {
    [aux_sym_enum_definition_repeat1] = STATE(272),
    [anon_sym_RBRACE] = ACTIONS(822),
    [sym_bareword_string] = ACTIONS(824),
    [sym_comment] = ACTIONS(49),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
  },
  [281] = {
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
  },
  [282] = {
    [sym_command_expression] = STATE(323),
    [anon_sym_AMP] = ACTIONS(27),
    [sym_bareword_string] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
  },
  [283] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
  },
  [284] = {
    [aux_sym_param_block_repeat1] = STATE(298),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(828),
    [sym_comment] = ACTIONS(3),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [sym_comment] = ACTIONS(3),
  },
  [286] = {
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
  },
  [287] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(277),
    [anon_sym_PIPE] = ACTIONS(820),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(813),
  },
  [288] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(312),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [289] = {
    [aux_sym_pipeline_statement_repeat1] = STATE(289),
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_PIPE] = ACTIONS(830),
    [sym_comment] = ACTIONS(3),
  },
  [290] = {
    [aux_sym_class_method_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(3),
  },
  [291] = {
    [aux_sym_array_expression_repeat1] = STATE(257),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(838),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
  },
  [293] = {
    [aux_sym_param_block_repeat1] = STATE(284),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(840),
    [sym_comment] = ACTIONS(3),
  },
  [294] = {
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [anon_sym_PIPE] = ACTIONS(749),
    [sym_comment] = ACTIONS(3),
  },
  [296] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(842),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [297] = {
    [aux_sym_class_method_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(844),
    [sym_comment] = ACTIONS(3),
  },
  [298] = {
    [aux_sym_param_block_repeat1] = STATE(298),
    [anon_sym_COMMA] = ACTIONS(846),
    [anon_sym_RPAREN] = ACTIONS(849),
    [sym_comment] = ACTIONS(3),
  },
  [299] = {
    [aux_sym_class_method_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(669),
    [sym_comment] = ACTIONS(3),
  },
  [300] = {
    [aux_sym_param_block_repeat1] = STATE(309),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(851),
    [sym_comment] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(809),
    [aux_sym_elseif_statement_token1] = ACTIONS(809),
    [aux_sym_else_statement_token1] = ACTIONS(811),
    [sym_comment] = ACTIONS(3),
  },
  [302] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(853),
  },
  [303] = {
    [aux_sym__typename_generic_repeat1] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(856),
    [sym_comment] = ACTIONS(3),
  },
  [304] = {
    [aux_sym_array_expression_repeat1] = STATE(252),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(858),
    [sym_comment] = ACTIONS(3),
  },
  [305] = {
    [aux_sym__typename_generic_repeat1] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(786),
    [sym_comment] = ACTIONS(3),
  },
  [306] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(296),
    [anon_sym_RPAREN] = ACTIONS(567),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [307] = {
    [aux_sym_array_expression_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(596),
  },
  [308] = {
    [aux_sym_array_expression_repeat1] = STATE(304),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(594),
    [sym_comment] = ACTIONS(3),
  },
  [309] = {
    [aux_sym_param_block_repeat1] = STATE(298),
    [anon_sym_COMMA] = ACTIONS(826),
    [anon_sym_RPAREN] = ACTIONS(863),
    [sym_comment] = ACTIONS(3),
  },
  [310] = {
    [aux_sym_enum_definition_repeat1] = STATE(272),
    [anon_sym_RBRACE] = ACTIONS(865),
    [sym_bareword_string] = ACTIONS(824),
    [sym_comment] = ACTIONS(49),
  },
  [311] = {
    [anon_sym_RPAREN] = ACTIONS(788),
    [aux_sym_elseif_statement_token1] = ACTIONS(788),
    [aux_sym_else_statement_token1] = ACTIONS(790),
    [sym_comment] = ACTIONS(3),
  },
  [312] = {
    [aux_sym_flat_array_expression_repeat1] = STATE(302),
    [anon_sym_RPAREN] = ACTIONS(867),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(571),
  },
  [313] = {
    [sym_class_method_body] = STATE(207),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(3),
  },
  [314] = {
    [sym_class_method_body] = STATE(238),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(3),
  },
  [315] = {
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(585),
  },
  [316] = {
    [sym_scriptblock] = STATE(340),
    [anon_sym_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [317] = {
    [anon_sym_COMMA] = ACTIONS(871),
    [anon_sym_RPAREN] = ACTIONS(871),
    [sym_comment] = ACTIONS(3),
  },
  [318] = {
    [sym_scriptblock] = STATE(341),
    [anon_sym_LBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [319] = {
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym_comment] = ACTIONS(3),
  },
  [320] = {
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_PIPE] = ACTIONS(818),
    [sym_comment] = ACTIONS(3),
  },
  [321] = {
    [sym_simple_variable] = ACTIONS(875),
    [sym_bareword_string] = ACTIONS(875),
    [sym_comment] = ACTIONS(49),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(849),
    [anon_sym_RPAREN] = ACTIONS(849),
    [sym_comment] = ACTIONS(3),
  },
  [323] = {
    [anon_sym_PIPE] = ACTIONS(818),
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(818),
  },
  [324] = {
    [aux_sym_enum_definition_repeat1] = STATE(279),
    [sym_bareword_string] = ACTIONS(824),
    [sym_comment] = ACTIONS(49),
  },
  [325] = {
    [sym_class_method_body] = STATE(232),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(3),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_RPAREN] = ACTIONS(836),
    [sym_comment] = ACTIONS(3),
  },
  [327] = {
    [sym_class_method_body] = STATE(223),
    [anon_sym_LBRACE] = ACTIONS(869),
    [sym_comment] = ACTIONS(3),
  },
  [328] = {
    [anon_sym_RBRACE] = ACTIONS(804),
    [sym_bareword_string] = ACTIONS(804),
    [sym_comment] = ACTIONS(49),
  },
  [329] = {
    [sym_simple_variable] = ACTIONS(877),
    [sym_bareword_string] = ACTIONS(879),
    [sym_comment] = ACTIONS(49),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(881),
    [anon_sym_RPAREN] = ACTIONS(881),
    [sym_comment] = ACTIONS(3),
  },
  [331] = {
    [aux_sym_enum_definition_repeat1] = STATE(310),
    [sym_bareword_string] = ACTIONS(824),
    [sym_comment] = ACTIONS(49),
  },
  [332] = {
    [sym_scriptblock] = STATE(411),
    [anon_sym_LBRACE] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [333] = {
    [sym_scriptblock] = STATE(404),
    [anon_sym_LBRACE] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [sym_comment] = ACTIONS(3),
  },
  [335] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(885),
  },
  [336] = {
    [anon_sym_RPAREN] = ACTIONS(887),
    [sym_comment] = ACTIONS(3),
  },
  [337] = {
    [anon_sym_RPAREN] = ACTIONS(889),
    [sym_comment] = ACTIONS(3),
  },
  [338] = {
    [anon_sym_RPAREN] = ACTIONS(891),
    [sym_comment] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(893),
    [sym_comment] = ACTIONS(3),
  },
  [340] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(895),
  },
  [341] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(897),
  },
  [342] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(899),
  },
  [343] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(901),
  },
  [344] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(887),
  },
  [345] = {
    [anon_sym_DQUOTE] = ACTIONS(903),
    [sym_comment] = ACTIONS(3),
  },
  [346] = {
    [anon_sym_LPAREN] = ACTIONS(905),
    [sym_comment] = ACTIONS(3),
  },
  [347] = {
    [sym_simple_variable] = ACTIONS(907),
    [sym_comment] = ACTIONS(3),
  },
  [348] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(909),
  },
  [349] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(911),
  },
  [350] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(913),
  },
  [351] = {
    [anon_sym_RPAREN] = ACTIONS(915),
    [sym_comment] = ACTIONS(3),
  },
  [352] = {
    [anon_sym_RPAREN] = ACTIONS(917),
    [sym_comment] = ACTIONS(3),
  },
  [353] = {
    [anon_sym_LPAREN] = ACTIONS(919),
    [sym_comment] = ACTIONS(3),
  },
  [354] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(921),
  },
  [355] = {
    [anon_sym_EQ] = ACTIONS(923),
    [sym_comment] = ACTIONS(3),
  },
  [356] = {
    [anon_sym_LPAREN] = ACTIONS(925),
    [sym_comment] = ACTIONS(3),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(927),
    [sym_comment] = ACTIONS(3),
  },
  [358] = {
    [anon_sym_LBRACE] = ACTIONS(929),
    [sym_comment] = ACTIONS(3),
  },
  [359] = {
    [aux_sym_function_definition_token2] = ACTIONS(931),
    [sym_comment] = ACTIONS(3),
  },
  [360] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(933),
  },
  [361] = {
    [anon_sym_RBRACK] = ACTIONS(935),
    [sym_comment] = ACTIONS(3),
  },
  [362] = {
    [anon_sym_LBRACE] = ACTIONS(937),
    [sym_comment] = ACTIONS(3),
  },
  [363] = {
    [anon_sym_DQUOTE] = ACTIONS(939),
    [sym_comment] = ACTIONS(3),
  },
  [364] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(941),
  },
  [365] = {
    [anon_sym_RPAREN] = ACTIONS(913),
    [sym_comment] = ACTIONS(3),
  },
  [366] = {
    [anon_sym_RPAREN] = ACTIONS(941),
    [sym_comment] = ACTIONS(3),
  },
  [367] = {
    [anon_sym_RPAREN] = ACTIONS(943),
    [sym_comment] = ACTIONS(3),
  },
  [368] = {
    [anon_sym_RPAREN] = ACTIONS(945),
    [sym_comment] = ACTIONS(3),
  },
  [369] = {
    [anon_sym_RBRACK] = ACTIONS(947),
    [sym_comment] = ACTIONS(3),
  },
  [370] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(943),
  },
  [371] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(596),
  },
  [372] = {
    [anon_sym_RPAREN] = ACTIONS(651),
    [sym_comment] = ACTIONS(3),
  },
  [373] = {
    [anon_sym_RPAREN] = ACTIONS(949),
    [sym_comment] = ACTIONS(3),
  },
  [374] = {
    [anon_sym_RPAREN] = ACTIONS(951),
    [sym_comment] = ACTIONS(3),
  },
  [375] = {
    [anon_sym_RPAREN] = ACTIONS(953),
    [sym_comment] = ACTIONS(3),
  },
  [376] = {
    [anon_sym_RPAREN] = ACTIONS(955),
    [sym_comment] = ACTIONS(3),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(957),
    [sym_comment] = ACTIONS(3),
  },
  [378] = {
    [anon_sym_RPAREN] = ACTIONS(647),
    [sym_comment] = ACTIONS(3),
  },
  [379] = {
    [anon_sym_RPAREN] = ACTIONS(959),
    [sym_comment] = ACTIONS(3),
  },
  [380] = {
    [anon_sym_LBRACE] = ACTIONS(961),
    [sym_comment] = ACTIONS(3),
  },
  [381] = {
    [anon_sym_RPAREN] = ACTIONS(963),
    [sym_comment] = ACTIONS(3),
  },
  [382] = {
    [anon_sym_RBRACK] = ACTIONS(965),
    [sym_comment] = ACTIONS(3),
  },
  [383] = {
    [anon_sym_RPAREN] = ACTIONS(899),
    [sym_comment] = ACTIONS(3),
  },
  [384] = {
    [anon_sym_RPAREN] = ACTIONS(967),
    [sym_comment] = ACTIONS(3),
  },
  [385] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(945),
  },
  [386] = {
    [anon_sym_RPAREN] = ACTIONS(969),
    [sym_comment] = ACTIONS(3),
  },
  [387] = {
    [anon_sym_RPAREN] = ACTIONS(971),
    [sym_comment] = ACTIONS(3),
  },
  [388] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(651),
  },
  [389] = {
    [anon_sym_LBRACE] = ACTIONS(973),
    [sym_comment] = ACTIONS(3),
  },
  [390] = {
    [anon_sym_DQUOTE] = ACTIONS(975),
    [sym_comment] = ACTIONS(3),
  },
  [391] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(977),
  },
  [392] = {
    [aux_sym_while_statement_token1] = ACTIONS(979),
    [sym_comment] = ACTIONS(3),
  },
  [393] = {
    [anon_sym_DQUOTE] = ACTIONS(981),
    [sym_comment] = ACTIONS(3),
  },
  [394] = {
    [anon_sym_RPAREN] = ACTIONS(901),
    [sym_comment] = ACTIONS(3),
  },
  [395] = {
    [anon_sym_RPAREN] = ACTIONS(909),
    [sym_comment] = ACTIONS(3),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(983),
    [sym_comment] = ACTIONS(3),
  },
  [397] = {
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(3),
  },
  [398] = {
    [anon_sym_RPAREN] = ACTIONS(985),
    [sym_comment] = ACTIONS(3),
  },
  [399] = {
    [anon_sym_RPAREN] = ACTIONS(987),
    [sym_comment] = ACTIONS(3),
  },
  [400] = {
    [anon_sym_RPAREN] = ACTIONS(989),
    [sym_comment] = ACTIONS(3),
  },
  [401] = {
    [anon_sym_DQUOTE] = ACTIONS(991),
    [sym_comment] = ACTIONS(3),
  },
  [402] = {
    [anon_sym_DQUOTE] = ACTIONS(993),
    [sym_comment] = ACTIONS(3),
  },
  [403] = {
    [aux_sym_while_statement_token1] = ACTIONS(995),
    [sym_comment] = ACTIONS(3),
  },
  [404] = {
    [anon_sym_RPAREN] = ACTIONS(895),
    [sym_comment] = ACTIONS(3),
  },
  [405] = {
    [anon_sym_DQUOTE] = ACTIONS(997),
    [sym_comment] = ACTIONS(3),
  },
  [406] = {
    [aux_sym_function_definition_token2] = ACTIONS(999),
    [sym_comment] = ACTIONS(3),
  },
  [407] = {
    [aux_sym_filter_definition_token2] = ACTIONS(1001),
    [sym_comment] = ACTIONS(3),
  },
  [408] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(1003),
  },
  [409] = {
    [ts_builtin_sym_end] = ACTIONS(1005),
    [sym_comment] = ACTIONS(3),
  },
  [410] = {
    [anon_sym_LPAREN] = ACTIONS(1007),
    [sym_comment] = ACTIONS(3),
  },
  [411] = {
    [anon_sym_RPAREN] = ACTIONS(897),
    [sym_comment] = ACTIONS(3),
  },
  [412] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(985),
  },
  [413] = {
    [anon_sym_RPAREN] = ACTIONS(1009),
    [sym_comment] = ACTIONS(3),
  },
  [414] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(949),
  },
  [415] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(592),
  },
  [416] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(951),
  },
  [417] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(647),
  },
  [418] = {
    [anon_sym_LBRACE] = ACTIONS(1011),
    [sym_comment] = ACTIONS(3),
  },
  [419] = {
    [anon_sym_LBRACE] = ACTIONS(1013),
    [sym_comment] = ACTIONS(3),
  },
  [420] = {
    [anon_sym_LPAREN] = ACTIONS(1015),
    [sym_comment] = ACTIONS(3),
  },
  [421] = {
    [anon_sym_LBRACE] = ACTIONS(1017),
    [sym_comment] = ACTIONS(3),
  },
  [422] = {
    [anon_sym_LBRACE] = ACTIONS(1019),
    [sym_comment] = ACTIONS(3),
  },
  [423] = {
    [anon_sym_LBRACE] = ACTIONS(1021),
    [sym_comment] = ACTIONS(3),
  },
  [424] = {
    [anon_sym_LPAREN] = ACTIONS(1023),
    [sym_comment] = ACTIONS(3),
  },
  [425] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(963),
  },
  [426] = {
    [anon_sym_LPAREN] = ACTIONS(1025),
    [sym_comment] = ACTIONS(3),
  },
  [427] = {
    [anon_sym_LBRACE] = ACTIONS(1027),
    [sym_comment] = ACTIONS(3),
  },
  [428] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(983),
  },
  [429] = {
    [sym_comment] = ACTIONS(3),
    [sym__statement_terminator] = ACTIONS(1029),
  },
  [430] = {
    [anon_sym_LBRACE] = ACTIONS(1031),
    [sym_comment] = ACTIONS(3),
  },
  [431] = {
    [anon_sym_RPAREN] = ACTIONS(1033),
    [sym_comment] = ACTIONS(3),
  },
  [432] = {
    [anon_sym_RPAREN] = ACTIONS(1035),
    [sym_comment] = ACTIONS(3),
  },
  [433] = {
    [anon_sym_LPAREN] = ACTIONS(1037),
    [sym_comment] = ACTIONS(3),
  },
  [434] = {
    [anon_sym_LPAREN] = ACTIONS(1039),
    [sym_comment] = ACTIONS(3),
  },
  [435] = {
    [anon_sym_RPAREN] = ACTIONS(1041),
    [sym_comment] = ACTIONS(3),
  },
  [436] = {
    [aux_sym_class_definition_token2] = ACTIONS(1043),
    [sym_comment] = ACTIONS(3),
  },
  [437] = {
    [anon_sym_LPAREN] = ACTIONS(1045),
    [sym_comment] = ACTIONS(3),
  },
  [438] = {
    [anon_sym_LPAREN] = ACTIONS(1047),
    [sym_comment] = ACTIONS(3),
  },
  [439] = {
    [aux_sym_while_statement_token1] = ACTIONS(1049),
    [sym_comment] = ACTIONS(3),
  },
  [440] = {
    [aux_sym_while_statement_token1] = ACTIONS(1051),
    [sym_comment] = ACTIONS(3),
  },
  [441] = {
    [aux_sym_class_definition_token2] = ACTIONS(1053),
    [sym_comment] = ACTIONS(3),
  },
  [442] = {
    [anon_sym_LPAREN] = ACTIONS(1055),
    [sym_comment] = ACTIONS(3),
  },
  [443] = {
    [anon_sym_LPAREN] = ACTIONS(1057),
    [sym_comment] = ACTIONS(3),
  },
  [444] = {
    [anon_sym_EQ] = ACTIONS(501),
    [sym_comment] = ACTIONS(3),
  },
  [445] = {
    [aux_sym_filter_definition_token2] = ACTIONS(1059),
    [sym_comment] = ACTIONS(3),
  },
  [446] = {
    [anon_sym_LPAREN] = ACTIONS(1061),
    [sym_comment] = ACTIONS(3),
  },
  [447] = {
    [anon_sym_LBRACE] = ACTIONS(1063),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(359),
  [9] = {.count = 1, .reusable = false}, SHIFT(445),
  [11] = {.count = 1, .reusable = false}, SHIFT(209),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(62),
  [17] = {.count = 1, .reusable = false}, SHIFT(72),
  [19] = {.count = 1, .reusable = false}, SHIFT(441),
  [21] = {.count = 1, .reusable = false}, SHIFT(438),
  [23] = {.count = 1, .reusable = false}, SHIFT(437),
  [25] = {.count = 1, .reusable = false}, SHIFT(427),
  [27] = {.count = 1, .reusable = false}, SHIFT(135),
  [29] = {.count = 1, .reusable = false}, SHIFT(47),
  [31] = {.count = 1, .reusable = false}, SHIFT(426),
  [33] = {.count = 1, .reusable = false}, SHIFT(66),
  [35] = {.count = 1, .reusable = false}, SHIFT(113),
  [37] = {.count = 1, .reusable = false}, SHIFT(90),
  [39] = {.count = 1, .reusable = false}, SHIFT(243),
  [41] = {.count = 1, .reusable = false}, SHIFT(213),
  [43] = {.count = 1, .reusable = false}, SHIFT(214),
  [45] = {.count = 1, .reusable = false}, SHIFT(139),
  [47] = {.count = 1, .reusable = false}, SHIFT(83),
  [49] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [51] = {.count = 1, .reusable = false}, SHIFT(266),
  [53] = {.count = 1, .reusable = false}, SHIFT(410),
  [55] = {.count = 1, .reusable = false}, SHIFT(104),
  [57] = {.count = 1, .reusable = false}, SHIFT(96),
  [59] = {.count = 1, .reusable = false}, SHIFT(229),
  [61] = {.count = 1, .reusable = false}, SHIFT(99),
  [63] = {.count = 1, .reusable = false}, SHIFT(109),
  [65] = {.count = 1, .reusable = false}, SHIFT(228),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [69] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(359),
  [72] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(445),
  [75] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(209),
  [78] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(62),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(72),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(441),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(438),
  [93] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(437),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(427),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(135),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [105] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(113),
  [111] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(90),
  [114] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(243),
  [117] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(213),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(214),
  [123] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(83),
  [129] = {.count = 1, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2),
  [131] = {.count = 1, .reusable = false}, SHIFT(383),
  [133] = {.count = 1, .reusable = false}, SHIFT(187),
  [135] = {.count = 1, .reusable = false}, SHIFT(374),
  [137] = {.count = 1, .reusable = false}, SHIFT(367),
  [139] = {.count = 1, .reusable = false}, SHIFT(365),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_program, 2),
  [143] = {.count = 1, .reusable = false}, SHIFT(342),
  [145] = {.count = 1, .reusable = false}, SHIFT(180),
  [147] = {.count = 1, .reusable = false}, SHIFT(280),
  [149] = {.count = 1, .reusable = false}, SHIFT(273),
  [151] = {.count = 1, .reusable = false}, SHIFT(350),
  [153] = {.count = 1, .reusable = false}, SHIFT(262),
  [155] = {.count = 1, .reusable = false}, SHIFT(115),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [159] = {.count = 1, .reusable = false}, SHIFT(181),
  [161] = {.count = 1, .reusable = false}, SHIFT(416),
  [163] = {.count = 1, .reusable = false}, SHIFT(403),
  [165] = {.count = 1, .reusable = false}, SHIFT(220),
  [167] = {.count = 1, .reusable = false}, SHIFT(231),
  [169] = {.count = 1, .reusable = false}, SHIFT(440),
  [171] = {.count = 1, .reusable = false}, SHIFT(120),
  [173] = {.count = 1, .reusable = false}, SHIFT(294),
  [175] = {.count = 1, .reusable = false}, SHIFT(179),
  [177] = {.count = 1, .reusable = false}, SHIFT(212),
  [179] = {.count = 1, .reusable = false}, SHIFT(370),
  [181] = {.count = 1, .reusable = false}, SHIFT(439),
  [183] = {.count = 1, .reusable = false}, SHIFT(301),
  [185] = {.count = 1, .reusable = false}, SHIFT(311),
  [187] = {.count = 1, .reusable = false}, SHIFT(392),
  [189] = {.count = 1, .reusable = false}, SHIFT(406),
  [191] = {.count = 1, .reusable = false}, SHIFT(407),
  [193] = {.count = 1, .reusable = false}, SHIFT(211),
  [195] = {.count = 1, .reusable = false}, SHIFT(2),
  [197] = {.count = 1, .reusable = false}, SHIFT(63),
  [199] = {.count = 1, .reusable = false}, SHIFT(73),
  [201] = {.count = 1, .reusable = false}, SHIFT(436),
  [203] = {.count = 1, .reusable = false}, SHIFT(442),
  [205] = {.count = 1, .reusable = false}, SHIFT(443),
  [207] = {.count = 1, .reusable = false}, SHIFT(447),
  [209] = {.count = 1, .reusable = false}, SHIFT(134),
  [211] = {.count = 1, .reusable = false}, SHIFT(45),
  [213] = {.count = 1, .reusable = false}, SHIFT(65),
  [215] = {.count = 1, .reusable = false}, SHIFT(124),
  [217] = {.count = 1, .reusable = false}, SHIFT(95),
  [219] = {.count = 1, .reusable = false}, SHIFT(221),
  [221] = {.count = 1, .reusable = false}, SHIFT(244),
  [223] = {.count = 1, .reusable = false}, SHIFT(245),
  [225] = {.count = 1, .reusable = false}, SHIFT(145),
  [227] = {.count = 1, .reusable = false}, SHIFT(79),
  [229] = {.count = 1, .reusable = true}, SHIFT(5),
  [231] = {.count = 1, .reusable = true}, SHIFT(62),
  [233] = {.count = 1, .reusable = true}, SHIFT(72),
  [235] = {.count = 1, .reusable = true}, SHIFT(270),
  [237] = {.count = 1, .reusable = true}, SHIFT(47),
  [239] = {.count = 1, .reusable = true}, SHIFT(66),
  [241] = {.count = 1, .reusable = true}, SHIFT(113),
  [243] = {.count = 1, .reusable = true}, SHIFT(90),
  [245] = {.count = 1, .reusable = true}, SHIFT(243),
  [247] = {.count = 1, .reusable = true}, SHIFT(191),
  [249] = {.count = 1, .reusable = true}, SHIFT(214),
  [251] = {.count = 1, .reusable = true}, SHIFT(139),
  [253] = {.count = 1, .reusable = true}, SHIFT(233),
  [255] = {.count = 1, .reusable = true}, SHIFT(203),
  [257] = {.count = 1, .reusable = true}, SHIFT(307),
  [259] = {.count = 1, .reusable = true}, SHIFT(226),
  [261] = {.count = 1, .reusable = true}, SHIFT(276),
  [263] = {.count = 1, .reusable = true}, SHIFT(2),
  [265] = {.count = 1, .reusable = true}, SHIFT(63),
  [267] = {.count = 1, .reusable = true}, SHIFT(73),
  [269] = {.count = 1, .reusable = true}, SHIFT(45),
  [271] = {.count = 1, .reusable = true}, SHIFT(65),
  [273] = {.count = 1, .reusable = true}, SHIFT(124),
  [275] = {.count = 1, .reusable = true}, SHIFT(95),
  [277] = {.count = 1, .reusable = true}, SHIFT(221),
  [279] = {.count = 1, .reusable = true}, SHIFT(291),
  [281] = {.count = 1, .reusable = true}, SHIFT(245),
  [283] = {.count = 1, .reusable = true}, SHIFT(145),
  [285] = {.count = 1, .reusable = true}, SHIFT(369),
  [287] = {.count = 1, .reusable = true}, SHIFT(308),
  [289] = {.count = 1, .reusable = true}, SHIFT(205),
  [291] = {.count = 1, .reusable = true}, SHIFT(267),
  [293] = {.count = 1, .reusable = false}, SHIFT(3),
  [295] = {.count = 1, .reusable = false}, SHIFT(64),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(77),
  [301] = {.count = 1, .reusable = false}, SHIFT(46),
  [303] = {.count = 1, .reusable = false}, SHIFT(128),
  [305] = {.count = 1, .reusable = false}, SHIFT(107),
  [307] = {.count = 1, .reusable = false}, SHIFT(118),
  [309] = {.count = 1, .reusable = false}, SHIFT(105),
  [311] = {.count = 1, .reusable = false}, SHIFT(143),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 2),
  [315] = {.count = 1, .reusable = false}, SHIFT(80),
  [317] = {.count = 1, .reusable = false}, SHIFT(4),
  [319] = {.count = 1, .reusable = false}, SHIFT(61),
  [321] = {.count = 1, .reusable = false}, SHIFT(81),
  [323] = {.count = 1, .reusable = false}, SHIFT(48),
  [325] = {.count = 1, .reusable = false}, SHIFT(130),
  [327] = {.count = 1, .reusable = false}, SHIFT(116),
  [329] = {.count = 1, .reusable = false}, SHIFT(97),
  [331] = {.count = 1, .reusable = false}, SHIFT(112),
  [333] = {.count = 1, .reusable = false}, SHIFT(141),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 3),
  [339] = {.count = 1, .reusable = false}, SHIFT(82),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_command_expression, 1),
  [343] = {.count = 1, .reusable = false}, SHIFT(76),
  [345] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(3),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(64),
  [351] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2),
  [353] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(80),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(46),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(128),
  [362] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(107),
  [365] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(118),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(105),
  [371] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(143),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_expression_repeat1, 2),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(4),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(61),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(81),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(48),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(130),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(116),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(97),
  [397] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(112),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_expression_repeat1, 2), SHIFT_REPEAT(141),
  [403] = {.count = 1, .reusable = false}, SHIFT(75),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_command_expression, 1),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 5),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_param_block, 4),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 4),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_variable, 1),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_variable, 1),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym__attributed_variable, 1),
  [423] = {.count = 1, .reusable = true}, SHIFT(133),
  [425] = {.count = 1, .reusable = false}, SHIFT(133),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_param_block, 5),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 2),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_command_argument, 1),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_subpipeline, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_subpipeline, 3),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 3),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 2),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 2),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 2),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_subexpression, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_property_name, 1),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 2),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_single_quote_string, 1),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_single_quote_string, 1),
  [459] = {.count = 1, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(95),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(245),
  [467] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(145),
  [470] = {.count = 2, .reusable = false}, REDUCE(aux_sym_hashtable_expression_repeat1, 2), SHIFT_REPEAT(444),
  [473] = {.count = 1, .reusable = false}, SHIFT(234),
  [475] = {.count = 1, .reusable = false}, SHIFT(444),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 4),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_scriptblock, 4),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_hashtable_expression, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_command_argument, 1),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 4),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_scriptblock, 4),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_double_quote_string, 3),
  [491] = {.count = 1, .reusable = false}, SHIFT(117),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_subexpression, 3),
  [495] = {.count = 1, .reusable = false}, SHIFT(271),
  [497] = {.count = 1, .reusable = false}, SHIFT(259),
  [499] = {.count = 1, .reusable = false}, SHIFT(286),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_property_name, 1),
  [503] = {.count = 1, .reusable = false}, SHIFT(101),
  [505] = {.count = 1, .reusable = false}, SHIFT(132),
  [507] = {.count = 1, .reusable = false}, SHIFT(111),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_double_quote_string, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_expression, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator, 1),
  [515] = {.count = 1, .reusable = false}, SHIFT(103),
  [517] = {.count = 1, .reusable = false}, SHIFT(127),
  [519] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(168),
  [522] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quote_string_repeat1, 2), SHIFT_REPEAT(138),
  [527] = {.count = 1, .reusable = false}, SHIFT(168),
  [529] = {.count = 1, .reusable = false}, SHIFT(240),
  [531] = {.count = 1, .reusable = false}, SHIFT(144),
  [533] = {.count = 1, .reusable = false}, SHIFT(345),
  [535] = {.count = 1, .reusable = false}, SHIFT(121),
  [537] = {.count = 1, .reusable = false}, SHIFT(138),
  [539] = {.count = 1, .reusable = false}, SHIFT(405),
  [541] = {.count = 1, .reusable = false}, SHIFT(110),
  [543] = {.count = 1, .reusable = false}, SHIFT(140),
  [545] = {.count = 1, .reusable = false}, SHIFT(402),
  [547] = {.count = 1, .reusable = false}, SHIFT(131),
  [549] = {.count = 1, .reusable = false}, SHIFT(393),
  [551] = {.count = 1, .reusable = false}, SHIFT(100),
  [553] = {.count = 1, .reusable = false}, SHIFT(142),
  [555] = {.count = 1, .reusable = false}, SHIFT(390),
  [557] = {.count = 1, .reusable = false}, SHIFT(254),
  [559] = {.count = 1, .reusable = false}, SHIFT(401),
  [561] = {.count = 1, .reusable = false}, SHIFT(258),
  [563] = {.count = 1, .reusable = false}, SHIFT(148),
  [565] = {.count = 1, .reusable = false}, SHIFT(357),
  [567] = {.count = 1, .reusable = true}, SHIFT(206),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__attribute, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(68),
  [573] = {.count = 1, .reusable = true}, SHIFT(285),
  [575] = {.count = 1, .reusable = false}, SHIFT(253),
  [577] = {.count = 1, .reusable = false}, SHIFT(363),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_type_expr, 3),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym__pipeline_expression, 1),
  [583] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2),
  [585] = {.count = 1, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(aux_sym_param_block_variable_repeat1, 2),
  [589] = {.count = 2, .reusable = true}, REDUCE(aux_sym_param_block_variable_repeat1, 2), SHIFT_REPEAT(221),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_binary_operator_statement, 3),
  [594] = {.count = 1, .reusable = true}, SHIFT(382),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_hashtable_entry, 3),
  [598] = {.count = 1, .reusable = true}, SHIFT(85),
  [600] = {.count = 1, .reusable = true}, SHIFT(330),
  [602] = {.count = 1, .reusable = true}, SHIFT(88),
  [604] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_definition_repeat2, 2),
  [606] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(429),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(249),
  [612] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_definition_repeat2, 2), SHIFT_REPEAT(356),
  [615] = {.count = 1, .reusable = false}, SHIFT(344),
  [617] = {.count = 1, .reusable = false}, SHIFT(429),
  [619] = {.count = 1, .reusable = false}, SHIFT(249),
  [621] = {.count = 1, .reusable = false}, SHIFT(356),
  [623] = {.count = 1, .reusable = false}, SHIFT(428),
  [625] = {.count = 1, .reusable = false}, SHIFT(396),
  [627] = {.count = 1, .reusable = false}, SHIFT(395),
  [629] = {.count = 1, .reusable = false}, SHIFT(336),
  [631] = {.count = 1, .reusable = false}, SHIFT(348),
  [633] = {.count = 1, .reusable = false}, SHIFT(381),
  [635] = {.count = 1, .reusable = false}, SHIFT(425),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 6),
  [639] = {.count = 1, .reusable = true}, SHIFT(446),
  [641] = {.count = 1, .reusable = false}, SHIFT(422),
  [643] = {.count = 1, .reusable = true}, SHIFT(424),
  [645] = {.count = 1, .reusable = false}, SHIFT(421),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 7),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 7),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 8),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 5),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_non_type_attribute, 6),
  [657] = {.count = 1, .reusable = true}, SHIFT(319),
  [659] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(192),
  [664] = {.count = 1, .reusable = true}, SHIFT(50),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(72),
  [669] = {.count = 1, .reusable = true}, SHIFT(327),
  [671] = {.count = 1, .reusable = true}, SHIFT(317),
  [673] = {.count = 1, .reusable = true}, SHIFT(216),
  [675] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(446),
  [680] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__attributed_variable, 2),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [686] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(424),
  [689] = {.count = 1, .reusable = true}, SHIFT(313),
  [691] = {.count = 1, .reusable = true}, SHIFT(222),
  [693] = {.count = 1, .reusable = false}, SHIFT(255),
  [695] = {.count = 1, .reusable = true}, SHIFT(224),
  [697] = {.count = 1, .reusable = true}, SHIFT(247),
  [699] = {.count = 1, .reusable = true}, SHIFT(49),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 1),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 3),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 4),
  [707] = {.count = 1, .reusable = false}, SHIFT(225),
  [709] = {.count = 1, .reusable = false}, SHIFT(227),
  [711] = {.count = 1, .reusable = false}, SHIFT(217),
  [713] = {.count = 1, .reusable = false}, SHIFT(192),
  [715] = {.count = 1, .reusable = false}, SHIFT(219),
  [717] = {.count = 1, .reusable = false}, SHIFT(210),
  [719] = {.count = 1, .reusable = false}, SHIFT(174),
  [721] = {.count = 1, .reusable = true}, SHIFT(292),
  [723] = {.count = 1, .reusable = false}, SHIFT(171),
  [725] = {.count = 1, .reusable = false}, SHIFT(215),
  [727] = {.count = 1, .reusable = false}, SHIFT(169),
  [729] = {.count = 1, .reusable = false}, SHIFT(218),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_class_method_body, 2),
  [733] = {.count = 1, .reusable = true}, SHIFT(239),
  [735] = {.count = 1, .reusable = true}, SHIFT(261),
  [737] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 5),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym__typename_generic, 4),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym__typename_generic, 4),
  [743] = {.count = 1, .reusable = false}, SHIFT(167),
  [745] = {.count = 1, .reusable = false}, SHIFT(241),
  [747] = {.count = 1, .reusable = false}, SHIFT(242),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 4),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_class_method_body, 3),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 6),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_flat_array_expression, 2),
  [757] = {.count = 1, .reusable = false}, SHIFT(166),
  [759] = {.count = 1, .reusable = false}, REDUCE(sym_class_method, 7),
  [761] = {.count = 1, .reusable = true}, SHIFT(71),
  [763] = {.count = 1, .reusable = false}, REDUCE(sym__typename, 1),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym__typename, 1),
  [767] = {.count = 1, .reusable = false}, SHIFT(176),
  [769] = {.count = 1, .reusable = false}, SHIFT(236),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__typename_array, 2),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym__typename_array, 2),
  [775] = {.count = 1, .reusable = true}, SHIFT(263),
  [777] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_expression_repeat1, 2), SHIFT_REPEAT(73),
  [780] = {.count = 1, .reusable = true}, SHIFT(201),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__typename_generic, 5),
  [784] = {.count = 1, .reusable = false}, REDUCE(sym__typename_generic, 5),
  [786] = {.count = 1, .reusable = true}, REDUCE(aux_sym__typename_generic_repeat1, 2),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_elseif_statement, 6),
  [790] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_statement, 6),
  [792] = {.count = 1, .reusable = true}, SHIFT(321),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 1),
  [796] = {.count = 1, .reusable = true}, SHIFT(274),
  [798] = {.count = 1, .reusable = true}, SHIFT(208),
  [800] = {.count = 1, .reusable = true}, SHIFT(325),
  [802] = {.count = 1, .reusable = true}, SHIFT(149),
  [804] = {.count = 1, .reusable = false}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [806] = {.count = 2, .reusable = false}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(391),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_elseif_statement, 7),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_statement, 7),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_pipeline_statement, 2),
  [815] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2), SHIFT_REPEAT(282),
  [818] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2),
  [820] = {.count = 1, .reusable = true}, SHIFT(282),
  [822] = {.count = 1, .reusable = false}, SHIFT(343),
  [824] = {.count = 1, .reusable = false}, SHIFT(391),
  [826] = {.count = 1, .reusable = true}, SHIFT(178),
  [828] = {.count = 1, .reusable = true}, SHIFT(92),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pipeline_statement_repeat1, 2), SHIFT_REPEAT(274),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_method_repeat1, 2), SHIFT_REPEAT(208),
  [836] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_method_repeat1, 2),
  [838] = {.count = 1, .reusable = true}, SHIFT(161),
  [840] = {.count = 1, .reusable = true}, SHIFT(89),
  [842] = {.count = 1, .reusable = true}, SHIFT(230),
  [844] = {.count = 1, .reusable = true}, SHIFT(314),
  [846] = {.count = 2, .reusable = true}, REDUCE(aux_sym_param_block_repeat1, 2), SHIFT_REPEAT(178),
  [849] = {.count = 1, .reusable = true}, REDUCE(aux_sym_param_block_repeat1, 2),
  [851] = {.count = 1, .reusable = true}, SHIFT(87),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_flat_array_expression_repeat1, 2), SHIFT_REPEAT(68),
  [856] = {.count = 1, .reusable = true}, SHIFT(260),
  [858] = {.count = 1, .reusable = true}, SHIFT(361),
  [860] = {.count = 2, .reusable = true}, REDUCE(aux_sym__typename_generic_repeat1, 2), SHIFT_REPEAT(222),
  [863] = {.count = 1, .reusable = true}, SHIFT(86),
  [865] = {.count = 1, .reusable = false}, SHIFT(394),
  [867] = {.count = 1, .reusable = true}, SHIFT(295),
  [869] = {.count = 1, .reusable = true}, SHIFT(31),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_class_parameter, 1),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_param_block_variable, 2),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_type_expr, 3),
  [877] = {.count = 1, .reusable = false}, SHIFT(335),
  [879] = {.count = 1, .reusable = false}, SHIFT(353),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_param_block_variable, 1),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym_class_parameter, 2),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_class_property, 2),
  [887] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 6),
  [889] = {.count = 1, .reusable = true}, SHIFT(362),
  [891] = {.count = 1, .reusable = true}, SHIFT(389),
  [893] = {.count = 1, .reusable = true}, SHIFT(414),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_filter_definition, 3),
  [897] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 6),
  [901] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [903] = {.count = 1, .reusable = true}, SHIFT(254),
  [905] = {.count = 1, .reusable = true}, SHIFT(59),
  [907] = {.count = 1, .reusable = true}, SHIFT(334),
  [909] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 5),
  [911] = {.count = 1, .reusable = true}, SHIFT(94),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_else_statement, 4),
  [915] = {.count = 1, .reusable = true}, SHIFT(281),
  [917] = {.count = 1, .reusable = true}, SHIFT(283),
  [919] = {.count = 1, .reusable = true}, SHIFT(195),
  [921] = {.count = 1, .reusable = true}, SHIFT(237),
  [923] = {.count = 1, .reusable = true}, SHIFT(67),
  [925] = {.count = 1, .reusable = true}, SHIFT(200),
  [927] = {.count = 1, .reusable = true}, SHIFT(253),
  [929] = {.count = 1, .reusable = true}, SHIFT(23),
  [931] = {.count = 1, .reusable = true}, SHIFT(318),
  [933] = {.count = 1, .reusable = true}, SHIFT(157),
  [935] = {.count = 1, .reusable = true}, SHIFT(183),
  [937] = {.count = 1, .reusable = true}, SHIFT(17),
  [939] = {.count = 1, .reusable = true}, SHIFT(256),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 9),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_else_statement, 3),
  [945] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 8),
  [947] = {.count = 1, .reusable = true}, SHIFT(186),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 7),
  [951] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 7),
  [953] = {.count = 1, .reusable = true}, SHIFT(373),
  [955] = {.count = 1, .reusable = true}, SHIFT(368),
  [957] = {.count = 1, .reusable = true}, SHIFT(358),
  [959] = {.count = 1, .reusable = true}, SHIFT(246),
  [961] = {.count = 1, .reusable = true}, SHIFT(324),
  [963] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 7),
  [965] = {.count = 1, .reusable = true}, SHIFT(189),
  [967] = {.count = 1, .reusable = true}, SHIFT(248),
  [969] = {.count = 1, .reusable = true}, SHIFT(98),
  [971] = {.count = 1, .reusable = true}, SHIFT(123),
  [973] = {.count = 1, .reusable = true}, SHIFT(18),
  [975] = {.count = 1, .reusable = true}, SHIFT(131),
  [977] = {.count = 1, .reusable = true}, SHIFT(328),
  [979] = {.count = 1, .reusable = true}, SHIFT(420),
  [981] = {.count = 1, .reusable = true}, SHIFT(119),
  [983] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 4),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_statement, 3),
  [987] = {.count = 1, .reusable = true}, SHIFT(106),
  [989] = {.count = 1, .reusable = true}, SHIFT(102),
  [991] = {.count = 1, .reusable = true}, SHIFT(235),
  [993] = {.count = 1, .reusable = true}, SHIFT(121),
  [995] = {.count = 1, .reusable = true}, SHIFT(346),
  [997] = {.count = 1, .reusable = true}, SHIFT(114),
  [999] = {.count = 1, .reusable = true}, SHIFT(332),
  [1001] = {.count = 1, .reusable = true}, SHIFT(333),
  [1003] = {.count = 1, .reusable = true}, SHIFT(84),
  [1005] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1007] = {.count = 1, .reusable = true}, SHIFT(163),
  [1009] = {.count = 1, .reusable = true}, SHIFT(385),
  [1011] = {.count = 1, .reusable = true}, SHIFT(36),
  [1013] = {.count = 1, .reusable = true}, SHIFT(11),
  [1015] = {.count = 1, .reusable = true}, SHIFT(60),
  [1017] = {.count = 1, .reusable = true}, SHIFT(40),
  [1019] = {.count = 1, .reusable = true}, SHIFT(14),
  [1021] = {.count = 1, .reusable = true}, SHIFT(43),
  [1023] = {.count = 1, .reusable = true}, SHIFT(54),
  [1025] = {.count = 1, .reusable = true}, SHIFT(162),
  [1027] = {.count = 1, .reusable = true}, SHIFT(44),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym_class_property, 1),
  [1031] = {.count = 1, .reusable = true}, SHIFT(331),
  [1033] = {.count = 1, .reusable = true}, SHIFT(418),
  [1035] = {.count = 1, .reusable = true}, SHIFT(419),
  [1037] = {.count = 1, .reusable = true}, SHIFT(51),
  [1039] = {.count = 1, .reusable = true}, SHIFT(57),
  [1041] = {.count = 1, .reusable = true}, SHIFT(423),
  [1043] = {.count = 1, .reusable = true}, SHIFT(430),
  [1045] = {.count = 1, .reusable = true}, SHIFT(52),
  [1047] = {.count = 1, .reusable = true}, SHIFT(55),
  [1049] = {.count = 1, .reusable = true}, SHIFT(433),
  [1051] = {.count = 1, .reusable = true}, SHIFT(434),
  [1053] = {.count = 1, .reusable = true}, SHIFT(380),
  [1055] = {.count = 1, .reusable = true}, SHIFT(58),
  [1057] = {.count = 1, .reusable = true}, SHIFT(56),
  [1059] = {.count = 1, .reusable = true}, SHIFT(316),
  [1061] = {.count = 1, .reusable = true}, SHIFT(53),
  [1063] = {.count = 1, .reusable = true}, SHIFT(41),
};

void *tree_sitter_PowerShell_external_scanner_create(void);
void tree_sitter_PowerShell_external_scanner_destroy(void *);
bool tree_sitter_PowerShell_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_PowerShell_external_scanner_serialize(void *, char *);
void tree_sitter_PowerShell_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_PowerShell(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_PowerShell_external_scanner_create,
      tree_sitter_PowerShell_external_scanner_destroy,
      tree_sitter_PowerShell_external_scanner_scan,
      tree_sitter_PowerShell_external_scanner_serialize,
      tree_sitter_PowerShell_external_scanner_deserialize,
    },
  };
  return &language;
}
