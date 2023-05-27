#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_dn_COLON = 2,
  aux_sym_dn_spec_token1 = 3,
  aux_sym_dn_spec_token2 = 4,
  anon_sym_COMMA = 5,
  anon_sym_PLUS = 6,
  anon_sym_EQ = 7,
  anon_sym_POUND = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_BSLASH = 10,
  sym_hexpair = 11,
  sym_stringchar = 12,
  sym_special = 13,
  anon_sym_changetype_COLON = 14,
  anon_sym_add = 15,
  anon_sym_delete = 16,
  anon_sym_modrdn = 17,
  anon_sym_moddn = 18,
  anon_sym_newrdn_COLON = 19,
  anon_sym_modify = 20,
  anon_sym_add_COLON = 21,
  anon_sym_delete_COLON = 22,
  anon_sym_replace_COLON = 23,
  anon_sym_DASH = 24,
  anon_sym_COLON = 25,
  aux_sym_value_spec_token1 = 26,
  anon_sym_LT = 27,
  aux_sym_ldap_oid_token1 = 28,
  anon_sym_DOT = 29,
  anon_sym_SEMI = 30,
  sym_url = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym__definition = 34,
  sym_ldif_change_record = 35,
  sym_dn_spec = 36,
  sym_distinguishedName = 37,
  sym_name = 38,
  sym_name_componet = 39,
  sym_attributeTypeAndValue = 40,
  sym_string = 41,
  sym_pair = 42,
  sym_changerecord = 43,
  sym_change_add = 44,
  sym_change_delete = 45,
  sym_change_moddn = 46,
  sym_change_modify = 47,
  sym_mod_spec = 48,
  sym_attrval_spec = 49,
  sym_value_spec = 50,
  sym_attributeType = 51,
  sym_ldap_oid = 52,
  sym_options = 53,
  sym_AttributeDescription = 54,
  sym_base64_string = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_change_modify_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_dn_COLON] = "dn:",
  [aux_sym_dn_spec_token1] = "dn_spec_token1",
  [aux_sym_dn_spec_token2] = "dn_spec_token2",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [sym_hexpair] = "hexpair",
  [sym_stringchar] = "stringchar",
  [sym_special] = "special",
  [anon_sym_changetype_COLON] = "changetype:",
  [anon_sym_add] = "add",
  [anon_sym_delete] = "delete",
  [anon_sym_modrdn] = "modrdn",
  [anon_sym_moddn] = "moddn",
  [anon_sym_newrdn_COLON] = "newrdn:",
  [anon_sym_modify] = "modify",
  [anon_sym_add_COLON] = "add:",
  [anon_sym_delete_COLON] = "delete:",
  [anon_sym_replace_COLON] = "replace:",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [aux_sym_value_spec_token1] = "value_spec_token1",
  [anon_sym_LT] = "<",
  [aux_sym_ldap_oid_token1] = "ldap_oid_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [sym_url] = "url",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_ldif_change_record] = "ldif_change_record",
  [sym_dn_spec] = "dn_spec",
  [sym_distinguishedName] = "distinguishedName",
  [sym_name] = "name",
  [sym_name_componet] = "name_componet",
  [sym_attributeTypeAndValue] = "attributeTypeAndValue",
  [sym_string] = "string",
  [sym_pair] = "pair",
  [sym_changerecord] = "changerecord",
  [sym_change_add] = "change_add",
  [sym_change_delete] = "change_delete",
  [sym_change_moddn] = "change_moddn",
  [sym_change_modify] = "change_modify",
  [sym_mod_spec] = "mod_spec",
  [sym_attrval_spec] = "attrval_spec",
  [sym_value_spec] = "value_spec",
  [sym_attributeType] = "attributeType",
  [sym_ldap_oid] = "ldap_oid",
  [sym_options] = "options",
  [sym_AttributeDescription] = "AttributeDescription",
  [sym_base64_string] = "base64_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_change_modify_repeat1] = "change_modify_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_dn_COLON] = anon_sym_dn_COLON,
  [aux_sym_dn_spec_token1] = aux_sym_dn_spec_token1,
  [aux_sym_dn_spec_token2] = aux_sym_dn_spec_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_hexpair] = sym_hexpair,
  [sym_stringchar] = sym_stringchar,
  [sym_special] = sym_special,
  [anon_sym_changetype_COLON] = anon_sym_changetype_COLON,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_modrdn] = anon_sym_modrdn,
  [anon_sym_moddn] = anon_sym_moddn,
  [anon_sym_newrdn_COLON] = anon_sym_newrdn_COLON,
  [anon_sym_modify] = anon_sym_modify,
  [anon_sym_add_COLON] = anon_sym_add_COLON,
  [anon_sym_delete_COLON] = anon_sym_delete_COLON,
  [anon_sym_replace_COLON] = anon_sym_replace_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_value_spec_token1] = aux_sym_value_spec_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_ldap_oid_token1] = aux_sym_ldap_oid_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_url] = sym_url,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_ldif_change_record] = sym_ldif_change_record,
  [sym_dn_spec] = sym_dn_spec,
  [sym_distinguishedName] = sym_distinguishedName,
  [sym_name] = sym_name,
  [sym_name_componet] = sym_name_componet,
  [sym_attributeTypeAndValue] = sym_attributeTypeAndValue,
  [sym_string] = sym_string,
  [sym_pair] = sym_pair,
  [sym_changerecord] = sym_changerecord,
  [sym_change_add] = sym_change_add,
  [sym_change_delete] = sym_change_delete,
  [sym_change_moddn] = sym_change_moddn,
  [sym_change_modify] = sym_change_modify,
  [sym_mod_spec] = sym_mod_spec,
  [sym_attrval_spec] = sym_attrval_spec,
  [sym_value_spec] = sym_value_spec,
  [sym_attributeType] = sym_attributeType,
  [sym_ldap_oid] = sym_ldap_oid,
  [sym_options] = sym_options,
  [sym_AttributeDescription] = sym_AttributeDescription,
  [sym_base64_string] = sym_base64_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_change_modify_repeat1] = aux_sym_change_modify_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [aux_sym_dn_spec_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_hexpair] = {
    .visible = true,
    .named = true,
  },
  [sym_stringchar] = {
    .visible = true,
    .named = true,
  },
  [sym_special] = {
    .visible = true,
    .named = true,
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
  [anon_sym_modrdn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_moddn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newrdn_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modify] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_spec_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ldap_oid_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name_componet] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeTypeAndValue] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_changerecord] = {
    .visible = true,
    .named = true,
  },
  [sym_change_add] = {
    .visible = true,
    .named = true,
  },
  [sym_change_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_change_moddn] = {
    .visible = true,
    .named = true,
  },
  [sym_change_modify] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attrval_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_value_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_attributeType] = {
    .visible = true,
    .named = true,
  },
  [sym_ldap_oid] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [sym_AttributeDescription] = {
    .visible = true,
    .named = true,
  },
  [sym_base64_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_change_modify_repeat1] = {
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
  [17] = 15,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 28,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 41,
  [46] = 33,
  [47] = 47,
  [48] = 48,
  [49] = 37,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 18,
  [76] = 76,
  [77] = 77,
  [78] = 54,
  [79] = 79,
  [80] = 61,
  [81] = 81,
  [82] = 82,
  [83] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(68);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '+' ||
          lookahead == ',' ||
          (';' <= lookahead && lookahead <= '>')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_dn_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_dn_spec_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_dn_spec_token2);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_hexpair);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_hexpair);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_hexpair);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_hexpair);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_hexpair);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_special);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_special);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_changetype_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_newrdn_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_add_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_delete_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_replace_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_value_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_ldap_oid_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_ldap_oid_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_moddn);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_modrdn);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 51},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 78},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 51},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 48},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 48},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 48},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_dn_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_hexpair] = ACTIONS(1),
    [sym_special] = ACTIONS(1),
    [anon_sym_changetype_COLON] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_modrdn] = ACTIONS(1),
    [anon_sym_moddn] = ACTIONS(1),
    [anon_sym_newrdn_COLON] = ACTIONS(1),
    [anon_sym_modify] = ACTIONS(1),
    [anon_sym_add_COLON] = ACTIONS(1),
    [anon_sym_delete_COLON] = ACTIONS(1),
    [anon_sym_replace_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_ldap_oid_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(82),
    [sym__definition] = STATE(8),
    [sym_ldif_change_record] = STATE(8),
    [sym_dn_spec] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_dn_COLON] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_add,
    ACTIONS(13), 1,
      anon_sym_delete,
    ACTIONS(17), 1,
      anon_sym_modify,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(15), 2,
      anon_sym_modrdn,
      anon_sym_moddn,
    STATE(31), 4,
      sym_change_add,
      sym_change_delete,
      sym_change_moddn,
      sym_change_modify,
  [23] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    STATE(21), 1,
      sym_attributeTypeAndValue,
    STATE(23), 1,
      sym_ldap_oid,
    STATE(35), 1,
      sym_name_componet,
    STATE(53), 1,
      sym_attributeType,
    STATE(56), 1,
      sym_distinguishedName,
    STATE(67), 1,
      sym_name,
  [51] = 3,
    STATE(4), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [66] = 3,
    STATE(4), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(30), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(32), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [81] = 3,
    STATE(5), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(32), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [96] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(23), 1,
      sym_ldap_oid,
    STATE(37), 1,
      sym_attributeType,
    STATE(44), 1,
      sym_AttributeDescription,
    STATE(55), 1,
      sym_attrval_spec,
  [118] = 5,
    ACTIONS(7), 1,
      anon_sym_dn_COLON,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym_comment,
    STATE(34), 1,
      sym_dn_spec,
    STATE(9), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [136] = 5,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_dn_COLON,
    ACTIONS(47), 1,
      sym_comment,
    STATE(34), 1,
      sym_dn_spec,
    STATE(9), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [154] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(21), 1,
      sym_attributeTypeAndValue,
    STATE(23), 1,
      sym_ldap_oid,
    STATE(53), 1,
      sym_attributeType,
    STATE(72), 1,
      sym_name_componet,
  [176] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(56), 1,
      sym_stringchar,
    STATE(25), 1,
      sym_string,
    STATE(26), 1,
      sym_pair,
  [198] = 1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
      sym_comment,
  [207] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      aux_sym_ldap_oid_token1,
    STATE(30), 1,
      sym_ldap_oid,
    STATE(49), 1,
      sym_attributeType,
    STATE(50), 1,
      sym_AttributeDescription,
  [226] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(23), 1,
      sym_ldap_oid,
    STATE(29), 1,
      sym_attributeTypeAndValue,
    STATE(53), 1,
      sym_attributeType,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_special,
    ACTIONS(64), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [257] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(68), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_special,
    ACTIONS(72), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(78), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(80), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_SEMI,
  [305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_PLUS,
  [329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_dn_spec_token1,
    ACTIONS(96), 1,
      anon_sym_COLON,
    ACTIONS(98), 1,
      anon_sym_LT,
  [342] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(100), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_BSLASH,
    ACTIONS(116), 1,
      sym_stringchar,
    STATE(62), 1,
      sym_pair,
  [397] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(122), 1,
      anon_sym_COMMA,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [426] = 1,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [432] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(71), 1,
      sym_base64_string,
  [442] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(54), 1,
      sym_options,
  [452] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_changetype_COLON,
    STATE(48), 1,
      sym_changerecord,
  [462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(136), 1,
      anon_sym_COMMA,
  [472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(138), 1,
      anon_sym_SEMI,
  [482] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [492] = 1,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [498] = 1,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [504] = 1,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [510] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(152), 1,
      anon_sym_SEMI,
  [520] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(80), 1,
      sym_options,
  [530] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(61), 1,
      sym_options,
  [540] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym_value_spec,
  [550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(158), 1,
      anon_sym_SEMI,
  [560] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(78), 1,
      sym_options,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(160), 1,
      aux_sym_dn_spec_token2,
  [580] = 1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(164), 1,
      anon_sym_SEMI,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_dn_spec_token2,
  [603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_dn_spec_token2,
  [610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_dn_spec_token1,
  [617] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_EQ,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_dn_spec_token2,
  [631] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DASH,
  [638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      aux_sym_dn_spec_token2,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_dn_spec_token1,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_dn_spec_token2,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_dn_spec_token1,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      aux_sym_dn_spec_token2,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym_dn_spec_token2,
  [680] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
  [687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_value_spec_token1,
  [694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_dn_spec_token1,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_dn_spec_token1,
  [708] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DASH,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_dn_spec_token2,
  [722] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_hexpair,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_url,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_dn_spec_token2,
  [743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_dn_spec_token2,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_dn_spec_token2,
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym_dn_spec_token2,
  [764] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_newrdn_COLON,
  [771] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
  [778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym_dn_spec_token2,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dn_spec_token2,
  [792] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COLON,
  [799] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_changetype_COLON,
  [806] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [813] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym_ldap_oid_token1,
  [820] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [827] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym_ldap_oid_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 292,
  [SMALL_STATE(20)] = 305,
  [SMALL_STATE(21)] = 316,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 342,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 362,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 406,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 426,
  [SMALL_STATE(32)] = 432,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 452,
  [SMALL_STATE(35)] = 462,
  [SMALL_STATE(36)] = 472,
  [SMALL_STATE(37)] = 482,
  [SMALL_STATE(38)] = 492,
  [SMALL_STATE(39)] = 498,
  [SMALL_STATE(40)] = 504,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 520,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 540,
  [SMALL_STATE(45)] = 550,
  [SMALL_STATE(46)] = 560,
  [SMALL_STATE(47)] = 570,
  [SMALL_STATE(48)] = 580,
  [SMALL_STATE(49)] = 586,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 603,
  [SMALL_STATE(52)] = 610,
  [SMALL_STATE(53)] = 617,
  [SMALL_STATE(54)] = 624,
  [SMALL_STATE(55)] = 631,
  [SMALL_STATE(56)] = 638,
  [SMALL_STATE(57)] = 645,
  [SMALL_STATE(58)] = 652,
  [SMALL_STATE(59)] = 659,
  [SMALL_STATE(60)] = 666,
  [SMALL_STATE(61)] = 673,
  [SMALL_STATE(62)] = 680,
  [SMALL_STATE(63)] = 687,
  [SMALL_STATE(64)] = 694,
  [SMALL_STATE(65)] = 701,
  [SMALL_STATE(66)] = 708,
  [SMALL_STATE(67)] = 715,
  [SMALL_STATE(68)] = 722,
  [SMALL_STATE(69)] = 729,
  [SMALL_STATE(70)] = 736,
  [SMALL_STATE(71)] = 743,
  [SMALL_STATE(72)] = 750,
  [SMALL_STATE(73)] = 757,
  [SMALL_STATE(74)] = 764,
  [SMALL_STATE(75)] = 771,
  [SMALL_STATE(76)] = 778,
  [SMALL_STATE(77)] = 785,
  [SMALL_STATE(78)] = 792,
  [SMALL_STATE(79)] = 799,
  [SMALL_STATE(80)] = 806,
  [SMALL_STATE(81)] = 813,
  [SMALL_STATE(82)] = 820,
  [SMALL_STATE(83)] = 827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2), SHIFT_REPEAT(57),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_spec, 7),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeAndValue, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeAndValue, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changerecord, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_add, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_delete, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_moddn, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldif_change_record, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrval_spec, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinguishedName, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_string, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_spec, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [222] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
