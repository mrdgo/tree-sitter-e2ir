module.exports = grammar({
    name: "e2ir",
    extras: $ => [
        $.comment,
        /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
        $.line_continuation,
    ],
    // externals: $ => [
    //     $.comment,
    // ],
    rules: {
        source_file: $ => repeat(choice($.global_variable_declaration, $.function_declaration)),

        global_variable_declaration: $ => seq(
            ".global",
            $.identifier,
            ":",
            $.type_name,
        ),

        function_declaration: $ => seq(
            ".func",
            $.identifier,
            optional(seq(":", $.type_name)),
            repeat($.parameter_declaration),
            repeat($.local_variable_declaration),
            repeat($.virtual_register_declaration),
            ".code",
            repeat($.instruction)
        ),

        parameter_declaration: $ => seq(
            ".param",
            repeat($.identifier),
            ":",
            $.type_name,
        ),

        local_variable_declaration: $ => seq(
            ".local",
            repeat($.identifier),
            ":",
            $.type_name
        ),

        virtual_register_declaration: $ => seq(
            ".virt",
            repeat($.identifier),
            ":",
            $.type_name
        ),

        type_name: $ => seq(
            $.primitive_type_name,
            optional(repeat($.dimension)), // for arrays
        ),

        dimension: $ => seq(
            "[",
            $.array_size,
            "]"
        ),

        primitive_type_name: _ => choice(
            "int",
            "real"
        ),

        instruction: $ => choice(
            $.nop,
            $.mov,
            $.phi,
            $.arithmetic,
            $.unconditional_jump,
            $.conditional_jump,
            $.call,
            $.ret,
            $.load,
            $.store,
            $.cast,
            $.label,
        ),

        nop: _ => "nop",

        mov: $ => seq(
            $.variable_operand,
            "=",
            "mov",
            $.operand,
        ),

        phi: $ => seq(
            $.variable_operand,
            "=",
            "phi",
            "(",
            $.operand,
            optional(repeat(seq(",", $.operand))),
            ")"
        ),

        arithmetic: $ => seq(
            $.variable_operand,
            "=",
            choice("add", "sub", "mul", "div"),
            $.operand,
            ", ",
            $.operand,
        ),

        unconditional_jump: $ => seq(
            "jmp",
            $.label,
        ),

        conditional_jump: $ => seq(
            choice(
                "jeq",
                "jne",
                "jlt",
                "jgt",
                "jle",
                "jge"
            ),
            $.operand,
            ",",
            $.operand,
            ",",
            $.label
        ),

        call: $ => seq(
            optional(seq($.variable_operand, "=")),
            "call",
            $.identifier,
            "(",
            $.operand,
            optional(repeat(seq(",", $.operand))),
            ")",
        ),

        ret: $ => prec.right(seq(
            "ret",
            optional($.operand),
        )),

        load: $ => seq(
            $.variable_operand,
            "=",
            "load",
            $.variable_operand,
            "[",
            $.operand,
            "]"
        ),

        store: $ => seq(
            $.variable_operand,
            "[",
            $.operand,
            "]",
            "=",
            "store",
            $.operand,
        ),

        cast: $ => seq(
            $.variable_operand,
            "=",
            choice("i2r", "r2i"),
            $.operand,
        ),

        label: _ => /L[0-9]+/,

        operand: $ => choice(
            $.variable_operand,
            $.integer_constant,
            $.real_constant,
        ),

        variable_operand: $ => $.identifier,

        identifier: _ => /[a-zA-Z_%]+[a-zA-Z0-9_%$]*/,

        integer_constant: _ => /\$\-?[0-9]+/,

        real_constant: _ => /\$\-?[0-9]+\.[0-9]*/,

        array_size: _ => /[0-9]+/,

        comment: _ => token(seq('#', /.*/)),
        line_continuation: _ => token(seq('\\', choice(seq(optional('\r'), '\n'), '\0'))),
    }
})
