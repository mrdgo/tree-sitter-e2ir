#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOTglobal = 1,
  anon_sym_COLON = 2,
  anon_sym_DOTfunc = 3,
  anon_sym_DOTcode = 4,
  anon_sym_DOTparam = 5,
  anon_sym_DOTlocal = 6,
  anon_sym_DOTvirt = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_int = 10,
  anon_sym_real = 11,
  sym_nop = 12,
  anon_sym_EQ = 13,
  anon_sym_mov = 14,
  anon_sym_phi = 15,
  anon_sym_LPAREN = 16,
  anon_sym_COMMA = 17,
  anon_sym_RPAREN = 18,
  anon_sym_add = 19,
  anon_sym_sub = 20,
  anon_sym_mul = 21,
  anon_sym_div = 22,
  anon_sym_COMMA2 = 23,
  anon_sym_jmp = 24,
  anon_sym_jeq = 25,
  anon_sym_jne = 26,
  anon_sym_jlt = 27,
  anon_sym_jgt = 28,
  anon_sym_jle = 29,
  anon_sym_jge = 30,
  anon_sym_call = 31,
  anon_sym_ret = 32,
  anon_sym_load = 33,
  anon_sym_store = 34,
  anon_sym_i2r = 35,
  anon_sym_r2i = 36,
  sym_label = 37,
  sym_identifier = 38,
  sym_integer_constant = 39,
  sym_real_constant = 40,
  sym_array_size = 41,
  sym_comment = 42,
  sym_line_continuation = 43,
  sym_source_file = 44,
  sym_global_variable_declaration = 45,
  sym_function_declaration = 46,
  sym_parameter_declaration = 47,
  sym_local_variable_declaration = 48,
  sym_virtual_register_declaration = 49,
  sym_type_name = 50,
  sym_dimension = 51,
  sym_primitive_type_name = 52,
  sym_instruction = 53,
  sym_mov = 54,
  sym_phi = 55,
  sym_arithmetic = 56,
  sym_unconditional_jump = 57,
  sym_conditional_jump = 58,
  sym_call = 59,
  sym_ret = 60,
  sym_load = 61,
  sym_store = 62,
  sym_cast = 63,
  sym_operand = 64,
  sym_variable_operand = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_function_declaration_repeat1 = 67,
  aux_sym_function_declaration_repeat2 = 68,
  aux_sym_function_declaration_repeat3 = 69,
  aux_sym_function_declaration_repeat4 = 70,
  aux_sym_parameter_declaration_repeat1 = 71,
  aux_sym_type_name_repeat1 = 72,
  aux_sym_phi_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTglobal] = ".global",
  [anon_sym_COLON] = ":",
  [anon_sym_DOTfunc] = ".func",
  [anon_sym_DOTcode] = ".code",
  [anon_sym_DOTparam] = ".param",
  [anon_sym_DOTlocal] = ".local",
  [anon_sym_DOTvirt] = ".virt",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_int] = "int",
  [anon_sym_real] = "real",
  [sym_nop] = "nop",
  [anon_sym_EQ] = "=",
  [anon_sym_mov] = "mov",
  [anon_sym_phi] = "phi",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_add] = "add",
  [anon_sym_sub] = "sub",
  [anon_sym_mul] = "mul",
  [anon_sym_div] = "div",
  [anon_sym_COMMA2] = ", ",
  [anon_sym_jmp] = "jmp",
  [anon_sym_jeq] = "jeq",
  [anon_sym_jne] = "jne",
  [anon_sym_jlt] = "jlt",
  [anon_sym_jgt] = "jgt",
  [anon_sym_jle] = "jle",
  [anon_sym_jge] = "jge",
  [anon_sym_call] = "call",
  [anon_sym_ret] = "ret",
  [anon_sym_load] = "load",
  [anon_sym_store] = "store",
  [anon_sym_i2r] = "i2r",
  [anon_sym_r2i] = "r2i",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym_integer_constant] = "integer_constant",
  [sym_real_constant] = "real_constant",
  [sym_array_size] = "array_size",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [sym_source_file] = "source_file",
  [sym_global_variable_declaration] = "global_variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym_local_variable_declaration] = "local_variable_declaration",
  [sym_virtual_register_declaration] = "virtual_register_declaration",
  [sym_type_name] = "type_name",
  [sym_dimension] = "dimension",
  [sym_primitive_type_name] = "primitive_type_name",
  [sym_instruction] = "instruction",
  [sym_mov] = "mov",
  [sym_phi] = "phi",
  [sym_arithmetic] = "arithmetic",
  [sym_unconditional_jump] = "unconditional_jump",
  [sym_conditional_jump] = "conditional_jump",
  [sym_call] = "call",
  [sym_ret] = "ret",
  [sym_load] = "load",
  [sym_store] = "store",
  [sym_cast] = "cast",
  [sym_operand] = "operand",
  [sym_variable_operand] = "variable_operand",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_function_declaration_repeat2] = "function_declaration_repeat2",
  [aux_sym_function_declaration_repeat3] = "function_declaration_repeat3",
  [aux_sym_function_declaration_repeat4] = "function_declaration_repeat4",
  [aux_sym_parameter_declaration_repeat1] = "parameter_declaration_repeat1",
  [aux_sym_type_name_repeat1] = "type_name_repeat1",
  [aux_sym_phi_repeat1] = "phi_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTglobal] = anon_sym_DOTglobal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOTfunc] = anon_sym_DOTfunc,
  [anon_sym_DOTcode] = anon_sym_DOTcode,
  [anon_sym_DOTparam] = anon_sym_DOTparam,
  [anon_sym_DOTlocal] = anon_sym_DOTlocal,
  [anon_sym_DOTvirt] = anon_sym_DOTvirt,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_real] = anon_sym_real,
  [sym_nop] = sym_nop,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_mov] = anon_sym_mov,
  [anon_sym_phi] = anon_sym_phi,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_mul] = anon_sym_mul,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_COMMA2] = anon_sym_COMMA2,
  [anon_sym_jmp] = anon_sym_jmp,
  [anon_sym_jeq] = anon_sym_jeq,
  [anon_sym_jne] = anon_sym_jne,
  [anon_sym_jlt] = anon_sym_jlt,
  [anon_sym_jgt] = anon_sym_jgt,
  [anon_sym_jle] = anon_sym_jle,
  [anon_sym_jge] = anon_sym_jge,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_ret] = anon_sym_ret,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_i2r] = anon_sym_i2r,
  [anon_sym_r2i] = anon_sym_r2i,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym_integer_constant] = sym_integer_constant,
  [sym_real_constant] = sym_real_constant,
  [sym_array_size] = sym_array_size,
  [sym_comment] = sym_comment,
  [sym_line_continuation] = sym_line_continuation,
  [sym_source_file] = sym_source_file,
  [sym_global_variable_declaration] = sym_global_variable_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym_local_variable_declaration] = sym_local_variable_declaration,
  [sym_virtual_register_declaration] = sym_virtual_register_declaration,
  [sym_type_name] = sym_type_name,
  [sym_dimension] = sym_dimension,
  [sym_primitive_type_name] = sym_primitive_type_name,
  [sym_instruction] = sym_instruction,
  [sym_mov] = sym_mov,
  [sym_phi] = sym_phi,
  [sym_arithmetic] = sym_arithmetic,
  [sym_unconditional_jump] = sym_unconditional_jump,
  [sym_conditional_jump] = sym_conditional_jump,
  [sym_call] = sym_call,
  [sym_ret] = sym_ret,
  [sym_load] = sym_load,
  [sym_store] = sym_store,
  [sym_cast] = sym_cast,
  [sym_operand] = sym_operand,
  [sym_variable_operand] = sym_variable_operand,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_function_declaration_repeat2] = aux_sym_function_declaration_repeat2,
  [aux_sym_function_declaration_repeat3] = aux_sym_function_declaration_repeat3,
  [aux_sym_function_declaration_repeat4] = aux_sym_function_declaration_repeat4,
  [aux_sym_parameter_declaration_repeat1] = aux_sym_parameter_declaration_repeat1,
  [aux_sym_type_name_repeat1] = aux_sym_type_name_repeat1,
  [aux_sym_phi_repeat1] = aux_sym_phi_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTglobal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTvirt] = {
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
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [sym_nop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phi] = {
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
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jeq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jlt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jgt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i2r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r2i] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_real_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_array_size] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_virtual_register_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_mov] = {
    .visible = true,
    .named = true,
  },
  [sym_phi] = {
    .visible = true,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_unconditional_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_ret] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_store] = {
    .visible = true,
    .named = true,
  },
  [sym_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_operand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_phi_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [5] = 5,
  [6] = 6,
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
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
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
  [108] = 108,
  [109] = 109,
  [110] = 110,
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
  [123] = 15,
  [124] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'j') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'q') ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(137);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(64)
      if (lookahead == '\r') SKIP(64)
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (lookahead == '\r') SKIP(67)
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'L') ADVANCE(117);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'j') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOTglobal);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOTfunc);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOTcode);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOTlocal);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOTvirt);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_nop);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_nop);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_phi);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_jeq);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_jeq);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_jne);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_jlt);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_jlt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_jgt);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_jgt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_jle);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_jge);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_i2r);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_r2i);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(96);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_integer_constant);
      if (lookahead == '.') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_real_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_array_size);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 67},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 67},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 64},
  [51] = {.lex_state = 64},
  [52] = {.lex_state = 64},
  [53] = {.lex_state = 64},
  [54] = {.lex_state = 64},
  [55] = {.lex_state = 64},
  [56] = {.lex_state = 64},
  [57] = {.lex_state = 64},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 64},
  [60] = {.lex_state = 64},
  [61] = {.lex_state = 64},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 64},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 64},
  [81] = {.lex_state = 64},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 64},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 64},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 64},
  [93] = {.lex_state = 64},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 64},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 64},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 64},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 64},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 64},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 64},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 64},
  [123] = {.lex_state = 64},
  [124] = {.lex_state = 64},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTglobal] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOTfunc] = ACTIONS(1),
    [anon_sym_DOTcode] = ACTIONS(1),
    [anon_sym_DOTparam] = ACTIONS(1),
    [anon_sym_DOTlocal] = ACTIONS(1),
    [anon_sym_DOTvirt] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [sym_nop] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_mov] = ACTIONS(1),
    [anon_sym_phi] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_mul] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_jmp] = ACTIONS(1),
    [anon_sym_jeq] = ACTIONS(1),
    [anon_sym_jne] = ACTIONS(1),
    [anon_sym_jlt] = ACTIONS(1),
    [anon_sym_jgt] = ACTIONS(1),
    [anon_sym_jle] = ACTIONS(1),
    [anon_sym_jge] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_ret] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_i2r] = ACTIONS(1),
    [anon_sym_r2i] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_integer_constant] = ACTIONS(1),
    [sym_real_constant] = ACTIONS(1),
    [sym_array_size] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(121),
    [sym_global_variable_declaration] = STATE(47),
    [sym_function_declaration] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOTglobal] = ACTIONS(7),
    [anon_sym_DOTfunc] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [53] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [106] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(7), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [159] = 11,
    ACTIONS(32), 1,
      anon_sym_jmp,
    ACTIONS(38), 1,
      anon_sym_call,
    ACTIONS(41), 1,
      anon_sym_ret,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(29), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(35), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [212] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(3), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [265] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [318] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(11), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [371] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(14), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [424] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(2), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [477] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [530] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [583] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(12), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [636] = 11,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(101), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(13), 2,
      sym_nop,
      sym_label,
    STATE(5), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(17), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(26), 10,
      sym_mov,
      sym_phi,
      sym_arithmetic,
      sym_unconditional_jump,
      sym_conditional_jump,
      sym_call,
      sym_ret,
      sym_load,
      sym_store,
      sym_cast,
  [689] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(59), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [718] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    STATE(17), 1,
      sym_variable_operand,
    STATE(19), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(63), 11,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
  [756] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(71), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [783] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(75), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [807] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(79), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [831] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(83), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [855] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(87), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [879] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(91), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [903] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(95), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [927] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(99), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [951] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(103), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [975] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(107), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [999] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(111), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [1023] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(115), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [1047] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(119), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [1071] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(123), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [1095] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(127), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [1119] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(131), 12,
      sym_nop,
      anon_sym_jmp,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
      anon_sym_call,
      anon_sym_ret,
      sym_label,
      sym_identifier,
  [1143] = 9,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      anon_sym_DOTcode,
    ACTIONS(137), 1,
      anon_sym_DOTparam,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(35), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(44), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(70), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1175] = 8,
    ACTIONS(137), 1,
      anon_sym_DOTparam,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(143), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(45), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(48), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(69), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1204] = 8,
    ACTIONS(137), 1,
      anon_sym_DOTparam,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(145), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(43), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(48), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(77), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1233] = 7,
    ACTIONS(147), 1,
      anon_sym_mov,
    ACTIONS(149), 1,
      anon_sym_phi,
    ACTIONS(153), 1,
      anon_sym_call,
    ACTIONS(155), 1,
      anon_sym_load,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(157), 2,
      anon_sym_i2r,
      anon_sym_r2i,
    ACTIONS(151), 4,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
  [1260] = 4,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(39), 2,
      sym_dimension,
      aux_sym_type_name_repeat1,
    ACTIONS(159), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1281] = 4,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_dimension,
      aux_sym_type_name_repeat1,
    ACTIONS(163), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1302] = 4,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_dimension,
      aux_sym_type_name_repeat1,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1323] = 8,
    ACTIONS(137), 1,
      anon_sym_DOTparam,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(170), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(34), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(46), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(78), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1352] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
      anon_sym_LBRACK,
  [1367] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
      anon_sym_LBRACK,
  [1382] = 6,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(170), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(62), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(78), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1404] = 6,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(145), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(62), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(77), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1426] = 6,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(176), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(62), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(76), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1448] = 6,
    ACTIONS(139), 1,
      anon_sym_DOTlocal,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(143), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(62), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(69), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1470] = 5,
    ACTIONS(7), 1,
      anon_sym_DOTglobal,
    ACTIONS(9), 1,
      anon_sym_DOTfunc,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(49), 3,
      sym_global_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [1489] = 4,
    ACTIONS(182), 1,
      anon_sym_DOTparam,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(48), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    ACTIONS(180), 3,
      anon_sym_DOTcode,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1506] = 5,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_DOTglobal,
    ACTIONS(190), 1,
      anon_sym_DOTfunc,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(49), 3,
      sym_global_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [1525] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(27), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1545] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(30), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1565] = 6,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_integer_constant,
    ACTIONS(199), 1,
      sym_real_constant,
    STATE(114), 1,
      sym_operand,
    STATE(124), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1585] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(113), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1605] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(88), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1625] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(25), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1645] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(29), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1665] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(89), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1685] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(117), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1705] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(97), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1725] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(116), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1745] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(120), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1765] = 4,
    ACTIONS(203), 1,
      anon_sym_DOTlocal,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(201), 2,
      anon_sym_DOTcode,
      anon_sym_DOTvirt,
    STATE(62), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
  [1781] = 6,
    ACTIONS(65), 1,
      sym_integer_constant,
    ACTIONS(67), 1,
      sym_real_constant,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(96), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1801] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(99), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1816] = 4,
    ACTIONS(208), 1,
      anon_sym_DOTcode,
    ACTIONS(210), 1,
      anon_sym_DOTvirt,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1831] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(86), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1846] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(40), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1861] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(84), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1876] = 4,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(176), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1891] = 4,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(145), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1906] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(75), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1921] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(87), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1936] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(79), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1951] = 4,
    STATE(37), 1,
      sym_primitive_type_name,
    STATE(98), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(206), 2,
      anon_sym_int,
      anon_sym_real,
  [1966] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(213), 4,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1977] = 4,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(215), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1992] = 4,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(170), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [2007] = 4,
    ACTIONS(141), 1,
      anon_sym_DOTvirt,
    ACTIONS(143), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [2022] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(217), 4,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2033] = 4,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2047] = 4,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2061] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2075] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2089] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(231), 3,
      anon_sym_DOTcode,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2099] = 4,
    ACTIONS(221), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_COLON,
    STATE(95), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2113] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
  [2123] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(237), 3,
      anon_sym_DOTcode,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2133] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2147] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2161] = 4,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(85), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2175] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2189] = 4,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(81), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2203] = 4,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(80), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2217] = 4,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2231] = 4,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2245] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2259] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2268] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(269), 2,
      anon_sym_DOTcode,
      anon_sym_DOTvirt,
  [2277] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(271), 2,
      anon_sym_DOTcode,
      anon_sym_DOTvirt,
  [2286] = 3,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(112), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2297] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2308] = 2,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2316] = 2,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2324] = 2,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2332] = 2,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2340] = 2,
    ACTIONS(285), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2348] = 2,
    ACTIONS(287), 1,
      anon_sym_store,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2356] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2364] = 2,
    ACTIONS(291), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2372] = 2,
    ACTIONS(293), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2380] = 2,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2388] = 2,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2396] = 2,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2404] = 2,
    ACTIONS(301), 1,
      anon_sym_COMMA2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2412] = 2,
    ACTIONS(303), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2420] = 2,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2428] = 2,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2436] = 2,
    ACTIONS(309), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2444] = 2,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2452] = 2,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2460] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2468] = 2,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2476] = 2,
    ACTIONS(57), 1,
      anon_sym_COMMA2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2484] = 2,
    ACTIONS(69), 1,
      anon_sym_COMMA2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 371,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 477,
  [SMALL_STATE(12)] = 530,
  [SMALL_STATE(13)] = 583,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 689,
  [SMALL_STATE(16)] = 718,
  [SMALL_STATE(17)] = 756,
  [SMALL_STATE(18)] = 783,
  [SMALL_STATE(19)] = 807,
  [SMALL_STATE(20)] = 831,
  [SMALL_STATE(21)] = 855,
  [SMALL_STATE(22)] = 879,
  [SMALL_STATE(23)] = 903,
  [SMALL_STATE(24)] = 927,
  [SMALL_STATE(25)] = 951,
  [SMALL_STATE(26)] = 975,
  [SMALL_STATE(27)] = 999,
  [SMALL_STATE(28)] = 1023,
  [SMALL_STATE(29)] = 1047,
  [SMALL_STATE(30)] = 1071,
  [SMALL_STATE(31)] = 1095,
  [SMALL_STATE(32)] = 1119,
  [SMALL_STATE(33)] = 1143,
  [SMALL_STATE(34)] = 1175,
  [SMALL_STATE(35)] = 1204,
  [SMALL_STATE(36)] = 1233,
  [SMALL_STATE(37)] = 1260,
  [SMALL_STATE(38)] = 1281,
  [SMALL_STATE(39)] = 1302,
  [SMALL_STATE(40)] = 1323,
  [SMALL_STATE(41)] = 1352,
  [SMALL_STATE(42)] = 1367,
  [SMALL_STATE(43)] = 1382,
  [SMALL_STATE(44)] = 1404,
  [SMALL_STATE(45)] = 1426,
  [SMALL_STATE(46)] = 1448,
  [SMALL_STATE(47)] = 1470,
  [SMALL_STATE(48)] = 1489,
  [SMALL_STATE(49)] = 1506,
  [SMALL_STATE(50)] = 1525,
  [SMALL_STATE(51)] = 1545,
  [SMALL_STATE(52)] = 1565,
  [SMALL_STATE(53)] = 1585,
  [SMALL_STATE(54)] = 1605,
  [SMALL_STATE(55)] = 1625,
  [SMALL_STATE(56)] = 1645,
  [SMALL_STATE(57)] = 1665,
  [SMALL_STATE(58)] = 1685,
  [SMALL_STATE(59)] = 1705,
  [SMALL_STATE(60)] = 1725,
  [SMALL_STATE(61)] = 1745,
  [SMALL_STATE(62)] = 1765,
  [SMALL_STATE(63)] = 1781,
  [SMALL_STATE(64)] = 1801,
  [SMALL_STATE(65)] = 1816,
  [SMALL_STATE(66)] = 1831,
  [SMALL_STATE(67)] = 1846,
  [SMALL_STATE(68)] = 1861,
  [SMALL_STATE(69)] = 1876,
  [SMALL_STATE(70)] = 1891,
  [SMALL_STATE(71)] = 1906,
  [SMALL_STATE(72)] = 1921,
  [SMALL_STATE(73)] = 1936,
  [SMALL_STATE(74)] = 1951,
  [SMALL_STATE(75)] = 1966,
  [SMALL_STATE(76)] = 1977,
  [SMALL_STATE(77)] = 1992,
  [SMALL_STATE(78)] = 2007,
  [SMALL_STATE(79)] = 2022,
  [SMALL_STATE(80)] = 2033,
  [SMALL_STATE(81)] = 2047,
  [SMALL_STATE(82)] = 2061,
  [SMALL_STATE(83)] = 2075,
  [SMALL_STATE(84)] = 2089,
  [SMALL_STATE(85)] = 2099,
  [SMALL_STATE(86)] = 2113,
  [SMALL_STATE(87)] = 2123,
  [SMALL_STATE(88)] = 2133,
  [SMALL_STATE(89)] = 2147,
  [SMALL_STATE(90)] = 2161,
  [SMALL_STATE(91)] = 2175,
  [SMALL_STATE(92)] = 2189,
  [SMALL_STATE(93)] = 2203,
  [SMALL_STATE(94)] = 2217,
  [SMALL_STATE(95)] = 2231,
  [SMALL_STATE(96)] = 2245,
  [SMALL_STATE(97)] = 2259,
  [SMALL_STATE(98)] = 2268,
  [SMALL_STATE(99)] = 2277,
  [SMALL_STATE(100)] = 2286,
  [SMALL_STATE(101)] = 2297,
  [SMALL_STATE(102)] = 2308,
  [SMALL_STATE(103)] = 2316,
  [SMALL_STATE(104)] = 2324,
  [SMALL_STATE(105)] = 2332,
  [SMALL_STATE(106)] = 2340,
  [SMALL_STATE(107)] = 2348,
  [SMALL_STATE(108)] = 2356,
  [SMALL_STATE(109)] = 2364,
  [SMALL_STATE(110)] = 2372,
  [SMALL_STATE(111)] = 2380,
  [SMALL_STATE(112)] = 2388,
  [SMALL_STATE(113)] = 2396,
  [SMALL_STATE(114)] = 2404,
  [SMALL_STATE(115)] = 2412,
  [SMALL_STATE(116)] = 2420,
  [SMALL_STATE(117)] = 2428,
  [SMALL_STATE(118)] = 2436,
  [SMALL_STATE(119)] = 2444,
  [SMALL_STATE(120)] = 2452,
  [SMALL_STATE(121)] = 2460,
  [SMALL_STATE(122)] = 2468,
  [SMALL_STATE(123)] = 2476,
  [SMALL_STATE(124)] = 2484,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat4, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(106),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(61),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(105),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(16),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_operand, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_operand, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unconditional_jump, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unconditional_jump, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_jump, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_jump, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phi, 7),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 7),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_store, 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phi, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 8),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2), SHIFT_REPEAT(118),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type_name, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(90),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat2, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat2, 2), SHIFT_REPEAT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat3, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat3, 2), SHIFT_REPEAT(93),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_declaration, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2), SHIFT_REPEAT(59),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(95),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_virtual_register_declaration, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_virtual_register_declaration, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [315] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_e2ir(void) {
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
