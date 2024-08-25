; highlighting rules follow the neovim standard highlight groups: https://neovim.io/doc/user/treesitter.html#treesitter-highlight

(type_keyword) @keyword.type

(type_ident) @type
((type_ident) @type.builtin
  (#match? @type.builtin "^(String|Int|Int64|UInt|UInt64|USize|ISize|Int8|UInt8|Int16|UInt16|Int32|UInt32|Bool|Float|Double)$"))

(ident) @variable.member
(comment) @comment

("{" "}" "[" "]") @punctuation.bracket
(":" ",") @punctuation.delimiter
