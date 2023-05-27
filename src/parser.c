#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_dn_COLON = 1,
  aux_sym_dn_spec_token1 = 2,
  aux_sym_dn_spec_token2 = 3,
  anon_sym_COMMA = 4,
  anon_sym_PLUS = 5,
  anon_sym_EQ = 6,
  anon_sym_POUND = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_BSLASH = 9,
  sym_hexpair = 10,
  sym_stringchar = 11,
  sym_special = 12,
  anon_sym_changetype_COLON = 13,
  anon_sym_add = 14,
  anon_sym_delete = 15,
  anon_sym_modrdn = 16,
  anon_sym_moddn = 17,
  anon_sym_newrdn_COLON = 18,
  anon_sym_modify = 19,
  anon_sym_add_COLON = 20,
  anon_sym_delete_COLON = 21,
  anon_sym_replace_COLON = 22,
  anon_sym_DASH = 23,
  anon_sym_COLON = 24,
  aux_sym_value_spec_token1 = 25,
  anon_sym_LT = 26,
  aux_sym_attributeType_token1 = 27,
  aux_sym_ldap_oid_token1 = 28,
  anon_sym_DOT = 29,
  anon_sym_SEMI = 30,
  aux_sym_option_token1 = 31,
  sym_url = 32,
  sym_identifier = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym__definition = 36,
  sym_ldif_change_record = 37,
  sym_dn_spec = 38,
  sym_distinguishedName = 39,
  sym_name = 40,
  sym_name_componet = 41,
  sym_attributeTypeAndValue = 42,
  sym_string = 43,
  sym_pair = 44,
  sym_changerecord = 45,
  sym_change_add = 46,
  sym_change_delete = 47,
  sym_change_moddn = 48,
  sym_change_modify = 49,
  sym_mod_spec = 50,
  sym_attrval_spec = 51,
  sym_value_spec = 52,
  sym_attributeType = 53,
  sym_ldap_oid = 54,
  sym_options = 55,
  sym_option = 56,
  sym_keychar = 57,
  sym_AttributeDescription = 58,
  sym_base64_string = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_name_repeat1 = 61,
  aux_sym_name_componet_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
  aux_sym_change_modify_repeat1 = 64,
  aux_sym_attributeType_repeat1 = 65,
  aux_sym_option_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_attributeType_token1] = "attributeType_token1",
  [aux_sym_ldap_oid_token1] = "ldap_oid_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [aux_sym_option_token1] = "option_token1",
  [sym_url] = "url",
  [sym_identifier] = "identifier",
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
  [sym_option] = "option",
  [sym_keychar] = "keychar",
  [sym_AttributeDescription] = "AttributeDescription",
  [sym_base64_string] = "base64_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [aux_sym_name_componet_repeat1] = "name_componet_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_change_modify_repeat1] = "change_modify_repeat1",
  [aux_sym_attributeType_repeat1] = "attributeType_repeat1",
  [aux_sym_option_repeat1] = "option_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_attributeType_token1] = aux_sym_attributeType_token1,
  [aux_sym_ldap_oid_token1] = aux_sym_ldap_oid_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [sym_url] = sym_url,
  [sym_identifier] = sym_identifier,
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
  [sym_option] = sym_option,
  [sym_keychar] = sym_keychar,
  [sym_AttributeDescription] = sym_AttributeDescription,
  [sym_base64_string] = sym_base64_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [aux_sym_name_componet_repeat1] = aux_sym_name_componet_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_change_modify_repeat1] = aux_sym_change_modify_repeat1,
  [aux_sym_attributeType_repeat1] = aux_sym_attributeType_repeat1,
  [aux_sym_option_repeat1] = aux_sym_option_repeat1,
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
  [aux_sym_attributeType_token1] = {
    .visible = false,
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
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
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
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_keychar] = {
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
  [aux_sym_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_componet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_change_modify_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributeType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_repeat1] = {
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
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 24,
  [25] = 7,
  [26] = 26,
  [27] = 12,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 28,
  [34] = 34,
  [35] = 31,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 18,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 30,
  [48] = 48,
  [49] = 34,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 44,
  [55] = 50,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 43,
  [65] = 65,
  [66] = 51,
  [67] = 67,
  [68] = 68,
  [69] = 61,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 88,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 75,
  [103] = 103,
  [104] = 93,
  [105] = 105,
  [106] = 106,
  [107] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(61);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == ',' ||
          (';' <= lookahead && lookahead <= '>')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 59:
      if (eof) ADVANCE(61);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 60:
      if (eof) ADVANCE(61);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_dn_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_dn_spec_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_dn_spec_token2);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_dn_spec_token2);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_hexpair);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_stringchar);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_special);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_special);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_changetype_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_modrdn);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_moddn);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_newrdn_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_modify);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_add_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_delete_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_replace_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_value_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_attributeType_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_attributeType_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_ldap_oid_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_option_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 63},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 59},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 59},
  [63] = {.lex_state = 59},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 59},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 90},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 63},
  [80] = {.lex_state = 59},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 99},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 59},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 59},
  [93] = {.lex_state = 59},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 59},
  [96] = {.lex_state = 59},
  [97] = {.lex_state = 59},
  [98] = {.lex_state = 59},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 63},
  [101] = {.lex_state = 63},
  [102] = {.lex_state = 59},
  [103] = {.lex_state = 63},
  [104] = {.lex_state = 59},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 59},
  [107] = {.lex_state = 59},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_special] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_attributeType_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_option_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(106),
    [sym__definition] = STATE(11),
    [sym_ldif_change_record] = STATE(11),
    [sym_dn_spec] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    STATE(72), 4,
      sym_change_add,
      sym_change_delete,
      sym_change_moddn,
      sym_change_modify,
  [23] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_attributeType_token1,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    STATE(36), 1,
      sym_attributeTypeAndValue,
    STATE(42), 1,
      sym_name_componet,
    STATE(51), 1,
      sym_ldap_oid,
    STATE(74), 1,
      sym_distinguishedName,
    STATE(86), 1,
      sym_attributeType,
    STATE(89), 1,
      sym_name,
  [51] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      sym_stringchar,
    STATE(7), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(25), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [70] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_stringchar,
    STATE(4), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(31), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [89] = 3,
    STATE(8), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(44), 1,
      sym_stringchar,
    STATE(7), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(39), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [123] = 3,
    STATE(8), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [138] = 3,
    STATE(6), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(37), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [153] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_dn_COLON,
    ACTIONS(59), 1,
      sym_comment,
    STATE(62), 1,
      sym_dn_spec,
    STATE(10), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [171] = 5,
    ACTIONS(7), 1,
      anon_sym_dn_COLON,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_comment,
    STATE(62), 1,
      sym_dn_spec,
    STATE(10), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [189] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_option_token1,
    STATE(12), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(66), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [205] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_attributeType_token1,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    STATE(51), 1,
      sym_ldap_oid,
    STATE(58), 1,
      sym_attributeType,
    STATE(68), 1,
      sym_AttributeDescription,
    STATE(87), 1,
      sym_attrval_spec,
  [227] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_option_token1,
    STATE(12), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(71), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [243] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_option_token1,
    STATE(14), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(75), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [259] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_attributeType_token1,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    STATE(36), 1,
      sym_attributeTypeAndValue,
    STATE(51), 1,
      sym_ldap_oid,
    STATE(71), 1,
      sym_name_componet,
    STATE(86), 1,
      sym_attributeType,
  [281] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_stringchar,
    STATE(5), 1,
      sym_pair,
    STATE(48), 1,
      sym_string,
  [303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 5,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_BSLASH,
      sym_stringchar,
  [314] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      aux_sym_option_token1,
    STATE(22), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
  [331] = 1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
      sym_comment,
  [340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      sym_stringchar,
    STATE(25), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(87), 1,
      aux_sym_option_token1,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(27), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
  [374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_stringchar,
    STATE(21), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [391] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_attributeType_token1,
    ACTIONS(105), 1,
      aux_sym_ldap_oid_token1,
    STATE(59), 1,
      sym_attributeType,
    STATE(66), 1,
      sym_ldap_oid,
    STATE(94), 1,
      sym_AttributeDescription,
  [410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(110), 1,
      sym_stringchar,
    STATE(25), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [427] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_attributeType_token1,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    STATE(46), 1,
      sym_attributeTypeAndValue,
    STATE(51), 1,
      sym_ldap_oid,
    STATE(86), 1,
      sym_attributeType,
  [446] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      aux_sym_option_token1,
    STATE(27), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
  [463] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_option_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(88), 1,
      sym_option,
    STATE(91), 1,
      sym_options,
  [479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_name_componet_repeat1,
  [495] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(128), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_special,
    ACTIONS(132), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [519] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_option_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(98), 1,
      sym_option,
    STATE(102), 1,
      sym_options,
  [535] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_option_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(97), 1,
      sym_options,
    STATE(98), 1,
      sym_option,
  [551] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
      aux_sym_option_token1,
  [561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_special,
    ACTIONS(142), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [573] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PLUS,
    ACTIONS(146), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_name_componet_repeat1,
  [589] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_option_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(75), 1,
      sym_options,
    STATE(88), 1,
      sym_option,
  [605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_PLUS,
    STATE(38), 1,
      aux_sym_name_componet_repeat1,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_stringchar,
    ACTIONS(83), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_dn_spec_token1,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      anon_sym_LT,
  [656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_name_repeat1,
  [669] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(177), 1,
      aux_sym_option_token1,
    STATE(56), 1,
      aux_sym_option_repeat1,
  [691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_name_repeat1,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      anon_sym_SEMI,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(192), 2,
      anon_sym_SEMI,
      aux_sym_option_token1,
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(196), 1,
      aux_sym_option_token1,
    STATE(44), 1,
      aux_sym_option_repeat1,
  [763] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(25), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [783] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      aux_sym_option_token1,
    STATE(53), 1,
      aux_sym_option_repeat1,
  [796] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      aux_sym_option_token1,
    STATE(53), 1,
      aux_sym_option_repeat1,
  [809] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      aux_sym_option_token1,
    STATE(54), 1,
      aux_sym_option_repeat1,
  [822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(211), 1,
      aux_sym_option_token1,
    STATE(56), 1,
      aux_sym_option_repeat1,
  [835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      aux_sym_dn_spec_token2,
    STATE(45), 1,
      aux_sym_name_repeat1,
  [848] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(218), 1,
      anon_sym_SEMI,
  [858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [868] = 1,
    ACTIONS(222), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [874] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_option_token1,
    STATE(15), 1,
      sym_keychar,
  [884] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_changetype_COLON,
    STATE(60), 1,
      sym_changerecord,
  [894] = 1,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(228), 1,
      anon_sym_SEMI,
  [910] = 1,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(232), 1,
      anon_sym_SEMI,
  [926] = 1,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [932] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_value_spec,
  [942] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_option_token1,
    STATE(19), 1,
      sym_keychar,
  [952] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(85), 1,
      sym_base64_string,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(242), 1,
      anon_sym_COMMA,
  [972] = 1,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_dn_spec_token2,
  [985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_dn_spec_token2,
  [992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_dn_spec_token2,
  [999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_dn_spec_token2,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_value_spec_token1,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym_dn_spec_token1,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_dn_spec_token1,
  [1027] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DASH,
  [1034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      aux_sym_dn_spec_token2,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_dn_spec_token2,
  [1048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_url,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      aux_sym_dn_spec_token2,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_dn_spec_token2,
  [1069] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_EQ,
  [1076] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_DASH,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_dn_spec_token2,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_dn_spec_token2,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym_dn_spec_token2,
  [1104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_dn_spec_token2,
  [1111] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SEMI,
  [1118] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(286), 1,
      aux_sym_ldap_oid_token1,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_dn_spec_token2,
  [1132] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_changetype_COLON,
  [1139] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_newrdn_COLON,
  [1146] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COLON,
  [1153] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym_dn_spec_token2,
  [1167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym_dn_spec_token1,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_dn_spec_token1,
  [1181] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym_dn_spec_token1,
  [1195] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(302), 1,
      aux_sym_ldap_oid_token1,
  [1202] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_hexpair,
  [1209] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
  [1216] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 227,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 331,
  [SMALL_STATE(21)] = 340,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 374,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 410,
  [SMALL_STATE(26)] = 427,
  [SMALL_STATE(27)] = 446,
  [SMALL_STATE(28)] = 463,
  [SMALL_STATE(29)] = 479,
  [SMALL_STATE(30)] = 495,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 519,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 551,
  [SMALL_STATE(35)] = 561,
  [SMALL_STATE(36)] = 573,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 605,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 643,
  [SMALL_STATE(42)] = 656,
  [SMALL_STATE(43)] = 669,
  [SMALL_STATE(44)] = 678,
  [SMALL_STATE(45)] = 691,
  [SMALL_STATE(46)] = 704,
  [SMALL_STATE(47)] = 715,
  [SMALL_STATE(48)] = 728,
  [SMALL_STATE(49)] = 739,
  [SMALL_STATE(50)] = 750,
  [SMALL_STATE(51)] = 763,
  [SMALL_STATE(52)] = 772,
  [SMALL_STATE(53)] = 783,
  [SMALL_STATE(54)] = 796,
  [SMALL_STATE(55)] = 809,
  [SMALL_STATE(56)] = 822,
  [SMALL_STATE(57)] = 835,
  [SMALL_STATE(58)] = 848,
  [SMALL_STATE(59)] = 858,
  [SMALL_STATE(60)] = 868,
  [SMALL_STATE(61)] = 874,
  [SMALL_STATE(62)] = 884,
  [SMALL_STATE(63)] = 894,
  [SMALL_STATE(64)] = 900,
  [SMALL_STATE(65)] = 910,
  [SMALL_STATE(66)] = 916,
  [SMALL_STATE(67)] = 926,
  [SMALL_STATE(68)] = 932,
  [SMALL_STATE(69)] = 942,
  [SMALL_STATE(70)] = 952,
  [SMALL_STATE(71)] = 962,
  [SMALL_STATE(72)] = 972,
  [SMALL_STATE(73)] = 978,
  [SMALL_STATE(74)] = 985,
  [SMALL_STATE(75)] = 992,
  [SMALL_STATE(76)] = 999,
  [SMALL_STATE(77)] = 1006,
  [SMALL_STATE(78)] = 1013,
  [SMALL_STATE(79)] = 1020,
  [SMALL_STATE(80)] = 1027,
  [SMALL_STATE(81)] = 1034,
  [SMALL_STATE(82)] = 1041,
  [SMALL_STATE(83)] = 1048,
  [SMALL_STATE(84)] = 1055,
  [SMALL_STATE(85)] = 1062,
  [SMALL_STATE(86)] = 1069,
  [SMALL_STATE(87)] = 1076,
  [SMALL_STATE(88)] = 1083,
  [SMALL_STATE(89)] = 1090,
  [SMALL_STATE(90)] = 1097,
  [SMALL_STATE(91)] = 1104,
  [SMALL_STATE(92)] = 1111,
  [SMALL_STATE(93)] = 1118,
  [SMALL_STATE(94)] = 1125,
  [SMALL_STATE(95)] = 1132,
  [SMALL_STATE(96)] = 1139,
  [SMALL_STATE(97)] = 1146,
  [SMALL_STATE(98)] = 1153,
  [SMALL_STATE(99)] = 1160,
  [SMALL_STATE(100)] = 1167,
  [SMALL_STATE(101)] = 1174,
  [SMALL_STATE(102)] = 1181,
  [SMALL_STATE(103)] = 1188,
  [SMALL_STATE(104)] = 1195,
  [SMALL_STATE(105)] = 1202,
  [SMALL_STATE(106)] = 1209,
  [SMALL_STATE(107)] = 1216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2), SHIFT_REPEAT(103),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributeType_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_spec, 7),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(25),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(49),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keychar, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_componet_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_componet_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_componet_repeat1, 2), SHIFT_REPEAT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(16),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeAndValue, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeAndValue, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keychar, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2), SHIFT_REPEAT(53),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_repeat1, 2), SHIFT_REPEAT(56),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldif_change_record, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_moddn, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_delete, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_add, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changerecord, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrval_spec, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_string, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinguishedName, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_spec, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
