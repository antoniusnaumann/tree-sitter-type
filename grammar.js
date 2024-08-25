/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "type",
   extras: $ => [
    $.comment,
    $._newline,
    /\s+/
  ],
  rules: {
    source: $ => repeat($.type),

    type: $ => seq(
      $.type_keyword,
      $.type_ident,
      "{",
      separatedTrailing($, $.field, $._delim),
      "}",
    ),

    field: $ => seq(
      $.ident,
      ":",
      $._type_item,
    ),

    _type_item: $ => choice(
      $.array,
      $.dict,
      $.optional,
      $.type_ident,
    ),

    array: $ => seq(
      "[",
      $._type_item,
      "]"
    ),

    dict: $ => seq(
      "{",
      $._type_item, ":", $._type_item,
      "}",
    ),

    optional: $ => seq(
      $._type_item,
      "?",
    ),
      
    _delim: $ => choice($._newline, ","),  

    _newline: _ => token(seq(optional('\r'), '\n')),

    type_keyword: _ => token("type"),

    type_ident: _ => /[A-Z][A-Za-z0-9_]*/,
    ident: _ => /[a-z][a-z0-9_]*/,

    comment: $ => token(seq('//', /.*/)),
  }
});

function separatedTrailing($, rule, delim) {
  return optional(seq(
    rule,
    repeat(seq(delim, rule)),
    optional(delim)
  ));
}
