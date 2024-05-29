module.exports = grammar({
  name: "ibmhlasm",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $.name,  // scanner.c checks for a token in column 0
    $.comment, // scanner.c checks for a * in column 0
    $.operands,  // Parsed via scanner.c to handle continuation lines
    $.remark,  // Parsed via scanner.c to handle continuation lines
    $.cics_arguments, // Parsed via scanner.c to handle continuation lines
  ],

  // We need to manually control whitespace since this language cares about newlines
  extras: $ => [
    /[ ]+/
  ],

  rules: {
    program: $ => seq(
      repeat(
        seq(
          $._line,
          $._newline,
        ),
      ),

      // repeat(
      //   choice(
      //     $._section,
      //   ),
      // ),
    ),

    _line: $ => choice(
      prec(2, $.cics_macro),
      $.comment, // Unlike remarks, comments take up an entire line
      $._instruction, // NAME OPCODE OPERANDS REMARK
      $._newline, // Whitespace lines are OK
    ),

    _newline: $ => /[\s]*\n/,

    _instruction: $ => choice(
      prec(2,
        $.branch_instruction,
      ),
      $.instruction,
      $.dsect_instruction,
      $.csect_instruction,
    ),

    _section: $ => choice(
      $.csect,
      $.dsect,
    ),

    _section_body: $ => prec.left(2,
      seq(
        $._newline,
        repeat(
          seq(
            $._line,
            $._newline,
          ),
        ),
      ),
    ),

    csect: $ => seq(
      $.csect_instruction,
      $._section_body,
    ),

    dsect: $ => seq(
      $.dsect_instruction,
      $._section_body,
    ),

    branch_instruction: $ => instruction_w_rule($.name, $.branch_operation, $.operands, $.remark),
    dsect_instruction: $ => instruction_w_rule($.name, $.dsect_operation, $.operands, $.remark),
    csect_instruction: $ => instruction_w_rule($.name, $.csect_operation, $.operands, $.remark),

    cics_macro: $ => seq(
      "EXEC",
      "CICS",
      $.cics_arguments,
    ),

    instruction: $ => choice(
      seq(
        // No remark case
        optional($.name),
        $.operation,
        optional(
          choice(
            ",",
            $.operands,
          ),
        ),
      ),
      // Remark case: if there's a remark, an operand list is required (or at least a ,)
      seq(
        optional($.name),
        $.operation,
        choice(
          ",",
          $.operands,
        ),
        $.remark,
      ),
    ),


    csect_operation: $ => choice("CSECT", "DFHEIENT", "START"),
    dsect_operation: $ => "DSECT",

    // Opcodes are alphanumeric
    // operation: $ => $._alphanum_str,

    operation: $ => /[A-Za-z0-9]+/,

    branch_operation: $ => choice(
      "B", "BALR", "BC", "BCR", "BE", "BZ", "BH", "BNE", "BNZ", "BL", "BLE", "BP", "BPE", "BPR", "BR", "BHR", "BNR", "BRL", "BNER", "BNHR", "BNLR", "BNPR", "BNR", "BPR", "BRAS", "BRASL", "BRC", "BRCL", "BXH", "BXLE"
    ),

    _alphanum_str: $ => /[A-Za-z0-9]+/,

    cics_macro_argument: $ => /[A-Za-z0-9\(\)_]+/,
  }
});

function instruction_w_rule(name_rule, operation_rule, operands_rule, remark_rule) {
  return choice(
    // remark case: if there's a remark, an operand list is required (or at least a ,)
    seq(
      optional(name_rule),
      operation_rule,
      choice(
        ",",
        operands_rule,
      ),
      remark_rule,
    ),
    seq(
      // no remark case
      optional(name_rule),
      operation_rule,
      optional(
        choice(
          ",",
          operands_rule,
        )
      )
    )
  )
}

