#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  anon_sym_COMMA = 2,
  anon_sym_EXEC = 3,
  anon_sym_CICS = 4,
  anon_sym_CSECT = 5,
  anon_sym_DFHEIENT = 6,
  anon_sym_START = 7,
  sym_dsect_operation = 8,
  aux_sym_operation_token1 = 9,
  anon_sym_B = 10,
  anon_sym_BALR = 11,
  anon_sym_BC = 12,
  anon_sym_BCR = 13,
  anon_sym_BE = 14,
  anon_sym_BZ = 15,
  anon_sym_BH = 16,
  anon_sym_BNE = 17,
  anon_sym_BNZ = 18,
  anon_sym_BL = 19,
  anon_sym_BLE = 20,
  anon_sym_BP = 21,
  anon_sym_BPE = 22,
  anon_sym_BPR = 23,
  anon_sym_BR = 24,
  anon_sym_BHR = 25,
  anon_sym_BNR = 26,
  anon_sym_BRL = 27,
  anon_sym_BNER = 28,
  anon_sym_BNHR = 29,
  anon_sym_BNLR = 30,
  anon_sym_BNPR = 31,
  anon_sym_BRAS = 32,
  anon_sym_BRASL = 33,
  anon_sym_BRC = 34,
  anon_sym_BRCL = 35,
  anon_sym_BXH = 36,
  anon_sym_BXLE = 37,
  sym_name = 38,
  sym_comment = 39,
  sym_operands = 40,
  sym_remark = 41,
  sym_cics_arguments = 42,
  sym_program = 43,
  sym__line = 44,
  sym__instruction = 45,
  sym_branch_instruction = 46,
  sym_dsect_instruction = 47,
  sym_csect_instruction = 48,
  sym_cics_macro = 49,
  sym_instruction = 50,
  sym_csect_operation = 51,
  sym_operation = 52,
  sym_branch_operation = 53,
  aux_sym_program_repeat1 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_COMMA] = ",",
  [anon_sym_EXEC] = "EXEC",
  [anon_sym_CICS] = "CICS",
  [anon_sym_CSECT] = "CSECT",
  [anon_sym_DFHEIENT] = "DFHEIENT",
  [anon_sym_START] = "START",
  [sym_dsect_operation] = "dsect_operation",
  [aux_sym_operation_token1] = "operation_token1",
  [anon_sym_B] = "B",
  [anon_sym_BALR] = "BALR",
  [anon_sym_BC] = "BC",
  [anon_sym_BCR] = "BCR",
  [anon_sym_BE] = "BE",
  [anon_sym_BZ] = "BZ",
  [anon_sym_BH] = "BH",
  [anon_sym_BNE] = "BNE",
  [anon_sym_BNZ] = "BNZ",
  [anon_sym_BL] = "BL",
  [anon_sym_BLE] = "BLE",
  [anon_sym_BP] = "BP",
  [anon_sym_BPE] = "BPE",
  [anon_sym_BPR] = "BPR",
  [anon_sym_BR] = "BR",
  [anon_sym_BHR] = "BHR",
  [anon_sym_BNR] = "BNR",
  [anon_sym_BRL] = "BRL",
  [anon_sym_BNER] = "BNER",
  [anon_sym_BNHR] = "BNHR",
  [anon_sym_BNLR] = "BNLR",
  [anon_sym_BNPR] = "BNPR",
  [anon_sym_BRAS] = "BRAS",
  [anon_sym_BRASL] = "BRASL",
  [anon_sym_BRC] = "BRC",
  [anon_sym_BRCL] = "BRCL",
  [anon_sym_BXH] = "BXH",
  [anon_sym_BXLE] = "BXLE",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_operands] = "operands",
  [sym_remark] = "remark",
  [sym_cics_arguments] = "cics_arguments",
  [sym_program] = "program",
  [sym__line] = "_line",
  [sym__instruction] = "_instruction",
  [sym_branch_instruction] = "branch_instruction",
  [sym_dsect_instruction] = "dsect_instruction",
  [sym_csect_instruction] = "csect_instruction",
  [sym_cics_macro] = "cics_macro",
  [sym_instruction] = "instruction",
  [sym_csect_operation] = "csect_operation",
  [sym_operation] = "operation",
  [sym_branch_operation] = "branch_operation",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EXEC] = anon_sym_EXEC,
  [anon_sym_CICS] = anon_sym_CICS,
  [anon_sym_CSECT] = anon_sym_CSECT,
  [anon_sym_DFHEIENT] = anon_sym_DFHEIENT,
  [anon_sym_START] = anon_sym_START,
  [sym_dsect_operation] = sym_dsect_operation,
  [aux_sym_operation_token1] = aux_sym_operation_token1,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_BALR] = anon_sym_BALR,
  [anon_sym_BC] = anon_sym_BC,
  [anon_sym_BCR] = anon_sym_BCR,
  [anon_sym_BE] = anon_sym_BE,
  [anon_sym_BZ] = anon_sym_BZ,
  [anon_sym_BH] = anon_sym_BH,
  [anon_sym_BNE] = anon_sym_BNE,
  [anon_sym_BNZ] = anon_sym_BNZ,
  [anon_sym_BL] = anon_sym_BL,
  [anon_sym_BLE] = anon_sym_BLE,
  [anon_sym_BP] = anon_sym_BP,
  [anon_sym_BPE] = anon_sym_BPE,
  [anon_sym_BPR] = anon_sym_BPR,
  [anon_sym_BR] = anon_sym_BR,
  [anon_sym_BHR] = anon_sym_BHR,
  [anon_sym_BNR] = anon_sym_BNR,
  [anon_sym_BRL] = anon_sym_BRL,
  [anon_sym_BNER] = anon_sym_BNER,
  [anon_sym_BNHR] = anon_sym_BNHR,
  [anon_sym_BNLR] = anon_sym_BNLR,
  [anon_sym_BNPR] = anon_sym_BNPR,
  [anon_sym_BRAS] = anon_sym_BRAS,
  [anon_sym_BRASL] = anon_sym_BRASL,
  [anon_sym_BRC] = anon_sym_BRC,
  [anon_sym_BRCL] = anon_sym_BRCL,
  [anon_sym_BXH] = anon_sym_BXH,
  [anon_sym_BXLE] = anon_sym_BXLE,
  [sym_name] = sym_name,
  [sym_comment] = sym_comment,
  [sym_operands] = sym_operands,
  [sym_remark] = sym_remark,
  [sym_cics_arguments] = sym_cics_arguments,
  [sym_program] = sym_program,
  [sym__line] = sym__line,
  [sym__instruction] = sym__instruction,
  [sym_branch_instruction] = sym_branch_instruction,
  [sym_dsect_instruction] = sym_dsect_instruction,
  [sym_csect_instruction] = sym_csect_instruction,
  [sym_cics_macro] = sym_cics_macro,
  [sym_instruction] = sym_instruction,
  [sym_csect_operation] = sym_csect_operation,
  [sym_operation] = sym_operation,
  [sym_branch_operation] = sym_branch_operation,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXEC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CICS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CSECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DFHEIENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_START] = {
    .visible = true,
    .named = false,
  },
  [sym_dsect_operation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_operation_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BALR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BCR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BPR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BHR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNHR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNLR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BNPR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRAS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRASL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BRCL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BXH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BXLE] = {
    .visible = true,
    .named = false,
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
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_branch_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_dsect_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_csect_instruction] = {
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
  [sym_csect_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_branch_operation] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      ADVANCE_MAP(
        '\n', 11,
        ' ', 1,
        ',', 12,
        'B', 54,
        'C', 35,
        'D', 32,
        'E', 52,
        'S', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 11,
        ' ', 1,
        ',', 12,
        'B', 54,
        'C', 35,
        'D', 32,
        'E', 52,
        'S', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'B') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4);
      if (lookahead == 'B') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5);
      if (lookahead == 'C') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'B') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EXEC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CICS);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_CICS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CSECT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DFHEIENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_START);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_dsect_operation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'A') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'C') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'C') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'C') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'C') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(42);
      if (lookahead == 'R') ADVANCE(70);
      if (lookahead == 'Z') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'H') ADVANCE(80);
      if (lookahead == 'L') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'H') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'I') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'L') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'N') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'S') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'S') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'S') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'T') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'T') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'T') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'T') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'T') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'X') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_B);
      ADVANCE_MAP(
        'A', 37,
        'C', 56,
        'E', 58,
        'H', 60,
        'L', 63,
        'N', 25,
        'P', 65,
        'R', 68,
        'X', 33,
        'Z', 59,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BALR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BC);
      if (lookahead == 'R') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BCR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BH);
      if (lookahead == 'R') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BNE);
      if (lookahead == 'R') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BNZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BL);
      if (lookahead == 'E') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BP);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'R') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BPE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BPR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BR);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BNR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BRL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BNER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BNHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BNLR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BNPR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BRAS);
      if (lookahead == 'L') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BRASL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BRC);
      if (lookahead == 'L') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BRCL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BXH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BXLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9, .external_lex_state = 2},
  [2] = {.lex_state = 9, .external_lex_state = 2},
  [3] = {.lex_state = 9, .external_lex_state = 2},
  [4] = {.lex_state = 9, .external_lex_state = 2},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 4},
  [18] = {.lex_state = 0, .external_lex_state = 4},
  [19] = {.lex_state = 0, .external_lex_state = 4},
  [20] = {.lex_state = 0, .external_lex_state = 4},
  [21] = {.lex_state = 0, .external_lex_state = 4},
  [22] = {.lex_state = 0, .external_lex_state = 4},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EXEC] = ACTIONS(1),
    [anon_sym_CICS] = ACTIONS(1),
    [anon_sym_CSECT] = ACTIONS(1),
    [anon_sym_DFHEIENT] = ACTIONS(1),
    [anon_sym_START] = ACTIONS(1),
    [sym_dsect_operation] = ACTIONS(1),
    [aux_sym_operation_token1] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_BALR] = ACTIONS(1),
    [anon_sym_BC] = ACTIONS(1),
    [anon_sym_BCR] = ACTIONS(1),
    [anon_sym_BE] = ACTIONS(1),
    [anon_sym_BZ] = ACTIONS(1),
    [anon_sym_BH] = ACTIONS(1),
    [anon_sym_BNE] = ACTIONS(1),
    [anon_sym_BNZ] = ACTIONS(1),
    [anon_sym_BL] = ACTIONS(1),
    [anon_sym_BLE] = ACTIONS(1),
    [anon_sym_BP] = ACTIONS(1),
    [anon_sym_BPE] = ACTIONS(1),
    [anon_sym_BPR] = ACTIONS(1),
    [anon_sym_BR] = ACTIONS(1),
    [anon_sym_BHR] = ACTIONS(1),
    [anon_sym_BNR] = ACTIONS(1),
    [anon_sym_BRL] = ACTIONS(1),
    [anon_sym_BNER] = ACTIONS(1),
    [anon_sym_BNHR] = ACTIONS(1),
    [anon_sym_BNLR] = ACTIONS(1),
    [anon_sym_BNPR] = ACTIONS(1),
    [anon_sym_BRAS] = ACTIONS(1),
    [anon_sym_BRASL] = ACTIONS(1),
    [anon_sym_BRC] = ACTIONS(1),
    [anon_sym_BRCL] = ACTIONS(1),
    [anon_sym_BXH] = ACTIONS(1),
    [anon_sym_BXLE] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_operands] = ACTIONS(1),
    [sym_remark] = ACTIONS(1),
    [sym_cics_arguments] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym__line] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_branch_instruction] = STATE(25),
    [sym_dsect_instruction] = STATE(25),
    [sym_csect_instruction] = STATE(25),
    [sym_cics_macro] = STATE(25),
    [sym_instruction] = STATE(25),
    [sym_csect_operation] = STATE(9),
    [sym_operation] = STATE(10),
    [sym_branch_operation] = STATE(6),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [anon_sym_EXEC] = ACTIONS(7),
    [anon_sym_CSECT] = ACTIONS(9),
    [anon_sym_DFHEIENT] = ACTIONS(9),
    [anon_sym_START] = ACTIONS(9),
    [sym_dsect_operation] = ACTIONS(11),
    [aux_sym_operation_token1] = ACTIONS(13),
    [anon_sym_B] = ACTIONS(15),
    [anon_sym_BALR] = ACTIONS(15),
    [anon_sym_BC] = ACTIONS(15),
    [anon_sym_BCR] = ACTIONS(15),
    [anon_sym_BE] = ACTIONS(15),
    [anon_sym_BZ] = ACTIONS(15),
    [anon_sym_BH] = ACTIONS(15),
    [anon_sym_BNE] = ACTIONS(15),
    [anon_sym_BNZ] = ACTIONS(15),
    [anon_sym_BL] = ACTIONS(15),
    [anon_sym_BLE] = ACTIONS(15),
    [anon_sym_BP] = ACTIONS(15),
    [anon_sym_BPE] = ACTIONS(15),
    [anon_sym_BPR] = ACTIONS(15),
    [anon_sym_BR] = ACTIONS(15),
    [anon_sym_BHR] = ACTIONS(15),
    [anon_sym_BNR] = ACTIONS(15),
    [anon_sym_BRL] = ACTIONS(15),
    [anon_sym_BNER] = ACTIONS(15),
    [anon_sym_BNHR] = ACTIONS(15),
    [anon_sym_BNLR] = ACTIONS(15),
    [anon_sym_BNPR] = ACTIONS(15),
    [anon_sym_BRAS] = ACTIONS(15),
    [anon_sym_BRASL] = ACTIONS(15),
    [anon_sym_BRC] = ACTIONS(15),
    [anon_sym_BRCL] = ACTIONS(15),
    [anon_sym_BXH] = ACTIONS(15),
    [anon_sym_BXLE] = ACTIONS(15),
    [sym_name] = ACTIONS(17),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym__line] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_branch_instruction] = STATE(25),
    [sym_dsect_instruction] = STATE(25),
    [sym_csect_instruction] = STATE(25),
    [sym_cics_macro] = STATE(25),
    [sym_instruction] = STATE(25),
    [sym_csect_operation] = STATE(9),
    [sym_operation] = STATE(10),
    [sym_branch_operation] = STATE(6),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__newline] = ACTIONS(21),
    [anon_sym_EXEC] = ACTIONS(24),
    [anon_sym_CSECT] = ACTIONS(27),
    [anon_sym_DFHEIENT] = ACTIONS(27),
    [anon_sym_START] = ACTIONS(27),
    [sym_dsect_operation] = ACTIONS(30),
    [aux_sym_operation_token1] = ACTIONS(33),
    [anon_sym_B] = ACTIONS(36),
    [anon_sym_BALR] = ACTIONS(36),
    [anon_sym_BC] = ACTIONS(36),
    [anon_sym_BCR] = ACTIONS(36),
    [anon_sym_BE] = ACTIONS(36),
    [anon_sym_BZ] = ACTIONS(36),
    [anon_sym_BH] = ACTIONS(36),
    [anon_sym_BNE] = ACTIONS(36),
    [anon_sym_BNZ] = ACTIONS(36),
    [anon_sym_BL] = ACTIONS(36),
    [anon_sym_BLE] = ACTIONS(36),
    [anon_sym_BP] = ACTIONS(36),
    [anon_sym_BPE] = ACTIONS(36),
    [anon_sym_BPR] = ACTIONS(36),
    [anon_sym_BR] = ACTIONS(36),
    [anon_sym_BHR] = ACTIONS(36),
    [anon_sym_BNR] = ACTIONS(36),
    [anon_sym_BRL] = ACTIONS(36),
    [anon_sym_BNER] = ACTIONS(36),
    [anon_sym_BNHR] = ACTIONS(36),
    [anon_sym_BNLR] = ACTIONS(36),
    [anon_sym_BNPR] = ACTIONS(36),
    [anon_sym_BRAS] = ACTIONS(36),
    [anon_sym_BRASL] = ACTIONS(36),
    [anon_sym_BRC] = ACTIONS(36),
    [anon_sym_BRCL] = ACTIONS(36),
    [anon_sym_BXH] = ACTIONS(36),
    [anon_sym_BXLE] = ACTIONS(36),
    [sym_name] = ACTIONS(39),
    [sym_comment] = ACTIONS(21),
  },
  [3] = {
    [sym__line] = STATE(25),
    [sym__instruction] = STATE(25),
    [sym_branch_instruction] = STATE(25),
    [sym_dsect_instruction] = STATE(25),
    [sym_csect_instruction] = STATE(25),
    [sym_cics_macro] = STATE(25),
    [sym_instruction] = STATE(25),
    [sym_csect_operation] = STATE(9),
    [sym_operation] = STATE(10),
    [sym_branch_operation] = STATE(6),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym__newline] = ACTIONS(5),
    [anon_sym_EXEC] = ACTIONS(7),
    [anon_sym_CSECT] = ACTIONS(9),
    [anon_sym_DFHEIENT] = ACTIONS(9),
    [anon_sym_START] = ACTIONS(9),
    [sym_dsect_operation] = ACTIONS(11),
    [aux_sym_operation_token1] = ACTIONS(13),
    [anon_sym_B] = ACTIONS(15),
    [anon_sym_BALR] = ACTIONS(15),
    [anon_sym_BC] = ACTIONS(15),
    [anon_sym_BCR] = ACTIONS(15),
    [anon_sym_BE] = ACTIONS(15),
    [anon_sym_BZ] = ACTIONS(15),
    [anon_sym_BH] = ACTIONS(15),
    [anon_sym_BNE] = ACTIONS(15),
    [anon_sym_BNZ] = ACTIONS(15),
    [anon_sym_BL] = ACTIONS(15),
    [anon_sym_BLE] = ACTIONS(15),
    [anon_sym_BP] = ACTIONS(15),
    [anon_sym_BPE] = ACTIONS(15),
    [anon_sym_BPR] = ACTIONS(15),
    [anon_sym_BR] = ACTIONS(15),
    [anon_sym_BHR] = ACTIONS(15),
    [anon_sym_BNR] = ACTIONS(15),
    [anon_sym_BRL] = ACTIONS(15),
    [anon_sym_BNER] = ACTIONS(15),
    [anon_sym_BNHR] = ACTIONS(15),
    [anon_sym_BNLR] = ACTIONS(15),
    [anon_sym_BNPR] = ACTIONS(15),
    [anon_sym_BRAS] = ACTIONS(15),
    [anon_sym_BRASL] = ACTIONS(15),
    [anon_sym_BRC] = ACTIONS(15),
    [anon_sym_BRCL] = ACTIONS(15),
    [anon_sym_BXH] = ACTIONS(15),
    [anon_sym_BXLE] = ACTIONS(15),
    [sym_name] = ACTIONS(17),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__newline] = ACTIONS(19),
    [anon_sym_EXEC] = ACTIONS(44),
    [anon_sym_CSECT] = ACTIONS(44),
    [anon_sym_DFHEIENT] = ACTIONS(44),
    [anon_sym_START] = ACTIONS(44),
    [sym_dsect_operation] = ACTIONS(44),
    [aux_sym_operation_token1] = ACTIONS(44),
    [anon_sym_B] = ACTIONS(44),
    [anon_sym_BALR] = ACTIONS(44),
    [anon_sym_BC] = ACTIONS(44),
    [anon_sym_BCR] = ACTIONS(44),
    [anon_sym_BE] = ACTIONS(44),
    [anon_sym_BZ] = ACTIONS(44),
    [anon_sym_BH] = ACTIONS(44),
    [anon_sym_BNE] = ACTIONS(44),
    [anon_sym_BNZ] = ACTIONS(44),
    [anon_sym_BL] = ACTIONS(44),
    [anon_sym_BLE] = ACTIONS(44),
    [anon_sym_BP] = ACTIONS(44),
    [anon_sym_BPE] = ACTIONS(44),
    [anon_sym_BPR] = ACTIONS(44),
    [anon_sym_BR] = ACTIONS(44),
    [anon_sym_BHR] = ACTIONS(44),
    [anon_sym_BNR] = ACTIONS(44),
    [anon_sym_BRL] = ACTIONS(44),
    [anon_sym_BNER] = ACTIONS(44),
    [anon_sym_BNHR] = ACTIONS(44),
    [anon_sym_BNLR] = ACTIONS(44),
    [anon_sym_BNPR] = ACTIONS(44),
    [anon_sym_BRAS] = ACTIONS(44),
    [anon_sym_BRASL] = ACTIONS(44),
    [anon_sym_BRC] = ACTIONS(44),
    [anon_sym_BRCL] = ACTIONS(44),
    [anon_sym_BXH] = ACTIONS(44),
    [anon_sym_BXLE] = ACTIONS(44),
    [sym_name] = ACTIONS(19),
    [sym_comment] = ACTIONS(19),
  },
  [5] = {
    [sym_csect_operation] = STATE(12),
    [sym_operation] = STATE(13),
    [sym_branch_operation] = STATE(14),
    [anon_sym_CSECT] = ACTIONS(9),
    [anon_sym_DFHEIENT] = ACTIONS(9),
    [anon_sym_START] = ACTIONS(9),
    [sym_dsect_operation] = ACTIONS(46),
    [aux_sym_operation_token1] = ACTIONS(13),
    [anon_sym_B] = ACTIONS(15),
    [anon_sym_BALR] = ACTIONS(15),
    [anon_sym_BC] = ACTIONS(15),
    [anon_sym_BCR] = ACTIONS(15),
    [anon_sym_BE] = ACTIONS(15),
    [anon_sym_BZ] = ACTIONS(15),
    [anon_sym_BH] = ACTIONS(15),
    [anon_sym_BNE] = ACTIONS(15),
    [anon_sym_BNZ] = ACTIONS(15),
    [anon_sym_BL] = ACTIONS(15),
    [anon_sym_BLE] = ACTIONS(15),
    [anon_sym_BP] = ACTIONS(15),
    [anon_sym_BPE] = ACTIONS(15),
    [anon_sym_BPR] = ACTIONS(15),
    [anon_sym_BR] = ACTIONS(15),
    [anon_sym_BHR] = ACTIONS(15),
    [anon_sym_BNR] = ACTIONS(15),
    [anon_sym_BRL] = ACTIONS(15),
    [anon_sym_BNER] = ACTIONS(15),
    [anon_sym_BNHR] = ACTIONS(15),
    [anon_sym_BNLR] = ACTIONS(15),
    [anon_sym_BNPR] = ACTIONS(15),
    [anon_sym_BRAS] = ACTIONS(15),
    [anon_sym_BRASL] = ACTIONS(15),
    [anon_sym_BRC] = ACTIONS(15),
    [anon_sym_BRCL] = ACTIONS(15),
    [anon_sym_BXH] = ACTIONS(15),
    [anon_sym_BXLE] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 1,
      sym__newline,
    ACTIONS(50), 2,
      sym_operands,
      anon_sym_COMMA,
  [8] = 1,
    ACTIONS(52), 3,
      sym_operands,
      sym__newline,
      anon_sym_COMMA,
  [14] = 1,
    ACTIONS(54), 3,
      sym_operands,
      sym__newline,
      anon_sym_COMMA,
  [20] = 2,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(58), 2,
      sym_operands,
      anon_sym_COMMA,
  [28] = 2,
    ACTIONS(60), 1,
      sym__newline,
    ACTIONS(62), 2,
      sym_operands,
      anon_sym_COMMA,
  [36] = 2,
    ACTIONS(64), 1,
      sym__newline,
    ACTIONS(66), 2,
      sym_operands,
      anon_sym_COMMA,
  [44] = 2,
    ACTIONS(68), 1,
      sym__newline,
    ACTIONS(70), 2,
      sym_operands,
      anon_sym_COMMA,
  [52] = 2,
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(74), 2,
      sym_operands,
      anon_sym_COMMA,
  [60] = 2,
    ACTIONS(76), 1,
      sym__newline,
    ACTIONS(78), 2,
      sym_operands,
      anon_sym_COMMA,
  [68] = 2,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(82), 2,
      sym_operands,
      anon_sym_COMMA,
  [76] = 1,
    ACTIONS(84), 3,
      sym_operands,
      sym__newline,
      anon_sym_COMMA,
  [82] = 2,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(88), 1,
      sym_remark,
  [89] = 2,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(92), 1,
      sym_remark,
  [96] = 2,
    ACTIONS(94), 1,
      sym__newline,
    ACTIONS(96), 1,
      sym_remark,
  [103] = 2,
    ACTIONS(64), 1,
      sym__newline,
    ACTIONS(98), 1,
      sym_remark,
  [110] = 2,
    ACTIONS(68), 1,
      sym__newline,
    ACTIONS(100), 1,
      sym_remark,
  [117] = 2,
    ACTIONS(72), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym_remark,
  [124] = 2,
    ACTIONS(76), 1,
      sym__newline,
    ACTIONS(104), 1,
      sym_remark,
  [131] = 2,
    ACTIONS(106), 1,
      sym__newline,
    ACTIONS(108), 1,
      sym_remark,
  [138] = 1,
    ACTIONS(110), 1,
      sym__newline,
  [142] = 1,
    ACTIONS(112), 1,
      sym_cics_arguments,
  [146] = 1,
    ACTIONS(114), 1,
      anon_sym_CICS,
  [150] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [154] = 1,
    ACTIONS(118), 1,
      sym__newline,
  [158] = 1,
    ACTIONS(106), 1,
      sym__newline,
  [162] = 1,
    ACTIONS(90), 1,
      sym__newline,
  [166] = 1,
    ACTIONS(86), 1,
      sym__newline,
  [170] = 1,
    ACTIONS(94), 1,
      sym__newline,
  [174] = 1,
    ACTIONS(120), 1,
      sym__newline,
  [178] = 1,
    ACTIONS(122), 1,
      sym__newline,
  [182] = 1,
    ACTIONS(124), 1,
      sym__newline,
  [186] = 1,
    ACTIONS(126), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 8,
  [SMALL_STATE(8)] = 14,
  [SMALL_STATE(9)] = 20,
  [SMALL_STATE(10)] = 28,
  [SMALL_STATE(11)] = 36,
  [SMALL_STATE(12)] = 44,
  [SMALL_STATE(13)] = 52,
  [SMALL_STATE(14)] = 60,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 76,
  [SMALL_STATE(17)] = 82,
  [SMALL_STATE(18)] = 89,
  [SMALL_STATE(19)] = 96,
  [SMALL_STATE(20)] = 103,
  [SMALL_STATE(21)] = 110,
  [SMALL_STATE(22)] = 117,
  [SMALL_STATE(23)] = 124,
  [SMALL_STATE(24)] = 131,
  [SMALL_STATE(25)] = 138,
  [SMALL_STATE(26)] = 142,
  [SMALL_STATE(27)] = 146,
  [SMALL_STATE(28)] = 150,
  [SMALL_STATE(29)] = 154,
  [SMALL_STATE(30)] = 158,
  [SMALL_STATE(31)] = 162,
  [SMALL_STATE(32)] = 166,
  [SMALL_STATE(33)] = 170,
  [SMALL_STATE(34)] = 174,
  [SMALL_STATE(35)] = 178,
  [SMALL_STATE(36)] = 182,
  [SMALL_STATE(37)] = 186,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_operation, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csect_instruction, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsect_instruction, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csect_instruction, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsect_instruction, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csect_operation, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csect_instruction, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsect_instruction, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cics_macro, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dsect_instruction, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_csect_instruction, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 4, 0, 0),
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

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ibmhlasm(void) {
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
