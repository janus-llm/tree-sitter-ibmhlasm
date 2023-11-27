module.exports = grammar({
  name: "ibmhlasm",

  // We use src/scanner.c to handle context sensitive tokens, such as names
  externals: $ => [
    $.name,  // scanner.c checks for a token in column 0
    $.comment, // scanner.c checks for a * in column 0
    $.operands,
    $.remark,
    $.macro_internal_comment,
  ],

  // We need to manually control whitespace since this language cares about newlines
  extras: $ => [
    /[ ]+/
  ],

  rules: {
    // TODO: The rule once, then repeat: (\n, the rule)

    // file: $ => choice(
    //     $.program,
    // ),

    program: $ => seq(
      choice(
        $.comment, // Unlike remarks, comments take up an entire line
        $.title, // Putting this earlier in the grammar for precedence
        $.instruction, // NAME OPCODE OPERANDS REMARK
        $._blank_line, // Whitespace lines are OK 
      ),
      repeat(
        seq(
          $._newline,
          choice(
            $.comment,
            $.title,
            $.instruction,
            $._blank_line,
          ),
        ),
      ),
    ),

    _newline: $ => /[\s]*\n/,

    _blank_line: $ => /[\s]*\n/,

    // Think it's worth writing out a special case for this since the operands seem a bit different
    title: $ => seq(
      /TITLE/,
      $._title_string,
    ),

    _title_string: $ => seq(
      /'/,
      /[a-zA-Z0-9 ¢.<(+&!$*);¬/|,%_>?`:#@'=~{}\-\\" + '"' + "]+/, 
      /'/,
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

    // Opcodes are alphanumeric
    operation: $ => $._alphanum_str,

    _alphanum_str: $ => /[A-Za-z0-9]+/,
  }
});
