#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_dn_COLON = 1,
  aux_sym_dn_spec_token1 = 2,
  anon_sym_EQ = 3,
  anon_sym_COMMA = 4,
  aux_sym_dn_identifier_token1 = 5,
  anon_sym_changetype_COLON = 6,
  anon_sym_add = 7,
  anon_sym_delete = 8,
  anon_sym_modify = 9,
  anon_sym_moddn = 10,
  anon_sym_modrdn = 11,
  anon_sym_newrdn_COLON = 12,
  anon_sym_add_COLON = 13,
  anon_sym_delete_COLON = 14,
  anon_sym_replace_COLON = 15,
  anon_sym_DASH = 16,
  sym_comment = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_ldif_change_record = 20,
  sym_dn_spec = 21,
  sym_distinguishedName = 22,
  sym_dn_key_value = 23,
  sym_dn_identifier = 24,
  sym_dn_value = 25,
  sym_changerecord = 26,
  aux_sym_source_file_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_dn_COLON] = "dn:",
  [aux_sym_dn_spec_token1] = "dn_spec_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [aux_sym_dn_identifier_token1] = "dn_identifier_token1",
  [anon_sym_changetype_COLON] = "changetype:",
  [anon_sym_add] = "add",
  [anon_sym_delete] = "delete",
  [anon_sym_modify] = "modify",
  [anon_sym_moddn] = "moddn",
  [anon_sym_modrdn] = "modrdn",
  [anon_sym_newrdn_COLON] = "newrdn:",
  [anon_sym_add_COLON] = "add:",
  [anon_sym_delete_COLON] = "delete:",
  [anon_sym_replace_COLON] = "replace:",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_ldif_change_record] = "ldif_change_record",
  [sym_dn_spec] = "dn_spec",
  [sym_distinguishedName] = "distinguishedName",
  [sym_dn_key_value] = "dn_key_value",
  [sym_dn_identifier] = "dn_identifier",
  [sym_dn_value] = "dn_value",
  [sym_changerecord] = "changerecord",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_dn_COLON] = anon_sym_dn_COLON,
  [aux_sym_dn_spec_token1] = aux_sym_dn_spec_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_dn_identifier_token1] = aux_sym_dn_identifier_token1,
  [anon_sym_changetype_COLON] = anon_sym_changetype_COLON,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_modify] = anon_sym_modify,
  [anon_sym_moddn] = anon_sym_moddn,
  [anon_sym_modrdn] = anon_sym_modrdn,
  [anon_sym_newrdn_COLON] = anon_sym_newrdn_COLON,
  [anon_sym_add_COLON] = anon_sym_add_COLON,
  [anon_sym_delete_COLON] = anon_sym_delete_COLON,
  [anon_sym_replace_COLON] = anon_sym_replace_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_ldif_change_record] = sym_ldif_change_record,
  [sym_dn_spec] = sym_dn_spec,
  [sym_distinguishedName] = sym_distinguishedName,
  [sym_dn_key_value] = sym_dn_key_value,
  [sym_dn_identifier] = sym_dn_identifier,
  [sym_dn_value] = sym_dn_value,
  [sym_changerecord] = sym_changerecord,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_dn_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dn_spec_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dn_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_changetype_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_moddn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modrdn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newrdn_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replace_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_ldif_change_record] = {
    .visible = true,
    .named = true,
  },
  [sym_dn_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_distinguishedName] = {
    .visible = true,
    .named = true,
  },
  [sym_dn_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_dn_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_dn_value] = {
    .visible = true,
    .named = true,
  },
  [sym_changerecord] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_dn_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_dn_spec_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_dn_identifier_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_changetype_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_add);
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_moddn);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_modrdn);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_newrdn_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_add_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_delete_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_replace_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 51},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_dn_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_changetype_COLON] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_modify] = ACTIONS(1),
    [anon_sym_moddn] = ACTIONS(1),
    [anon_sym_modrdn] = ACTIONS(1),
    [anon_sym_newrdn_COLON] = ACTIONS(1),
    [anon_sym_add_COLON] = ACTIONS(1),
    [anon_sym_delete_COLON] = ACTIONS(1),
    [anon_sym_replace_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__definition] = STATE(2),
    [sym_ldif_change_record] = STATE(2),
    [sym_dn_spec] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_dn_COLON] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_dn_COLON,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(8), 1,
      sym_dn_spec,
    STATE(3), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [18] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_dn_COLON,
    ACTIONS(18), 1,
      sym_comment,
    STATE(8), 1,
      sym_dn_spec,
    STATE(3), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [36] = 4,
    ACTIONS(21), 1,
      aux_sym_dn_identifier_token1,
    STATE(16), 1,
      sym_distinguishedName,
    STATE(17), 1,
      sym_dn_key_value,
    STATE(18), 1,
      sym_dn_identifier,
  [49] = 1,
    ACTIONS(23), 4,
      anon_sym_add,
      anon_sym_delete,
      anon_sym_modify,
      anon_sym_moddn,
  [56] = 1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [62] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [68] = 2,
    ACTIONS(29), 1,
      anon_sym_changetype_COLON,
    STATE(6), 1,
      sym_changerecord,
  [75] = 2,
    ACTIONS(31), 1,
      aux_sym_dn_identifier_token1,
    STATE(11), 1,
      sym_dn_value,
  [82] = 1,
    ACTIONS(33), 2,
      anon_sym_COMMA,
      anon_sym_changetype_COLON,
  [87] = 2,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_changetype_COLON,
  [94] = 1,
    ACTIONS(39), 1,
      aux_sym_dn_spec_token1,
  [98] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(43), 1,
      aux_sym_dn_spec_token1,
  [106] = 1,
    ACTIONS(45), 1,
      anon_sym_EQ,
  [110] = 1,
    ACTIONS(47), 1,
      anon_sym_changetype_COLON,
  [114] = 1,
    ACTIONS(49), 1,
      anon_sym_changetype_COLON,
  [118] = 1,
    ACTIONS(51), 1,
      anon_sym_EQ,
  [122] = 1,
    ACTIONS(53), 1,
      anon_sym_changetype_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 82,
  [SMALL_STATE(11)] = 87,
  [SMALL_STATE(12)] = 94,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 102,
  [SMALL_STATE(15)] = 106,
  [SMALL_STATE(16)] = 110,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 118,
  [SMALL_STATE(19)] = 122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldif_change_record, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changerecord, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_value, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_key_value, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_identifier, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_spec, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinguishedName, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_key_value, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ldif(void) {
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
