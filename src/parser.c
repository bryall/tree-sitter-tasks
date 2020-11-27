#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 7

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
  anon_sym_SCHEDULED_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_DUE_LPAREN = 14,
  anon_sym_DO_LPAREN = 15,
  aux_sym_date_token1 = 16,
  anon_sym_DASH = 17,
  aux_sym_date_token2 = 18,
  sym__word = 19,
  sym_text = 20,
  sym_file = 21,
  sym_item = 22,
  sym_tag_list = 23,
  sym_tag = 24,
  sym_body = 25,
  sym_attachement = 26,
  sym_reference = 27,
  sym_status = 28,
  sym_date = 29,
  aux_sym_file_repeat1 = 30,
  aux_sym_tag_list_repeat1 = 31,
  aux_sym_body_repeat1 = 32,
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
  [anon_sym_SCHEDULED_LPAREN] = "SCHEDULED(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DUE_LPAREN] = "DUE(",
  [anon_sym_DO_LPAREN] = "DO(",
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
  [anon_sym_SCHEDULED_LPAREN] = anon_sym_SCHEDULED_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DUE_LPAREN] = anon_sym_DUE_LPAREN,
  [anon_sym_DO_LPAREN] = anon_sym_DO_LPAREN,
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

static const TSFieldMapSlice ts_field_map_slices[10] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
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
    {field_id, 1},
    {field_title, 4},
  [6] =
    {field_title, 4},
  [7] =
    {field_id, 2},
    {field_title, 4},
  [9] =
    {field_month, 2},
    {field_year, 0},
  [11] =
    {field_id, 2},
    {field_title, 5},
  [13] =
    {field_day, 4},
    {field_month, 2},
    {field_year, 0},
};

static TSSymbol ts_alias_sequences[10][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(28);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(48);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == '@') ADVANCE(34);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == 'I') ADVANCE(18);
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'H') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(3);
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'G') ADVANCE(52);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_attachement_token1);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TODO);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TODO);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOING);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOING);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DONE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DONE);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SCHEDULED_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DUE_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DO_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '+' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
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
    [aux_sym_attachement_token1] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TODO] = ACTIONS(1),
    [anon_sym_DOING] = ACTIONS(1),
    [anon_sym_DONE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_date_token2] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(69),
    [sym_item] = STATE(35),
    [aux_sym_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    STATE(13), 1,
      sym_status,
    STATE(29), 1,
      sym_reference,
    STATE(72), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
    ACTIONS(13), 3,
      anon_sym_TODO,
      anon_sym_DOING,
      anon_sym_DONE,
    ACTIONS(15), 3,
      anon_sym_SCHEDULED_LPAREN,
      anon_sym_DUE_LPAREN,
      anon_sym_DO_LPAREN,
  [33] = 9,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(17), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym_status,
    STATE(32), 1,
      sym_reference,
    STATE(84), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
    ACTIONS(13), 3,
      anon_sym_TODO,
      anon_sym_DOING,
      anon_sym_DONE,
    ACTIONS(15), 3,
      anon_sym_SCHEDULED_LPAREN,
      anon_sym_DUE_LPAREN,
      anon_sym_DO_LPAREN,
  [66] = 6,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_text,
    STATE(5), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [88] = 6,
    ACTIONS(29), 1,
      anon_sym_PLUS,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(40), 1,
      sym_text,
    STATE(5), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [110] = 6,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(5), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [132] = 6,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_text,
    STATE(6), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [154] = 6,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(23), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      anon_sym_AMP,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_text,
    STATE(4), 4,
      sym_item,
      sym_attachement,
      sym_reference,
      aux_sym_body_repeat1,
  [176] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      sym_text,
    STATE(25), 1,
      sym_body,
    ACTIONS(53), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [192] = 6,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(59), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_reference,
    STATE(88), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [212] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      sym_text,
    STATE(27), 1,
      sym_body,
    ACTIONS(61), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [228] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      sym_text,
    STATE(30), 1,
      sym_body,
    ACTIONS(65), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [244] = 6,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_AMP,
    ACTIONS(69), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_reference,
    STATE(61), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [264] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_text,
    STATE(21), 1,
      sym_body,
    ACTIONS(71), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [280] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      sym_text,
    STATE(20), 1,
      sym_body,
    ACTIONS(75), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [296] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      sym_text,
    STATE(23), 1,
      sym_body,
    ACTIONS(79), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [312] = 4,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_text,
    STATE(26), 1,
      sym_body,
    ACTIONS(83), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [328] = 2,
    ACTIONS(89), 1,
      sym_text,
    ACTIONS(87), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [338] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [352] = 2,
    ACTIONS(95), 1,
      sym_text,
    ACTIONS(93), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [362] = 2,
    ACTIONS(99), 1,
      sym_text,
    ACTIONS(97), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [372] = 2,
    ACTIONS(103), 1,
      sym_text,
    ACTIONS(101), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [382] = 2,
    ACTIONS(107), 1,
      sym_text,
    ACTIONS(105), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [392] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(109), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [406] = 2,
    ACTIONS(113), 1,
      sym_text,
    ACTIONS(111), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [416] = 2,
    ACTIONS(117), 1,
      sym_text,
    ACTIONS(115), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [426] = 2,
    ACTIONS(121), 1,
      sym_text,
    ACTIONS(119), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [436] = 2,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(123), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [446] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(127), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [460] = 2,
    ACTIONS(131), 1,
      sym_text,
    ACTIONS(129), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [470] = 2,
    ACTIONS(135), 1,
      sym_text,
    ACTIONS(133), 4,
      anon_sym_PLUS,
      anon_sym_RBRACE,
      anon_sym_AT,
      anon_sym_AMP,
  [480] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(137), 1,
      anon_sym_COLON,
    STATE(87), 1,
      sym_tag_list,
    STATE(37), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [494] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_body,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [505] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_body,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [516] = 3,
    ACTIONS(5), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(38), 2,
      sym_item,
      aux_sym_file_repeat1,
  [527] = 3,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(36), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [538] = 3,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_COLON,
    STATE(36), 2,
      sym_tag,
      aux_sym_tag_list_repeat1,
  [549] = 3,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      anon_sym_PLUS,
    STATE(38), 2,
      sym_item,
      aux_sym_file_repeat1,
  [560] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_body,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [571] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_body,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [582] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_body,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [593] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_body,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [604] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_body,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [615] = 1,
    ACTIONS(155), 3,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_AMP,
  [621] = 2,
    STATE(65), 1,
      sym_date,
    ACTIONS(157), 2,
      aux_sym_date_token1,
      anon_sym_DASH,
  [629] = 1,
    ACTIONS(159), 3,
      anon_sym_COLON,
      anon_sym_POUND,
      anon_sym_AMP,
  [635] = 1,
    ACTIONS(161), 2,
      anon_sym_COLON,
      anon_sym_POUND,
  [640] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [645] = 2,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(165), 1,
      aux_sym_date_token2,
  [652] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [657] = 1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [662] = 1,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [667] = 1,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [672] = 1,
    ACTIONS(125), 2,
      anon_sym_COLON,
      anon_sym_POUND,
  [677] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [682] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [687] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [692] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS,
  [697] = 1,
    ACTIONS(167), 1,
      anon_sym_COLON,
  [701] = 1,
    ACTIONS(169), 1,
      sym__word,
  [705] = 1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [709] = 1,
    ACTIONS(173), 1,
      sym_text,
  [713] = 1,
    ACTIONS(175), 1,
      sym_text,
  [717] = 1,
    ACTIONS(177), 1,
      sym_text,
  [721] = 1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
  [725] = 1,
    ACTIONS(181), 1,
      anon_sym_DASH,
  [729] = 1,
    ACTIONS(183), 1,
      sym_text,
  [733] = 1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [737] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [741] = 1,
    ACTIONS(189), 1,
      sym_text,
  [745] = 1,
    ACTIONS(191), 1,
      anon_sym_DASH,
  [749] = 1,
    ACTIONS(69), 1,
      anon_sym_COLON,
  [753] = 1,
    ACTIONS(193), 1,
      sym_text,
  [757] = 1,
    ACTIONS(195), 1,
      aux_sym_date_token2,
  [761] = 1,
    ACTIONS(197), 1,
      sym_text,
  [765] = 1,
    ACTIONS(199), 1,
      sym_text,
  [769] = 1,
    ACTIONS(201), 1,
      aux_sym_attachement_token1,
  [773] = 1,
    ACTIONS(203), 1,
      sym_text,
  [777] = 1,
    ACTIONS(205), 1,
      sym_text,
  [781] = 1,
    ACTIONS(207), 1,
      sym_text,
  [785] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [789] = 1,
    ACTIONS(211), 1,
      sym_text,
  [793] = 1,
    ACTIONS(213), 1,
      sym__word,
  [797] = 1,
    ACTIONS(59), 1,
      anon_sym_COLON,
  [801] = 1,
    ACTIONS(215), 1,
      sym__word,
  [805] = 1,
    ACTIONS(217), 1,
      sym_text,
  [809] = 1,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [813] = 1,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [817] = 1,
    ACTIONS(223), 1,
      sym_text,
  [821] = 1,
    ACTIONS(225), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 244,
  [SMALL_STATE(14)] = 264,
  [SMALL_STATE(15)] = 280,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 328,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 372,
  [SMALL_STATE(23)] = 382,
  [SMALL_STATE(24)] = 392,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 416,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 436,
  [SMALL_STATE(29)] = 446,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 480,
  [SMALL_STATE(33)] = 494,
  [SMALL_STATE(34)] = 505,
  [SMALL_STATE(35)] = 516,
  [SMALL_STATE(36)] = 527,
  [SMALL_STATE(37)] = 538,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 560,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 582,
  [SMALL_STATE(42)] = 593,
  [SMALL_STATE(43)] = 604,
  [SMALL_STATE(44)] = 615,
  [SMALL_STATE(45)] = 621,
  [SMALL_STATE(46)] = 629,
  [SMALL_STATE(47)] = 635,
  [SMALL_STATE(48)] = 640,
  [SMALL_STATE(49)] = 645,
  [SMALL_STATE(50)] = 652,
  [SMALL_STATE(51)] = 657,
  [SMALL_STATE(52)] = 662,
  [SMALL_STATE(53)] = 667,
  [SMALL_STATE(54)] = 672,
  [SMALL_STATE(55)] = 677,
  [SMALL_STATE(56)] = 682,
  [SMALL_STATE(57)] = 687,
  [SMALL_STATE(58)] = 692,
  [SMALL_STATE(59)] = 697,
  [SMALL_STATE(60)] = 701,
  [SMALL_STATE(61)] = 705,
  [SMALL_STATE(62)] = 709,
  [SMALL_STATE(63)] = 713,
  [SMALL_STATE(64)] = 717,
  [SMALL_STATE(65)] = 721,
  [SMALL_STATE(66)] = 725,
  [SMALL_STATE(67)] = 729,
  [SMALL_STATE(68)] = 733,
  [SMALL_STATE(69)] = 737,
  [SMALL_STATE(70)] = 741,
  [SMALL_STATE(71)] = 745,
  [SMALL_STATE(72)] = 749,
  [SMALL_STATE(73)] = 753,
  [SMALL_STATE(74)] = 757,
  [SMALL_STATE(75)] = 761,
  [SMALL_STATE(76)] = 765,
  [SMALL_STATE(77)] = 769,
  [SMALL_STATE(78)] = 773,
  [SMALL_STATE(79)] = 777,
  [SMALL_STATE(80)] = 781,
  [SMALL_STATE(81)] = 785,
  [SMALL_STATE(82)] = 789,
  [SMALL_STATE(83)] = 793,
  [SMALL_STATE(84)] = 797,
  [SMALL_STATE(85)] = 801,
  [SMALL_STATE(86)] = 805,
  [SMALL_STATE(87)] = 809,
  [SMALL_STATE(88)] = 813,
  [SMALL_STATE(89)] = 817,
  [SMALL_STATE(90)] = 821,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(77),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 3, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 3, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 8),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 6),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 5, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 6, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 6, .production_id = 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 7, .production_id = 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 7, .production_id = 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attachement, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attachement, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2), SHIFT_REPEAT(85),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 4, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 5, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
