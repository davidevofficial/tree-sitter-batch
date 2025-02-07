/**
 * @file Batch tree sitter
 * @author Davidevofficial <davidevufficial@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "batch",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
