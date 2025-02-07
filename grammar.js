/**
 * @file Batch tree sitter
 * @author Davidevofficial <davidevufficial@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'batch',
    rules: {
        source_file: $ => repeat(seq($.line, optional('\r\n'))),

        line: $ => seq(
          optional('@'),
          field("keyword", $.word),
          optional(seq(/\s+/, field("argument", $.argument)))
        ),

        word: $ => token(/[^\s]+/),
        argument: $ => token(/[^\r\n]*/)
    }
});
