#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  anon_sym_EXEC = 2,
  anon_sym_CICS = 3,
  anon_sym_COMMA = 4,
  sym__alphanum_str = 5,
  sym_name = 6,
  sym_comment = 7,
  sym_operands = 8,
  sym_remark = 9,
  sym_cics_arguments = 10,
  sym_program = 11,
  sym_cics_macro = 12,
  sym_instruction = 13,
  sym_operation = 14,
  aux_sym_program_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_EXEC] = "EXEC",
  [anon_sym_CICS] = "CICS",
  [anon_sym_COMMA] = ",",
  [sym__alphanum_str] = "_alphanum_str",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_operands] = "operands",
  [sym_remark] = "remark",
  [sym_cics_arguments] = "cics_arguments",
  [sym_program] = "program",
  [sym_cics_macro] = "cics_macro",
  [sym_instruction] = "instruction",
  [sym_operation] = "operation",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_EXEC] = anon_sym_EXEC,
  [anon_sym_CICS] = anon_sym_CICS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__alphanum_str] = sym__alphanum_str,
  [sym_name] = sym_name,
  [sym_comment] = sym_comment,
  [sym_operands] = sym_operands,
  [sym_remark] = sym_remark,
  [sym_cics_arguments] = sym_cics_arguments,
  [sym_program] = sym_program,
  [sym_cics_macro] = sym_cics_macro,
  [sym_instruction] = sym_instruction,
  [sym_operation] = sym_operation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EXEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CICS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__alphanum_str] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_remark] = {
    .visible = true,
    .named = true,
  },
  [sym_cics_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_cics_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == 'C') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EXEC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_CICS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_CICS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'C') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'C') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'E') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'I') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'S') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'X') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 0, .external_lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_EXEC] = ACTIONS(1),
    [anon_sym_CICS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__alphanum_str] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_operands] = ACTIONS(1),
    [sym_remark] = ACTIONS(1),
    [sym_cics_arguments] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(17),
    [sym_instruction] = STATE(6),
    [sym_operation] = STATE(4),
    [sym__newline] = ACTIONS(3),
    [sym__alphanum_str] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_EXEC,
    ACTIONS(13), 1,
      sym__alphanum_str,
    STATE(4), 1,
      sym_operation,
    STATE(12), 1,
      sym_instruction,
    STATE(13), 1,
      sym_cics_macro,
    ACTIONS(9), 2,
      sym_comment,
      sym__newline,
  [23] = 1,
    ACTIONS(15), 4,
      sym_operands,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COMMA,
  [30] = 2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(19), 2,
      sym_operands,
      anon_sym_COMMA,
  [39] = 2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(23), 2,
      sym_operands,
      anon_sym_COMMA,
  [48] = 3,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_program_repeat1,
  [58] = 3,
    ACTIONS(27), 1,
      sym__newline,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_program_repeat1,
  [68] = 2,
    ACTIONS(31), 1,
      sym_remark,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym__newline,
  [76] = 2,
    ACTIONS(35), 1,
      sym_remark,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__newline,
  [84] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_program_repeat1,
  [94] = 2,
    ACTIONS(5), 1,
      sym__alphanum_str,
    STATE(5), 1,
      sym_operation,
  [101] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym__newline,
  [106] = 1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym__newline,
  [111] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__newline,
  [116] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym__newline,
  [121] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym__newline,
  [126] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [130] = 1,
    ACTIONS(48), 1,
      anon_sym_CICS,
  [134] = 1,
    ACTIONS(50), 1,
      sym_cics_arguments,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 94,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 111,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 126,
  [SMALL_STATE(18)] = 130,
  [SMALL_STATE(19)] = 134,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cics_macro, 3),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_name = 0,
  ts_external_token_comment = 1,
  ts_external_token_operands = 2,
  ts_external_token_remark = 3,
  ts_external_token_cics_arguments = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_name] = sym_name,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_operands] = sym_operands,
  [ts_external_token_remark] = sym_remark,
  [ts_external_token_cics_arguments] = sym_cics_arguments,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_operands] = true,
    [ts_external_token_remark] = true,
    [ts_external_token_cics_arguments] = true,
  },
  [2] = {
    [ts_external_token_name] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_operands] = true,
  },
  [4] = {
    [ts_external_token_remark] = true,
  },
  [5] = {
    [ts_external_token_cics_arguments] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_ibmhlasm_external_scanner_create(void);
void tree_sitter_ibmhlasm_external_scanner_destroy(void *);
bool tree_sitter_ibmhlasm_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_ibmhlasm_external_scanner_serialize(void *, char *);
void tree_sitter_ibmhlasm_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ibmhlasm(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_ibmhlasm_external_scanner_create,
      tree_sitter_ibmhlasm_external_scanner_destroy,
      tree_sitter_ibmhlasm_external_scanner_scan,
      tree_sitter_ibmhlasm_external_scanner_serialize,
      tree_sitter_ibmhlasm_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
