/**
 * @file Batch tree sitter
 * @author Davidevofficial <davidevufficial@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "batch",

  extras: $ => [
      /\s/  // Whitespace and comments
    ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._statement),
    _statement: $ => choice(
        $.command,
        $.label,
        $.comment,
        $.empty_line
    ),

    command: $ => seq(
        optional('@'),
        field('command', choice(
          $.builtin_command,
          $.identifier
        )),
        optional($.arguments)
    ),

        builtin_command: $ => choice(
          'echo', 'set', 'if', 'else', 'for', 'goto',
          'call', 'start', 'exit', 'pause', 'rem'
        ),

        arguments: $ => /.*/,

        label: $ => seq(
          ':',
          field('name', $.identifier)
        ),

        variable: $ => seq(
          '%',
          field('name', $.identifier),
          '%'
        ),

        comment: $ => token(seq(
          choice('REM', '::'),
          /.*/
        )),

        identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

        empty_line: $ => /\r?\n/

  }
});
