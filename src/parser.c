#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  anon_sym_bool = 12,
  sym_nop = 13,
  anon_sym_EQ = 14,
  anon_sym_mov = 15,
  anon_sym_phi = 16,
  anon_sym_LPAREN = 17,
  anon_sym_COMMA = 18,
  anon_sym_RPAREN = 19,
  anon_sym_add = 20,
  anon_sym_sub = 21,
  anon_sym_mul = 22,
  anon_sym_div = 23,
  anon_sym_COMMA2 = 24,
  anon_sym_jmp = 25,
  anon_sym_jeq = 26,
  anon_sym_jne = 27,
  anon_sym_jlt = 28,
  anon_sym_jgt = 29,
  anon_sym_jle = 30,
  anon_sym_jge = 31,
  anon_sym_call = 32,
  anon_sym_ret = 33,
  anon_sym_load = 34,
  anon_sym_store = 35,
  anon_sym_i2r = 36,
  anon_sym_r2i = 37,
  sym_label = 38,
  sym_label_instr = 39,
  sym_identifier = 40,
  sym_integer_constant = 41,
  sym_real_constant = 42,
  sym_array_size = 43,
  sym_comment = 44,
  sym_line_continuation = 45,
  sym_source_file = 46,
  sym_global_variable_declaration = 47,
  sym_function_declaration = 48,
  sym_parameter_declaration = 49,
  sym_local_variable_declaration = 50,
  sym_virtual_register_declaration = 51,
  sym_type_name = 52,
  sym_dimension = 53,
  sym_primitive_type_name = 54,
  sym_instruction = 55,
  sym_mov = 56,
  sym_phi = 57,
  sym_arithmetic = 58,
  sym_unconditional_jump = 59,
  sym_conditional_jump = 60,
  sym_call = 61,
  sym_ret = 62,
  sym_load = 63,
  sym_store = 64,
  sym_cast = 65,
  sym_operand = 66,
  sym_variable_operand = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_function_declaration_repeat1 = 69,
  aux_sym_function_declaration_repeat2 = 70,
  aux_sym_function_declaration_repeat3 = 71,
  aux_sym_function_declaration_repeat4 = 72,
  aux_sym_parameter_declaration_repeat1 = 73,
  aux_sym_type_name_repeat1 = 74,
  aux_sym_phi_repeat1 = 75,
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
  [anon_sym_bool] = "bool",
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
  [sym_label_instr] = "label_instr",
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
  [anon_sym_bool] = anon_sym_bool,
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
  [sym_label_instr] = sym_label_instr,
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
  [anon_sym_bool] = {
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
  [sym_label_instr] = {
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
      if (eof) ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'j') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(145);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'q') ADVANCE(101);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 0 ||
          lookahead == '\n') ADVANCE(145);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(67)
      if (lookahead == '\r') SKIP(67)
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(68)
      if (lookahead == '\r') SKIP(68)
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(72)
      if (lookahead == '\r') SKIP(72)
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(124);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'j') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOTglobal);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOTfunc);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOTcode);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOTparam);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOTlocal);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOTvirt);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_nop);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_nop);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_mov);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_phi);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_mul);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_jmp);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_jmp);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_jeq);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_jeq);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_jne);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_jne);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_jlt);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_jlt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_jgt);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_jgt);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_jle);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_jle);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_jge);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_jge);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ret);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ret);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_store);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_i2r);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_r2i);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == ':') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_label_instr);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'g') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(102);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer_constant);
      if (lookahead == '.') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_real_constant);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_array_size);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_line_continuation);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 72},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 67},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 67},
  [55] = {.lex_state = 67},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 67},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 67},
  [62] = {.lex_state = 67},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 67},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 67},
  [70] = {.lex_state = 67},
  [71] = {.lex_state = 67},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 67},
  [81] = {.lex_state = 67},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 67},
  [86] = {.lex_state = 67},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 67},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 67},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 67},
  [109] = {.lex_state = 67},
  [110] = {.lex_state = 67},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 67},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 67},
  [123] = {.lex_state = 67},
  [124] = {.lex_state = 67},
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
    [anon_sym_bool] = ACTIONS(1),
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
    [sym_label_instr] = ACTIONS(1),
    [sym_integer_constant] = ACTIONS(1),
    [sym_real_constant] = ACTIONS(1),
    [sym_array_size] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(121),
    [sym_global_variable_declaration] = STATE(49),
    [sym_function_declaration] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOTglobal] = ACTIONS(7),
    [anon_sym_DOTfunc] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
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
    STATE(24), 10,
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
  [55] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(11), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(27), 3,
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
    STATE(24), 10,
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
  [110] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(7), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(29), 3,
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
    STATE(24), 10,
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
  [165] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(29), 3,
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
    STATE(24), 10,
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
  [220] = 12,
    ACTIONS(33), 1,
      sym_nop,
    ACTIONS(36), 1,
      anon_sym_jmp,
    ACTIONS(42), 1,
      anon_sym_call,
    ACTIONS(45), 1,
      anon_sym_ret,
    ACTIONS(48), 1,
      sym_label_instr,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
    ACTIONS(39), 6,
      anon_sym_jeq,
      anon_sym_jne,
      anon_sym_jlt,
      anon_sym_jgt,
      anon_sym_jle,
      anon_sym_jge,
    STATE(24), 10,
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
  [275] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(54), 3,
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
    STATE(24), 10,
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
  [330] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(9), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(54), 3,
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
    STATE(24), 10,
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
  [385] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(56), 3,
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
    STATE(24), 10,
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
  [440] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(12), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(56), 3,
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
    STATE(24), 10,
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
  [495] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
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
    STATE(24), 10,
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
  [550] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(58), 3,
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
    STATE(24), 10,
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
  [605] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(14), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(58), 3,
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
    STATE(24), 10,
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
  [660] = 12,
    ACTIONS(13), 1,
      sym_nop,
    ACTIONS(15), 1,
      anon_sym_jmp,
    ACTIONS(19), 1,
      anon_sym_call,
    ACTIONS(21), 1,
      anon_sym_ret,
    ACTIONS(23), 1,
      sym_label_instr,
    ACTIONS(25), 1,
      sym_identifier,
    STATE(97), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(6), 2,
      sym_instruction,
      aux_sym_function_declaration_repeat4,
    ACTIONS(60), 3,
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
    STATE(24), 10,
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
  [715] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_label_instr,
    ACTIONS(64), 11,
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
      sym_identifier,
  [744] = 8,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    STATE(17), 1,
      sym_variable_operand,
    STATE(22), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(68), 10,
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
  [782] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_label_instr,
    ACTIONS(76), 11,
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
      sym_identifier,
  [809] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(80), 11,
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
      sym_identifier,
  [833] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(84), 11,
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
      sym_identifier,
  [857] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(88), 11,
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
      sym_identifier,
  [881] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(92), 11,
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
      sym_identifier,
  [905] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(96), 11,
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
      sym_identifier,
  [929] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(100), 11,
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
      sym_identifier,
  [953] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(104), 11,
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
      sym_identifier,
  [977] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(108), 11,
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
      sym_identifier,
  [1001] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(112), 11,
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
      sym_identifier,
  [1025] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(116), 11,
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
      sym_identifier,
  [1049] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(120), 11,
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
      sym_identifier,
  [1073] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(124), 11,
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
      sym_identifier,
  [1097] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(128), 11,
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
      sym_identifier,
  [1121] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(132), 11,
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
      sym_identifier,
  [1145] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      sym_label_instr,
    ACTIONS(136), 11,
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
      sym_identifier,
  [1169] = 9,
    ACTIONS(138), 1,
      anon_sym_COLON,
    ACTIONS(140), 1,
      anon_sym_DOTcode,
    ACTIONS(142), 1,
      anon_sym_DOTparam,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(37), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(45), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(75), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1201] = 4,
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(34), 2,
      sym_dimension,
      aux_sym_type_name_repeat1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1222] = 7,
    ACTIONS(153), 1,
      anon_sym_mov,
    ACTIONS(155), 1,
      anon_sym_phi,
    ACTIONS(159), 1,
      anon_sym_call,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(163), 2,
      anon_sym_i2r,
      anon_sym_r2i,
    ACTIONS(157), 4,
      anon_sym_add,
      anon_sym_sub,
      anon_sym_mul,
      anon_sym_div,
  [1249] = 4,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(34), 2,
      sym_dimension,
      aux_sym_type_name_repeat1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1270] = 8,
    ACTIONS(142), 1,
      anon_sym_DOTparam,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(169), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(44), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(48), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(78), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1299] = 8,
    ACTIONS(142), 1,
      anon_sym_DOTparam,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(171), 1,
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
    STATE(73), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1328] = 8,
    ACTIONS(142), 1,
      anon_sym_DOTparam,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(173), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(38), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    STATE(46), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(74), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1357] = 4,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(36), 2,
      sym_dimension,
      aux_sym_type_name_repeat1,
    ACTIONS(175), 7,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1378] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
      anon_sym_LBRACK,
  [1393] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
      anon_sym_LBRACK,
  [1408] = 6,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(181), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(77), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1430] = 6,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(173), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(74), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1452] = 6,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(169), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(78), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1474] = 6,
    ACTIONS(144), 1,
      anon_sym_DOTlocal,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(171), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(65), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
    STATE(73), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1496] = 5,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      anon_sym_DOTglobal,
    ACTIONS(188), 1,
      anon_sym_DOTfunc,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(47), 3,
      sym_global_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [1515] = 4,
    ACTIONS(193), 1,
      anon_sym_DOTparam,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(48), 2,
      sym_parameter_declaration,
      aux_sym_function_declaration_repeat1,
    ACTIONS(191), 3,
      anon_sym_DOTcode,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [1532] = 5,
    ACTIONS(7), 1,
      anon_sym_DOTglobal,
    ACTIONS(9), 1,
      anon_sym_DOTfunc,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(47), 3,
      sym_global_variable_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
  [1551] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(99), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1567] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(116), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1587] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(92), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1603] = 4,
    STATE(39), 1,
      sym_type_name,
    STATE(40), 1,
      sym_primitive_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1619] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(32), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1639] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(112), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1659] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(87), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1679] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(79), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1695] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(19), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1715] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(101), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1735] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(82), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1751] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(117), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1771] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(94), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1791] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(76), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1807] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(96), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1823] = 4,
    ACTIONS(204), 1,
      anon_sym_DOTlocal,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(202), 2,
      anon_sym_DOTcode,
      anon_sym_DOTvirt,
    STATE(65), 2,
      sym_local_variable_declaration,
      aux_sym_function_declaration_repeat2,
  [1839] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(31), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1859] = 6,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(209), 1,
      sym_integer_constant,
    ACTIONS(211), 1,
      sym_real_constant,
    STATE(109), 1,
      sym_operand,
    STATE(124), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1879] = 4,
    STATE(40), 1,
      sym_primitive_type_name,
    STATE(98), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(198), 3,
      anon_sym_int,
      anon_sym_real,
      anon_sym_bool,
  [1895] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(28), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1915] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(115), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1935] = 6,
    ACTIONS(70), 1,
      sym_integer_constant,
    ACTIONS(72), 1,
      sym_real_constant,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(17), 1,
      sym_variable_operand,
    STATE(88), 1,
      sym_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [1955] = 4,
    ACTIONS(213), 1,
      anon_sym_DOTcode,
    ACTIONS(215), 1,
      anon_sym_DOTvirt,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1970] = 4,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(181), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [1985] = 4,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(171), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [2000] = 4,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(169), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [2015] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(218), 4,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2026] = 4,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(220), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [2041] = 4,
    ACTIONS(146), 1,
      anon_sym_DOTvirt,
    ACTIONS(173), 1,
      anon_sym_DOTcode,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    STATE(72), 2,
      sym_virtual_register_declaration,
      aux_sym_function_declaration_repeat3,
  [2056] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(222), 4,
      anon_sym_DOTcode,
      anon_sym_DOTparam,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2067] = 4,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(84), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2081] = 4,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(86), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2095] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(232), 3,
      anon_sym_DOTcode,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2105] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2119] = 4,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2133] = 4,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_COLON,
    STATE(93), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2147] = 4,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_COLON,
    STATE(93), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2161] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2175] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2189] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2203] = 4,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2217] = 4,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(85), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2231] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      anon_sym_DOTglobal,
      anon_sym_DOTfunc,
  [2241] = 4,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_parameter_declaration_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2255] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2269] = 4,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_phi_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2283] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(272), 3,
      anon_sym_DOTcode,
      anon_sym_DOTlocal,
      anon_sym_DOTvirt,
  [2293] = 3,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2304] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(278), 2,
      anon_sym_DOTcode,
      anon_sym_DOTvirt,
  [2313] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(280), 2,
      anon_sym_DOTcode,
      anon_sym_DOTvirt,
  [2322] = 3,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(104), 1,
      sym_variable_operand,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2333] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2342] = 2,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2350] = 2,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2358] = 2,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2366] = 2,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2374] = 2,
    ACTIONS(290), 1,
      sym_array_size,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2382] = 2,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2390] = 2,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2398] = 2,
    ACTIONS(296), 1,
      anon_sym_COMMA2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2406] = 2,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2414] = 2,
    ACTIONS(300), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2422] = 2,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2430] = 2,
    ACTIONS(304), 1,
      anon_sym_store,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2438] = 2,
    ACTIONS(306), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2446] = 2,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2454] = 2,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2462] = 2,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2470] = 2,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2478] = 2,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2486] = 2,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2494] = 2,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2502] = 2,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2510] = 2,
    ACTIONS(62), 1,
      anon_sym_COMMA2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
  [2518] = 2,
    ACTIONS(74), 1,
      anon_sym_COMMA2,
    ACTIONS(3), 2,
      sym_comment,
      sym_line_continuation,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 330,
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 495,
  [SMALL_STATE(12)] = 550,
  [SMALL_STATE(13)] = 605,
  [SMALL_STATE(14)] = 660,
  [SMALL_STATE(15)] = 715,
  [SMALL_STATE(16)] = 744,
  [SMALL_STATE(17)] = 782,
  [SMALL_STATE(18)] = 809,
  [SMALL_STATE(19)] = 833,
  [SMALL_STATE(20)] = 857,
  [SMALL_STATE(21)] = 881,
  [SMALL_STATE(22)] = 905,
  [SMALL_STATE(23)] = 929,
  [SMALL_STATE(24)] = 953,
  [SMALL_STATE(25)] = 977,
  [SMALL_STATE(26)] = 1001,
  [SMALL_STATE(27)] = 1025,
  [SMALL_STATE(28)] = 1049,
  [SMALL_STATE(29)] = 1073,
  [SMALL_STATE(30)] = 1097,
  [SMALL_STATE(31)] = 1121,
  [SMALL_STATE(32)] = 1145,
  [SMALL_STATE(33)] = 1169,
  [SMALL_STATE(34)] = 1201,
  [SMALL_STATE(35)] = 1222,
  [SMALL_STATE(36)] = 1249,
  [SMALL_STATE(37)] = 1270,
  [SMALL_STATE(38)] = 1299,
  [SMALL_STATE(39)] = 1328,
  [SMALL_STATE(40)] = 1357,
  [SMALL_STATE(41)] = 1378,
  [SMALL_STATE(42)] = 1393,
  [SMALL_STATE(43)] = 1408,
  [SMALL_STATE(44)] = 1430,
  [SMALL_STATE(45)] = 1452,
  [SMALL_STATE(46)] = 1474,
  [SMALL_STATE(47)] = 1496,
  [SMALL_STATE(48)] = 1515,
  [SMALL_STATE(49)] = 1532,
  [SMALL_STATE(50)] = 1551,
  [SMALL_STATE(51)] = 1567,
  [SMALL_STATE(52)] = 1587,
  [SMALL_STATE(53)] = 1603,
  [SMALL_STATE(54)] = 1619,
  [SMALL_STATE(55)] = 1639,
  [SMALL_STATE(56)] = 1659,
  [SMALL_STATE(57)] = 1679,
  [SMALL_STATE(58)] = 1695,
  [SMALL_STATE(59)] = 1715,
  [SMALL_STATE(60)] = 1735,
  [SMALL_STATE(61)] = 1751,
  [SMALL_STATE(62)] = 1771,
  [SMALL_STATE(63)] = 1791,
  [SMALL_STATE(64)] = 1807,
  [SMALL_STATE(65)] = 1823,
  [SMALL_STATE(66)] = 1839,
  [SMALL_STATE(67)] = 1859,
  [SMALL_STATE(68)] = 1879,
  [SMALL_STATE(69)] = 1895,
  [SMALL_STATE(70)] = 1915,
  [SMALL_STATE(71)] = 1935,
  [SMALL_STATE(72)] = 1955,
  [SMALL_STATE(73)] = 1970,
  [SMALL_STATE(74)] = 1985,
  [SMALL_STATE(75)] = 2000,
  [SMALL_STATE(76)] = 2015,
  [SMALL_STATE(77)] = 2026,
  [SMALL_STATE(78)] = 2041,
  [SMALL_STATE(79)] = 2056,
  [SMALL_STATE(80)] = 2067,
  [SMALL_STATE(81)] = 2081,
  [SMALL_STATE(82)] = 2095,
  [SMALL_STATE(83)] = 2105,
  [SMALL_STATE(84)] = 2119,
  [SMALL_STATE(85)] = 2133,
  [SMALL_STATE(86)] = 2147,
  [SMALL_STATE(87)] = 2161,
  [SMALL_STATE(88)] = 2175,
  [SMALL_STATE(89)] = 2189,
  [SMALL_STATE(90)] = 2203,
  [SMALL_STATE(91)] = 2217,
  [SMALL_STATE(92)] = 2231,
  [SMALL_STATE(93)] = 2241,
  [SMALL_STATE(94)] = 2255,
  [SMALL_STATE(95)] = 2269,
  [SMALL_STATE(96)] = 2283,
  [SMALL_STATE(97)] = 2293,
  [SMALL_STATE(98)] = 2304,
  [SMALL_STATE(99)] = 2313,
  [SMALL_STATE(100)] = 2322,
  [SMALL_STATE(101)] = 2333,
  [SMALL_STATE(102)] = 2342,
  [SMALL_STATE(103)] = 2350,
  [SMALL_STATE(104)] = 2358,
  [SMALL_STATE(105)] = 2366,
  [SMALL_STATE(106)] = 2374,
  [SMALL_STATE(107)] = 2382,
  [SMALL_STATE(108)] = 2390,
  [SMALL_STATE(109)] = 2398,
  [SMALL_STATE(110)] = 2406,
  [SMALL_STATE(111)] = 2414,
  [SMALL_STATE(112)] = 2422,
  [SMALL_STATE(113)] = 2430,
  [SMALL_STATE(114)] = 2438,
  [SMALL_STATE(115)] = 2446,
  [SMALL_STATE(116)] = 2454,
  [SMALL_STATE(117)] = 2462,
  [SMALL_STATE(118)] = 2470,
  [SMALL_STATE(119)] = 2478,
  [SMALL_STATE(120)] = 2486,
  [SMALL_STATE(121)] = 2494,
  [SMALL_STATE(122)] = 2502,
  [SMALL_STATE(123)] = 2510,
  [SMALL_STATE(124)] = 2518,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat4, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(24),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(114),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(61),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(120),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(16),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(24),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat4, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_operand, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_operand, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_jump, 6),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional_jump, 6),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 6),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unconditional_jump, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unconditional_jump, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 7),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phi, 7),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 7),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 7),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phi, 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phi, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 7),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mov, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mov, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 8),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 8),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 7),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_store, 7),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2), SHIFT_REPEAT(106),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type_name, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2), SHIFT_REPEAT(81),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat2, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat2, 2), SHIFT_REPEAT(80),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat3, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat3, 2), SHIFT_REPEAT(91),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2), SHIFT_REPEAT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phi_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_declaration, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_declaration_repeat1, 2), SHIFT_REPEAT(93),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_virtual_register_declaration, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_virtual_register_declaration, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [320] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
