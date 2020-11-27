module.exports = grammar({
    name: 'tasks',

    rules: {
        file: $ => repeat($.item),

        item: $ => seq(
            '+',
            optional($.status),
            optional(field('id', $.reference)),
            optional($.tag_list),
            optional($.repeat),
            ':',
            field('title', $.text),
            optional($.body),
        ),

        tag_list: $ => repeat1($.tag),

        tag: $ => seq('#', $._word),

        body: $ => seq(
            '{',
            repeat(choice(
                $.text,
                $.item,
                $.reference,
                $.attachement
            )),
            '}'
        ),

        attachement: $ => seq("@", /(\w|[\/.])+/),

        reference: $ => seq('&', $._word),

        status: $ => choice(
            'TODO',
            'DOING',
            'DONE',
            seq('SCHEDULED(', $.date, ')'),
            seq('DUE(', $.date, ')'),
            seq('DO(', $.date, ')')
        ),

        repeat: $ => seq(
            'REPEAT(',
            /[\d]+/,
            /[ym]/,
            ')'
        ),

        date: $ => seq(
            field("year", choice(/\d{4}/, '-')),
            '-',
            field('month', /\d{2}/),
            '-',
            optional(field('day', /\d{2}/))
        ),

        _word: $ => /[a-zA-Z_]\w*/,

        // Everything appart from special chars in the grammar
        text: $ => /[^{}+&@]+/,
    },
});
