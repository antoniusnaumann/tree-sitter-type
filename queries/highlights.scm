; highlighting rules follow the neovim standard highlight groups: https://neovim.io/doc/user/treesitter.html#treesitter-highlight

(type_keyword) @type

(type_ident) @type
(ident) @variable.member
(comment) @comment

("{" "}" "[" "]") @punctuation.bracket
(":" ",") @punctuation.delimiter
