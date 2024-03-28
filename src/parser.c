#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  anon_sym_COMMA = 2,
  sym_operation = 3,
  anon_sym_B = 4,
  anon_sym_BALR = 5,
  anon_sym_BC = 6,
  anon_sym_BCR = 7,
  anon_sym_BE = 8,
  anon_sym_BZ = 9,
  anon_sym_BH = 10,
  anon_sym_BNE = 11,
  anon_sym_BNZ = 12,
  anon_sym_BL = 13,
  anon_sym_BLE = 14,
  anon_sym_BP = 15,
  anon_sym_BPE = 16,
  anon_sym_BPR = 17,
  anon_sym_BR = 18,
  anon_sym_BHR = 19,
  anon_sym_BNR = 20,
  anon_sym_BRL = 21,
  anon_sym_BNER = 22,
  anon_sym_BNHR = 23,
  anon_sym_BNLR = 24,
  anon_sym_BNPR = 25,
  anon_sym_BRAS = 26,
  anon_sym_BRASL = 27,
  anon_sym_BRC = 28,
  anon_sym_BRCL = 29,
  anon_sym_BXH = 30,
  anon_sym_BXLE = 31,
  sym_name = 32,
  sym_comment = 33,
  sym_operands = 34,
  sym_remark = 35,
  sym_program = 36,
  sym__instruction = 37,
  sym_branch_instruction = 38,
  sym_instruction = 39,
  sym_branch_operation = 40,
  aux_sym_program_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_COMMA] = ",",
  [sym_operation] = "operation",
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
  [sym_program] = "program",
  [sym__instruction] = "_instruction",
  [sym_branch_instruction] = "branch_instruction",
  [sym_instruction] = "instruction",
  [sym_branch_operation] = "branch_operation",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_operation] = sym_operation,
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
  [sym_program] = sym_program,
  [sym__instruction] = sym__instruction,
  [sym_branch_instruction] = sym_branch_instruction,
  [sym_instruction] = sym_instruction,
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
  [sym_operation] = {
    .visible = true,
    .named = true,
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
  [sym_instruction] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'H') ADVANCE(11);
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead == 'Z') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'E') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'H') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'L') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'R') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'R') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'R') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'R') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_operation);
      if (lookahead == 'S') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_operation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_B);
      if (lookahead == 'A') ADVANCE(9);
      if (lookahead == 'C') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(22);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(6);
      if (lookahead == 'P') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'X') ADVANCE(8);
      if (lookahead == 'Z') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BALR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BC);
      if (lookahead == 'R') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BCR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BH);
      if (lookahead == 'R') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BNE);
      if (lookahead == 'R') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BNZ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BL);
      if (lookahead == 'E') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BP);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_BPE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BPR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BR);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'L') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BNR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BRL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BNER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BNHR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BNLR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BNPR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BRAS);
      if (lookahead == 'L') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BRASL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BRC);
      if (lookahead == 'L') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BRCL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BXH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BXLE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 3},
  [6] = {.lex_state = 0, .external_lex_state = 3},
  [7] = {.lex_state = 0, .external_lex_state = 3},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0, .external_lex_state = 4},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0, .external_lex_state = 4},
  [14] = {.lex_state = 0, .external_lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_operation] = ACTIONS(1),
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
  },
  [1] = {
    [sym_program] = STATE(21),
    [sym__instruction] = STATE(9),
    [sym_branch_instruction] = STATE(9),
    [sym_instruction] = STATE(9),
    [sym_branch_operation] = STATE(6),
    [sym__newline] = ACTIONS(3),
    [sym_operation] = ACTIONS(5),
    [anon_sym_B] = ACTIONS(7),
    [anon_sym_BALR] = ACTIONS(7),
    [anon_sym_BC] = ACTIONS(7),
    [anon_sym_BCR] = ACTIONS(7),
    [anon_sym_BE] = ACTIONS(7),
    [anon_sym_BZ] = ACTIONS(7),
    [anon_sym_BH] = ACTIONS(7),
    [anon_sym_BNE] = ACTIONS(7),
    [anon_sym_BNZ] = ACTIONS(7),
    [anon_sym_BL] = ACTIONS(7),
    [anon_sym_BLE] = ACTIONS(7),
    [anon_sym_BP] = ACTIONS(7),
    [anon_sym_BPE] = ACTIONS(7),
    [anon_sym_BPR] = ACTIONS(7),
    [anon_sym_BR] = ACTIONS(7),
    [anon_sym_BHR] = ACTIONS(7),
    [anon_sym_BNR] = ACTIONS(7),
    [anon_sym_BRL] = ACTIONS(7),
    [anon_sym_BNER] = ACTIONS(7),
    [anon_sym_BNHR] = ACTIONS(7),
    [anon_sym_BNLR] = ACTIONS(7),
    [anon_sym_BNPR] = ACTIONS(7),
    [anon_sym_BRAS] = ACTIONS(7),
    [anon_sym_BRASL] = ACTIONS(7),
    [anon_sym_BRC] = ACTIONS(7),
    [anon_sym_BRCL] = ACTIONS(7),
    [anon_sym_BXH] = ACTIONS(7),
    [anon_sym_BXLE] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__instruction] = STATE(16),
    [sym_branch_instruction] = STATE(16),
    [sym_instruction] = STATE(16),
    [sym_branch_operation] = STATE(6),
    [sym__newline] = ACTIONS(11),
    [sym_operation] = ACTIONS(5),
    [anon_sym_B] = ACTIONS(7),
    [anon_sym_BALR] = ACTIONS(7),
    [anon_sym_BC] = ACTIONS(7),
    [anon_sym_BCR] = ACTIONS(7),
    [anon_sym_BE] = ACTIONS(7),
    [anon_sym_BZ] = ACTIONS(7),
    [anon_sym_BH] = ACTIONS(7),
    [anon_sym_BNE] = ACTIONS(7),
    [anon_sym_BNZ] = ACTIONS(7),
    [anon_sym_BL] = ACTIONS(7),
    [anon_sym_BLE] = ACTIONS(7),
    [anon_sym_BP] = ACTIONS(7),
    [anon_sym_BPE] = ACTIONS(7),
    [anon_sym_BPR] = ACTIONS(7),
    [anon_sym_BR] = ACTIONS(7),
    [anon_sym_BHR] = ACTIONS(7),
    [anon_sym_BNR] = ACTIONS(7),
    [anon_sym_BRL] = ACTIONS(7),
    [anon_sym_BNER] = ACTIONS(7),
    [anon_sym_BNHR] = ACTIONS(7),
    [anon_sym_BNLR] = ACTIONS(7),
    [anon_sym_BNPR] = ACTIONS(7),
    [anon_sym_BRAS] = ACTIONS(7),
    [anon_sym_BRASL] = ACTIONS(7),
    [anon_sym_BRC] = ACTIONS(7),
    [anon_sym_BRCL] = ACTIONS(7),
    [anon_sym_BXH] = ACTIONS(7),
    [anon_sym_BXLE] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_branch_operation] = STATE(8),
    [sym_operation] = ACTIONS(13),
    [anon_sym_B] = ACTIONS(7),
    [anon_sym_BALR] = ACTIONS(7),
    [anon_sym_BC] = ACTIONS(7),
    [anon_sym_BCR] = ACTIONS(7),
    [anon_sym_BE] = ACTIONS(7),
    [anon_sym_BZ] = ACTIONS(7),
    [anon_sym_BH] = ACTIONS(7),
    [anon_sym_BNE] = ACTIONS(7),
    [anon_sym_BNZ] = ACTIONS(7),
    [anon_sym_BL] = ACTIONS(7),
    [anon_sym_BLE] = ACTIONS(7),
    [anon_sym_BP] = ACTIONS(7),
    [anon_sym_BPE] = ACTIONS(7),
    [anon_sym_BPR] = ACTIONS(7),
    [anon_sym_BR] = ACTIONS(7),
    [anon_sym_BHR] = ACTIONS(7),
    [anon_sym_BNR] = ACTIONS(7),
    [anon_sym_BRL] = ACTIONS(7),
    [anon_sym_BNER] = ACTIONS(7),
    [anon_sym_BNHR] = ACTIONS(7),
    [anon_sym_BNLR] = ACTIONS(7),
    [anon_sym_BNPR] = ACTIONS(7),
    [anon_sym_BRAS] = ACTIONS(7),
    [anon_sym_BRASL] = ACTIONS(7),
    [anon_sym_BRC] = ACTIONS(7),
    [anon_sym_BRCL] = ACTIONS(7),
    [anon_sym_BXH] = ACTIONS(7),
    [anon_sym_BXLE] = ACTIONS(7),
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
  [16] = 2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(23), 2,
      sym_operands,
      anon_sym_COMMA,
  [25] = 2,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(27), 2,
      sym_operands,
      anon_sym_COMMA,
  [34] = 2,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__newline,
    ACTIONS(31), 2,
      sym_operands,
      anon_sym_COMMA,
  [43] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_program_repeat1,
  [53] = 3,
    ACTIONS(35), 1,
      sym__newline,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym_program_repeat1,
  [63] = 2,
    ACTIONS(39), 1,
      sym_remark,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__newline,
  [71] = 2,
    ACTIONS(41), 1,
      sym_remark,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__newline,
  [79] = 2,
    ACTIONS(45), 1,
      sym_remark,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym__newline,
  [87] = 2,
    ACTIONS(49), 1,
      sym_remark,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym__newline,
  [95] = 3,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_program_repeat1,
  [105] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym__newline,
  [110] = 1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym__newline,
  [115] = 1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym__newline,
  [120] = 1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym__newline,
  [125] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym__newline,
  [130] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 16,
  [SMALL_STATE(7)] = 25,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 53,
  [SMALL_STATE(11)] = 63,
  [SMALL_STATE(12)] = 71,
  [SMALL_STATE(13)] = 79,
  [SMALL_STATE(14)] = 87,
  [SMALL_STATE(15)] = 95,
  [SMALL_STATE(16)] = 105,
  [SMALL_STATE(17)] = 110,
  [SMALL_STATE(18)] = 115,
  [SMALL_STATE(19)] = 120,
  [SMALL_STATE(20)] = 125,
  [SMALL_STATE(21)] = 130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_operation, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_instruction, 4),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
