#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  aux_sym_title_token1 = 2,
  aux_sym__title_string_token1 = 3,
  aux_sym__title_string_token2 = 4,
  anon_sym_COMMA = 5,
  sym__alphanum_str = 6,
  sym_name = 7,
  sym_comment = 8,
  sym_operands = 9,
  sym_remark = 10,
  sym_program = 11,
  sym_title = 12,
  sym__title_string = 13,
  sym_instruction = 14,
  sym_operation = 15,
  aux_sym_program_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [aux_sym_title_token1] = "title_token1",
  [aux_sym__title_string_token1] = "_title_string_token1",
  [aux_sym__title_string_token2] = "_title_string_token2",
  [anon_sym_COMMA] = ",",
  [sym__alphanum_str] = "_alphanum_str",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_operands] = "operands",
  [sym_remark] = "remark",
  [sym_program] = "program",
  [sym_title] = "title",
  [sym__title_string] = "_title_string",
  [sym_instruction] = "instruction",
  [sym_operation] = "operation",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [aux_sym__title_string_token1] = aux_sym__title_string_token1,
  [aux_sym__title_string_token2] = aux_sym__title_string_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__alphanum_str] = sym__alphanum_str,
  [sym_name] = sym_name,
  [sym_comment] = sym_comment,
  [sym_operands] = sym_operands,
  [sym_remark] = sym_remark,
  [sym_program] = sym_program,
  [sym_title] = sym_title,
  [sym__title_string] = sym__title_string,
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
  [aux_sym_title_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__title_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__title_string_token2] = {
    .visible = false,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym__title_string] = {
    .visible = false,
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
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(9);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= '~') ||
          lookahead == 162 ||
          lookahead == 172) ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__title_string_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__title_string_token2);
      if (lookahead == ' ') ADVANCE(9);
      if (('!' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= '~') ||
          lookahead == 162 ||
          lookahead == 172) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__title_string_token2);
      if ((' ' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= '~') ||
          lookahead == 162 ||
          lookahead == 172) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'E') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'I') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'L') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (lookahead == 'T') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__alphanum_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 3},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 4},
  [9] = {.lex_state = 0, .external_lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [aux_sym_title_token1] = ACTIONS(1),
    [aux_sym__title_string_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__alphanum_str] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_operands] = ACTIONS(1),
    [sym_remark] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(18),
    [sym_title] = STATE(7),
    [sym_instruction] = STATE(7),
    [sym_operation] = STATE(3),
    [sym__newline] = ACTIONS(3),
    [aux_sym_title_token1] = ACTIONS(5),
    [sym__alphanum_str] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      aux_sym_title_token1,
    ACTIONS(7), 1,
      sym__alphanum_str,
    ACTIONS(9), 1,
      sym_name,
    STATE(3), 1,
      sym_operation,
    ACTIONS(11), 2,
      sym_comment,
      sym__newline,
    STATE(14), 2,
      sym_title,
      sym_instruction,
  [21] = 2,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(15), 2,
      sym_operands,
      anon_sym_COMMA,
  [30] = 2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(19), 2,
      sym_operands,
      anon_sym_COMMA,
  [39] = 1,
    ACTIONS(21), 4,
      sym_operands,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COMMA,
  [46] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_program_repeat1,
  [56] = 3,
    ACTIONS(25), 1,
      sym__newline,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_program_repeat1,
  [66] = 2,
    ACTIONS(29), 1,
      sym_remark,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__newline,
  [74] = 2,
    ACTIONS(33), 1,
      sym_remark,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__newline,
  [82] = 3,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_program_repeat1,
  [92] = 2,
    ACTIONS(40), 1,
      sym__alphanum_str,
    STATE(4), 1,
      sym_operation,
  [99] = 2,
    ACTIONS(42), 1,
      aux_sym__title_string_token1,
    STATE(13), 1,
      sym__title_string,
  [106] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      sym__newline,
  [111] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym__newline,
  [116] = 1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__newline,
  [121] = 1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym__newline,
  [126] = 1,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym__newline,
  [131] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [135] = 1,
    ACTIONS(52), 1,
      aux_sym__title_string_token2,
  [139] = 1,
    ACTIONS(54), 1,
      aux_sym__title_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 92,
  [SMALL_STATE(12)] = 99,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 111,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 126,
  [SMALL_STATE(18)] = 131,
  [SMALL_STATE(19)] = 135,
  [SMALL_STATE(20)] = 139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__title_string, 3),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_name = 0,
  ts_external_token_comment = 1,
  ts_external_token_operands = 2,
  ts_external_token_remark = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_name] = sym_name,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_operands] = sym_operands,
  [ts_external_token_remark] = sym_remark,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_operands] = true,
    [ts_external_token_remark] = true,
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
