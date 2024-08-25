#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_COLON = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_QMARK = 6,
  anon_sym_COMMA = 7,
  sym__newline = 8,
  sym_type_keyword = 9,
  sym_type_ident = 10,
  sym_ident = 11,
  sym_comment = 12,
  sym_source = 13,
  sym_type = 14,
  sym_field = 15,
  sym__type_item = 16,
  sym_array = 17,
  sym_dict = 18,
  sym_optional = 19,
  sym__delim = 20,
  aux_sym_source_repeat1 = 21,
  aux_sym_type_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COMMA] = ",",
  [sym__newline] = "_newline",
  [sym_type_keyword] = "type_keyword",
  [sym_type_ident] = "type_ident",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym_type] = "type",
  [sym_field] = "field",
  [sym__type_item] = "_type_item",
  [sym_array] = "array",
  [sym_dict] = "dict",
  [sym_optional] = "optional",
  [sym__delim] = "_delim",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__newline] = sym__newline,
  [sym_type_keyword] = sym_type_keyword,
  [sym_type_ident] = sym_type_ident,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym_type] = sym_type,
  [sym_field] = sym_field,
  [sym__type_item] = sym__type_item,
  [sym_array] = sym_array,
  [sym_dict] = sym_dict,
  [sym_optional] = sym_optional,
  [sym__delim] = sym__delim,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_type_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__type_item] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym__delim] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 3,
  [7] = 2,
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 11,
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 24,
  [33] = 29,
  [34] = 34,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '\n', 17,
        '\r', 1,
        ',', 16,
        '/', 4,
        ':', 12,
        '?', 15,
        '[', 13,
        ']', 14,
        't', 25,
        '{', 10,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 17,
        '\r', 1,
        ',', 16,
        '/', 4,
        ':', 12,
        '?', 15,
        '[', 13,
        ']', 14,
        't', 25,
        '{', 10,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 't') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 't') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_type_keyword);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_type_keyword);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_type_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__newline] = ACTIONS(3),
    [sym_type_keyword] = ACTIONS(1),
    [sym_type_ident] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source] = STATE(39),
    [sym_type] = STATE(9),
    [aux_sym_source_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__newline] = ACTIONS(3),
    [sym_type_keyword] = ACTIONS(9),
    [sym_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_type_ident,
    STATE(35), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [22] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_type_ident,
    STATE(33), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [44] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_type_ident,
    STATE(32), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [66] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_type_ident,
    STATE(23), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [88] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_type_ident,
    STATE(29), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [110] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_type_ident,
    STATE(25), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [132] = 6,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      sym_type_ident,
    STATE(24), 4,
      sym__type_item,
      sym_array,
      sym_dict,
      sym_optional,
  [154] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_type_keyword,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym_type,
      aux_sym_source_repeat1,
  [171] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_type_keyword,
    STATE(10), 2,
      sym_type,
      aux_sym_source_repeat1,
  [188] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(40), 4,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [201] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(42), 4,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [214] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(44), 4,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
  [227] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      sym__newline,
    STATE(16), 1,
      aux_sym_type_repeat1,
    STATE(22), 1,
      sym__delim,
  [246] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_type_repeat1,
    STATE(27), 1,
      sym__delim,
  [265] = 6,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_type_repeat1,
    STATE(17), 1,
      sym__delim,
  [284] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym_ident,
    STATE(34), 1,
      sym_field,
  [300] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym__newline,
    ACTIONS(44), 3,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COMMA,
  [312] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_ident,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_field,
  [328] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym__newline,
    ACTIONS(40), 3,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COMMA,
  [340] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__newline,
    ACTIONS(42), 3,
      anon_sym_RBRACE,
      anon_sym_QMARK,
      anon_sym_COMMA,
  [352] = 5,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      sym_ident,
    STATE(34), 1,
      sym_field,
  [368] = 4,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_QMARK,
    ACTIONS(82), 1,
      sym__newline,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [382] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      anon_sym_QMARK,
  [395] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(88), 1,
      anon_sym_COLON,
  [408] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      sym_type_keyword,
  [421] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_ident,
    STATE(34), 1,
      sym_field,
  [434] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_type_keyword,
  [447] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
  [460] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym_type_keyword,
  [473] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym_type_keyword,
  [486] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
  [499] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
  [512] = 3,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym__newline,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [523] = 4,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_QMARK,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [536] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_type_ident,
  [546] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_COLON,
  [556] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
  [566] = 3,
    ACTIONS(3), 1,
      sym__newline,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 328,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 368,
  [SMALL_STATE(24)] = 382,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 408,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 486,
  [SMALL_STATE(33)] = 499,
  [SMALL_STATE(34)] = 512,
  [SMALL_STATE(35)] = 523,
  [SMALL_STATE(36)] = 536,
  [SMALL_STATE(37)] = 546,
  [SMALL_STATE(38)] = 556,
  [SMALL_STATE(39)] = 566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 7, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 7, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_type(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
