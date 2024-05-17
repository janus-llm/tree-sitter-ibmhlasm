#include "tree_sitter/parser.h"
#include <stdio.h>
#include <wctype.h>

#define CONTINUATION_COL 71 // A non-WS char in column 72 indicates a continuation line, but TS is 0-indexed
#define CONT_LINE_START_COL 15  // Follow up continuation lines begin on column 16 

enum TokenType {
  NAME,
  COMMENT,
  OPERANDS,
  REMARK,
  CICS_ARGS,
};

static void advance(TSLexer * lexer)
{
    lexer->advance(lexer, false);
}

static void skip(TSLexer * lexer)
{
    lexer->advance(lexer, true);
}

static bool scan_non_whitespace(TSLexer * lexer)
{
    bool did_scan = false;
    bool iswhitespace = iswspace(lexer->lookahead);
    while (iswspace(lexer->lookahead) == 0) {
      if (lexer->eof(lexer) != false) {
        return true;
      }
      advance(lexer);
    }
    return false; 
}

static bool skip_whitespace(TSLexer * lexer)
{
  while ((lexer->eof(lexer) == 0) && (isblank(lexer->lookahead) != 0)) { 
    skip(lexer);
  }
  // If we skip all the way to the end of the line, then there's nothing else here
  if (iswcntrl(lexer->lookahead) != 0) {
      return false;
    }
  else {
    return true;
  }
}

static bool check_for_placeholder_operands(TSLexer * lexer)
{
    // If it's just a ",", this is just a placeholder so we can write remarks TODO: Could operands ever look like: ",OPERAND2"?
    if (lexer->lookahead == ',') {
      return true;
    }
    else {
      return false;
    }
}


static void skip_to_cont_column(TSLexer * lexer)
{
  // Skip the 16 spaces before the continuation column
  for (int i = 0; i < CONT_LINE_START_COL; i++) {
    advance(lexer);
  }
}

static bool keep_parsing_operand(TSLexer * lexer, bool continuation_line, bool in_quoted_string) 
{
  // TODO: If we're in a quoted string it's only wspace that we're OK with, not newlines!
  /* 
  *  Keep parsing through the operand if:
  *  We're moving through non-whitespace
  *  We're at a newline and we're expecting a continuation line next
  *  We're in the middle of quotes (spaces OK in this case)  TODO: hitting a newline should bail here, in case somehow we get a single quote!
  */
  if ((lexer->eof(lexer) == 0) && (iswspace(lexer->lookahead) == 0 || (continuation_line == true && iswcntrl(lexer->lookahead)) || (in_quoted_string == true))) {
    return true;
  }
  else {
    return false;
  }
}

static bool keep_parsing_remark(TSLexer * lexer, bool continuation_line, bool in_quoted_string) 
{
  /* 
  * Keep parsing through the remark if:
  * We're not at the end of the line
  * We're at a newline and we're expecting a continuation line next
  */
  if ((lexer->eof(lexer) == 0) && (iswcntrl(lexer->lookahead) == 0 || (continuation_line == true && iswcntrl(lexer->lookahead)))) {
    return true;
  }
  else {
    return false;
  }
}

// TODO: Combine with remark, since the rules are the same? (are they?)
static bool keep_parsing_comment(TSLexer * lexer, bool continuation_line, bool in_quoted_string) 
{
  /* 
  * Keep parsing through the comment if:
  * We're not at the end of the line
  * We're at a newline and we're expecting a continuation line next
  */
  if ((lexer->eof(lexer) == 0) && (iswcntrl(lexer->lookahead) == 0 || (continuation_line == true && iswcntrl(lexer->lookahead)))) {
    return true;
  }
  else {
    return false;
  }
}

static enum TokenType parse_w_cont(TSLexer * lexer, enum TokenType current_token)
{                
  // Is the next line a continuation line?                   
  bool continuation_line = false;

  // Which function checks if parsing should continue?
  bool (*keep_parsing_func_ptr)(TSLexer *, bool, bool);

  // Comments have a * in column 0
  if (current_token == COMMENT) {
    if (lexer->lookahead == '*' && lexer->get_column(lexer) == 0) {
      keep_parsing_func_ptr = keep_parsing_comment;
      lexer->result_symbol = COMMENT;
    }
    else {
      // If there's no *, just bail immediately
      return false;
    }
  }

  // Skip past whitespace to get to the actual token
  if (!skip_whitespace(lexer)) {
    return false;
  }

  // Set the parsing check function
  if (current_token == OPERANDS) {
    keep_parsing_func_ptr = &keep_parsing_operand;
  }
  else if (current_token == REMARK) {
    keep_parsing_func_ptr = &keep_parsing_remark;
  }
  else if (current_token == CICS_ARGS) {
    keep_parsing_func_ptr = &keep_parsing_remark;
  }

  // To include a remark without operands, a ',' is used to represent operands - in this case we don't want to label the dummy operands 
  if (current_token == OPERANDS) {
    if (check_for_placeholder_operands(lexer)) {
      return false;
    }
  }

  bool in_quoted_string = false;

  while (keep_parsing_func_ptr(lexer, continuation_line, in_quoted_string)) {
    // OPERANDS can only have spaces in them if they're inside of quotes
    if (current_token == OPERANDS) {
      // If we see a quote, we need to open a new one or close the current one
      if (lexer->lookahead == '\'') {
        if (in_quoted_string == true) {
          in_quoted_string = false;
        }
        else {
          in_quoted_string = true;
        }
      }
    }

    // If a line has a non-whitespace character in column 72 (71 here, since columns are 0-indexed in TS), then the next line will be a continuation of it
    if (lexer->get_column(lexer) == CONTINUATION_COL && iswspace(lexer->lookahead) == 0) {
      continuation_line = true;
    }

    // If we hit the end of a line, and expect a continuation...
    if (iswcntrl(lexer->lookahead) && continuation_line == true) { // TODO: Maybe this should be a while?

      // We don't know if this line will be continued past this, so reset our continuation line variable
      continuation_line = false;

      // Jump down to the next line to read the continuation
      advance(lexer); // Advance past \n

      // Continuation lines begin in column 16, so skip up to that point
      skip_to_cont_column(lexer);
    }

    // Advance through characters
    advance(lexer);
  }
  
  // Label the symbol
  lexer->result_symbol = current_token;
  return true;
}

void *tree_sitter_ibmhlasm_external_scanner_create() { return NULL; }
void tree_sitter_ibmhlasm_external_scanner_destroy(void *p) {}
void tree_sitter_ibmhlasm_external_scanner_reset(void *p) {}
unsigned tree_sitter_ibmhlasm_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_ibmhlasm_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_ibmhlasm_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
                                              
  // NAMEs and COMMENTs together, since they both check column 0
  if (valid_symbols[COMMENT] || valid_symbols[NAME]) {
    if (parse_w_cont(lexer, COMMENT) == true) {
      return true;
    }
    else {
      if (lexer->get_column(lexer) == 0 && lexer->eof(lexer) == 0 && iswcntrl(lexer->lookahead) == 0 && iswspace(lexer->lookahead) == 0) {
        while (iswspace(lexer->lookahead) == 0) {
          advance(lexer);
        }
        lexer->result_symbol = NAME;
        return true;
      }
      else {
        return false;
      }
    }
  }

  if (valid_symbols[OPERANDS]) {
    return parse_w_cont(lexer, OPERANDS);
  }

  if (valid_symbols[REMARK]) {
    return parse_w_cont(lexer, REMARK);
  }

  if(valid_symbols[CICS_ARGS]) {
    return parse_w_cont(lexer, CICS_ARGS);
  }

  else {
    return false;
  }
}
