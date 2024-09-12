#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 290
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 2
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_import = 5,
  anon_sym_weak = 6,
  anon_sym_public = 7,
  anon_sym_package = 8,
  anon_sym_option = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT = 12,
  anon_sym_enum = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_DASH = 16,
  anon_sym_LBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACK = 19,
  anon_sym_message = 20,
  anon_sym_optional = 21,
  anon_sym_repeated = 22,
  anon_sym_oneof = 23,
  anon_sym_map = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_int32 = 27,
  anon_sym_int64 = 28,
  anon_sym_uint32 = 29,
  anon_sym_uint64 = 30,
  anon_sym_sint32 = 31,
  anon_sym_sint64 = 32,
  anon_sym_fixed32 = 33,
  anon_sym_fixed64 = 34,
  anon_sym_sfixed32 = 35,
  anon_sym_sfixed64 = 36,
  anon_sym_bool = 37,
  anon_sym_string = 38,
  anon_sym_double = 39,
  anon_sym_float = 40,
  anon_sym_bytes = 41,
  anon_sym_reserved = 42,
  anon_sym_to = 43,
  anon_sym_max = 44,
  anon_sym_service = 45,
  anon_sym_rpc = 46,
  anon_sym_stream = 47,
  anon_sym_returns = 48,
  anon_sym_PLUS = 49,
  anon_sym_COLON = 50,
  sym_identifier = 51,
  sym_true = 52,
  sym_false = 53,
  sym_decimal_lit = 54,
  sym_octal_lit = 55,
  sym_hex_lit = 56,
  sym_float_lit = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  aux_sym_string_token2 = 61,
  sym_escape_sequence = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym_empty_statement = 65,
  sym_syntax = 66,
  sym_import = 67,
  sym_package = 68,
  sym_option = 69,
  sym_option_name = 70,
  sym_enum = 71,
  sym_enum_name = 72,
  sym_enum_body = 73,
  sym_enum_field = 74,
  sym_enum_value_option = 75,
  sym_message = 76,
  sym_message_body = 77,
  sym_message_name = 78,
  sym_field = 79,
  sym_field_options = 80,
  sym_field_option = 81,
  sym_oneof = 82,
  sym_oneof_field = 83,
  sym_map_field = 84,
  sym_key_type = 85,
  sym_type = 86,
  sym_reserved = 87,
  sym_ranges = 88,
  sym_range = 89,
  sym_field_names = 90,
  sym_message_or_enum_type = 91,
  sym_field_number = 92,
  sym_service = 93,
  sym_service_name = 94,
  sym_rpc = 95,
  sym_rpc_name = 96,
  sym_constant = 97,
  sym_block_lit = 98,
  sym_full_ident = 99,
  sym_bool = 100,
  sym_int_lit = 101,
  sym_string = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_option_name_repeat1 = 104,
  aux_sym_enum_body_repeat1 = 105,
  aux_sym_enum_field_repeat1 = 106,
  aux_sym_message_body_repeat1 = 107,
  aux_sym_field_options_repeat1 = 108,
  aux_sym_oneof_repeat1 = 109,
  aux_sym_ranges_repeat1 = 110,
  aux_sym_field_names_repeat1 = 111,
  aux_sym_message_or_enum_type_repeat1 = 112,
  aux_sym_service_repeat1 = 113,
  aux_sym_rpc_repeat1 = 114,
  aux_sym_block_lit_repeat1 = 115,
  aux_sym_block_lit_repeat2 = 116,
  aux_sym_string_repeat1 = 117,
  aux_sym_string_repeat2 = 118,
  alias_sym_imm_tok_prec_p1_pat_3a2a380 = 119,
  alias_sym_imm_tok_prec_p1_pat_dc28280 = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_import] = "import",
  [anon_sym_weak] = "weak",
  [anon_sym_public] = "public",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_optional] = "optional",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_syntax] = "syntax",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym_option_name] = "option_name",
  [sym_enum] = "enum",
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
  [sym_field] = "field",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
  [sym_constant] = "constant",
  [sym_block_lit] = "block_lit",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_option_name_repeat1] = "option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_message_body_repeat1] = "message_body_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_block_lit_repeat1] = "block_lit_repeat1",
  [aux_sym_block_lit_repeat2] = "block_lit_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_imm_tok_prec_p1_pat_3a2a380] = "imm_tok_prec_p1_pat_3a2a380",
  [alias_sym_imm_tok_prec_p1_pat_dc28280] = "imm_tok_prec_p1_pat_dc28280",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_syntax] = sym_syntax,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym_option_name] = sym_option_name,
  [sym_enum] = sym_enum,
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
  [sym_field] = sym_field,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
  [sym_constant] = sym_constant,
  [sym_block_lit] = sym_block_lit,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_option_name_repeat1] = aux_sym_option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_message_body_repeat1] = aux_sym_message_body_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_block_lit_repeat1] = aux_sym_block_lit_repeat1,
  [aux_sym_block_lit_repeat2] = aux_sym_block_lit_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [alias_sym_imm_tok_prec_p1_pat_3a2a380] = alias_sym_imm_tok_prec_p1_pat_3a2a380,
  [alias_sym_imm_tok_prec_p1_pat_dc28280] = alias_sym_imm_tok_prec_p1_pat_dc28280,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_option] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_number] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_block_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_imm_tok_prec_p1_pat_3a2a380] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_imm_tok_prec_p1_pat_dc28280] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_path = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_path, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_imm_tok_prec_p1_pat_3a2a380,
  },
  [2] = {
    [0] = alias_sym_imm_tok_prec_p1_pat_dc28280,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 21,
  [38] = 18,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 41,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 21,
  [55] = 18,
  [56] = 56,
  [57] = 57,
  [58] = 22,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 26,
  [64] = 57,
  [65] = 65,
  [66] = 66,
  [67] = 25,
  [68] = 28,
  [69] = 69,
  [70] = 23,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 65,
  [75] = 8,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 29,
  [109] = 109,
  [110] = 90,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 21,
  [139] = 139,
  [140] = 29,
  [141] = 141,
  [142] = 18,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 154,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 154,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 154,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 186,
  [191] = 189,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 185,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 194,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 248,
  [275] = 275,
  [276] = 276,
  [277] = 248,
  [278] = 248,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 263,
  [285] = 263,
  [286] = 263,
  [287] = 287,
  [288] = 288,
  [289] = 289,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '"', 368,
        '\'', 375,
        '(', 185,
        ')', 186,
        '+', 248,
        ',', 195,
        '-', 193,
        '.', 188,
        '/', 7,
        '0', 360,
        ':', 249,
        ';', 173,
        '<', 207,
        '=', 175,
        '>', 208,
        '[', 194,
        '\\', 33,
        ']', 196,
        'b', 114,
        'd', 110,
        'e', 104,
        'f', 34,
        'i', 96,
        'm', 35,
        'n', 39,
        'o', 103,
        'p', 37,
        'r', 58,
        's', 60,
        't', 111,
        'u', 88,
        'w', 68,
        '{', 191,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(170);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 368,
        '\'', 375,
        '+', 248,
        '-', 193,
        '.', 159,
        '/', 7,
        '0', 360,
        ':', 249,
        '[', 194,
        'f', 269,
        'i', 315,
        'n', 270,
        't', 331,
        '{', 191,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 124,
        '-', 193,
        '.', 187,
        '/', 7,
        '0', 362,
        ';', 173,
        '=', 175,
        'b', 323,
        'd', 319,
        'e', 314,
        'f', 297,
        'i', 313,
        'm', 265,
        'o', 312,
        'r', 277,
        's', 294,
        'u', 301,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '(', 185,
        ')', 186,
        ',', 195,
        '.', 187,
        '/', 7,
        '0', 362,
        ';', 173,
        '=', 175,
        '>', 208,
        ']', 196,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(386);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '.', 187,
        '/', 7,
        ';', 173,
        '[', 194,
        'b', 323,
        'd', 319,
        'f', 297,
        'i', 313,
        'o', 329,
        's', 294,
        'u', 301,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '.', 187,
        '/', 7,
        'b', 323,
        'd', 319,
        'f', 297,
        'i', 313,
        'r', 285,
        's', 294,
        'u', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '.', 187,
        '/', 7,
        'b', 323,
        'd', 319,
        'f', 297,
        'i', 313,
        's', 294,
        'u', 301,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(342);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(211);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(223);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 158:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '"', 368,
        '\'', 375,
        '(', 185,
        ')', 186,
        '+', 248,
        ',', 195,
        '-', 193,
        '.', 188,
        '/', 7,
        '0', 360,
        ':', 249,
        ';', 173,
        '<', 207,
        '=', 175,
        '>', 208,
        '[', 194,
        ']', 196,
        'b', 114,
        'd', 110,
        'e', 104,
        'f', 34,
        'i', 96,
        'm', 35,
        'n', 39,
        'o', 103,
        'p', 37,
        'r', 58,
        's', 60,
        't', 111,
        'u', 88,
        'w', 68,
        '{', 191,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(170);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '.', 159,
        '/', 7,
        '0', 360,
        ';', 173,
        'e', 104,
        'i', 97,
        'm', 57,
        'n', 39,
        'o', 126,
        'p', 36,
        'r', 122,
        's', 59,
        '}', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(171);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(250);
      if (lookahead == '6') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(251);
      if (lookahead == '6') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '6') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(253);
      if (lookahead == '6') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '6') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'p') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == 'y') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 171},
  [59] = {.lex_state = 171},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 171},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 171},
  [76] = {.lex_state = 171},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 171},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 171},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 171},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 171},
  [125] = {.lex_state = 171},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 171},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 171},
  [135] = {.lex_state = 16},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 16},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 16},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(283),
    [sym_syntax] = STATE(50),
    [anon_sym_syntax] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_type,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [77] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      anon_sym_option,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_message,
    ACTIONS(50), 1,
      anon_sym_optional,
    ACTIONS(53), 1,
      anon_sym_repeated,
    ACTIONS(56), 1,
      anon_sym_oneof,
    ACTIONS(59), 1,
      anon_sym_map,
    ACTIONS(65), 1,
      anon_sym_reserved,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(62), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [154] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [231] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_type,
    STATE(5), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(79), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(83), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(87), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_option,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(287), 1,
      sym_type,
    STATE(17), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(97), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(101), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(105), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(109), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(113), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(117), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [751] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_option,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(287), 1,
      sym_type,
    STATE(20), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(127), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [872] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      anon_sym_option,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(287), 1,
      sym_type,
    STATE(20), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(140), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(148), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(152), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(156), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(160), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(164), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(168), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(172), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(176), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1203] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(180), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(184), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1263] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_repeated,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(227), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(192), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_hex_lit,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      sym_constant,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(206), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(227), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1417] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(280), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(218), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(148), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1537] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(206), 1,
      sym_message_or_enum_type,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(251), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_hex_lit,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym_constant,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(206), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(274), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(156), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1708] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(196), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1752] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(278), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1796] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(218), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1840] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(248), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(277), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1928] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(198), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(158), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(107), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2016] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(234), 1,
      anon_sym_package,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(238), 1,
      anon_sym_enum,
    ACTIONS(240), 1,
      anon_sym_message,
    ACTIONS(242), 1,
      anon_sym_service,
    STATE(51), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2054] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(234), 1,
      anon_sym_package,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(238), 1,
      anon_sym_enum,
    ACTIONS(240), 1,
      anon_sym_message,
    ACTIONS(242), 1,
      anon_sym_service,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(52), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2092] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_import,
    ACTIONS(254), 1,
      anon_sym_package,
    ACTIONS(257), 1,
      anon_sym_option,
    ACTIONS(260), 1,
      anon_sym_enum,
    ACTIONS(263), 1,
      anon_sym_message,
    ACTIONS(266), 1,
      anon_sym_service,
    STATE(52), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(223), 1,
      sym_key_type,
    ACTIONS(269), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(271), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_option,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(282), 1,
      sym_identifier,
    STATE(65), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2238] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      anon_sym_option,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      anon_sym_rpc,
    STATE(59), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2316] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_option,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(74), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2338] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_option,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(69), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(303), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_option,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(69), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      anon_sym_rpc,
    STATE(80), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2478] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(324), 1,
      sym_identifier,
    STATE(157), 1,
      sym_range,
    STATE(159), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(229), 2,
      sym_ranges,
      sym_field_names,
  [2502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(278), 1,
      anon_sym_option,
    ACTIONS(282), 1,
      sym_identifier,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(69), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(334), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(322), 1,
      anon_sym_rpc,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(59), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(341), 1,
      anon_sym_option,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(81), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2746] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(178), 1,
      sym_field_option,
    STATE(241), 1,
      sym_field_options,
    STATE(268), 1,
      sym_option_name,
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2776] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_hex_lit,
    ACTIONS(360), 1,
      sym_float_lit,
    STATE(89), 1,
      sym_int_lit,
    ACTIONS(206), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(364), 1,
      anon_sym_DASH,
    STATE(201), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(203), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(214), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2866] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(368), 1,
      anon_sym_stream,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(231), 1,
      sym_message_or_enum_type,
  [2885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(267), 1,
      sym_string,
    ACTIONS(370), 2,
      anon_sym_weak,
      anon_sym_public,
  [2902] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(202), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(178), 1,
      sym_field_option,
    STATE(228), 1,
      sym_field_options,
    STATE(268), 1,
      sym_option_name,
  [2938] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(178), 1,
      sym_field_option,
    STATE(265), 1,
      sym_field_options,
    STATE(268), 1,
      sym_option_name,
  [2957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_stream,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(224), 1,
      sym_message_or_enum_type,
  [2976] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(374), 1,
      anon_sym_stream,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(230), 1,
      sym_message_or_enum_type,
  [2995] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(222), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3012] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(376), 1,
      anon_sym_max,
    STATE(188), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3029] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(159), 1,
      sym_int_lit,
    STATE(219), 1,
      sym_range,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_hex_lit,
    ACTIONS(360), 1,
      sym_float_lit,
    STATE(89), 1,
      sym_int_lit,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(178), 1,
      sym_field_option,
    STATE(250), 1,
      sym_field_options,
    STATE(268), 1,
      sym_option_name,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(178), 1,
      sym_field_option,
    STATE(234), 1,
      sym_field_options,
    STATE(268), 1,
      sym_option_name,
  [3156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_octal_lit,
    STATE(30), 1,
      sym_field_number,
    STATE(32), 1,
      sym_int_lit,
    ACTIONS(386), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(392), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3185] = 5,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    ACTIONS(396), 1,
      aux_sym_string_token1,
    ACTIONS(398), 1,
      sym_escape_sequence,
    ACTIONS(400), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_string_repeat1,
  [3201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(402), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(408), 2,
      anon_sym_option,
      sym_identifier,
  [3225] = 5,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      aux_sym_string_token1,
    ACTIONS(415), 1,
      sym_escape_sequence,
    STATE(119), 1,
      aux_sym_string_repeat1,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(418), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(184), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3279] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(197), 1,
      sym_enum_value_option,
    STATE(289), 1,
      sym_option_name,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3315] = 5,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_string_token2,
    ACTIONS(430), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym_string_repeat2,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(220), 1,
      sym_field_option,
    STATE(268), 1,
      sym_option_name,
  [3357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(436), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
    ACTIONS(440), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3391] = 5,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    ACTIONS(444), 1,
      aux_sym_string_token2,
    ACTIONS(447), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym_string_repeat2,
  [3407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(452), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(458), 2,
      anon_sym_option,
      sym_identifier,
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(462), 2,
      anon_sym_option,
      sym_identifier,
  [3453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(161), 1,
      sym_enum_value_option,
    STATE(289), 1,
      sym_option_name,
  [3469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(148), 2,
      anon_sym_option,
      sym_identifier,
  [3481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(237), 1,
      sym_message_or_enum_type,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [3507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(231), 1,
      sym_message_or_enum_type,
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(123), 2,
      anon_sym_option,
      sym_identifier,
  [3535] = 5,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_string_token2,
    ACTIONS(466), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      sym_escape_sequence,
    STATE(126), 1,
      aux_sym_string_repeat2,
  [3551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(177), 1,
      sym_enum_value_option,
    STATE(289), 1,
      sym_option_name,
  [3567] = 5,
    ACTIONS(396), 1,
      aux_sym_string_token1,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      sym_escape_sequence,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [3583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(474), 2,
      anon_sym_option,
      sym_identifier,
  [3595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(209), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(279), 1,
      sym_message_or_enum_type,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(478), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(482), 2,
      anon_sym_option,
      sym_identifier,
  [3635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_field_names_repeat1,
  [3648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(256), 1,
      sym_string,
  [3661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_field_names_repeat1,
  [3674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_field_options_repeat1,
  [3687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(286), 1,
      sym_option_name,
  [3700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_block_lit_repeat1,
  [3713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_block_lit_repeat1,
  [3726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_ranges_repeat1,
  [3739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_block_lit_repeat1,
  [3752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_to,
    ACTIONS(508), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(285), 1,
      sym_option_name,
  [3776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_enum_field_repeat1,
  [3789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(518), 1,
      sym_identifier,
    STATE(166), 1,
      aux_sym_block_lit_repeat2,
  [3802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(520), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_option_name_repeat1,
  [3815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(284), 1,
      sym_option_name,
  [3828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_field_options_repeat1,
  [3841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(526), 1,
      sym_identifier,
    STATE(166), 1,
      aux_sym_block_lit_repeat2,
  [3854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      aux_sym_block_lit_repeat2,
  [3867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      anon_sym_EQ,
    STATE(163), 1,
      aux_sym_option_name_repeat1,
  [3880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_enum_field_repeat1,
  [3893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(263), 1,
      sym_option_name,
  [3906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym_option_name_repeat1,
  [3919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_enum_field_repeat1,
  [3932] = 3,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_SQUOTE,
    ACTIONS(544), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3943] = 3,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    ACTIONS(548), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_block_lit_repeat1,
  [3967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_block_lit_repeat1,
  [3980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_enum_field_repeat1,
  [3993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      aux_sym_field_options_repeat1,
  [4006] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      aux_sym_ranges_repeat1,
  [4019] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(563), 1,
      anon_sym_EQ,
    STATE(171), 1,
      aux_sym_option_name_repeat1,
  [4032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      aux_sym_enum_field_repeat1,
  [4045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_ranges_repeat1,
  [4058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_field_names_repeat1,
  [4071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    ACTIONS(574), 1,
      anon_sym_LBRACK,
  [4081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(186), 1,
      sym_enum_name,
  [4091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_enum_body,
  [4101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(252), 1,
      sym_full_ident,
  [4111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_message_body,
  [4129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_enum_body,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_message_body,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_identifier,
    STATE(257), 1,
      sym_service_name,
  [4167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(191), 1,
      sym_message_name,
  [4177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(190), 1,
      sym_enum_name,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    ACTIONS(598), 1,
      anon_sym_LBRACK,
  [4237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      anon_sym_LBRACK,
  [4247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
  [4257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_GT,
      sym_identifier,
  [4285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
  [4295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_identifier,
    STATE(189), 1,
      sym_message_name,
  [4305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(210), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      sym_identifier,
    STATE(210), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(245), 1,
      sym_rpc_name,
  [4343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(266), 1,
      sym_full_ident,
  [4353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
  [4363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
  [4373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(210), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
  [4433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COMMA,
  [4440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
  [4454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
  [4461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_identifier,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_SEMI,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [4496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_identifier,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_SEMI,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_EQ,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym_identifier,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_LT,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
  [4587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SEMI,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_EQ,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_SEMI,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_EQ,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_RBRACK,
  [4629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      sym_identifier,
  [4636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [4643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_identifier,
  [4650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_EQ,
  [4657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_SEMI,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SEMI,
  [4671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_LBRACE,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LBRACE,
  [4685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_COMMA,
  [4692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LBRACE,
  [4699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
  [4706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACE,
  [4713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_EQ,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_returns,
  [4727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [4734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [4741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_SEMI,
  [4748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_EQ,
  [4755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
  [4762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
  [4769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
  [4783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_DOT,
  [4790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_SEMI,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_EQ,
  [4804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_returns,
  [4811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SEMI,
  [4818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SEMI,
  [4825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
  [4832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_GT,
  [4839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_EQ,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_DQUOTEproto3_DQUOTE,
  [4853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      ts_builtin_sym_end,
  [4860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_EQ,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_EQ,
  [4874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_EQ,
  [4881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_EQ,
  [4895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 490,
  [SMALL_STATE(11)] = 541,
  [SMALL_STATE(12)] = 576,
  [SMALL_STATE(13)] = 611,
  [SMALL_STATE(14)] = 646,
  [SMALL_STATE(15)] = 681,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 751,
  [SMALL_STATE(18)] = 802,
  [SMALL_STATE(19)] = 837,
  [SMALL_STATE(20)] = 872,
  [SMALL_STATE(21)] = 923,
  [SMALL_STATE(22)] = 958,
  [SMALL_STATE(23)] = 993,
  [SMALL_STATE(24)] = 1028,
  [SMALL_STATE(25)] = 1063,
  [SMALL_STATE(26)] = 1098,
  [SMALL_STATE(27)] = 1133,
  [SMALL_STATE(28)] = 1168,
  [SMALL_STATE(29)] = 1203,
  [SMALL_STATE(30)] = 1232,
  [SMALL_STATE(31)] = 1263,
  [SMALL_STATE(32)] = 1302,
  [SMALL_STATE(33)] = 1331,
  [SMALL_STATE(34)] = 1381,
  [SMALL_STATE(35)] = 1417,
  [SMALL_STATE(36)] = 1453,
  [SMALL_STATE(37)] = 1481,
  [SMALL_STATE(38)] = 1509,
  [SMALL_STATE(39)] = 1537,
  [SMALL_STATE(40)] = 1573,
  [SMALL_STATE(41)] = 1620,
  [SMALL_STATE(42)] = 1664,
  [SMALL_STATE(43)] = 1708,
  [SMALL_STATE(44)] = 1752,
  [SMALL_STATE(45)] = 1796,
  [SMALL_STATE(46)] = 1840,
  [SMALL_STATE(47)] = 1884,
  [SMALL_STATE(48)] = 1928,
  [SMALL_STATE(49)] = 1972,
  [SMALL_STATE(50)] = 2016,
  [SMALL_STATE(51)] = 2054,
  [SMALL_STATE(52)] = 2092,
  [SMALL_STATE(53)] = 2130,
  [SMALL_STATE(54)] = 2151,
  [SMALL_STATE(55)] = 2167,
  [SMALL_STATE(56)] = 2183,
  [SMALL_STATE(57)] = 2202,
  [SMALL_STATE(58)] = 2224,
  [SMALL_STATE(59)] = 2238,
  [SMALL_STATE(60)] = 2260,
  [SMALL_STATE(61)] = 2274,
  [SMALL_STATE(62)] = 2288,
  [SMALL_STATE(63)] = 2302,
  [SMALL_STATE(64)] = 2316,
  [SMALL_STATE(65)] = 2338,
  [SMALL_STATE(66)] = 2360,
  [SMALL_STATE(67)] = 2378,
  [SMALL_STATE(68)] = 2392,
  [SMALL_STATE(69)] = 2406,
  [SMALL_STATE(70)] = 2428,
  [SMALL_STATE(71)] = 2442,
  [SMALL_STATE(72)] = 2456,
  [SMALL_STATE(73)] = 2478,
  [SMALL_STATE(74)] = 2502,
  [SMALL_STATE(75)] = 2524,
  [SMALL_STATE(76)] = 2538,
  [SMALL_STATE(77)] = 2552,
  [SMALL_STATE(78)] = 2566,
  [SMALL_STATE(79)] = 2580,
  [SMALL_STATE(80)] = 2598,
  [SMALL_STATE(81)] = 2620,
  [SMALL_STATE(82)] = 2638,
  [SMALL_STATE(83)] = 2656,
  [SMALL_STATE(84)] = 2674,
  [SMALL_STATE(85)] = 2692,
  [SMALL_STATE(86)] = 2710,
  [SMALL_STATE(87)] = 2728,
  [SMALL_STATE(88)] = 2746,
  [SMALL_STATE(89)] = 2765,
  [SMALL_STATE(90)] = 2776,
  [SMALL_STATE(91)] = 2793,
  [SMALL_STATE(92)] = 2804,
  [SMALL_STATE(93)] = 2821,
  [SMALL_STATE(94)] = 2838,
  [SMALL_STATE(95)] = 2855,
  [SMALL_STATE(96)] = 2866,
  [SMALL_STATE(97)] = 2885,
  [SMALL_STATE(98)] = 2902,
  [SMALL_STATE(99)] = 2919,
  [SMALL_STATE(100)] = 2938,
  [SMALL_STATE(101)] = 2957,
  [SMALL_STATE(102)] = 2976,
  [SMALL_STATE(103)] = 2995,
  [SMALL_STATE(104)] = 3012,
  [SMALL_STATE(105)] = 3029,
  [SMALL_STATE(106)] = 3046,
  [SMALL_STATE(107)] = 3057,
  [SMALL_STATE(108)] = 3068,
  [SMALL_STATE(109)] = 3079,
  [SMALL_STATE(110)] = 3090,
  [SMALL_STATE(111)] = 3107,
  [SMALL_STATE(112)] = 3126,
  [SMALL_STATE(113)] = 3137,
  [SMALL_STATE(114)] = 3156,
  [SMALL_STATE(115)] = 3173,
  [SMALL_STATE(116)] = 3185,
  [SMALL_STATE(117)] = 3201,
  [SMALL_STATE(118)] = 3213,
  [SMALL_STATE(119)] = 3225,
  [SMALL_STATE(120)] = 3241,
  [SMALL_STATE(121)] = 3253,
  [SMALL_STATE(122)] = 3267,
  [SMALL_STATE(123)] = 3279,
  [SMALL_STATE(124)] = 3295,
  [SMALL_STATE(125)] = 3305,
  [SMALL_STATE(126)] = 3315,
  [SMALL_STATE(127)] = 3331,
  [SMALL_STATE(128)] = 3341,
  [SMALL_STATE(129)] = 3357,
  [SMALL_STATE(130)] = 3369,
  [SMALL_STATE(131)] = 3379,
  [SMALL_STATE(132)] = 3391,
  [SMALL_STATE(133)] = 3407,
  [SMALL_STATE(134)] = 3419,
  [SMALL_STATE(135)] = 3429,
  [SMALL_STATE(136)] = 3441,
  [SMALL_STATE(137)] = 3453,
  [SMALL_STATE(138)] = 3469,
  [SMALL_STATE(139)] = 3481,
  [SMALL_STATE(140)] = 3497,
  [SMALL_STATE(141)] = 3507,
  [SMALL_STATE(142)] = 3523,
  [SMALL_STATE(143)] = 3535,
  [SMALL_STATE(144)] = 3551,
  [SMALL_STATE(145)] = 3567,
  [SMALL_STATE(146)] = 3583,
  [SMALL_STATE(147)] = 3595,
  [SMALL_STATE(148)] = 3611,
  [SMALL_STATE(149)] = 3623,
  [SMALL_STATE(150)] = 3635,
  [SMALL_STATE(151)] = 3648,
  [SMALL_STATE(152)] = 3661,
  [SMALL_STATE(153)] = 3674,
  [SMALL_STATE(154)] = 3687,
  [SMALL_STATE(155)] = 3700,
  [SMALL_STATE(156)] = 3713,
  [SMALL_STATE(157)] = 3726,
  [SMALL_STATE(158)] = 3739,
  [SMALL_STATE(159)] = 3752,
  [SMALL_STATE(160)] = 3763,
  [SMALL_STATE(161)] = 3776,
  [SMALL_STATE(162)] = 3789,
  [SMALL_STATE(163)] = 3802,
  [SMALL_STATE(164)] = 3815,
  [SMALL_STATE(165)] = 3828,
  [SMALL_STATE(166)] = 3841,
  [SMALL_STATE(167)] = 3854,
  [SMALL_STATE(168)] = 3867,
  [SMALL_STATE(169)] = 3880,
  [SMALL_STATE(170)] = 3893,
  [SMALL_STATE(171)] = 3906,
  [SMALL_STATE(172)] = 3919,
  [SMALL_STATE(173)] = 3932,
  [SMALL_STATE(174)] = 3943,
  [SMALL_STATE(175)] = 3954,
  [SMALL_STATE(176)] = 3967,
  [SMALL_STATE(177)] = 3980,
  [SMALL_STATE(178)] = 3993,
  [SMALL_STATE(179)] = 4006,
  [SMALL_STATE(180)] = 4019,
  [SMALL_STATE(181)] = 4032,
  [SMALL_STATE(182)] = 4045,
  [SMALL_STATE(183)] = 4058,
  [SMALL_STATE(184)] = 4071,
  [SMALL_STATE(185)] = 4081,
  [SMALL_STATE(186)] = 4091,
  [SMALL_STATE(187)] = 4101,
  [SMALL_STATE(188)] = 4111,
  [SMALL_STATE(189)] = 4119,
  [SMALL_STATE(190)] = 4129,
  [SMALL_STATE(191)] = 4139,
  [SMALL_STATE(192)] = 4149,
  [SMALL_STATE(193)] = 4157,
  [SMALL_STATE(194)] = 4167,
  [SMALL_STATE(195)] = 4177,
  [SMALL_STATE(196)] = 4185,
  [SMALL_STATE(197)] = 4193,
  [SMALL_STATE(198)] = 4201,
  [SMALL_STATE(199)] = 4209,
  [SMALL_STATE(200)] = 4219,
  [SMALL_STATE(201)] = 4227,
  [SMALL_STATE(202)] = 4237,
  [SMALL_STATE(203)] = 4247,
  [SMALL_STATE(204)] = 4257,
  [SMALL_STATE(205)] = 4267,
  [SMALL_STATE(206)] = 4277,
  [SMALL_STATE(207)] = 4285,
  [SMALL_STATE(208)] = 4295,
  [SMALL_STATE(209)] = 4305,
  [SMALL_STATE(210)] = 4315,
  [SMALL_STATE(211)] = 4325,
  [SMALL_STATE(212)] = 4333,
  [SMALL_STATE(213)] = 4343,
  [SMALL_STATE(214)] = 4353,
  [SMALL_STATE(215)] = 4363,
  [SMALL_STATE(216)] = 4373,
  [SMALL_STATE(217)] = 4383,
  [SMALL_STATE(218)] = 4391,
  [SMALL_STATE(219)] = 4399,
  [SMALL_STATE(220)] = 4407,
  [SMALL_STATE(221)] = 4415,
  [SMALL_STATE(222)] = 4423,
  [SMALL_STATE(223)] = 4433,
  [SMALL_STATE(224)] = 4440,
  [SMALL_STATE(225)] = 4447,
  [SMALL_STATE(226)] = 4454,
  [SMALL_STATE(227)] = 4461,
  [SMALL_STATE(228)] = 4468,
  [SMALL_STATE(229)] = 4475,
  [SMALL_STATE(230)] = 4482,
  [SMALL_STATE(231)] = 4489,
  [SMALL_STATE(232)] = 4496,
  [SMALL_STATE(233)] = 4503,
  [SMALL_STATE(234)] = 4510,
  [SMALL_STATE(235)] = 4517,
  [SMALL_STATE(236)] = 4524,
  [SMALL_STATE(237)] = 4531,
  [SMALL_STATE(238)] = 4538,
  [SMALL_STATE(239)] = 4545,
  [SMALL_STATE(240)] = 4552,
  [SMALL_STATE(241)] = 4559,
  [SMALL_STATE(242)] = 4566,
  [SMALL_STATE(243)] = 4573,
  [SMALL_STATE(244)] = 4580,
  [SMALL_STATE(245)] = 4587,
  [SMALL_STATE(246)] = 4594,
  [SMALL_STATE(247)] = 4601,
  [SMALL_STATE(248)] = 4608,
  [SMALL_STATE(249)] = 4615,
  [SMALL_STATE(250)] = 4622,
  [SMALL_STATE(251)] = 4629,
  [SMALL_STATE(252)] = 4636,
  [SMALL_STATE(253)] = 4643,
  [SMALL_STATE(254)] = 4650,
  [SMALL_STATE(255)] = 4657,
  [SMALL_STATE(256)] = 4664,
  [SMALL_STATE(257)] = 4671,
  [SMALL_STATE(258)] = 4678,
  [SMALL_STATE(259)] = 4685,
  [SMALL_STATE(260)] = 4692,
  [SMALL_STATE(261)] = 4699,
  [SMALL_STATE(262)] = 4706,
  [SMALL_STATE(263)] = 4713,
  [SMALL_STATE(264)] = 4720,
  [SMALL_STATE(265)] = 4727,
  [SMALL_STATE(266)] = 4734,
  [SMALL_STATE(267)] = 4741,
  [SMALL_STATE(268)] = 4748,
  [SMALL_STATE(269)] = 4755,
  [SMALL_STATE(270)] = 4762,
  [SMALL_STATE(271)] = 4769,
  [SMALL_STATE(272)] = 4776,
  [SMALL_STATE(273)] = 4783,
  [SMALL_STATE(274)] = 4790,
  [SMALL_STATE(275)] = 4797,
  [SMALL_STATE(276)] = 4804,
  [SMALL_STATE(277)] = 4811,
  [SMALL_STATE(278)] = 4818,
  [SMALL_STATE(279)] = 4825,
  [SMALL_STATE(280)] = 4832,
  [SMALL_STATE(281)] = 4839,
  [SMALL_STATE(282)] = 4846,
  [SMALL_STATE(283)] = 4853,
  [SMALL_STATE(284)] = 4860,
  [SMALL_STATE(285)] = 4867,
  [SMALL_STATE(286)] = 4874,
  [SMALL_STATE(287)] = 4881,
  [SMALL_STATE(288)] = 4888,
  [SMALL_STATE(289)] = 4895,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(206),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(173),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(132),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2, 0, 0),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1, 0, 0),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 4, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2, 0, 0),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 3, 0, 0),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1, 0, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1, 0, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1, 0, 1),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2, 0, 0),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1, 0, 0),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [757] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_proto(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
