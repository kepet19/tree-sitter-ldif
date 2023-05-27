#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
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
  aux_sym_name_componet_repeat1 = 61,
  aux_sym_string_repeat1 = 62,
  aux_sym_change_modify_repeat1 = 63,
  aux_sym_attributeType_repeat1 = 64,
  aux_sym_option_repeat1 = 65,
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
  [25] = 25,
  [26] = 8,
  [27] = 12,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 34,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 31,
  [45] = 45,
  [46] = 41,
  [47] = 47,
  [48] = 33,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 42,
  [53] = 40,
  [54] = 21,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 58,
  [59] = 43,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 50,
  [64] = 58,
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
  [95] = 86,
  [96] = 85,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 73,
  [101] = 101,
  [102] = 90,
  [103] = 103,
  [104] = 104,
  [105] = 89,
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
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 59},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 59},
  [62] = {.lex_state = 59},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 59},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 90},
  [76] = {.lex_state = 63},
  [77] = {.lex_state = 63},
  [78] = {.lex_state = 59},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 59},
  [81] = {.lex_state = 99},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 59},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 59},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 59},
  [90] = {.lex_state = 59},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 59},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 59},
  [96] = {.lex_state = 59},
  [97] = {.lex_state = 63},
  [98] = {.lex_state = 63},
  [99] = {.lex_state = 63},
  [100] = {.lex_state = 59},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 59},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 59},
  [105] = {.lex_state = 59},
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
    [sym_source_file] = STATE(104),
    [sym__definition] = STATE(11),
    [sym_ldif_change_record] = STATE(11),
    [sym_dn_spec] = STATE(69),
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
    STATE(67), 4,
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
    STATE(37), 1,
      sym_attributeTypeAndValue,
    STATE(50), 1,
      sym_ldap_oid,
    STATE(68), 1,
      sym_name_componet,
    STATE(71), 1,
      sym_name,
    STATE(80), 1,
      sym_attributeType,
    STATE(88), 1,
      sym_distinguishedName,
  [51] = 3,
    STATE(6), 2,
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
  [66] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_stringchar,
    STATE(8), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(29), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [85] = 3,
    STATE(9), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(27), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [100] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_stringchar,
    STATE(5), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(37), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      sym_stringchar,
    STATE(8), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(41), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [138] = 3,
    STATE(9), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [153] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_dn_COLON,
    ACTIONS(59), 1,
      sym_comment,
    STATE(69), 1,
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
    STATE(69), 1,
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
    STATE(50), 1,
      sym_ldap_oid,
    STATE(56), 1,
      sym_attributeType,
    STATE(66), 1,
      sym_AttributeDescription,
    STATE(84), 1,
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
    STATE(37), 1,
      sym_attributeTypeAndValue,
    STATE(50), 1,
      sym_ldap_oid,
    STATE(80), 1,
      sym_attributeType,
    STATE(103), 1,
      sym_name_componet,
  [281] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_stringchar,
    STATE(7), 1,
      sym_pair,
    STATE(47), 1,
      sym_string,
  [303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym_stringchar,
    STATE(23), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      aux_sym_option_token1,
    STATE(22), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
  [337] = 1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
      sym_comment,
  [346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_BSLASH,
      sym_stringchar,
  [357] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(91), 1,
      aux_sym_option_token1,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(27), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
  [374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_stringchar,
    STATE(26), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [391] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(103), 1,
      aux_sym_attributeType_token1,
    ACTIONS(105), 1,
      aux_sym_ldap_oid_token1,
    STATE(57), 1,
      sym_attributeType,
    STATE(63), 1,
      sym_ldap_oid,
    STATE(91), 1,
      sym_AttributeDescription,
  [410] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_attributeType_token1,
    ACTIONS(23), 1,
      aux_sym_ldap_oid_token1,
    STATE(45), 1,
      sym_attributeTypeAndValue,
    STATE(50), 1,
      sym_ldap_oid,
    STATE(80), 1,
      sym_attributeType,
  [429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(110), 1,
      sym_stringchar,
    STATE(26), 2,
      sym_pair,
      aux_sym_string_repeat1,
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
    STATE(85), 1,
      sym_option,
    STATE(86), 1,
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
    STATE(36), 1,
      aux_sym_name_componet_repeat1,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_special,
    ACTIONS(128), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [507] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(132), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [519] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_option_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(95), 1,
      sym_options,
    STATE(96), 1,
      sym_option,
  [535] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
      aux_sym_option_token1,
  [545] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(136), 1,
      aux_sym_option_token1,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(96), 1,
      sym_option,
    STATE(100), 1,
      sym_options,
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
    ACTIONS(146), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_PLUS,
    STATE(36), 1,
      aux_sym_name_componet_repeat1,
  [589] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_PLUS,
    ACTIONS(153), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_name_componet_repeat1,
  [605] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_option_token1,
    ACTIONS(120), 1,
      sym_identifier,
    STATE(73), 1,
      sym_options,
    STATE(85), 1,
      sym_option,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(163), 1,
      aux_sym_option_token1,
    STATE(42), 1,
      aux_sym_option_repeat1,
  [645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(167), 1,
      aux_sym_option_token1,
    STATE(41), 1,
      aux_sym_option_repeat1,
  [658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(172), 1,
      aux_sym_option_token1,
    STATE(41), 1,
      aux_sym_option_repeat1,
  [671] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(176), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_SEMI,
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [704] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(180), 1,
      aux_sym_option_token1,
    STATE(46), 1,
      aux_sym_option_repeat1,
  [717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(187), 2,
      anon_sym_SEMI,
      aux_sym_option_token1,
  [739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym_dn_spec_token1,
    ACTIONS(191), 1,
      anon_sym_COLON,
    ACTIONS(193), 1,
      anon_sym_LT,
  [752] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(29), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [772] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      aux_sym_option_token1,
    STATE(46), 1,
      aux_sym_option_repeat1,
  [785] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      aux_sym_option_token1,
    STATE(52), 1,
      aux_sym_option_repeat1,
  [798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_stringchar,
    ACTIONS(95), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [809] = 1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [815] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_SEMI,
  [825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(211), 1,
      anon_sym_SEMI,
  [835] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_option_token1,
    STATE(15), 1,
      sym_keychar,
  [845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(213), 1,
      anon_sym_SEMI,
  [855] = 1,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [861] = 1,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [867] = 1,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [883] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_option_token1,
    STATE(19), 1,
      sym_keychar,
  [893] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(83), 1,
      sym_base64_string,
  [903] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COLON,
    STATE(70), 1,
      sym_value_spec,
  [913] = 1,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
  [929] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_changetype_COLON,
    STATE(55), 1,
      sym_changerecord,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_dn_spec_token2,
  [946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      aux_sym_dn_spec_token2,
  [953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_dn_spec_token2,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_dn_spec_token2,
  [967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_dn_spec_token2,
  [974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      aux_sym_value_spec_token1,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      aux_sym_dn_spec_token1,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      aux_sym_dn_spec_token1,
  [995] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_DASH,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      aux_sym_dn_spec_token2,
  [1009] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_EQ,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_url,
  [1023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym_dn_spec_token2,
  [1030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      aux_sym_dn_spec_token2,
  [1037] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DASH,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      aux_sym_dn_spec_token2,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym_dn_spec_token2,
  [1058] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_newrdn_COLON,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym_dn_spec_token2,
  [1072] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [1079] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_ldap_oid_token1,
  [1086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      aux_sym_dn_spec_token2,
  [1093] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_changetype_COLON,
  [1100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_dn_spec_token2,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym_dn_spec_token2,
  [1114] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COLON,
  [1121] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COLON,
  [1128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      aux_sym_dn_spec_token1,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym_dn_spec_token1,
  [1142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_dn_spec_token1,
  [1149] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [1156] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym_hexpair,
  [1163] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(295), 1,
      aux_sym_ldap_oid_token1,
  [1170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      aux_sym_dn_spec_token2,
  [1177] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [1184] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 85,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 119,
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
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 337,
  [SMALL_STATE(21)] = 346,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 374,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 410,
  [SMALL_STATE(26)] = 429,
  [SMALL_STATE(27)] = 446,
  [SMALL_STATE(28)] = 463,
  [SMALL_STATE(29)] = 479,
  [SMALL_STATE(30)] = 495,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 519,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 545,
  [SMALL_STATE(35)] = 561,
  [SMALL_STATE(36)] = 573,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 605,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 658,
  [SMALL_STATE(43)] = 671,
  [SMALL_STATE(44)] = 680,
  [SMALL_STATE(45)] = 693,
  [SMALL_STATE(46)] = 704,
  [SMALL_STATE(47)] = 717,
  [SMALL_STATE(48)] = 728,
  [SMALL_STATE(49)] = 739,
  [SMALL_STATE(50)] = 752,
  [SMALL_STATE(51)] = 761,
  [SMALL_STATE(52)] = 772,
  [SMALL_STATE(53)] = 785,
  [SMALL_STATE(54)] = 798,
  [SMALL_STATE(55)] = 809,
  [SMALL_STATE(56)] = 815,
  [SMALL_STATE(57)] = 825,
  [SMALL_STATE(58)] = 835,
  [SMALL_STATE(59)] = 845,
  [SMALL_STATE(60)] = 855,
  [SMALL_STATE(61)] = 861,
  [SMALL_STATE(62)] = 867,
  [SMALL_STATE(63)] = 873,
  [SMALL_STATE(64)] = 883,
  [SMALL_STATE(65)] = 893,
  [SMALL_STATE(66)] = 903,
  [SMALL_STATE(67)] = 913,
  [SMALL_STATE(68)] = 919,
  [SMALL_STATE(69)] = 929,
  [SMALL_STATE(70)] = 939,
  [SMALL_STATE(71)] = 946,
  [SMALL_STATE(72)] = 953,
  [SMALL_STATE(73)] = 960,
  [SMALL_STATE(74)] = 967,
  [SMALL_STATE(75)] = 974,
  [SMALL_STATE(76)] = 981,
  [SMALL_STATE(77)] = 988,
  [SMALL_STATE(78)] = 995,
  [SMALL_STATE(79)] = 1002,
  [SMALL_STATE(80)] = 1009,
  [SMALL_STATE(81)] = 1016,
  [SMALL_STATE(82)] = 1023,
  [SMALL_STATE(83)] = 1030,
  [SMALL_STATE(84)] = 1037,
  [SMALL_STATE(85)] = 1044,
  [SMALL_STATE(86)] = 1051,
  [SMALL_STATE(87)] = 1058,
  [SMALL_STATE(88)] = 1065,
  [SMALL_STATE(89)] = 1072,
  [SMALL_STATE(90)] = 1079,
  [SMALL_STATE(91)] = 1086,
  [SMALL_STATE(92)] = 1093,
  [SMALL_STATE(93)] = 1100,
  [SMALL_STATE(94)] = 1107,
  [SMALL_STATE(95)] = 1114,
  [SMALL_STATE(96)] = 1121,
  [SMALL_STATE(97)] = 1128,
  [SMALL_STATE(98)] = 1135,
  [SMALL_STATE(99)] = 1142,
  [SMALL_STATE(100)] = 1149,
  [SMALL_STATE(101)] = 1156,
  [SMALL_STATE(102)] = 1163,
  [SMALL_STATE(103)] = 1170,
  [SMALL_STATE(104)] = 1177,
  [SMALL_STATE(105)] = 1184,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2), SHIFT_REPEAT(99),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributeType_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(33),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_spec, 7),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(26),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(48),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keychar, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_componet_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_componet_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_componet_repeat1, 2), SHIFT_REPEAT(25),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_repeat1, 2), SHIFT_REPEAT(41),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 1),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_repeat1, 2), SHIFT_REPEAT(46),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeAndValue, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeAndValue, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keychar, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldif_change_record, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_moddn, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_delete, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_add, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changerecord, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinguishedName, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrval_spec, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_string, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_spec, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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
