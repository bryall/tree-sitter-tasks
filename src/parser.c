#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_PLUS = 1,
  anon_sym_COLON = 2,
  anon_sym_POUND = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_AT = 6,
  aux_sym_attachement_token1 = 7,
  anon_sym_AMP = 8,
  anon_sym_TODO = 9,
  anon_sym_DOING = 10,
  anon_sym_DONE = 11,
  anon_sym_WAITING = 12,
  anon_sym_SCHEDULED_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_DUE_LPAREN = 15,
  anon_sym_DO_LPAREN = 16,
  anon_sym_REPEAT_LPAREN = 17,
  aux_sym_repeat_token1 = 18,
  aux_sym_repeat_token2 = 19,
  aux_sym_date_token1 = 20,
  anon_sym_DASH = 21,
  aux_sym_date_token2 = 22,
  sym__word = 23,
  sym_text = 24,
  sym_file = 25,
  sym_item = 26,
  sym_tag_list = 27,
  sym_tag = 28,
  sym_body = 29,
  sym_attachement = 30,
  sym_reference = 31,
  sym_status = 32,
  sym_repeat = 33,
  sym_date = 34,
  aux_sym_file_repeat1 = 35,
  aux_sym_tag_list_repeat1 = 36,
  aux_sym_body_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [aux_sym_attachement_token1] = "attachement_token1",
  [anon_sym_AMP] = "&",
  [anon_sym_TODO] = "TODO",
  [anon_sym_DOING] = "DOING",
  [anon_sym_DONE] = "DONE",
  [anon_sym_WAITING] = "WAITING",
  [anon_sym_SCHEDULED_LPAREN] = "SCHEDULED(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DUE_LPAREN] = "DUE(",
  [anon_sym_DO_LPAREN] = "DO(",
  [anon_sym_REPEAT_LPAREN] = "REPEAT(",
  [aux_sym_repeat_token1] = "repeat_token1",
  [aux_sym_repeat_token2] = "repeat_token2",
  [aux_sym_date_token1] = "date_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_date_token2] = "date_token2",
  [sym__word] = "_word",
  [sym_text] = "text",
  [sym_file] = "file",
  [sym_item] = "item",
  [sym_tag_list] = "tag_list",
  [sym_tag] = "tag",
  [sym_body] = "body",
  [sym_attachement] = "attachement",
  [sym_reference] = "reference",
  [sym_status] = "status",
  [sym_repeat] = "repeat",
  [sym_date] = "date",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_tag_list_repeat1] = "tag_list_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_attachement_token1] = aux_sym_attachement_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_TODO] = anon_sym_TODO,
  [anon_sym_DOING] = anon_sym_DOING,
  [anon_sym_DONE] = anon_sym_DONE,
  [anon_sym_WAITING] = anon_sym_WAITING,
  [anon_sym_SCHEDULED_LPAREN] = anon_sym_SCHEDULED_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DUE_LPAREN] = anon_sym_DUE_LPAREN,
  [anon_sym_DO_LPAREN] = anon_sym_DO_LPAREN,
  [anon_sym_REPEAT_LPAREN] = anon_sym_REPEAT_LPAREN,
  [aux_sym_repeat_token1] = aux_sym_repeat_token1,
  [aux_sym_repeat_token2] = aux_sym_repeat_token2,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_date_token2] = aux_sym_date_token2,
  [sym__word] = sym__word,
  [sym_text] = sym_text,
  [sym_file] = sym_file,
  [sym_item] = sym_item,
  [sym_tag_list] = sym_tag_list,
  [sym_tag] = sym_tag,
  [sym_body] = sym_body,
  [sym_attachement] = sym_attachement,
  [sym_reference] = sym_reference,
  [sym_status] = sym_status,
  [sym_repeat] = sym_repeat,
  [sym_date] = sym_date,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_tag_list_repeat1] = aux_sym_tag_list_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attachement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TODO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DONE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WAITING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEDULED_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUE_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPEAT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_repeat_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_repeat_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attachement] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_day = 1,
  field_id = 2,
  field_month = 3,
  field_title = 4,
  field_year = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_day] = "day",
  [field_id] = "id",
  [field_month] = "month",
  [field_title] = "title",
  [field_year] = "year",
};

static const TSFieldMapSlice ts_field_map_slices[13] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 3},
  [12] = {.index = 19, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_title, 2},
  [1] =
    {field_title, 3},
  [2] =
    {field_id, 1},
    {field_title, 3},
  [4] =
    {field_title, 4},
  [5] =
    {field_id, 1},
    {field_title, 4},
  [7] =
    {field_id, 2},
    {field_title, 4},
  [9] =
    {field_month, 2},
    {field_year, 0},
  [11] =
    {field_id, 1},
    {field_title, 5},
  [13] =
    {field_title, 5},
  [14] =
    {field_id, 2},
    {field_title, 5},
  [16] =
    {field_day, 4},
    {field_month, 2},
    {field_year, 0},
  [19] =
    {field_id, 2},
    {field_title, 6},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'S') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == 'W') ADVANCE(8);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == 'm' ||
          lookahead == 'y') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(2);
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOING);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_WAITING);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SCHEDULED_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DUE_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DO_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_REPEAT_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_repeat_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_repeat_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_DOING] = ACTIONS(1),
    [anon_sym_DONE] = ACTIONS(1),
    [anon_sym_WAITING] = ACTIONS(1),
    [anon_sym_SCHEDULED_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DUE_LPAREN] = ACTIONS(1),
    [anon_sym_DO_LPAREN] = ACTIONS(1),
    [anon_sym_REPEAT_LPAREN] = ACTIONS(1),
    [aux_sym_repeat_token1] = ACTIONS(1),
    [aux_sym_repeat_token2] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_date_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(81),
    [sym_item] = STATE(53),
    [aux_sym_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    STATE(10), 1,
      sym_status,
    STATE(11), 1,
      sym_reference,
    STATE(62), 1,
      sym_tag_list,
    STATE(92), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
    ACTIONS(15), 3,
      anon_sym_SCHEDULED_LPAREN,
      anon_sym_DUE_LPAREN,
      anon_sym_DO_LPAREN,
    ACTIONS(13), 4,
      anon_sym_TODO,
      anon_sym_DOING,
      anon_sym_DONE,
      anon_sym_WAITING,
  [40] = 11,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(19), 1,
      anon_sym_COLON,
    STATE(5), 1,
      sym_status,
    STATE(24), 1,
      sym_reference,
    STATE(57), 1,
      sym_tag_list,
    STATE(116), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
    ACTIONS(15), 3,
      anon_sym_SCHEDULED_LPAREN,
      anon_sym_DUE_LPAREN,
      anon_sym_DO_LPAREN,
    ACTIONS(13), 4,
      anon_sym_TODO,
      anon_sym_DOING,
      anon_sym_DONE,
      anon_sym_WAITING,
  [80] = 6,
    ACTIONS(21), 1,
      anon_sym_PLUS,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      anon_sym_AMP,
    ACTIONS(32), 1,
      sym_text,
    STATE(4), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [102] = 8,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(35), 1,
      anon_sym_COLON,
    STATE(22), 1,
      sym_reference,
    STATE(61), 1,
      sym_tag_list,
    STATE(117), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [128] = 6,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      sym_text,
    STATE(9), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [150] = 6,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(4), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [172] = 6,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_text,
    STATE(7), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [194] = 6,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_AMP,
    ACTIONS(49), 1,
      sym_text,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(4), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [216] = 8,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(57), 1,
      anon_sym_COLON,
    STATE(13), 1,
      sym_reference,
    STATE(58), 1,
      sym_tag_list,
    STATE(124), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [242] = 6,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(59), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym_tag_list,
    STATE(120), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [262] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym_text,
    STATE(26), 1,
      sym_body,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [278] = 6,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(67), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym_tag_list,
    STATE(93), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [298] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      sym_text,
    STATE(38), 1,
      sym_body,
    ACTIONS(69), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [314] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_text,
    STATE(40), 1,
      sym_body,
    ACTIONS(73), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [330] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym_text,
    STATE(25), 1,
      sym_body,
    ACTIONS(77), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [346] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_text,
    STATE(36), 1,
      sym_body,
    ACTIONS(81), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [362] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      sym_text,
    STATE(35), 1,
      sym_body,
    ACTIONS(85), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [378] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      sym_text,
    STATE(32), 1,
      sym_body,
    ACTIONS(89), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [394] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      sym_text,
    STATE(31), 1,
      sym_body,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [410] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      sym_text,
    STATE(28), 1,
      sym_body,
    ACTIONS(97), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [426] = 6,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(101), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_tag_list,
    STATE(125), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [446] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(105), 1,
      sym_text,
    STATE(39), 1,
      sym_body,
    ACTIONS(103), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [462] = 6,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_tag_list,
    STATE(119), 1,
      sym_repeat,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [482] = 2,
    ACTIONS(111), 1,
      sym_text,
    ACTIONS(109), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [492] = 2,
    ACTIONS(115), 1,
      sym_text,
    ACTIONS(113), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [502] = 2,
    ACTIONS(119), 1,
      sym_text,
    ACTIONS(117), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [512] = 2,
    ACTIONS(123), 1,
      sym_text,
    ACTIONS(121), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [522] = 2,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(125), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [532] = 2,
    ACTIONS(131), 1,
      sym_text,
    ACTIONS(129), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [542] = 2,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [552] = 2,
    ACTIONS(139), 1,
      sym_text,
    ACTIONS(137), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [562] = 3,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(141), 2,
      anon_sym_COLON,
      anon_sym_REPEAT_LPAREN,
    STATE(33), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [574] = 2,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(146), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [584] = 2,
    ACTIONS(152), 1,
      sym_text,
    ACTIONS(150), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [594] = 2,
    ACTIONS(156), 1,
      sym_text,
    ACTIONS(154), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [604] = 3,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(158), 2,
      anon_sym_COLON,
      anon_sym_REPEAT_LPAREN,
    STATE(33), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [616] = 2,
    ACTIONS(162), 1,
      sym_text,
    ACTIONS(160), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [626] = 2,
    ACTIONS(166), 1,
      sym_text,
    ACTIONS(164), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [636] = 2,
    ACTIONS(170), 1,
      sym_text,
    ACTIONS(168), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [646] = 1,
    ACTIONS(172), 4,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_AMP,
      anon_sym_REPEAT_LPAREN,
  [653] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_body,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [664] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_body,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [675] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_body,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [686] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_body,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [697] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_body,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [708] = 3,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      anon_sym_PLUS,
    STATE(47), 2,
      sym_item,
      aux_sym_file_repeat1,
  [719] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_body,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [730] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_body,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [741] = 1,
    ACTIONS(181), 4,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_AMP,
      anon_sym_REPEAT_LPAREN,
  [748] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_body,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [759] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_body,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [770] = 3,
    ACTIONS(5), 1,
      anon_sym_PLUS,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(47), 2,
      sym_item,
      aux_sym_file_repeat1,
  [781] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_body,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [792] = 2,
    STATE(83), 1,
      sym_date,
    ACTIONS(185), 2,
      aux_sym_date_token1,
      anon_sym_DASH,
  [800] = 1,
    ACTIONS(119), 3,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_REPEAT_LPAREN,
  [806] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(35), 1,
      anon_sym_COLON,
    STATE(117), 1,
      sym_repeat,
  [816] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(187), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym_repeat,
  [826] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(189), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym_repeat,
  [836] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(191), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym_repeat,
  [846] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(193), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym_repeat,
  [856] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(57), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym_repeat,
  [866] = 1,
    ACTIONS(195), 3,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_REPEAT_LPAREN,
  [872] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(197), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_repeat,
  [882] = 3,
    ACTIONS(17), 1,
      anon_sym_REPEAT_LPAREN,
    ACTIONS(199), 1,
      anon_sym_COLON,
    STATE(85), 1,
      sym_repeat,
  [892] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [897] = 1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [902] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [907] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [912] = 1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [917] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [922] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [927] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [932] = 1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [937] = 1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [942] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [947] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [952] = 2,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 1,
      aux_sym_date_token2,
  [959] = 1,
    ACTIONS(205), 1,
      aux_sym_repeat_token1,
  [963] = 1,
    ACTIONS(207), 1,
      sym_text,
  [967] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [971] = 1,
    ACTIONS(211), 1,
      sym_text,
  [975] = 1,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [979] = 1,
    ACTIONS(215), 1,
      anon_sym_DASH,
  [983] = 1,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [987] = 1,
    ACTIONS(219), 1,
      sym_text,
  [991] = 1,
    ACTIONS(221), 1,
      sym_text,
  [995] = 1,
    ACTIONS(223), 1,
      sym_text,
  [999] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
  [1003] = 1,
    ACTIONS(227), 1,
      anon_sym_DASH,
  [1007] = 1,
    ACTIONS(229), 1,
      aux_sym_attachement_token1,
  [1011] = 1,
    ACTIONS(57), 1,
      anon_sym_COLON,
  [1015] = 1,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [1019] = 1,
    ACTIONS(231), 1,
      sym_text,
  [1023] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [1027] = 1,
    ACTIONS(235), 1,
      anon_sym_COLON,
  [1031] = 1,
    ACTIONS(237), 1,
      sym_text,
  [1035] = 1,
    ACTIONS(239), 1,
      sym_text,
  [1039] = 1,
    ACTIONS(241), 1,
      sym_text,
  [1043] = 1,
    ACTIONS(243), 1,
      sym__word,
  [1047] = 1,
    ACTIONS(245), 1,
      sym_text,
  [1051] = 1,
    ACTIONS(247), 1,
      aux_sym_repeat_token2,
  [1055] = 1,
    ACTIONS(249), 1,
      sym_text,
  [1059] = 1,
    ACTIONS(251), 1,
      sym_text,
  [1063] = 1,
    ACTIONS(253), 1,
      sym_text,
  [1067] = 1,
    ACTIONS(255), 1,
      sym_text,
  [1071] = 1,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [1075] = 1,
    ACTIONS(259), 1,
      sym_text,
  [1079] = 1,
    ACTIONS(261), 1,
      sym_text,
  [1083] = 1,
    ACTIONS(263), 1,
      sym_text,
  [1087] = 1,
    ACTIONS(265), 1,
      sym_text,
  [1091] = 1,
    ACTIONS(267), 1,
      sym__word,
  [1095] = 1,
    ACTIONS(269), 1,
      aux_sym_date_token2,
  [1099] = 1,
    ACTIONS(271), 1,
      sym__word,
  [1103] = 1,
    ACTIONS(273), 1,
      sym_text,
  [1107] = 1,
    ACTIONS(35), 1,
      anon_sym_COLON,
  [1111] = 1,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [1115] = 1,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
  [1119] = 1,
    ACTIONS(189), 1,
      anon_sym_COLON,
  [1123] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [1127] = 1,
    ACTIONS(277), 1,
      sym_text,
  [1131] = 1,
    ACTIONS(279), 1,
      anon_sym_COLON,
  [1135] = 1,
    ACTIONS(281), 1,
      anon_sym_COLON,
  [1139] = 1,
    ACTIONS(187), 1,
      anon_sym_COLON,
  [1143] = 1,
    ACTIONS(197), 1,
      anon_sym_COLON,
  [1147] = 1,
    ACTIONS(283), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 242,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 298,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 346,
  [SMALL_STATE(18)] = 362,
  [SMALL_STATE(19)] = 378,
  [SMALL_STATE(20)] = 394,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 426,
  [SMALL_STATE(23)] = 446,
  [SMALL_STATE(24)] = 462,
  [SMALL_STATE(25)] = 482,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 502,
  [SMALL_STATE(28)] = 512,
  [SMALL_STATE(29)] = 522,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 542,
  [SMALL_STATE(32)] = 552,
  [SMALL_STATE(33)] = 562,
  [SMALL_STATE(34)] = 574,
  [SMALL_STATE(35)] = 584,
  [SMALL_STATE(36)] = 594,
  [SMALL_STATE(37)] = 604,
  [SMALL_STATE(38)] = 616,
  [SMALL_STATE(39)] = 626,
  [SMALL_STATE(40)] = 636,
  [SMALL_STATE(41)] = 646,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 664,
  [SMALL_STATE(44)] = 675,
  [SMALL_STATE(45)] = 686,
  [SMALL_STATE(46)] = 697,
  [SMALL_STATE(47)] = 708,
  [SMALL_STATE(48)] = 719,
  [SMALL_STATE(49)] = 730,
  [SMALL_STATE(50)] = 741,
  [SMALL_STATE(51)] = 748,
  [SMALL_STATE(52)] = 759,
  [SMALL_STATE(53)] = 770,
  [SMALL_STATE(54)] = 781,
  [SMALL_STATE(55)] = 792,
  [SMALL_STATE(56)] = 800,
  [SMALL_STATE(57)] = 806,
  [SMALL_STATE(58)] = 816,
  [SMALL_STATE(59)] = 826,
  [SMALL_STATE(60)] = 836,
  [SMALL_STATE(61)] = 846,
  [SMALL_STATE(62)] = 856,
  [SMALL_STATE(63)] = 866,
  [SMALL_STATE(64)] = 872,
  [SMALL_STATE(65)] = 882,
  [SMALL_STATE(66)] = 892,
  [SMALL_STATE(67)] = 897,
  [SMALL_STATE(68)] = 902,
  [SMALL_STATE(69)] = 907,
  [SMALL_STATE(70)] = 912,
  [SMALL_STATE(71)] = 917,
  [SMALL_STATE(72)] = 922,
  [SMALL_STATE(73)] = 927,
  [SMALL_STATE(74)] = 932,
  [SMALL_STATE(75)] = 937,
  [SMALL_STATE(76)] = 942,
  [SMALL_STATE(77)] = 947,
  [SMALL_STATE(78)] = 952,
  [SMALL_STATE(79)] = 959,
  [SMALL_STATE(80)] = 963,
  [SMALL_STATE(81)] = 967,
  [SMALL_STATE(82)] = 971,
  [SMALL_STATE(83)] = 975,
  [SMALL_STATE(84)] = 979,
  [SMALL_STATE(85)] = 983,
  [SMALL_STATE(86)] = 987,
  [SMALL_STATE(87)] = 991,
  [SMALL_STATE(88)] = 995,
  [SMALL_STATE(89)] = 999,
  [SMALL_STATE(90)] = 1003,
  [SMALL_STATE(91)] = 1007,
  [SMALL_STATE(92)] = 1011,
  [SMALL_STATE(93)] = 1015,
  [SMALL_STATE(94)] = 1019,
  [SMALL_STATE(95)] = 1023,
  [SMALL_STATE(96)] = 1027,
  [SMALL_STATE(97)] = 1031,
  [SMALL_STATE(98)] = 1035,
  [SMALL_STATE(99)] = 1039,
  [SMALL_STATE(100)] = 1043,
  [SMALL_STATE(101)] = 1047,
  [SMALL_STATE(102)] = 1051,
  [SMALL_STATE(103)] = 1055,
  [SMALL_STATE(104)] = 1059,
  [SMALL_STATE(105)] = 1063,
  [SMALL_STATE(106)] = 1067,
  [SMALL_STATE(107)] = 1071,
  [SMALL_STATE(108)] = 1075,
  [SMALL_STATE(109)] = 1079,
  [SMALL_STATE(110)] = 1083,
  [SMALL_STATE(111)] = 1087,
  [SMALL_STATE(112)] = 1091,
  [SMALL_STATE(113)] = 1095,
  [SMALL_STATE(114)] = 1099,
  [SMALL_STATE(115)] = 1103,
  [SMALL_STATE(116)] = 1107,
  [SMALL_STATE(117)] = 1111,
  [SMALL_STATE(118)] = 1115,
  [SMALL_STATE(119)] = 1119,
  [SMALL_STATE(120)] = 1123,
  [SMALL_STATE(121)] = 1127,
  [SMALL_STATE(122)] = 1131,
  [SMALL_STATE(123)] = 1135,
  [SMALL_STATE(124)] = 1139,
  [SMALL_STATE(125)] = 1143,
  [SMALL_STATE(126)] = 1147,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(91),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(100),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 8),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 7, .production_id = 12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 7, .production_id = 12),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 7, .production_id = 10),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 7, .production_id = 10),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachement, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachement, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2), SHIFT_REPEAT(114),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 7, .production_id = 9),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 7, .production_id = 9),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 8, .production_id = 12),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 8, .production_id = 12),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 7, .production_id = 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 7, .production_id = 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, .production_id = 7),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, .production_id = 11),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tasks(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
