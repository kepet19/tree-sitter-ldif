#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
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
  aux_sym_attributeType_token1 = 28,
  aux_sym_ldap_oid_token1 = 29,
  anon_sym_DOT = 30,
  anon_sym_SEMI = 31,
  aux_sym_keychar_token1 = 32,
  sym_url = 33,
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
  sym_keychar = 56,
  sym_AttributeDescription = 57,
  sym_base64_string = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_name_componet_repeat1 = 60,
  aux_sym_string_repeat1 = 61,
  aux_sym_change_modify_repeat1 = 62,
  aux_sym_attributeType_repeat1 = 63,
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
  [aux_sym_attributeType_token1] = "attributeType_token1",
  [aux_sym_ldap_oid_token1] = "ldap_oid_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [aux_sym_keychar_token1] = "keychar_token1",
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
  [sym_keychar] = "keychar",
  [sym_AttributeDescription] = "AttributeDescription",
  [sym_base64_string] = "base64_string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_name_componet_repeat1] = "name_componet_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_change_modify_repeat1] = "change_modify_repeat1",
  [aux_sym_attributeType_repeat1] = "attributeType_repeat1",
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
  [aux_sym_attributeType_token1] = aux_sym_attributeType_token1,
  [aux_sym_ldap_oid_token1] = aux_sym_ldap_oid_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_keychar_token1] = aux_sym_keychar_token1,
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
  [sym_keychar] = sym_keychar,
  [sym_AttributeDescription] = sym_AttributeDescription,
  [sym_base64_string] = sym_base64_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_name_componet_repeat1] = aux_sym_name_componet_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_change_modify_repeat1] = aux_sym_change_modify_repeat1,
  [aux_sym_attributeType_repeat1] = aux_sym_attributeType_repeat1,
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
  [aux_sym_keychar_token1] = {
    .visible = false,
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
  [12] = 4,
  [13] = 13,
  [14] = 3,
  [15] = 5,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 11,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 22,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 35,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 42,
  [60] = 60,
  [61] = 55,
  [62] = 40,
  [63] = 63,
  [64] = 64,
  [65] = 53,
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
  [91] = 83,
  [92] = 92,
  [93] = 70,
  [94] = 94,
  [95] = 68,
  [96] = 96,
  [97] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(58);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead)) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '+' ||
          lookahead == ',' ||
          (';' <= lookahead && lookahead <= '>')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == ';') ADVANCE(77);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_dn_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_dn_spec_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_dn_spec_token2);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_dn_spec_token2);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hexpair);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_stringchar);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_stringchar);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '+' &&
          lookahead != ',' &&
          (lookahead < ';' || '>' < lookahead) &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_special);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_special);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_changetype_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_newrdn_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_add_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_delete_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_replace_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_value_spec_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_attributeType_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_attributeType_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_attributeType_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_ldap_oid_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
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
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 45},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 45},
  [52] = {.lex_state = 45},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 70},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 78},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 48},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 45},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 45},
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 48},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_special] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_modrdn] = ACTIONS(1),
    [anon_sym_moddn] = ACTIONS(1),
    [anon_sym_modify] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [aux_sym_attributeType_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_keychar_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(88),
    [sym__definition] = STATE(20),
    [sym_ldif_change_record] = STATE(20),
    [sym_dn_spec] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(20),
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
    STATE(48), 4,
      sym_change_add,
      sym_change_delete,
      sym_change_moddn,
      sym_change_modify,
  [23] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_keychar_token1,
    ACTIONS(23), 2,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
    STATE(5), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(21), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [43] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_keychar_token1,
    ACTIONS(23), 2,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
    STATE(3), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(27), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [63] = 5,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(34), 1,
      aux_sym_keychar_token1,
    ACTIONS(31), 2,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
    STATE(5), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(29), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [83] = 9,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_attributeType_token1,
    ACTIONS(39), 1,
      aux_sym_ldap_oid_token1,
    STATE(30), 1,
      sym_attributeTypeAndValue,
    STATE(40), 1,
      sym_ldap_oid,
    STATE(54), 1,
      sym_name_componet,
    STATE(85), 1,
      sym_attributeType,
    STATE(89), 1,
      sym_distinguishedName,
    STATE(92), 1,
      sym_name,
  [111] = 3,
    STATE(9), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(43), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [126] = 3,
    STATE(8), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
  [141] = 3,
    STATE(8), 2,
      sym_mod_spec,
      aux_sym_change_modify_repeat1,
    ACTIONS(43), 3,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(56), 1,
      sym_stringchar,
    STATE(11), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(52), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [175] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      sym_stringchar,
    STATE(11), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(58), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    STATE(14), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(66), 3,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
      aux_sym_keychar_token1,
  [213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 1,
      sym_stringchar,
    STATE(10), 2,
      sym_pair,
      aux_sym_string_repeat1,
    ACTIONS(70), 3,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(15), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(66), 3,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
      aux_sym_keychar_token1,
  [251] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    STATE(15), 2,
      sym_keychar,
      aux_sym_attributeType_repeat1,
    ACTIONS(76), 3,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
      aux_sym_keychar_token1,
  [270] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_attributeType_token1,
    ACTIONS(39), 1,
      aux_sym_ldap_oid_token1,
    STATE(40), 1,
      sym_ldap_oid,
    STATE(56), 1,
      sym_attributeType,
    STATE(64), 1,
      sym_AttributeDescription,
    STATE(67), 1,
      sym_attrval_spec,
  [292] = 5,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_dn_COLON,
    ACTIONS(86), 1,
      sym_comment,
    STATE(57), 1,
      sym_dn_spec,
    STATE(17), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_stringchar,
    STATE(13), 1,
      sym_pair,
    STATE(41), 1,
      sym_string,
  [332] = 7,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_attributeType_token1,
    ACTIONS(39), 1,
      aux_sym_ldap_oid_token1,
    STATE(30), 1,
      sym_attributeTypeAndValue,
    STATE(40), 1,
      sym_ldap_oid,
    STATE(85), 1,
      sym_attributeType,
    STATE(86), 1,
      sym_name_componet,
  [354] = 5,
    ACTIONS(7), 1,
      anon_sym_dn_COLON,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_comment,
    STATE(57), 1,
      sym_dn_spec,
    STATE(17), 3,
      sym__definition,
      sym_ldif_change_record,
      aux_sym_source_file_repeat1,
  [372] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_keychar_token1,
    ACTIONS(99), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_COLON,
      aux_sym_attributeType_token1,
      anon_sym_SEMI,
  [386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 5,
      aux_sym_dn_spec_token2,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_BSLASH,
      sym_stringchar,
  [397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      sym_stringchar,
    STATE(28), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [414] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_attributeType_token1,
    ACTIONS(39), 1,
      aux_sym_ldap_oid_token1,
    STATE(39), 1,
      sym_attributeTypeAndValue,
    STATE(40), 1,
      sym_ldap_oid,
    STATE(85), 1,
      sym_attributeType,
  [433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(101), 4,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
      anon_sym_SEMI,
      aux_sym_keychar_token1,
  [446] = 1,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      anon_sym_add_COLON,
      anon_sym_delete_COLON,
      anon_sym_replace_COLON,
      sym_comment,
  [455] = 6,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym_attributeType_token1,
    ACTIONS(115), 1,
      aux_sym_ldap_oid_token1,
    STATE(58), 1,
      sym_attributeType,
    STATE(62), 1,
      sym_ldap_oid,
    STATE(66), 1,
      sym_AttributeDescription,
  [474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_BSLASH,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      sym_stringchar,
    STATE(29), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      sym_stringchar,
    STATE(29), 2,
      sym_pair,
      aux_sym_string_repeat1,
  [508] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    STATE(33), 1,
      aux_sym_name_componet_repeat1,
  [524] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_special,
    ACTIONS(133), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [536] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_keychar_token1,
    STATE(12), 1,
      sym_keychar,
    ACTIONS(137), 2,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
  [550] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_PLUS,
    ACTIONS(139), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_name_componet_repeat1,
  [566] = 4,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_keychar_token1,
    STATE(4), 1,
      sym_keychar,
    ACTIONS(23), 2,
      anon_sym_DASH,
      aux_sym_attributeType_token1,
  [580] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(143), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_special,
    ACTIONS(147), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym_hexpair,
  [604] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_PLUS,
    STATE(37), 1,
      aux_sym_name_componet_repeat1,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_stringchar,
    ACTIONS(103), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [642] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [662] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(166), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_SEMI,
  [671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_dn_spec_token1,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      anon_sym_LT,
  [684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(174), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_PLUS,
  [719] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(83), 1,
      sym_options,
  [729] = 1,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [735] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(91), 1,
      sym_options,
  [745] = 1,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [751] = 1,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [757] = 1,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [763] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(93), 1,
      sym_options,
  [773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [783] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      anon_sym_SEMI,
  [793] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      anon_sym_SEMI,
  [803] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_changetype_COLON,
    STATE(60), 1,
      sym_changerecord,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(210), 1,
      anon_sym_SEMI,
  [823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(212), 1,
      anon_sym_SEMI,
  [833] = 1,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_dn_COLON,
      sym_comment,
  [839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      aux_sym_dn_spec_token2,
    ACTIONS(218), 1,
      anon_sym_SEMI,
  [859] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(79), 1,
      sym_base64_string,
  [869] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_value_spec,
  [879] = 3,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(70), 1,
      sym_options,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      aux_sym_dn_spec_token2,
  [896] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_DASH,
  [903] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(228), 1,
      aux_sym_ldap_oid_token1,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym_dn_spec_token2,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym_dn_spec_token2,
  [924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym_value_spec_token1,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_dn_spec_token1,
  [938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_dn_spec_token1,
  [945] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DASH,
  [952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_dn_spec_token2,
  [959] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_hexpair,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_url,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym_dn_spec_token2,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_dn_spec_token2,
  [987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_dn_spec_token2,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_dn_spec_token2,
  [1001] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_newrdn_COLON,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      aux_sym_dn_spec_token2,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym_dn_spec_token1,
  [1022] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_EQ,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_dn_spec_token2,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_dn_spec_token2,
  [1043] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      aux_sym_dn_spec_token2,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_dn_spec_token1,
  [1064] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [1071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_dn_spec_token2,
  [1078] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_dn_spec_token2,
  [1092] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_ldap_oid_token1,
  [1099] = 2,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_changetype_COLON,
  [1106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_dn_spec_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 43,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 232,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 292,
  [SMALL_STATE(18)] = 310,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 354,
  [SMALL_STATE(21)] = 372,
  [SMALL_STATE(22)] = 386,
  [SMALL_STATE(23)] = 397,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 433,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 491,
  [SMALL_STATE(30)] = 508,
  [SMALL_STATE(31)] = 524,
  [SMALL_STATE(32)] = 536,
  [SMALL_STATE(33)] = 550,
  [SMALL_STATE(34)] = 566,
  [SMALL_STATE(35)] = 580,
  [SMALL_STATE(36)] = 592,
  [SMALL_STATE(37)] = 604,
  [SMALL_STATE(38)] = 620,
  [SMALL_STATE(39)] = 631,
  [SMALL_STATE(40)] = 642,
  [SMALL_STATE(41)] = 651,
  [SMALL_STATE(42)] = 662,
  [SMALL_STATE(43)] = 671,
  [SMALL_STATE(44)] = 684,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 708,
  [SMALL_STATE(47)] = 719,
  [SMALL_STATE(48)] = 729,
  [SMALL_STATE(49)] = 735,
  [SMALL_STATE(50)] = 745,
  [SMALL_STATE(51)] = 751,
  [SMALL_STATE(52)] = 757,
  [SMALL_STATE(53)] = 763,
  [SMALL_STATE(54)] = 773,
  [SMALL_STATE(55)] = 783,
  [SMALL_STATE(56)] = 793,
  [SMALL_STATE(57)] = 803,
  [SMALL_STATE(58)] = 813,
  [SMALL_STATE(59)] = 823,
  [SMALL_STATE(60)] = 833,
  [SMALL_STATE(61)] = 839,
  [SMALL_STATE(62)] = 849,
  [SMALL_STATE(63)] = 859,
  [SMALL_STATE(64)] = 869,
  [SMALL_STATE(65)] = 879,
  [SMALL_STATE(66)] = 889,
  [SMALL_STATE(67)] = 896,
  [SMALL_STATE(68)] = 903,
  [SMALL_STATE(69)] = 910,
  [SMALL_STATE(70)] = 917,
  [SMALL_STATE(71)] = 924,
  [SMALL_STATE(72)] = 931,
  [SMALL_STATE(73)] = 938,
  [SMALL_STATE(74)] = 945,
  [SMALL_STATE(75)] = 952,
  [SMALL_STATE(76)] = 959,
  [SMALL_STATE(77)] = 966,
  [SMALL_STATE(78)] = 973,
  [SMALL_STATE(79)] = 980,
  [SMALL_STATE(80)] = 987,
  [SMALL_STATE(81)] = 994,
  [SMALL_STATE(82)] = 1001,
  [SMALL_STATE(83)] = 1008,
  [SMALL_STATE(84)] = 1015,
  [SMALL_STATE(85)] = 1022,
  [SMALL_STATE(86)] = 1029,
  [SMALL_STATE(87)] = 1036,
  [SMALL_STATE(88)] = 1043,
  [SMALL_STATE(89)] = 1050,
  [SMALL_STATE(90)] = 1057,
  [SMALL_STATE(91)] = 1064,
  [SMALL_STATE(92)] = 1071,
  [SMALL_STATE(93)] = 1078,
  [SMALL_STATE(94)] = 1085,
  [SMALL_STATE(95)] = 1092,
  [SMALL_STATE(96)] = 1099,
  [SMALL_STATE(97)] = 1106,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributeType_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(21),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_change_modify_repeat1, 2), SHIFT_REPEAT(90),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_modify, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(36),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 3),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2), SHIFT_REPEAT(25),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attributeType_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keychar, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keychar, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_spec, 7),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(31),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(29),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_componet, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_componet, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_componet_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_componet_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_componet_repeat1, 2), SHIFT_REPEAT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeType, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributeTypeAndValue, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeTypeAndValue, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldap_oid, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changerecord, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_add, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_delete, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change_moddn, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ldap_oid, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ldif_change_record, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributeType, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_options, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attrval_spec, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base64_string, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_spec, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_AttributeDescription, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinguishedName, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dn_spec, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
