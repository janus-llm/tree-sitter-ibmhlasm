#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  anon_sym_COMMA = 2,
  anon_sym_EXEC = 3,
  anon_sym_CICS = 4,
  aux_sym_operation_token1 = 5,
  anon_sym_B = 6,
  anon_sym_BALR = 7,
  anon_sym_BC = 8,
  anon_sym_BCR = 9,
  anon_sym_BE = 10,
  anon_sym_BZ = 11,
  anon_sym_BH = 12,
  anon_sym_BNE = 13,
  anon_sym_BNZ = 14,
  anon_sym_BL = 15,
  anon_sym_BLE = 16,
  anon_sym_BP = 17,
  anon_sym_BPE = 18,
  anon_sym_BPR = 19,
  anon_sym_BR = 20,
  anon_sym_BHR = 21,
  anon_sym_BNR = 22,
  anon_sym_BRL = 23,
  anon_sym_BNER = 24,
  anon_sym_BNHR = 25,
  anon_sym_BNLR = 26,
  anon_sym_BNPR = 27,
  anon_sym_BRAS = 28,
  anon_sym_BRASL = 29,
  anon_sym_BRC = 30,
  anon_sym_BRCL = 31,
  anon_sym_BXH = 32,
  anon_sym_BXLE = 33,
  sym_name = 34,
  sym_comment = 35,
  sym_operands = 36,
  sym_remark = 37,
  sym_cics_arguments = 38,
  sym_program = 39,
  sym__instruction = 40,
  sym_branch_instruction = 41,
  sym_cics_macro = 42,
  sym_instruction = 43,
  sym_operation = 44,
  sym_branch_operation = 45,
  aux_sym_program_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_COMMA] = ",",
  [anon_sym_EXEC] = "EXEC",
  [anon_sym_CICS] = "CICS",
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
  [sym__instruction] = "_instruction",
  [sym_branch_instruction] = "branch_instruction",
  [sym_cics_macro] = "cics_macro",
  [sym_instruction] = "instruction",
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
  [sym__instruction] = sym__instruction,
  [sym_branch_instruction] = sym_branch_instruction,
  [sym_cics_macro] = sym_cics_macro,
  [sym_instruction] = sym_instruction,
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
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_branch_instruction] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'E') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'E') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4);
      if (lookahead == 'B') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
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
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EXEC);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_CICS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CICS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'C') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'C') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'H') ADVANCE(24);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'R') ADVANCE(47);
      if (lookahead == 'Z') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'E') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'H') ADVANCE(57);
      if (lookahead == 'L') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'I') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'L') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'R') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'S') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'S') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (lookahead == 'X') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_operation_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_B);
      ADVANCE_MAP(
        'A', 22,
        'C', 33,
        'E', 35,
        'H', 37,
        'L', 40,
        'N', 17,
        'P', 42,
        'R', 45,
        'X', 20,
        'Z', 36,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BALR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BC);
      if (lookahead == 'R') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BCR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BH);
      if (lookahead == 'R') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BNE);
      if (lookahead == 'R') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BNZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BL);
      if (lookahead == 'E') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BP);
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BPE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BPR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BR);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'L') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BNR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BRL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BNER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BNHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BNLR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BNPR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BRAS);
      if (lookahead == 'L') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BRASL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BRC);
      if (lookahead == 'L') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BRCL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BXH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BXLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 5},
  [26] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EXEC] = ACTIONS(1),
    [anon_sym_CICS] = ACTIONS(1),
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
    [sym_program] = STATE(24),
    [sym__instruction] = STATE(11),
    [sym_branch_instruction] = STATE(11),
    [sym_cics_macro] = STATE(11),
    [sym_instruction] = STATE(11),
    [sym_operation] = STATE(8),
    [sym_branch_operation] = STATE(9),
    [sym__newline] = ACTIONS(3),
    [anon_sym_EXEC] = ACTIONS(5),
    [aux_sym_operation_token1] = ACTIONS(7),
    [anon_sym_B] = ACTIONS(9),
    [anon_sym_BALR] = ACTIONS(9),
    [anon_sym_BC] = ACTIONS(9),
    [anon_sym_BCR] = ACTIONS(9),
    [anon_sym_BE] = ACTIONS(9),
    [anon_sym_BZ] = ACTIONS(9),
    [anon_sym_BH] = ACTIONS(9),
    [anon_sym_BNE] = ACTIONS(9),
    [anon_sym_BNZ] = ACTIONS(9),
    [anon_sym_BL] = ACTIONS(9),
    [anon_sym_BLE] = ACTIONS(9),
    [anon_sym_BP] = ACTIONS(9),
    [anon_sym_BPE] = ACTIONS(9),
    [anon_sym_BPR] = ACTIONS(9),
    [anon_sym_BR] = ACTIONS(9),
    [anon_sym_BHR] = ACTIONS(9),
    [anon_sym_BNR] = ACTIONS(9),
    [anon_sym_BRL] = ACTIONS(9),
    [anon_sym_BNER] = ACTIONS(9),
    [anon_sym_BNHR] = ACTIONS(9),
    [anon_sym_BNLR] = ACTIONS(9),
    [anon_sym_BNPR] = ACTIONS(9),
    [anon_sym_BRAS] = ACTIONS(9),
    [anon_sym_BRASL] = ACTIONS(9),
    [anon_sym_BRC] = ACTIONS(9),
    [anon_sym_BRCL] = ACTIONS(9),
    [anon_sym_BXH] = ACTIONS(9),
    [anon_sym_BXLE] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__instruction] = STATE(17),
    [sym_branch_instruction] = STATE(17),
    [sym_cics_macro] = STATE(18),
    [sym_instruction] = STATE(17),
    [sym_operation] = STATE(8),
    [sym_branch_operation] = STATE(9),
    [sym__newline] = ACTIONS(13),
    [anon_sym_EXEC] = ACTIONS(5),
    [aux_sym_operation_token1] = ACTIONS(7),
    [anon_sym_B] = ACTIONS(9),
    [anon_sym_BALR] = ACTIONS(9),
    [anon_sym_BC] = ACTIONS(9),
    [anon_sym_BCR] = ACTIONS(9),
    [anon_sym_BE] = ACTIONS(9),
    [anon_sym_BZ] = ACTIONS(9),
    [anon_sym_BH] = ACTIONS(9),
    [anon_sym_BNE] = ACTIONS(9),
    [anon_sym_BNZ] = ACTIONS(9),
    [anon_sym_BL] = ACTIONS(9),
    [anon_sym_BLE] = ACTIONS(9),
    [anon_sym_BP] = ACTIONS(9),
    [anon_sym_BPE] = ACTIONS(9),
    [anon_sym_BPR] = ACTIONS(9),
    [anon_sym_BR] = ACTIONS(9),
    [anon_sym_BHR] = ACTIONS(9),
    [anon_sym_BNR] = ACTIONS(9),
    [anon_sym_BRL] = ACTIONS(9),
    [anon_sym_BNER] = ACTIONS(9),
    [anon_sym_BNHR] = ACTIONS(9),
    [anon_sym_BNLR] = ACTIONS(9),
    [anon_sym_BNPR] = ACTIONS(9),
    [anon_sym_BRAS] = ACTIONS(9),
    [anon_sym_BRASL] = ACTIONS(9),
    [anon_sym_BRC] = ACTIONS(9),
    [anon_sym_BRCL] = ACTIONS(9),
    [anon_sym_BXH] = ACTIONS(9),
    [anon_sym_BXLE] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [sym_operation] = STATE(5),
    [sym_branch_operation] = STATE(7),
    [aux_sym_operation_token1] = ACTIONS(7),
    [anon_sym_B] = ACTIONS(9),
    [anon_sym_BALR] = ACTIONS(9),
    [anon_sym_BC] = ACTIONS(9),
    [anon_sym_BCR] = ACTIONS(9),
    [anon_sym_BE] = ACTIONS(9),
    [anon_sym_BZ] = ACTIONS(9),
    [anon_sym_BH] = ACTIONS(9),
    [anon_sym_BNE] = ACTIONS(9),
    [anon_sym_BNZ] = ACTIONS(9),
    [anon_sym_BL] = ACTIONS(9),
    [anon_sym_BLE] = ACTIONS(9),
    [anon_sym_BP] = ACTIONS(9),
    [anon_sym_BPE] = ACTIONS(9),
    [anon_sym_BPR] = ACTIONS(9),
    [anon_sym_BR] = ACTIONS(9),
    [anon_sym_BHR] = ACTIONS(9),
    [anon_sym_BNR] = ACTIONS(9),
    [anon_sym_BRL] = ACTIONS(9),
    [anon_sym_BNER] = ACTIONS(9),
    [anon_sym_BNHR] = ACTIONS(9),
    [anon_sym_BNLR] = ACTIONS(9),
    [anon_sym_BNPR] = ACTIONS(9),
    [anon_sym_BRAS] = ACTIONS(9),
    [anon_sym_BRASL] = ACTIONS(9),
    [anon_sym_BRC] = ACTIONS(9),
    [anon_sym_BRCL] = ACTIONS(9),
    [anon_sym_BXH] = ACTIONS(9),
    [anon_sym_BXLE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(15), 4,
      sym_operands,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COMMA,
  [7] = 2,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(19), 2,
      sym_operands,
      anon_sym_COMMA,
  [16] = 1,
    ACTIONS(21), 4,
      sym_operands,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_COMMA,
  [23] = 2,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(25), 2,
      sym_operands,
      anon_sym_COMMA,
  [32] = 2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(29), 2,
      sym_operands,
      anon_sym_COMMA,
  [41] = 2,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(33), 2,
      sym_operands,
      anon_sym_COMMA,
  [50] = 2,
    ACTIONS(35), 1,
      sym_remark,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym__newline,
  [58] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_program_repeat1,
  [68] = 3,
    ACTIONS(39), 1,
      sym__newline,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_program_repeat1,
  [78] = 2,
    ACTIONS(43), 1,
      sym_remark,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__newline,
  [86] = 2,
    ACTIONS(47), 1,
      sym_remark,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym__newline,
  [94] = 2,
    ACTIONS(51), 1,
      sym_remark,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym__newline,
  [102] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_program_repeat1,
  [112] = 1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym__newline,
  [117] = 1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym__newline,
  [122] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym__newline,
  [127] = 1,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym__newline,
  [132] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym__newline,
  [137] = 1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym__newline,
  [142] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym__newline,
  [147] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [151] = 1,
    ACTIONS(66), 1,
      sym_cics_arguments,
  [155] = 1,
    ACTIONS(68), 1,
      anon_sym_CICS,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 23,
  [SMALL_STATE(8)] = 32,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 50,
  [SMALL_STATE(11)] = 58,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 86,
  [SMALL_STATE(15)] = 94,
  [SMALL_STATE(16)] = 102,
  [SMALL_STATE(17)] = 112,
  [SMALL_STATE(18)] = 117,
  [SMALL_STATE(19)] = 122,
  [SMALL_STATE(20)] = 127,
  [SMALL_STATE(21)] = 132,
  [SMALL_STATE(22)] = 137,
  [SMALL_STATE(23)] = 142,
  [SMALL_STATE(24)] = 147,
  [SMALL_STATE(25)] = 151,
  [SMALL_STATE(26)] = 155,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_operation, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cics_macro, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
