#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 2
#define TOKEN_COUNT 119
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_AT = 1,
  anon_sym_echooff = 2,
  anon_sym_COLON_COLON = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_REM = 5,
  anon_sym_Rem = 6,
  anon_sym_rem = 7,
  anon_sym_SET = 8,
  anon_sym_Set = 9,
  anon_sym_set = 10,
  anon_sym_SLASHA = 11,
  anon_sym_EQ = 12,
  anon_sym_PERCENT = 13,
  anon_sym_ECHO = 14,
  anon_sym_IF = 15,
  anon_sym_GOTO = 16,
  anon_sym_EXIT = 17,
  anon_sym_FOR = 18,
  anon_sym_PAUSE = 19,
  anon_sym_CLS = 20,
  anon_sym_echo = 21,
  anon_sym_if = 22,
  anon_sym_goto = 23,
  anon_sym_exit = 24,
  anon_sym_for = 25,
  anon_sym_pause = 26,
  anon_sym_cls = 27,
  anon_sym_VER = 28,
  anon_sym_ASSOC = 29,
  anon_sym_CD = 30,
  anon_sym_COPY = 31,
  anon_sym_DEL = 32,
  anon_sym_DIR = 33,
  anon_sym_DATE = 34,
  anon_sym_MD = 35,
  anon_sym_MOVE = 36,
  anon_sym_PATH = 37,
  anon_sym_PROMPT = 38,
  anon_sym_RD = 39,
  anon_sym_REN = 40,
  anon_sym_START = 41,
  anon_sym_TIME = 42,
  anon_sym_TYPE = 43,
  anon_sym_VOL = 44,
  anon_sym_ATTRIB = 45,
  anon_sym_CHKDSK = 46,
  anon_sym_CHOICE = 47,
  anon_sym_CMD = 48,
  anon_sym_COMP = 49,
  anon_sym_CONVERT = 50,
  anon_sym_DRIVERQUERY = 51,
  anon_sym_EXPAND = 52,
  anon_sym_FIND = 53,
  anon_sym_FORMAT = 54,
  anon_sym_HELP = 55,
  anon_sym_IPCONFIG = 56,
  anon_sym_LABEL = 57,
  anon_sym_NET = 58,
  anon_sym_PING = 59,
  anon_sym_SHUTDOWN = 60,
  anon_sym_SORT = 61,
  anon_sym_SUBST = 62,
  anon_sym_SYSTEMINFO = 63,
  anon_sym_TASKKILL = 64,
  anon_sym_TASKLIST = 65,
  anon_sym_XCOPY = 66,
  anon_sym_TREE = 67,
  anon_sym_FC = 68,
  anon_sym_DISKPART = 69,
  anon_sym_TITLE = 70,
  anon_sym_ver = 71,
  anon_sym_assoc = 72,
  anon_sym_cd = 73,
  anon_sym_copy = 74,
  anon_sym_del = 75,
  anon_sym_dir = 76,
  anon_sym_date = 77,
  anon_sym_md = 78,
  anon_sym_move = 79,
  anon_sym_path = 80,
  anon_sym_prompt = 81,
  anon_sym_rd = 82,
  anon_sym_ren = 83,
  anon_sym_start = 84,
  anon_sym_time = 85,
  anon_sym_type = 86,
  anon_sym_vol = 87,
  anon_sym_attrib = 88,
  anon_sym_chkdsk = 89,
  anon_sym_choice = 90,
  anon_sym_cmd = 91,
  anon_sym_comp = 92,
  anon_sym_convert = 93,
  anon_sym_driverquery = 94,
  anon_sym_expand = 95,
  anon_sym_find = 96,
  anon_sym_format = 97,
  anon_sym_help = 98,
  anon_sym_ipconfig = 99,
  anon_sym_label = 100,
  anon_sym_net = 101,
  anon_sym_ping = 102,
  anon_sym_shutdown = 103,
  anon_sym_sort = 104,
  anon_sym_subst = 105,
  anon_sym_systeminfo = 106,
  anon_sym_taskkill = 107,
  anon_sym_tasklist = 108,
  anon_sym_xcopy = 109,
  anon_sym_tree = 110,
  anon_sym_fc = 111,
  anon_sym_diskpart = 112,
  anon_sym_title = 113,
  anon_sym_COLON = 114,
  sym_identifier = 115,
  anon_sym_DQUOTE = 116,
  aux_sym_string_token1 = 117,
  sym_number = 118,
  sym_program = 119,
  sym_echooff = 120,
  sym_comment = 121,
  sym_variable_declaration = 122,
  sym_variable_reference = 123,
  sym_keyword = 124,
  sym_function_definition = 125,
  sym_string = 126,
  aux_sym_program_repeat1 = 127,
  aux_sym_string_repeat1 = 128,
  anon_alias_sym_function_name = 129,
  anon_alias_sym_variable_name = 130,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_echooff] = "echo off",
  [anon_sym_COLON_COLON] = "::",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_REM] = "REM",
  [anon_sym_Rem] = "Rem",
  [anon_sym_rem] = "rem",
  [anon_sym_SET] = "SET",
  [anon_sym_Set] = "Set",
  [anon_sym_set] = "set",
  [anon_sym_SLASHA] = "/A",
  [anon_sym_EQ] = "=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_ECHO] = "ECHO",
  [anon_sym_IF] = "IF",
  [anon_sym_GOTO] = "GOTO",
  [anon_sym_EXIT] = "EXIT",
  [anon_sym_FOR] = "FOR",
  [anon_sym_PAUSE] = "PAUSE",
  [anon_sym_CLS] = "CLS",
  [anon_sym_echo] = "echo",
  [anon_sym_if] = "if",
  [anon_sym_goto] = "goto",
  [anon_sym_exit] = "exit",
  [anon_sym_for] = "for",
  [anon_sym_pause] = "pause",
  [anon_sym_cls] = "cls",
  [anon_sym_VER] = "VER",
  [anon_sym_ASSOC] = "ASSOC",
  [anon_sym_CD] = "CD",
  [anon_sym_COPY] = "COPY",
  [anon_sym_DEL] = "DEL",
  [anon_sym_DIR] = "DIR",
  [anon_sym_DATE] = "DATE",
  [anon_sym_MD] = "MD",
  [anon_sym_MOVE] = "MOVE",
  [anon_sym_PATH] = "PATH",
  [anon_sym_PROMPT] = "PROMPT",
  [anon_sym_RD] = "RD",
  [anon_sym_REN] = "REN",
  [anon_sym_START] = "START",
  [anon_sym_TIME] = "TIME",
  [anon_sym_TYPE] = "TYPE",
  [anon_sym_VOL] = "VOL",
  [anon_sym_ATTRIB] = "ATTRIB",
  [anon_sym_CHKDSK] = "CHKDSK",
  [anon_sym_CHOICE] = "CHOICE",
  [anon_sym_CMD] = "CMD",
  [anon_sym_COMP] = "COMP",
  [anon_sym_CONVERT] = "CONVERT",
  [anon_sym_DRIVERQUERY] = "DRIVERQUERY",
  [anon_sym_EXPAND] = "EXPAND",
  [anon_sym_FIND] = "FIND",
  [anon_sym_FORMAT] = "FORMAT",
  [anon_sym_HELP] = "HELP",
  [anon_sym_IPCONFIG] = "IPCONFIG",
  [anon_sym_LABEL] = "LABEL",
  [anon_sym_NET] = "NET",
  [anon_sym_PING] = "PING",
  [anon_sym_SHUTDOWN] = "SHUTDOWN",
  [anon_sym_SORT] = "SORT",
  [anon_sym_SUBST] = "SUBST",
  [anon_sym_SYSTEMINFO] = "SYSTEMINFO",
  [anon_sym_TASKKILL] = "TASKKILL",
  [anon_sym_TASKLIST] = "TASKLIST",
  [anon_sym_XCOPY] = "XCOPY",
  [anon_sym_TREE] = "TREE",
  [anon_sym_FC] = "FC",
  [anon_sym_DISKPART] = "DISKPART",
  [anon_sym_TITLE] = "TITLE",
  [anon_sym_ver] = "ver",
  [anon_sym_assoc] = "assoc",
  [anon_sym_cd] = "cd",
  [anon_sym_copy] = "copy",
  [anon_sym_del] = "del",
  [anon_sym_dir] = "dir",
  [anon_sym_date] = "date",
  [anon_sym_md] = "md",
  [anon_sym_move] = "move",
  [anon_sym_path] = "path",
  [anon_sym_prompt] = "prompt",
  [anon_sym_rd] = "rd",
  [anon_sym_ren] = "ren",
  [anon_sym_start] = "start",
  [anon_sym_time] = "time",
  [anon_sym_type] = "type",
  [anon_sym_vol] = "vol",
  [anon_sym_attrib] = "attrib",
  [anon_sym_chkdsk] = "chkdsk",
  [anon_sym_choice] = "choice",
  [anon_sym_cmd] = "cmd",
  [anon_sym_comp] = "comp",
  [anon_sym_convert] = "convert",
  [anon_sym_driverquery] = "driverquery",
  [anon_sym_expand] = "expand",
  [anon_sym_find] = "find",
  [anon_sym_format] = "format",
  [anon_sym_help] = "help",
  [anon_sym_ipconfig] = "ipconfig",
  [anon_sym_label] = "label",
  [anon_sym_net] = "net",
  [anon_sym_ping] = "ping",
  [anon_sym_shutdown] = "shutdown",
  [anon_sym_sort] = "sort",
  [anon_sym_subst] = "subst",
  [anon_sym_systeminfo] = "systeminfo",
  [anon_sym_taskkill] = "taskkill",
  [anon_sym_tasklist] = "tasklist",
  [anon_sym_xcopy] = "xcopy",
  [anon_sym_tree] = "tree",
  [anon_sym_fc] = "fc",
  [anon_sym_diskpart] = "diskpart",
  [anon_sym_title] = "title",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [sym_program] = "program",
  [sym_echooff] = "echooff",
  [sym_comment] = "comment",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_reference] = "variable_reference",
  [sym_keyword] = "keyword",
  [sym_function_definition] = "function_definition",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [anon_alias_sym_function_name] = "function_name",
  [anon_alias_sym_variable_name] = "variable_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_echooff] = anon_sym_echooff,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_REM] = anon_sym_REM,
  [anon_sym_Rem] = anon_sym_Rem,
  [anon_sym_rem] = anon_sym_rem,
  [anon_sym_SET] = anon_sym_SET,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_SLASHA] = anon_sym_SLASHA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_ECHO] = anon_sym_ECHO,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_GOTO] = anon_sym_GOTO,
  [anon_sym_EXIT] = anon_sym_EXIT,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_PAUSE] = anon_sym_PAUSE,
  [anon_sym_CLS] = anon_sym_CLS,
  [anon_sym_echo] = anon_sym_echo,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_pause] = anon_sym_pause,
  [anon_sym_cls] = anon_sym_cls,
  [anon_sym_VER] = anon_sym_VER,
  [anon_sym_ASSOC] = anon_sym_ASSOC,
  [anon_sym_CD] = anon_sym_CD,
  [anon_sym_COPY] = anon_sym_COPY,
  [anon_sym_DEL] = anon_sym_DEL,
  [anon_sym_DIR] = anon_sym_DIR,
  [anon_sym_DATE] = anon_sym_DATE,
  [anon_sym_MD] = anon_sym_MD,
  [anon_sym_MOVE] = anon_sym_MOVE,
  [anon_sym_PATH] = anon_sym_PATH,
  [anon_sym_PROMPT] = anon_sym_PROMPT,
  [anon_sym_RD] = anon_sym_RD,
  [anon_sym_REN] = anon_sym_REN,
  [anon_sym_START] = anon_sym_START,
  [anon_sym_TIME] = anon_sym_TIME,
  [anon_sym_TYPE] = anon_sym_TYPE,
  [anon_sym_VOL] = anon_sym_VOL,
  [anon_sym_ATTRIB] = anon_sym_ATTRIB,
  [anon_sym_CHKDSK] = anon_sym_CHKDSK,
  [anon_sym_CHOICE] = anon_sym_CHOICE,
  [anon_sym_CMD] = anon_sym_CMD,
  [anon_sym_COMP] = anon_sym_COMP,
  [anon_sym_CONVERT] = anon_sym_CONVERT,
  [anon_sym_DRIVERQUERY] = anon_sym_DRIVERQUERY,
  [anon_sym_EXPAND] = anon_sym_EXPAND,
  [anon_sym_FIND] = anon_sym_FIND,
  [anon_sym_FORMAT] = anon_sym_FORMAT,
  [anon_sym_HELP] = anon_sym_HELP,
  [anon_sym_IPCONFIG] = anon_sym_IPCONFIG,
  [anon_sym_LABEL] = anon_sym_LABEL,
  [anon_sym_NET] = anon_sym_NET,
  [anon_sym_PING] = anon_sym_PING,
  [anon_sym_SHUTDOWN] = anon_sym_SHUTDOWN,
  [anon_sym_SORT] = anon_sym_SORT,
  [anon_sym_SUBST] = anon_sym_SUBST,
  [anon_sym_SYSTEMINFO] = anon_sym_SYSTEMINFO,
  [anon_sym_TASKKILL] = anon_sym_TASKKILL,
  [anon_sym_TASKLIST] = anon_sym_TASKLIST,
  [anon_sym_XCOPY] = anon_sym_XCOPY,
  [anon_sym_TREE] = anon_sym_TREE,
  [anon_sym_FC] = anon_sym_FC,
  [anon_sym_DISKPART] = anon_sym_DISKPART,
  [anon_sym_TITLE] = anon_sym_TITLE,
  [anon_sym_ver] = anon_sym_ver,
  [anon_sym_assoc] = anon_sym_assoc,
  [anon_sym_cd] = anon_sym_cd,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_del] = anon_sym_del,
  [anon_sym_dir] = anon_sym_dir,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_md] = anon_sym_md,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_prompt] = anon_sym_prompt,
  [anon_sym_rd] = anon_sym_rd,
  [anon_sym_ren] = anon_sym_ren,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_vol] = anon_sym_vol,
  [anon_sym_attrib] = anon_sym_attrib,
  [anon_sym_chkdsk] = anon_sym_chkdsk,
  [anon_sym_choice] = anon_sym_choice,
  [anon_sym_cmd] = anon_sym_cmd,
  [anon_sym_comp] = anon_sym_comp,
  [anon_sym_convert] = anon_sym_convert,
  [anon_sym_driverquery] = anon_sym_driverquery,
  [anon_sym_expand] = anon_sym_expand,
  [anon_sym_find] = anon_sym_find,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_help] = anon_sym_help,
  [anon_sym_ipconfig] = anon_sym_ipconfig,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_net] = anon_sym_net,
  [anon_sym_ping] = anon_sym_ping,
  [anon_sym_shutdown] = anon_sym_shutdown,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_subst] = anon_sym_subst,
  [anon_sym_systeminfo] = anon_sym_systeminfo,
  [anon_sym_taskkill] = anon_sym_taskkill,
  [anon_sym_tasklist] = anon_sym_tasklist,
  [anon_sym_xcopy] = anon_sym_xcopy,
  [anon_sym_tree] = anon_sym_tree,
  [anon_sym_fc] = anon_sym_fc,
  [anon_sym_diskpart] = anon_sym_diskpart,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [sym_program] = sym_program,
  [sym_echooff] = sym_echooff,
  [sym_comment] = sym_comment,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_reference] = sym_variable_reference,
  [sym_keyword] = sym_keyword,
  [sym_function_definition] = sym_function_definition,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [anon_alias_sym_function_name] = anon_alias_sym_function_name,
  [anon_alias_sym_variable_name] = anon_alias_sym_variable_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echooff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_REM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ECHO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PAUSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CLS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_echo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pause] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASSOC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DIR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROMPT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_START] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTRIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHKDSK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CHOICE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CMD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONVERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DRIVERQUERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXPAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FORMAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HELP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IPCONFIG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LABEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SHUTDOWN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEMINFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TASKKILL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TASKLIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XCOPY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TREE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISKPART] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TITLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_del] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_md] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ren] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attrib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chkdsk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_convert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_driverquery] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expand] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_find] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_help] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipconfig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shutdown] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_systeminfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_taskkill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tasklist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xcopy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diskpart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_echooff] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_function_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_variable_name] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_function_name,
  },
  [2] = {
    [2] = anon_alias_sym_function_name,
  },
  [3] = {
    [1] = anon_alias_sym_variable_name,
  },
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        '"', 814,
        '%', 533,
        '/', 3,
        ':', 735,
        '=', 532,
        '@', 219,
        'A', 86,
        'C', 17,
        'D', 7,
        'E', 12,
        'F', 13,
        'G', 73,
        'H', 32,
        'I', 41,
        'L', 4,
        'M', 18,
        'N', 37,
        'P', 5,
        'R', 19,
        'S', 39,
        'T', 8,
        'V', 35,
        'X', 15,
        'a', 194,
        'c', 122,
        'd', 112,
        'e', 117,
        'f', 118,
        'g', 181,
        'h', 137,
        'i', 146,
        'l', 109,
        'm', 123,
        'n', 143,
        'p', 110,
        'r', 124,
        's', 144,
        't', 113,
        'v', 140,
        'x', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(814);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(817);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(531);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(770);
      if (lookahead == 'I') ADVANCE(754);
      if (lookahead == 'R') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(768);
      if (lookahead == 'E') ADVANCE(748);
      if (lookahead == 'I') ADVANCE(759);
      if (lookahead == 'R') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'I') ADVANCE(753);
      if (lookahead == 'R') ADVANCE(743);
      if (lookahead == 'Y') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(597);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(744);
      if (lookahead == 'X') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'I') ADVANCE(755);
      if (lookahead == 'O') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(565);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(567);
      if (lookahead == 'H') ADVANCE(747);
      if (lookahead == 'L') ADVANCE(764);
      if (lookahead == 'M') ADVANCE(742);
      if (lookahead == 'O') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(577);
      if (lookahead == 'O') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'E') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(613);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(611);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(575);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(579);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(591);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(641);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(593);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(545);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(647);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(601);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(761);
      if (lookahead == 'O') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(80);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(771);
      if (lookahead == 'H') ADVANCE(773);
      if (lookahead == 'O') ADVANCE(762);
      if (lookahead == 'T') ADVANCE(738);
      if (lookahead == 'U') ADVANCE(740);
      if (lookahead == 'Y') ADVANCE(766);
      if (lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(537);
      if (lookahead == 'P') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 42:
      if (lookahead == 'F') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'F') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(625);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(619);
      END_STATE();
    case 46:
      if (lookahead == 'H') ADVANCE(581);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'K') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'K') ADVANCE(599);
      END_STATE();
    case 55:
      if (lookahead == 'K') ADVANCE(50);
      if (lookahead == 'L') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'K') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(621);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(635);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(627);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(535);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(539);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(633);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 74:
      if (lookahead == 'P') ADVANCE(605);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(617);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'Q') ADVANCE(102);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 82:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(763);
      if (lookahead == 'T') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 87:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 88:
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 90:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'T') ADVANCE(541);
      END_STATE();
    case 92:
      if (lookahead == 'T') ADVANCE(629);
      END_STATE();
    case 93:
      if (lookahead == 'T') ADVANCE(589);
      END_STATE();
    case 94:
      if (lookahead == 'T') ADVANCE(631);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(615);
      END_STATE();
    case 96:
      if (lookahead == 'T') ADVANCE(583);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(607);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(645);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(637);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 102:
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 103:
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 104:
      if (lookahead == 'V') ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == 'W') ADVANCE(64);
      END_STATE();
    case 106:
      if (lookahead == 'Y') ADVANCE(569);
      END_STATE();
    case 107:
      if (lookahead == 'Y') ADVANCE(639);
      END_STATE();
    case 108:
      if (lookahead == 'Y') ADVANCE(609);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(809);
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(807);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead == 'r') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'i') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 'y') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(683);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(781);
      if (lookahead == 'x') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(729);
      if (lookahead == 'i') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(651);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(653);
      if (lookahead == 'h') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == 'o') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(671);
      if (lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(699);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(697);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead == 'h') ADVANCE(812);
      if (lookahead == 'o') ADVANCE(800);
      if (lookahead == 't') ADVANCE(775);
      if (lookahead == 'u') ADVANCE(777);
      if (lookahead == 'y') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 146:
      if (lookahead == 'f') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 147:
      if (lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 148:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 149:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'f') ADVANCE(178);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(711);
      END_STATE();
    case 152:
      if (lookahead == 'g') ADVANCE(705);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(667);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 'k') ADVANCE(162);
      END_STATE();
    case 161:
      if (lookahead == 'k') ADVANCE(685);
      END_STATE();
    case 162:
      if (lookahead == 'k') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 'k') ADVANCE(185);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(703);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(204);
      END_STATE();
    case 187:
      if (lookahead == 'q') ADVANCE(210);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == 't') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(715);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(717);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(701);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(693);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 211:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 212:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 213:
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(655);
      END_STATE();
    case 215:
      if (lookahead == 'y') ADVANCE(725);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(695);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(737);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_echooff);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_echooff);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      ADVANCE_MAP(
        '"', 815,
        '%', 534,
        ':', 736,
        '@', 220,
        'A', 333,
        'C', 243,
        'D', 228,
        'E', 237,
        'F', 238,
        'G', 313,
        'H', 259,
        'I', 269,
        'L', 226,
        'M', 244,
        'N', 262,
        'P', 227,
        'R', 245,
        'S', 263,
        'T', 229,
        'V', 261,
        'X', 240,
        'a', 479,
        'c', 385,
        'd', 370,
        'e', 379,
        'f', 380,
        'g', 460,
        'h', 401,
        'i', 411,
        'l', 368,
        'm', 386,
        'n', 404,
        'p', 369,
        'r', 387,
        's', 407,
        't', 371,
        'v', 403,
        'x', 382,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(517);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(353);
      if (lookahead == 'I') ADVANCE(301);
      if (lookahead == 'R') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(354);
      if (lookahead == 'E') ADVANCE(289);
      if (lookahead == 'I') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(335);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == 'Y') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'A') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'B') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'B') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'C') ADVANCE(275);
      if (lookahead == 'X') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'C') ADVANCE(644);
      if (lookahead == 'I') ADVANCE(305);
      if (lookahead == 'O') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'C') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'C') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'C') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'C') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(568);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(334);
      if (lookahead == 'M') ADVANCE(246);
      if (lookahead == 'O') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(578);
      if (lookahead == 'O') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(586);
      if (lookahead == 'E') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'D') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == 'O') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(343);
      if (lookahead == 'H') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'Y') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'E') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'F') ADVANCE(538);
      if (lookahead == 'P') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'F') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'F') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'G') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'G') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'H') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'H') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'I') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'K') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'K') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'K') ADVANCE(249);
      if (lookahead == 'O') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'K') ADVANCE(281);
      if (lookahead == 'L') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'K') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'L') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'M') ADVANCE(520);
      if (lookahead == 'N') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'M') ADVANCE(316);
      if (lookahead == 'N') ADVANCE(362);
      if (lookahead == 'P') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'M') ADVANCE(253);
      if (lookahead == 'T') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'M') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'M') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'N') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'O') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'P') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'Q') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(574);
      if (lookahead == 'S') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'R') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'S') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(274);
      if (lookahead == 'U') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'T') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'U') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'U') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'V') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'V') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'V') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'W') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'Y') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'Y') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'Y') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'i') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'r') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead == 'y') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'b') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead == 'x') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(730);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(654);
      if (lookahead == 'h') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(480);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(672);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'd') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(377);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(552);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'f') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'g') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'k') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'k') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'k') ADVANCE(391);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'k') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'k') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'l') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(524);
      if (lookahead == 'n') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'm') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'q') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead == 's') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'u') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'v') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'v') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'v') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'w') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'y') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(517);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (eof) ADVANCE(218);
      ADVANCE_MAP(
        '"', 815,
        '%', 534,
        ':', 736,
        '@', 220,
        'A', 333,
        'C', 243,
        'D', 228,
        'E', 237,
        'F', 238,
        'G', 313,
        'H', 259,
        'I', 269,
        'L', 226,
        'M', 244,
        'N', 262,
        'P', 227,
        'R', 245,
        'S', 263,
        'T', 229,
        'V', 261,
        'X', 240,
        'a', 479,
        'c', 385,
        'd', 370,
        'e', 379,
        'f', 380,
        'g', 460,
        'h', 401,
        'i', 411,
        'l', 368,
        'm', 386,
        'n', 404,
        'p', 369,
        'r', 387,
        's', 407,
        't', 371,
        'v', 403,
        'x', 382,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_REM);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_REM);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_Rem);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_Rem);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_rem);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SET);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_SET);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_SLASHA);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_ECHO);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_ECHO);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_IF);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_GOTO);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_EXIT);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_EXIT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'M') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PAUSE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_PAUSE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_CLS);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_CLS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_echo);
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_echo);
      if (lookahead == ' ') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'm') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_pause);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_pause);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_cls);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_cls);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_VER);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_VER);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_ASSOC);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_ASSOC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_CD);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_CD);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_COPY);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_COPY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DIR);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DIR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DATE);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DATE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_MD);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_MD);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_MOVE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_PATH);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_PATH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_PROMPT);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_PROMPT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_RD);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_RD);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_REN);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_REN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_START);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_START);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_TIME);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_TIME);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_TYPE);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_TYPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_VOL);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_VOL);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_ATTRIB);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_ATTRIB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_CHKDSK);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_CHKDSK);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_CHOICE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_CHOICE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_CMD);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_CMD);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_COMP);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_COMP);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_CONVERT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DRIVERQUERY);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DRIVERQUERY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_EXPAND);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_EXPAND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_FIND);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_FIND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_FORMAT);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_FORMAT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_HELP);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_HELP);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_IPCONFIG);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_IPCONFIG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_LABEL);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LABEL);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_NET);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_NET);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_PING);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_PING);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SHUTDOWN);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SHUTDOWN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SORT);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SORT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_SUBST);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_SUBST);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_SYSTEMINFO);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_SYSTEMINFO);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_TASKKILL);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_TASKKILL);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_TASKLIST);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_TASKLIST);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_XCOPY);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_XCOPY);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_TREE);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_TREE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_FC);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_FC);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_DISKPART);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DISKPART);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_TITLE);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_TITLE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_ver);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_ver);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_assoc);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_assoc);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_cd);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_cd);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_copy);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_del);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_del);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_dir);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_dir);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_md);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_md);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_move);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_prompt);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_prompt);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_rd);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_rd);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_ren);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_ren);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_start);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_time);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_vol);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_vol);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_attrib);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_attrib);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_chkdsk);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_chkdsk);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_choice);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_choice);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_cmd);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_cmd);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_comp);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_comp);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_convert);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_convert);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_driverquery);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_driverquery);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_expand);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_expand);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_find);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_find);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_format);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_help);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_help);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_ipconfig);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_ipconfig);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_net);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_net);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_ping);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_ping);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_shutdown);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_shutdown);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_subst);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_subst);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_systeminfo);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_systeminfo);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_taskkill);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_taskkill);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_tasklist);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_tasklist);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_xcopy);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_xcopy);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_tree);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_tree);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_fc);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_fc);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_diskpart);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_diskpart);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(223);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'B') ADVANCE(34);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'B') ADVANCE(88);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'D') ADVANCE(603);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'H') ADVANCE(68);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'P') ADVANCE(6);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'K') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'L') ADVANCE(571);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'L') ADVANCE(595);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'M') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == 'P') ADVANCE(106);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'M') ADVANCE(519);
      if (lookahead == 'N') ADVANCE(587);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'M') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'O') ADVANCE(61);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(573);
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(543);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(563);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(67);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(547);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(53);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(623);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(89);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(525);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'V') ADVANCE(25);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'b') ADVANCE(139);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'd') ADVANCE(689);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'k') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(657);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(659);
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(709);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'v') ADVANCE(130);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(517);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(817);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(816);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 518},
  [7] = {.lex_state = 518},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 515},
  [40] = {.lex_state = 515},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_echooff] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_REM] = ACTIONS(1),
    [anon_sym_Rem] = ACTIONS(1),
    [anon_sym_rem] = ACTIONS(1),
    [anon_sym_SET] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_SLASHA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_ECHO] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_GOTO] = ACTIONS(1),
    [anon_sym_EXIT] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_PAUSE] = ACTIONS(1),
    [anon_sym_CLS] = ACTIONS(1),
    [anon_sym_echo] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_pause] = ACTIONS(1),
    [anon_sym_cls] = ACTIONS(1),
    [anon_sym_VER] = ACTIONS(1),
    [anon_sym_ASSOC] = ACTIONS(1),
    [anon_sym_CD] = ACTIONS(1),
    [anon_sym_COPY] = ACTIONS(1),
    [anon_sym_DEL] = ACTIONS(1),
    [anon_sym_DIR] = ACTIONS(1),
    [anon_sym_DATE] = ACTIONS(1),
    [anon_sym_MD] = ACTIONS(1),
    [anon_sym_MOVE] = ACTIONS(1),
    [anon_sym_PATH] = ACTIONS(1),
    [anon_sym_PROMPT] = ACTIONS(1),
    [anon_sym_RD] = ACTIONS(1),
    [anon_sym_REN] = ACTIONS(1),
    [anon_sym_START] = ACTIONS(1),
    [anon_sym_TIME] = ACTIONS(1),
    [anon_sym_TYPE] = ACTIONS(1),
    [anon_sym_VOL] = ACTIONS(1),
    [anon_sym_ATTRIB] = ACTIONS(1),
    [anon_sym_CHKDSK] = ACTIONS(1),
    [anon_sym_CHOICE] = ACTIONS(1),
    [anon_sym_CMD] = ACTIONS(1),
    [anon_sym_COMP] = ACTIONS(1),
    [anon_sym_CONVERT] = ACTIONS(1),
    [anon_sym_DRIVERQUERY] = ACTIONS(1),
    [anon_sym_EXPAND] = ACTIONS(1),
    [anon_sym_FIND] = ACTIONS(1),
    [anon_sym_FORMAT] = ACTIONS(1),
    [anon_sym_HELP] = ACTIONS(1),
    [anon_sym_IPCONFIG] = ACTIONS(1),
    [anon_sym_LABEL] = ACTIONS(1),
    [anon_sym_NET] = ACTIONS(1),
    [anon_sym_PING] = ACTIONS(1),
    [anon_sym_SHUTDOWN] = ACTIONS(1),
    [anon_sym_SORT] = ACTIONS(1),
    [anon_sym_SUBST] = ACTIONS(1),
    [anon_sym_SYSTEMINFO] = ACTIONS(1),
    [anon_sym_TASKKILL] = ACTIONS(1),
    [anon_sym_TASKLIST] = ACTIONS(1),
    [anon_sym_XCOPY] = ACTIONS(1),
    [anon_sym_TREE] = ACTIONS(1),
    [anon_sym_FC] = ACTIONS(1),
    [anon_sym_DISKPART] = ACTIONS(1),
    [anon_sym_TITLE] = ACTIONS(1),
    [anon_sym_ver] = ACTIONS(1),
    [anon_sym_assoc] = ACTIONS(1),
    [anon_sym_cd] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [anon_sym_del] = ACTIONS(1),
    [anon_sym_dir] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_md] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_prompt] = ACTIONS(1),
    [anon_sym_rd] = ACTIONS(1),
    [anon_sym_ren] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_vol] = ACTIONS(1),
    [anon_sym_attrib] = ACTIONS(1),
    [anon_sym_chkdsk] = ACTIONS(1),
    [anon_sym_choice] = ACTIONS(1),
    [anon_sym_cmd] = ACTIONS(1),
    [anon_sym_comp] = ACTIONS(1),
    [anon_sym_convert] = ACTIONS(1),
    [anon_sym_driverquery] = ACTIONS(1),
    [anon_sym_expand] = ACTIONS(1),
    [anon_sym_find] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_help] = ACTIONS(1),
    [anon_sym_ipconfig] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_net] = ACTIONS(1),
    [anon_sym_ping] = ACTIONS(1),
    [anon_sym_shutdown] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_subst] = ACTIONS(1),
    [anon_sym_systeminfo] = ACTIONS(1),
    [anon_sym_taskkill] = ACTIONS(1),
    [anon_sym_tasklist] = ACTIONS(1),
    [anon_sym_xcopy] = ACTIONS(1),
    [anon_sym_tree] = ACTIONS(1),
    [anon_sym_fc] = ACTIONS(1),
    [anon_sym_diskpart] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym_echooff] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_variable_reference] = STATE(2),
    [sym_keyword] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_echooff] = ACTIONS(7),
    [anon_sym_COLON_COLON] = ACTIONS(9),
    [anon_sym_REM] = ACTIONS(11),
    [anon_sym_Rem] = ACTIONS(9),
    [anon_sym_rem] = ACTIONS(11),
    [anon_sym_SET] = ACTIONS(13),
    [anon_sym_Set] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_ECHO] = ACTIONS(19),
    [anon_sym_IF] = ACTIONS(19),
    [anon_sym_GOTO] = ACTIONS(19),
    [anon_sym_EXIT] = ACTIONS(19),
    [anon_sym_FOR] = ACTIONS(21),
    [anon_sym_PAUSE] = ACTIONS(19),
    [anon_sym_CLS] = ACTIONS(19),
    [anon_sym_echo] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_goto] = ACTIONS(19),
    [anon_sym_exit] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_pause] = ACTIONS(19),
    [anon_sym_cls] = ACTIONS(19),
    [anon_sym_VER] = ACTIONS(19),
    [anon_sym_ASSOC] = ACTIONS(19),
    [anon_sym_CD] = ACTIONS(19),
    [anon_sym_COPY] = ACTIONS(19),
    [anon_sym_DEL] = ACTIONS(19),
    [anon_sym_DIR] = ACTIONS(19),
    [anon_sym_DATE] = ACTIONS(19),
    [anon_sym_MD] = ACTIONS(19),
    [anon_sym_MOVE] = ACTIONS(19),
    [anon_sym_PATH] = ACTIONS(19),
    [anon_sym_PROMPT] = ACTIONS(19),
    [anon_sym_RD] = ACTIONS(19),
    [anon_sym_REN] = ACTIONS(19),
    [anon_sym_START] = ACTIONS(19),
    [anon_sym_TIME] = ACTIONS(19),
    [anon_sym_TYPE] = ACTIONS(19),
    [anon_sym_VOL] = ACTIONS(19),
    [anon_sym_ATTRIB] = ACTIONS(19),
    [anon_sym_CHKDSK] = ACTIONS(19),
    [anon_sym_CHOICE] = ACTIONS(19),
    [anon_sym_CMD] = ACTIONS(19),
    [anon_sym_COMP] = ACTIONS(19),
    [anon_sym_CONVERT] = ACTIONS(19),
    [anon_sym_DRIVERQUERY] = ACTIONS(19),
    [anon_sym_EXPAND] = ACTIONS(19),
    [anon_sym_FIND] = ACTIONS(19),
    [anon_sym_FORMAT] = ACTIONS(19),
    [anon_sym_HELP] = ACTIONS(19),
    [anon_sym_IPCONFIG] = ACTIONS(19),
    [anon_sym_LABEL] = ACTIONS(19),
    [anon_sym_NET] = ACTIONS(19),
    [anon_sym_PING] = ACTIONS(19),
    [anon_sym_SHUTDOWN] = ACTIONS(19),
    [anon_sym_SORT] = ACTIONS(19),
    [anon_sym_SUBST] = ACTIONS(19),
    [anon_sym_SYSTEMINFO] = ACTIONS(19),
    [anon_sym_TASKKILL] = ACTIONS(19),
    [anon_sym_TASKLIST] = ACTIONS(19),
    [anon_sym_XCOPY] = ACTIONS(19),
    [anon_sym_TREE] = ACTIONS(19),
    [anon_sym_FC] = ACTIONS(19),
    [anon_sym_DISKPART] = ACTIONS(19),
    [anon_sym_TITLE] = ACTIONS(19),
    [anon_sym_ver] = ACTIONS(19),
    [anon_sym_assoc] = ACTIONS(19),
    [anon_sym_cd] = ACTIONS(19),
    [anon_sym_copy] = ACTIONS(19),
    [anon_sym_del] = ACTIONS(19),
    [anon_sym_dir] = ACTIONS(19),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_md] = ACTIONS(19),
    [anon_sym_move] = ACTIONS(19),
    [anon_sym_path] = ACTIONS(19),
    [anon_sym_prompt] = ACTIONS(19),
    [anon_sym_rd] = ACTIONS(19),
    [anon_sym_ren] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_vol] = ACTIONS(19),
    [anon_sym_attrib] = ACTIONS(19),
    [anon_sym_chkdsk] = ACTIONS(19),
    [anon_sym_choice] = ACTIONS(19),
    [anon_sym_cmd] = ACTIONS(19),
    [anon_sym_comp] = ACTIONS(19),
    [anon_sym_convert] = ACTIONS(19),
    [anon_sym_driverquery] = ACTIONS(19),
    [anon_sym_expand] = ACTIONS(19),
    [anon_sym_find] = ACTIONS(19),
    [anon_sym_format] = ACTIONS(19),
    [anon_sym_help] = ACTIONS(19),
    [anon_sym_ipconfig] = ACTIONS(19),
    [anon_sym_label] = ACTIONS(19),
    [anon_sym_net] = ACTIONS(19),
    [anon_sym_ping] = ACTIONS(19),
    [anon_sym_shutdown] = ACTIONS(19),
    [anon_sym_sort] = ACTIONS(19),
    [anon_sym_subst] = ACTIONS(19),
    [anon_sym_systeminfo] = ACTIONS(19),
    [anon_sym_taskkill] = ACTIONS(19),
    [anon_sym_tasklist] = ACTIONS(19),
    [anon_sym_xcopy] = ACTIONS(19),
    [anon_sym_tree] = ACTIONS(19),
    [anon_sym_fc] = ACTIONS(19),
    [anon_sym_diskpart] = ACTIONS(19),
    [anon_sym_title] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(23),
  },
  [2] = {
    [sym_echooff] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_variable_reference] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_echooff] = ACTIONS(7),
    [anon_sym_COLON_COLON] = ACTIONS(9),
    [anon_sym_REM] = ACTIONS(11),
    [anon_sym_Rem] = ACTIONS(9),
    [anon_sym_rem] = ACTIONS(11),
    [anon_sym_SET] = ACTIONS(13),
    [anon_sym_Set] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(13),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_ECHO] = ACTIONS(19),
    [anon_sym_IF] = ACTIONS(19),
    [anon_sym_GOTO] = ACTIONS(19),
    [anon_sym_EXIT] = ACTIONS(19),
    [anon_sym_FOR] = ACTIONS(21),
    [anon_sym_PAUSE] = ACTIONS(19),
    [anon_sym_CLS] = ACTIONS(19),
    [anon_sym_echo] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_goto] = ACTIONS(19),
    [anon_sym_exit] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(21),
    [anon_sym_pause] = ACTIONS(19),
    [anon_sym_cls] = ACTIONS(19),
    [anon_sym_VER] = ACTIONS(19),
    [anon_sym_ASSOC] = ACTIONS(19),
    [anon_sym_CD] = ACTIONS(19),
    [anon_sym_COPY] = ACTIONS(19),
    [anon_sym_DEL] = ACTIONS(19),
    [anon_sym_DIR] = ACTIONS(19),
    [anon_sym_DATE] = ACTIONS(19),
    [anon_sym_MD] = ACTIONS(19),
    [anon_sym_MOVE] = ACTIONS(19),
    [anon_sym_PATH] = ACTIONS(19),
    [anon_sym_PROMPT] = ACTIONS(19),
    [anon_sym_RD] = ACTIONS(19),
    [anon_sym_REN] = ACTIONS(19),
    [anon_sym_START] = ACTIONS(19),
    [anon_sym_TIME] = ACTIONS(19),
    [anon_sym_TYPE] = ACTIONS(19),
    [anon_sym_VOL] = ACTIONS(19),
    [anon_sym_ATTRIB] = ACTIONS(19),
    [anon_sym_CHKDSK] = ACTIONS(19),
    [anon_sym_CHOICE] = ACTIONS(19),
    [anon_sym_CMD] = ACTIONS(19),
    [anon_sym_COMP] = ACTIONS(19),
    [anon_sym_CONVERT] = ACTIONS(19),
    [anon_sym_DRIVERQUERY] = ACTIONS(19),
    [anon_sym_EXPAND] = ACTIONS(19),
    [anon_sym_FIND] = ACTIONS(19),
    [anon_sym_FORMAT] = ACTIONS(19),
    [anon_sym_HELP] = ACTIONS(19),
    [anon_sym_IPCONFIG] = ACTIONS(19),
    [anon_sym_LABEL] = ACTIONS(19),
    [anon_sym_NET] = ACTIONS(19),
    [anon_sym_PING] = ACTIONS(19),
    [anon_sym_SHUTDOWN] = ACTIONS(19),
    [anon_sym_SORT] = ACTIONS(19),
    [anon_sym_SUBST] = ACTIONS(19),
    [anon_sym_SYSTEMINFO] = ACTIONS(19),
    [anon_sym_TASKKILL] = ACTIONS(19),
    [anon_sym_TASKLIST] = ACTIONS(19),
    [anon_sym_XCOPY] = ACTIONS(19),
    [anon_sym_TREE] = ACTIONS(19),
    [anon_sym_FC] = ACTIONS(19),
    [anon_sym_DISKPART] = ACTIONS(19),
    [anon_sym_TITLE] = ACTIONS(19),
    [anon_sym_ver] = ACTIONS(19),
    [anon_sym_assoc] = ACTIONS(19),
    [anon_sym_cd] = ACTIONS(19),
    [anon_sym_copy] = ACTIONS(19),
    [anon_sym_del] = ACTIONS(19),
    [anon_sym_dir] = ACTIONS(19),
    [anon_sym_date] = ACTIONS(19),
    [anon_sym_md] = ACTIONS(19),
    [anon_sym_move] = ACTIONS(19),
    [anon_sym_path] = ACTIONS(19),
    [anon_sym_prompt] = ACTIONS(19),
    [anon_sym_rd] = ACTIONS(19),
    [anon_sym_ren] = ACTIONS(19),
    [anon_sym_start] = ACTIONS(19),
    [anon_sym_time] = ACTIONS(19),
    [anon_sym_type] = ACTIONS(19),
    [anon_sym_vol] = ACTIONS(19),
    [anon_sym_attrib] = ACTIONS(19),
    [anon_sym_chkdsk] = ACTIONS(19),
    [anon_sym_choice] = ACTIONS(19),
    [anon_sym_cmd] = ACTIONS(19),
    [anon_sym_comp] = ACTIONS(19),
    [anon_sym_convert] = ACTIONS(19),
    [anon_sym_driverquery] = ACTIONS(19),
    [anon_sym_expand] = ACTIONS(19),
    [anon_sym_find] = ACTIONS(19),
    [anon_sym_format] = ACTIONS(19),
    [anon_sym_help] = ACTIONS(19),
    [anon_sym_ipconfig] = ACTIONS(19),
    [anon_sym_label] = ACTIONS(19),
    [anon_sym_net] = ACTIONS(19),
    [anon_sym_ping] = ACTIONS(19),
    [anon_sym_shutdown] = ACTIONS(19),
    [anon_sym_sort] = ACTIONS(19),
    [anon_sym_subst] = ACTIONS(19),
    [anon_sym_systeminfo] = ACTIONS(19),
    [anon_sym_taskkill] = ACTIONS(19),
    [anon_sym_tasklist] = ACTIONS(19),
    [anon_sym_xcopy] = ACTIONS(19),
    [anon_sym_tree] = ACTIONS(19),
    [anon_sym_fc] = ACTIONS(19),
    [anon_sym_diskpart] = ACTIONS(19),
    [anon_sym_title] = ACTIONS(19),
    [anon_sym_COLON] = ACTIONS(23),
  },
  [3] = {
    [sym_echooff] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_variable_reference] = STATE(3),
    [sym_keyword] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(29),
    [anon_sym_echooff] = ACTIONS(32),
    [anon_sym_COLON_COLON] = ACTIONS(35),
    [anon_sym_REM] = ACTIONS(38),
    [anon_sym_Rem] = ACTIONS(35),
    [anon_sym_rem] = ACTIONS(38),
    [anon_sym_SET] = ACTIONS(41),
    [anon_sym_Set] = ACTIONS(44),
    [anon_sym_set] = ACTIONS(41),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_ECHO] = ACTIONS(50),
    [anon_sym_IF] = ACTIONS(50),
    [anon_sym_GOTO] = ACTIONS(50),
    [anon_sym_EXIT] = ACTIONS(50),
    [anon_sym_FOR] = ACTIONS(53),
    [anon_sym_PAUSE] = ACTIONS(50),
    [anon_sym_CLS] = ACTIONS(50),
    [anon_sym_echo] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_goto] = ACTIONS(50),
    [anon_sym_exit] = ACTIONS(50),
    [anon_sym_for] = ACTIONS(53),
    [anon_sym_pause] = ACTIONS(50),
    [anon_sym_cls] = ACTIONS(50),
    [anon_sym_VER] = ACTIONS(50),
    [anon_sym_ASSOC] = ACTIONS(50),
    [anon_sym_CD] = ACTIONS(50),
    [anon_sym_COPY] = ACTIONS(50),
    [anon_sym_DEL] = ACTIONS(50),
    [anon_sym_DIR] = ACTIONS(50),
    [anon_sym_DATE] = ACTIONS(50),
    [anon_sym_MD] = ACTIONS(50),
    [anon_sym_MOVE] = ACTIONS(50),
    [anon_sym_PATH] = ACTIONS(50),
    [anon_sym_PROMPT] = ACTIONS(50),
    [anon_sym_RD] = ACTIONS(50),
    [anon_sym_REN] = ACTIONS(50),
    [anon_sym_START] = ACTIONS(50),
    [anon_sym_TIME] = ACTIONS(50),
    [anon_sym_TYPE] = ACTIONS(50),
    [anon_sym_VOL] = ACTIONS(50),
    [anon_sym_ATTRIB] = ACTIONS(50),
    [anon_sym_CHKDSK] = ACTIONS(50),
    [anon_sym_CHOICE] = ACTIONS(50),
    [anon_sym_CMD] = ACTIONS(50),
    [anon_sym_COMP] = ACTIONS(50),
    [anon_sym_CONVERT] = ACTIONS(50),
    [anon_sym_DRIVERQUERY] = ACTIONS(50),
    [anon_sym_EXPAND] = ACTIONS(50),
    [anon_sym_FIND] = ACTIONS(50),
    [anon_sym_FORMAT] = ACTIONS(50),
    [anon_sym_HELP] = ACTIONS(50),
    [anon_sym_IPCONFIG] = ACTIONS(50),
    [anon_sym_LABEL] = ACTIONS(50),
    [anon_sym_NET] = ACTIONS(50),
    [anon_sym_PING] = ACTIONS(50),
    [anon_sym_SHUTDOWN] = ACTIONS(50),
    [anon_sym_SORT] = ACTIONS(50),
    [anon_sym_SUBST] = ACTIONS(50),
    [anon_sym_SYSTEMINFO] = ACTIONS(50),
    [anon_sym_TASKKILL] = ACTIONS(50),
    [anon_sym_TASKLIST] = ACTIONS(50),
    [anon_sym_XCOPY] = ACTIONS(50),
    [anon_sym_TREE] = ACTIONS(50),
    [anon_sym_FC] = ACTIONS(50),
    [anon_sym_DISKPART] = ACTIONS(50),
    [anon_sym_TITLE] = ACTIONS(50),
    [anon_sym_ver] = ACTIONS(50),
    [anon_sym_assoc] = ACTIONS(50),
    [anon_sym_cd] = ACTIONS(50),
    [anon_sym_copy] = ACTIONS(50),
    [anon_sym_del] = ACTIONS(50),
    [anon_sym_dir] = ACTIONS(50),
    [anon_sym_date] = ACTIONS(50),
    [anon_sym_md] = ACTIONS(50),
    [anon_sym_move] = ACTIONS(50),
    [anon_sym_path] = ACTIONS(50),
    [anon_sym_prompt] = ACTIONS(50),
    [anon_sym_rd] = ACTIONS(50),
    [anon_sym_ren] = ACTIONS(50),
    [anon_sym_start] = ACTIONS(50),
    [anon_sym_time] = ACTIONS(50),
    [anon_sym_type] = ACTIONS(50),
    [anon_sym_vol] = ACTIONS(50),
    [anon_sym_attrib] = ACTIONS(50),
    [anon_sym_chkdsk] = ACTIONS(50),
    [anon_sym_choice] = ACTIONS(50),
    [anon_sym_cmd] = ACTIONS(50),
    [anon_sym_comp] = ACTIONS(50),
    [anon_sym_convert] = ACTIONS(50),
    [anon_sym_driverquery] = ACTIONS(50),
    [anon_sym_expand] = ACTIONS(50),
    [anon_sym_find] = ACTIONS(50),
    [anon_sym_format] = ACTIONS(50),
    [anon_sym_help] = ACTIONS(50),
    [anon_sym_ipconfig] = ACTIONS(50),
    [anon_sym_label] = ACTIONS(50),
    [anon_sym_net] = ACTIONS(50),
    [anon_sym_ping] = ACTIONS(50),
    [anon_sym_shutdown] = ACTIONS(50),
    [anon_sym_sort] = ACTIONS(50),
    [anon_sym_subst] = ACTIONS(50),
    [anon_sym_systeminfo] = ACTIONS(50),
    [anon_sym_taskkill] = ACTIONS(50),
    [anon_sym_tasklist] = ACTIONS(50),
    [anon_sym_xcopy] = ACTIONS(50),
    [anon_sym_tree] = ACTIONS(50),
    [anon_sym_fc] = ACTIONS(50),
    [anon_sym_diskpart] = ACTIONS(50),
    [anon_sym_title] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(56),
  },
  [4] = {
    [sym_string] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_echooff] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [anon_sym_REM] = ACTIONS(59),
    [anon_sym_Rem] = ACTIONS(59),
    [anon_sym_rem] = ACTIONS(59),
    [anon_sym_SET] = ACTIONS(59),
    [anon_sym_Set] = ACTIONS(59),
    [anon_sym_set] = ACTIONS(59),
    [anon_sym_SLASHA] = ACTIONS(61),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_ECHO] = ACTIONS(59),
    [anon_sym_IF] = ACTIONS(63),
    [anon_sym_GOTO] = ACTIONS(59),
    [anon_sym_EXIT] = ACTIONS(59),
    [anon_sym_FOR] = ACTIONS(63),
    [anon_sym_PAUSE] = ACTIONS(59),
    [anon_sym_CLS] = ACTIONS(59),
    [anon_sym_echo] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_goto] = ACTIONS(59),
    [anon_sym_exit] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_pause] = ACTIONS(59),
    [anon_sym_cls] = ACTIONS(59),
    [anon_sym_VER] = ACTIONS(59),
    [anon_sym_ASSOC] = ACTIONS(59),
    [anon_sym_CD] = ACTIONS(63),
    [anon_sym_COPY] = ACTIONS(59),
    [anon_sym_DEL] = ACTIONS(59),
    [anon_sym_DIR] = ACTIONS(59),
    [anon_sym_DATE] = ACTIONS(59),
    [anon_sym_MD] = ACTIONS(63),
    [anon_sym_MOVE] = ACTIONS(59),
    [anon_sym_PATH] = ACTIONS(59),
    [anon_sym_PROMPT] = ACTIONS(59),
    [anon_sym_RD] = ACTIONS(63),
    [anon_sym_REN] = ACTIONS(59),
    [anon_sym_START] = ACTIONS(59),
    [anon_sym_TIME] = ACTIONS(59),
    [anon_sym_TYPE] = ACTIONS(59),
    [anon_sym_VOL] = ACTIONS(59),
    [anon_sym_ATTRIB] = ACTIONS(59),
    [anon_sym_CHKDSK] = ACTIONS(59),
    [anon_sym_CHOICE] = ACTIONS(59),
    [anon_sym_CMD] = ACTIONS(59),
    [anon_sym_COMP] = ACTIONS(59),
    [anon_sym_CONVERT] = ACTIONS(59),
    [anon_sym_DRIVERQUERY] = ACTIONS(59),
    [anon_sym_EXPAND] = ACTIONS(59),
    [anon_sym_FIND] = ACTIONS(59),
    [anon_sym_FORMAT] = ACTIONS(59),
    [anon_sym_HELP] = ACTIONS(59),
    [anon_sym_IPCONFIG] = ACTIONS(59),
    [anon_sym_LABEL] = ACTIONS(59),
    [anon_sym_NET] = ACTIONS(59),
    [anon_sym_PING] = ACTIONS(59),
    [anon_sym_SHUTDOWN] = ACTIONS(59),
    [anon_sym_SORT] = ACTIONS(59),
    [anon_sym_SUBST] = ACTIONS(59),
    [anon_sym_SYSTEMINFO] = ACTIONS(59),
    [anon_sym_TASKKILL] = ACTIONS(59),
    [anon_sym_TASKLIST] = ACTIONS(59),
    [anon_sym_XCOPY] = ACTIONS(59),
    [anon_sym_TREE] = ACTIONS(59),
    [anon_sym_FC] = ACTIONS(63),
    [anon_sym_DISKPART] = ACTIONS(59),
    [anon_sym_TITLE] = ACTIONS(59),
    [anon_sym_ver] = ACTIONS(59),
    [anon_sym_assoc] = ACTIONS(59),
    [anon_sym_cd] = ACTIONS(63),
    [anon_sym_copy] = ACTIONS(59),
    [anon_sym_del] = ACTIONS(59),
    [anon_sym_dir] = ACTIONS(59),
    [anon_sym_date] = ACTIONS(59),
    [anon_sym_md] = ACTIONS(63),
    [anon_sym_move] = ACTIONS(59),
    [anon_sym_path] = ACTIONS(59),
    [anon_sym_prompt] = ACTIONS(59),
    [anon_sym_rd] = ACTIONS(63),
    [anon_sym_ren] = ACTIONS(59),
    [anon_sym_start] = ACTIONS(59),
    [anon_sym_time] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_vol] = ACTIONS(59),
    [anon_sym_attrib] = ACTIONS(59),
    [anon_sym_chkdsk] = ACTIONS(59),
    [anon_sym_choice] = ACTIONS(59),
    [anon_sym_cmd] = ACTIONS(59),
    [anon_sym_comp] = ACTIONS(59),
    [anon_sym_convert] = ACTIONS(59),
    [anon_sym_driverquery] = ACTIONS(59),
    [anon_sym_expand] = ACTIONS(59),
    [anon_sym_find] = ACTIONS(59),
    [anon_sym_format] = ACTIONS(59),
    [anon_sym_help] = ACTIONS(59),
    [anon_sym_ipconfig] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_net] = ACTIONS(59),
    [anon_sym_ping] = ACTIONS(59),
    [anon_sym_shutdown] = ACTIONS(59),
    [anon_sym_sort] = ACTIONS(59),
    [anon_sym_subst] = ACTIONS(59),
    [anon_sym_systeminfo] = ACTIONS(59),
    [anon_sym_taskkill] = ACTIONS(59),
    [anon_sym_tasklist] = ACTIONS(59),
    [anon_sym_xcopy] = ACTIONS(59),
    [anon_sym_tree] = ACTIONS(59),
    [anon_sym_fc] = ACTIONS(63),
    [anon_sym_diskpart] = ACTIONS(59),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
  },
  [5] = {
    [sym_string] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_echooff] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_REM] = ACTIONS(71),
    [anon_sym_Rem] = ACTIONS(71),
    [anon_sym_rem] = ACTIONS(71),
    [anon_sym_SET] = ACTIONS(71),
    [anon_sym_Set] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_SLASHA] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_ECHO] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(75),
    [anon_sym_GOTO] = ACTIONS(71),
    [anon_sym_EXIT] = ACTIONS(71),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_PAUSE] = ACTIONS(71),
    [anon_sym_CLS] = ACTIONS(71),
    [anon_sym_echo] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_goto] = ACTIONS(71),
    [anon_sym_exit] = ACTIONS(71),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_pause] = ACTIONS(71),
    [anon_sym_cls] = ACTIONS(71),
    [anon_sym_VER] = ACTIONS(71),
    [anon_sym_ASSOC] = ACTIONS(71),
    [anon_sym_CD] = ACTIONS(75),
    [anon_sym_COPY] = ACTIONS(71),
    [anon_sym_DEL] = ACTIONS(71),
    [anon_sym_DIR] = ACTIONS(71),
    [anon_sym_DATE] = ACTIONS(71),
    [anon_sym_MD] = ACTIONS(75),
    [anon_sym_MOVE] = ACTIONS(71),
    [anon_sym_PATH] = ACTIONS(71),
    [anon_sym_PROMPT] = ACTIONS(71),
    [anon_sym_RD] = ACTIONS(75),
    [anon_sym_REN] = ACTIONS(71),
    [anon_sym_START] = ACTIONS(71),
    [anon_sym_TIME] = ACTIONS(71),
    [anon_sym_TYPE] = ACTIONS(71),
    [anon_sym_VOL] = ACTIONS(71),
    [anon_sym_ATTRIB] = ACTIONS(71),
    [anon_sym_CHKDSK] = ACTIONS(71),
    [anon_sym_CHOICE] = ACTIONS(71),
    [anon_sym_CMD] = ACTIONS(71),
    [anon_sym_COMP] = ACTIONS(71),
    [anon_sym_CONVERT] = ACTIONS(71),
    [anon_sym_DRIVERQUERY] = ACTIONS(71),
    [anon_sym_EXPAND] = ACTIONS(71),
    [anon_sym_FIND] = ACTIONS(71),
    [anon_sym_FORMAT] = ACTIONS(71),
    [anon_sym_HELP] = ACTIONS(71),
    [anon_sym_IPCONFIG] = ACTIONS(71),
    [anon_sym_LABEL] = ACTIONS(71),
    [anon_sym_NET] = ACTIONS(71),
    [anon_sym_PING] = ACTIONS(71),
    [anon_sym_SHUTDOWN] = ACTIONS(71),
    [anon_sym_SORT] = ACTIONS(71),
    [anon_sym_SUBST] = ACTIONS(71),
    [anon_sym_SYSTEMINFO] = ACTIONS(71),
    [anon_sym_TASKKILL] = ACTIONS(71),
    [anon_sym_TASKLIST] = ACTIONS(71),
    [anon_sym_XCOPY] = ACTIONS(71),
    [anon_sym_TREE] = ACTIONS(71),
    [anon_sym_FC] = ACTIONS(75),
    [anon_sym_DISKPART] = ACTIONS(71),
    [anon_sym_TITLE] = ACTIONS(71),
    [anon_sym_ver] = ACTIONS(71),
    [anon_sym_assoc] = ACTIONS(71),
    [anon_sym_cd] = ACTIONS(75),
    [anon_sym_copy] = ACTIONS(71),
    [anon_sym_del] = ACTIONS(71),
    [anon_sym_dir] = ACTIONS(71),
    [anon_sym_date] = ACTIONS(71),
    [anon_sym_md] = ACTIONS(75),
    [anon_sym_move] = ACTIONS(71),
    [anon_sym_path] = ACTIONS(71),
    [anon_sym_prompt] = ACTIONS(71),
    [anon_sym_rd] = ACTIONS(75),
    [anon_sym_ren] = ACTIONS(71),
    [anon_sym_start] = ACTIONS(71),
    [anon_sym_time] = ACTIONS(71),
    [anon_sym_type] = ACTIONS(71),
    [anon_sym_vol] = ACTIONS(71),
    [anon_sym_attrib] = ACTIONS(71),
    [anon_sym_chkdsk] = ACTIONS(71),
    [anon_sym_choice] = ACTIONS(71),
    [anon_sym_cmd] = ACTIONS(71),
    [anon_sym_comp] = ACTIONS(71),
    [anon_sym_convert] = ACTIONS(71),
    [anon_sym_driverquery] = ACTIONS(71),
    [anon_sym_expand] = ACTIONS(71),
    [anon_sym_find] = ACTIONS(71),
    [anon_sym_format] = ACTIONS(71),
    [anon_sym_help] = ACTIONS(71),
    [anon_sym_ipconfig] = ACTIONS(71),
    [anon_sym_label] = ACTIONS(71),
    [anon_sym_net] = ACTIONS(71),
    [anon_sym_ping] = ACTIONS(71),
    [anon_sym_shutdown] = ACTIONS(71),
    [anon_sym_sort] = ACTIONS(71),
    [anon_sym_subst] = ACTIONS(71),
    [anon_sym_systeminfo] = ACTIONS(71),
    [anon_sym_taskkill] = ACTIONS(71),
    [anon_sym_tasklist] = ACTIONS(71),
    [anon_sym_xcopy] = ACTIONS(71),
    [anon_sym_tree] = ACTIONS(71),
    [anon_sym_fc] = ACTIONS(75),
    [anon_sym_diskpart] = ACTIONS(71),
    [anon_sym_title] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(79),
  },
  [6] = {
    [sym_string] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_echooff] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [aux_sym_comment_token1] = ACTIONS(81),
    [anon_sym_REM] = ACTIONS(75),
    [anon_sym_Rem] = ACTIONS(75),
    [anon_sym_rem] = ACTIONS(75),
    [anon_sym_SET] = ACTIONS(75),
    [anon_sym_Set] = ACTIONS(75),
    [anon_sym_set] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_ECHO] = ACTIONS(75),
    [anon_sym_IF] = ACTIONS(75),
    [anon_sym_GOTO] = ACTIONS(75),
    [anon_sym_EXIT] = ACTIONS(75),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_PAUSE] = ACTIONS(75),
    [anon_sym_CLS] = ACTIONS(75),
    [anon_sym_echo] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_goto] = ACTIONS(75),
    [anon_sym_exit] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_pause] = ACTIONS(75),
    [anon_sym_cls] = ACTIONS(75),
    [anon_sym_VER] = ACTIONS(75),
    [anon_sym_ASSOC] = ACTIONS(75),
    [anon_sym_CD] = ACTIONS(75),
    [anon_sym_COPY] = ACTIONS(75),
    [anon_sym_DEL] = ACTIONS(75),
    [anon_sym_DIR] = ACTIONS(75),
    [anon_sym_DATE] = ACTIONS(75),
    [anon_sym_MD] = ACTIONS(75),
    [anon_sym_MOVE] = ACTIONS(75),
    [anon_sym_PATH] = ACTIONS(75),
    [anon_sym_PROMPT] = ACTIONS(75),
    [anon_sym_RD] = ACTIONS(75),
    [anon_sym_REN] = ACTIONS(75),
    [anon_sym_START] = ACTIONS(75),
    [anon_sym_TIME] = ACTIONS(75),
    [anon_sym_TYPE] = ACTIONS(75),
    [anon_sym_VOL] = ACTIONS(75),
    [anon_sym_ATTRIB] = ACTIONS(75),
    [anon_sym_CHKDSK] = ACTIONS(75),
    [anon_sym_CHOICE] = ACTIONS(75),
    [anon_sym_CMD] = ACTIONS(75),
    [anon_sym_COMP] = ACTIONS(75),
    [anon_sym_CONVERT] = ACTIONS(75),
    [anon_sym_DRIVERQUERY] = ACTIONS(75),
    [anon_sym_EXPAND] = ACTIONS(75),
    [anon_sym_FIND] = ACTIONS(75),
    [anon_sym_FORMAT] = ACTIONS(75),
    [anon_sym_HELP] = ACTIONS(75),
    [anon_sym_IPCONFIG] = ACTIONS(75),
    [anon_sym_LABEL] = ACTIONS(75),
    [anon_sym_NET] = ACTIONS(75),
    [anon_sym_PING] = ACTIONS(75),
    [anon_sym_SHUTDOWN] = ACTIONS(75),
    [anon_sym_SORT] = ACTIONS(75),
    [anon_sym_SUBST] = ACTIONS(75),
    [anon_sym_SYSTEMINFO] = ACTIONS(75),
    [anon_sym_TASKKILL] = ACTIONS(75),
    [anon_sym_TASKLIST] = ACTIONS(75),
    [anon_sym_XCOPY] = ACTIONS(75),
    [anon_sym_TREE] = ACTIONS(75),
    [anon_sym_FC] = ACTIONS(75),
    [anon_sym_DISKPART] = ACTIONS(75),
    [anon_sym_TITLE] = ACTIONS(75),
    [anon_sym_ver] = ACTIONS(75),
    [anon_sym_assoc] = ACTIONS(75),
    [anon_sym_cd] = ACTIONS(75),
    [anon_sym_copy] = ACTIONS(75),
    [anon_sym_del] = ACTIONS(75),
    [anon_sym_dir] = ACTIONS(75),
    [anon_sym_date] = ACTIONS(75),
    [anon_sym_md] = ACTIONS(75),
    [anon_sym_move] = ACTIONS(75),
    [anon_sym_path] = ACTIONS(75),
    [anon_sym_prompt] = ACTIONS(75),
    [anon_sym_rd] = ACTIONS(75),
    [anon_sym_ren] = ACTIONS(75),
    [anon_sym_start] = ACTIONS(75),
    [anon_sym_time] = ACTIONS(75),
    [anon_sym_type] = ACTIONS(75),
    [anon_sym_vol] = ACTIONS(75),
    [anon_sym_attrib] = ACTIONS(75),
    [anon_sym_chkdsk] = ACTIONS(75),
    [anon_sym_choice] = ACTIONS(75),
    [anon_sym_cmd] = ACTIONS(75),
    [anon_sym_comp] = ACTIONS(75),
    [anon_sym_convert] = ACTIONS(75),
    [anon_sym_driverquery] = ACTIONS(75),
    [anon_sym_expand] = ACTIONS(75),
    [anon_sym_find] = ACTIONS(75),
    [anon_sym_format] = ACTIONS(75),
    [anon_sym_help] = ACTIONS(75),
    [anon_sym_ipconfig] = ACTIONS(75),
    [anon_sym_label] = ACTIONS(75),
    [anon_sym_net] = ACTIONS(75),
    [anon_sym_ping] = ACTIONS(75),
    [anon_sym_shutdown] = ACTIONS(75),
    [anon_sym_sort] = ACTIONS(75),
    [anon_sym_subst] = ACTIONS(75),
    [anon_sym_systeminfo] = ACTIONS(75),
    [anon_sym_taskkill] = ACTIONS(75),
    [anon_sym_tasklist] = ACTIONS(75),
    [anon_sym_xcopy] = ACTIONS(75),
    [anon_sym_tree] = ACTIONS(75),
    [anon_sym_fc] = ACTIONS(75),
    [anon_sym_diskpart] = ACTIONS(75),
    [anon_sym_title] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
  },
  [7] = {
    [sym_string] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(63),
    [anon_sym_echooff] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [aux_sym_comment_token1] = ACTIONS(87),
    [anon_sym_REM] = ACTIONS(63),
    [anon_sym_Rem] = ACTIONS(63),
    [anon_sym_rem] = ACTIONS(63),
    [anon_sym_SET] = ACTIONS(63),
    [anon_sym_Set] = ACTIONS(63),
    [anon_sym_set] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_ECHO] = ACTIONS(63),
    [anon_sym_IF] = ACTIONS(63),
    [anon_sym_GOTO] = ACTIONS(63),
    [anon_sym_EXIT] = ACTIONS(63),
    [anon_sym_FOR] = ACTIONS(63),
    [anon_sym_PAUSE] = ACTIONS(63),
    [anon_sym_CLS] = ACTIONS(63),
    [anon_sym_echo] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_goto] = ACTIONS(63),
    [anon_sym_exit] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_pause] = ACTIONS(63),
    [anon_sym_cls] = ACTIONS(63),
    [anon_sym_VER] = ACTIONS(63),
    [anon_sym_ASSOC] = ACTIONS(63),
    [anon_sym_CD] = ACTIONS(63),
    [anon_sym_COPY] = ACTIONS(63),
    [anon_sym_DEL] = ACTIONS(63),
    [anon_sym_DIR] = ACTIONS(63),
    [anon_sym_DATE] = ACTIONS(63),
    [anon_sym_MD] = ACTIONS(63),
    [anon_sym_MOVE] = ACTIONS(63),
    [anon_sym_PATH] = ACTIONS(63),
    [anon_sym_PROMPT] = ACTIONS(63),
    [anon_sym_RD] = ACTIONS(63),
    [anon_sym_REN] = ACTIONS(63),
    [anon_sym_START] = ACTIONS(63),
    [anon_sym_TIME] = ACTIONS(63),
    [anon_sym_TYPE] = ACTIONS(63),
    [anon_sym_VOL] = ACTIONS(63),
    [anon_sym_ATTRIB] = ACTIONS(63),
    [anon_sym_CHKDSK] = ACTIONS(63),
    [anon_sym_CHOICE] = ACTIONS(63),
    [anon_sym_CMD] = ACTIONS(63),
    [anon_sym_COMP] = ACTIONS(63),
    [anon_sym_CONVERT] = ACTIONS(63),
    [anon_sym_DRIVERQUERY] = ACTIONS(63),
    [anon_sym_EXPAND] = ACTIONS(63),
    [anon_sym_FIND] = ACTIONS(63),
    [anon_sym_FORMAT] = ACTIONS(63),
    [anon_sym_HELP] = ACTIONS(63),
    [anon_sym_IPCONFIG] = ACTIONS(63),
    [anon_sym_LABEL] = ACTIONS(63),
    [anon_sym_NET] = ACTIONS(63),
    [anon_sym_PING] = ACTIONS(63),
    [anon_sym_SHUTDOWN] = ACTIONS(63),
    [anon_sym_SORT] = ACTIONS(63),
    [anon_sym_SUBST] = ACTIONS(63),
    [anon_sym_SYSTEMINFO] = ACTIONS(63),
    [anon_sym_TASKKILL] = ACTIONS(63),
    [anon_sym_TASKLIST] = ACTIONS(63),
    [anon_sym_XCOPY] = ACTIONS(63),
    [anon_sym_TREE] = ACTIONS(63),
    [anon_sym_FC] = ACTIONS(63),
    [anon_sym_DISKPART] = ACTIONS(63),
    [anon_sym_TITLE] = ACTIONS(63),
    [anon_sym_ver] = ACTIONS(63),
    [anon_sym_assoc] = ACTIONS(63),
    [anon_sym_cd] = ACTIONS(63),
    [anon_sym_copy] = ACTIONS(63),
    [anon_sym_del] = ACTIONS(63),
    [anon_sym_dir] = ACTIONS(63),
    [anon_sym_date] = ACTIONS(63),
    [anon_sym_md] = ACTIONS(63),
    [anon_sym_move] = ACTIONS(63),
    [anon_sym_path] = ACTIONS(63),
    [anon_sym_prompt] = ACTIONS(63),
    [anon_sym_rd] = ACTIONS(63),
    [anon_sym_ren] = ACTIONS(63),
    [anon_sym_start] = ACTIONS(63),
    [anon_sym_time] = ACTIONS(63),
    [anon_sym_type] = ACTIONS(63),
    [anon_sym_vol] = ACTIONS(63),
    [anon_sym_attrib] = ACTIONS(63),
    [anon_sym_chkdsk] = ACTIONS(63),
    [anon_sym_choice] = ACTIONS(63),
    [anon_sym_cmd] = ACTIONS(63),
    [anon_sym_comp] = ACTIONS(63),
    [anon_sym_convert] = ACTIONS(63),
    [anon_sym_driverquery] = ACTIONS(63),
    [anon_sym_expand] = ACTIONS(63),
    [anon_sym_find] = ACTIONS(63),
    [anon_sym_format] = ACTIONS(63),
    [anon_sym_help] = ACTIONS(63),
    [anon_sym_ipconfig] = ACTIONS(63),
    [anon_sym_label] = ACTIONS(63),
    [anon_sym_net] = ACTIONS(63),
    [anon_sym_ping] = ACTIONS(63),
    [anon_sym_shutdown] = ACTIONS(63),
    [anon_sym_sort] = ACTIONS(63),
    [anon_sym_subst] = ACTIONS(63),
    [anon_sym_systeminfo] = ACTIONS(63),
    [anon_sym_taskkill] = ACTIONS(63),
    [anon_sym_tasklist] = ACTIONS(63),
    [anon_sym_xcopy] = ACTIONS(63),
    [anon_sym_tree] = ACTIONS(63),
    [anon_sym_fc] = ACTIONS(63),
    [anon_sym_diskpart] = ACTIONS(63),
    [anon_sym_title] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_number] = ACTIONS(89),
  },
  [8] = {
    [sym_string] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_echooff] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [anon_sym_REM] = ACTIONS(59),
    [anon_sym_Rem] = ACTIONS(59),
    [anon_sym_rem] = ACTIONS(59),
    [anon_sym_SET] = ACTIONS(59),
    [anon_sym_Set] = ACTIONS(59),
    [anon_sym_set] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_ECHO] = ACTIONS(59),
    [anon_sym_IF] = ACTIONS(59),
    [anon_sym_GOTO] = ACTIONS(59),
    [anon_sym_EXIT] = ACTIONS(59),
    [anon_sym_FOR] = ACTIONS(63),
    [anon_sym_PAUSE] = ACTIONS(59),
    [anon_sym_CLS] = ACTIONS(59),
    [anon_sym_echo] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_goto] = ACTIONS(59),
    [anon_sym_exit] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_pause] = ACTIONS(59),
    [anon_sym_cls] = ACTIONS(59),
    [anon_sym_VER] = ACTIONS(59),
    [anon_sym_ASSOC] = ACTIONS(59),
    [anon_sym_CD] = ACTIONS(59),
    [anon_sym_COPY] = ACTIONS(59),
    [anon_sym_DEL] = ACTIONS(59),
    [anon_sym_DIR] = ACTIONS(59),
    [anon_sym_DATE] = ACTIONS(59),
    [anon_sym_MD] = ACTIONS(59),
    [anon_sym_MOVE] = ACTIONS(59),
    [anon_sym_PATH] = ACTIONS(59),
    [anon_sym_PROMPT] = ACTIONS(59),
    [anon_sym_RD] = ACTIONS(59),
    [anon_sym_REN] = ACTIONS(59),
    [anon_sym_START] = ACTIONS(59),
    [anon_sym_TIME] = ACTIONS(59),
    [anon_sym_TYPE] = ACTIONS(59),
    [anon_sym_VOL] = ACTIONS(59),
    [anon_sym_ATTRIB] = ACTIONS(59),
    [anon_sym_CHKDSK] = ACTIONS(59),
    [anon_sym_CHOICE] = ACTIONS(59),
    [anon_sym_CMD] = ACTIONS(59),
    [anon_sym_COMP] = ACTIONS(59),
    [anon_sym_CONVERT] = ACTIONS(59),
    [anon_sym_DRIVERQUERY] = ACTIONS(59),
    [anon_sym_EXPAND] = ACTIONS(59),
    [anon_sym_FIND] = ACTIONS(59),
    [anon_sym_FORMAT] = ACTIONS(59),
    [anon_sym_HELP] = ACTIONS(59),
    [anon_sym_IPCONFIG] = ACTIONS(59),
    [anon_sym_LABEL] = ACTIONS(59),
    [anon_sym_NET] = ACTIONS(59),
    [anon_sym_PING] = ACTIONS(59),
    [anon_sym_SHUTDOWN] = ACTIONS(59),
    [anon_sym_SORT] = ACTIONS(59),
    [anon_sym_SUBST] = ACTIONS(59),
    [anon_sym_SYSTEMINFO] = ACTIONS(59),
    [anon_sym_TASKKILL] = ACTIONS(59),
    [anon_sym_TASKLIST] = ACTIONS(59),
    [anon_sym_XCOPY] = ACTIONS(59),
    [anon_sym_TREE] = ACTIONS(59),
    [anon_sym_FC] = ACTIONS(59),
    [anon_sym_DISKPART] = ACTIONS(59),
    [anon_sym_TITLE] = ACTIONS(59),
    [anon_sym_ver] = ACTIONS(59),
    [anon_sym_assoc] = ACTIONS(59),
    [anon_sym_cd] = ACTIONS(59),
    [anon_sym_copy] = ACTIONS(59),
    [anon_sym_del] = ACTIONS(59),
    [anon_sym_dir] = ACTIONS(59),
    [anon_sym_date] = ACTIONS(59),
    [anon_sym_md] = ACTIONS(59),
    [anon_sym_move] = ACTIONS(59),
    [anon_sym_path] = ACTIONS(59),
    [anon_sym_prompt] = ACTIONS(59),
    [anon_sym_rd] = ACTIONS(59),
    [anon_sym_ren] = ACTIONS(59),
    [anon_sym_start] = ACTIONS(59),
    [anon_sym_time] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_vol] = ACTIONS(59),
    [anon_sym_attrib] = ACTIONS(59),
    [anon_sym_chkdsk] = ACTIONS(59),
    [anon_sym_choice] = ACTIONS(59),
    [anon_sym_cmd] = ACTIONS(59),
    [anon_sym_comp] = ACTIONS(59),
    [anon_sym_convert] = ACTIONS(59),
    [anon_sym_driverquery] = ACTIONS(59),
    [anon_sym_expand] = ACTIONS(59),
    [anon_sym_find] = ACTIONS(59),
    [anon_sym_format] = ACTIONS(59),
    [anon_sym_help] = ACTIONS(59),
    [anon_sym_ipconfig] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_net] = ACTIONS(59),
    [anon_sym_ping] = ACTIONS(59),
    [anon_sym_shutdown] = ACTIONS(59),
    [anon_sym_sort] = ACTIONS(59),
    [anon_sym_subst] = ACTIONS(59),
    [anon_sym_systeminfo] = ACTIONS(59),
    [anon_sym_taskkill] = ACTIONS(59),
    [anon_sym_tasklist] = ACTIONS(59),
    [anon_sym_xcopy] = ACTIONS(59),
    [anon_sym_tree] = ACTIONS(59),
    [anon_sym_fc] = ACTIONS(59),
    [anon_sym_diskpart] = ACTIONS(59),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(69),
  },
  [9] = {
    [sym_string] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_echooff] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(71),
    [anon_sym_REM] = ACTIONS(71),
    [anon_sym_Rem] = ACTIONS(71),
    [anon_sym_rem] = ACTIONS(71),
    [anon_sym_SET] = ACTIONS(71),
    [anon_sym_Set] = ACTIONS(71),
    [anon_sym_set] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(71),
    [anon_sym_ECHO] = ACTIONS(71),
    [anon_sym_IF] = ACTIONS(71),
    [anon_sym_GOTO] = ACTIONS(71),
    [anon_sym_EXIT] = ACTIONS(71),
    [anon_sym_FOR] = ACTIONS(75),
    [anon_sym_PAUSE] = ACTIONS(71),
    [anon_sym_CLS] = ACTIONS(71),
    [anon_sym_echo] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_goto] = ACTIONS(71),
    [anon_sym_exit] = ACTIONS(71),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_pause] = ACTIONS(71),
    [anon_sym_cls] = ACTIONS(71),
    [anon_sym_VER] = ACTIONS(71),
    [anon_sym_ASSOC] = ACTIONS(71),
    [anon_sym_CD] = ACTIONS(71),
    [anon_sym_COPY] = ACTIONS(71),
    [anon_sym_DEL] = ACTIONS(71),
    [anon_sym_DIR] = ACTIONS(71),
    [anon_sym_DATE] = ACTIONS(71),
    [anon_sym_MD] = ACTIONS(71),
    [anon_sym_MOVE] = ACTIONS(71),
    [anon_sym_PATH] = ACTIONS(71),
    [anon_sym_PROMPT] = ACTIONS(71),
    [anon_sym_RD] = ACTIONS(71),
    [anon_sym_REN] = ACTIONS(71),
    [anon_sym_START] = ACTIONS(71),
    [anon_sym_TIME] = ACTIONS(71),
    [anon_sym_TYPE] = ACTIONS(71),
    [anon_sym_VOL] = ACTIONS(71),
    [anon_sym_ATTRIB] = ACTIONS(71),
    [anon_sym_CHKDSK] = ACTIONS(71),
    [anon_sym_CHOICE] = ACTIONS(71),
    [anon_sym_CMD] = ACTIONS(71),
    [anon_sym_COMP] = ACTIONS(71),
    [anon_sym_CONVERT] = ACTIONS(71),
    [anon_sym_DRIVERQUERY] = ACTIONS(71),
    [anon_sym_EXPAND] = ACTIONS(71),
    [anon_sym_FIND] = ACTIONS(71),
    [anon_sym_FORMAT] = ACTIONS(71),
    [anon_sym_HELP] = ACTIONS(71),
    [anon_sym_IPCONFIG] = ACTIONS(71),
    [anon_sym_LABEL] = ACTIONS(71),
    [anon_sym_NET] = ACTIONS(71),
    [anon_sym_PING] = ACTIONS(71),
    [anon_sym_SHUTDOWN] = ACTIONS(71),
    [anon_sym_SORT] = ACTIONS(71),
    [anon_sym_SUBST] = ACTIONS(71),
    [anon_sym_SYSTEMINFO] = ACTIONS(71),
    [anon_sym_TASKKILL] = ACTIONS(71),
    [anon_sym_TASKLIST] = ACTIONS(71),
    [anon_sym_XCOPY] = ACTIONS(71),
    [anon_sym_TREE] = ACTIONS(71),
    [anon_sym_FC] = ACTIONS(71),
    [anon_sym_DISKPART] = ACTIONS(71),
    [anon_sym_TITLE] = ACTIONS(71),
    [anon_sym_ver] = ACTIONS(71),
    [anon_sym_assoc] = ACTIONS(71),
    [anon_sym_cd] = ACTIONS(71),
    [anon_sym_copy] = ACTIONS(71),
    [anon_sym_del] = ACTIONS(71),
    [anon_sym_dir] = ACTIONS(71),
    [anon_sym_date] = ACTIONS(71),
    [anon_sym_md] = ACTIONS(71),
    [anon_sym_move] = ACTIONS(71),
    [anon_sym_path] = ACTIONS(71),
    [anon_sym_prompt] = ACTIONS(71),
    [anon_sym_rd] = ACTIONS(71),
    [anon_sym_ren] = ACTIONS(71),
    [anon_sym_start] = ACTIONS(71),
    [anon_sym_time] = ACTIONS(71),
    [anon_sym_type] = ACTIONS(71),
    [anon_sym_vol] = ACTIONS(71),
    [anon_sym_attrib] = ACTIONS(71),
    [anon_sym_chkdsk] = ACTIONS(71),
    [anon_sym_choice] = ACTIONS(71),
    [anon_sym_cmd] = ACTIONS(71),
    [anon_sym_comp] = ACTIONS(71),
    [anon_sym_convert] = ACTIONS(71),
    [anon_sym_driverquery] = ACTIONS(71),
    [anon_sym_expand] = ACTIONS(71),
    [anon_sym_find] = ACTIONS(71),
    [anon_sym_format] = ACTIONS(71),
    [anon_sym_help] = ACTIONS(71),
    [anon_sym_ipconfig] = ACTIONS(71),
    [anon_sym_label] = ACTIONS(71),
    [anon_sym_net] = ACTIONS(71),
    [anon_sym_ping] = ACTIONS(71),
    [anon_sym_shutdown] = ACTIONS(71),
    [anon_sym_sort] = ACTIONS(71),
    [anon_sym_subst] = ACTIONS(71),
    [anon_sym_systeminfo] = ACTIONS(71),
    [anon_sym_taskkill] = ACTIONS(71),
    [anon_sym_tasklist] = ACTIONS(71),
    [anon_sym_xcopy] = ACTIONS(71),
    [anon_sym_tree] = ACTIONS(71),
    [anon_sym_fc] = ACTIONS(71),
    [anon_sym_diskpart] = ACTIONS(71),
    [anon_sym_title] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(79),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym_echooff] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_REM] = ACTIONS(91),
    [anon_sym_Rem] = ACTIONS(91),
    [anon_sym_rem] = ACTIONS(91),
    [anon_sym_SET] = ACTIONS(91),
    [anon_sym_Set] = ACTIONS(91),
    [anon_sym_set] = ACTIONS(91),
    [anon_sym_PERCENT] = ACTIONS(91),
    [anon_sym_ECHO] = ACTIONS(91),
    [anon_sym_IF] = ACTIONS(91),
    [anon_sym_GOTO] = ACTIONS(91),
    [anon_sym_EXIT] = ACTIONS(91),
    [anon_sym_FOR] = ACTIONS(93),
    [anon_sym_PAUSE] = ACTIONS(91),
    [anon_sym_CLS] = ACTIONS(91),
    [anon_sym_echo] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_goto] = ACTIONS(91),
    [anon_sym_exit] = ACTIONS(91),
    [anon_sym_for] = ACTIONS(93),
    [anon_sym_pause] = ACTIONS(91),
    [anon_sym_cls] = ACTIONS(91),
    [anon_sym_VER] = ACTIONS(91),
    [anon_sym_ASSOC] = ACTIONS(91),
    [anon_sym_CD] = ACTIONS(91),
    [anon_sym_COPY] = ACTIONS(91),
    [anon_sym_DEL] = ACTIONS(91),
    [anon_sym_DIR] = ACTIONS(91),
    [anon_sym_DATE] = ACTIONS(91),
    [anon_sym_MD] = ACTIONS(91),
    [anon_sym_MOVE] = ACTIONS(91),
    [anon_sym_PATH] = ACTIONS(91),
    [anon_sym_PROMPT] = ACTIONS(91),
    [anon_sym_RD] = ACTIONS(91),
    [anon_sym_REN] = ACTIONS(91),
    [anon_sym_START] = ACTIONS(91),
    [anon_sym_TIME] = ACTIONS(91),
    [anon_sym_TYPE] = ACTIONS(91),
    [anon_sym_VOL] = ACTIONS(91),
    [anon_sym_ATTRIB] = ACTIONS(91),
    [anon_sym_CHKDSK] = ACTIONS(91),
    [anon_sym_CHOICE] = ACTIONS(91),
    [anon_sym_CMD] = ACTIONS(91),
    [anon_sym_COMP] = ACTIONS(91),
    [anon_sym_CONVERT] = ACTIONS(91),
    [anon_sym_DRIVERQUERY] = ACTIONS(91),
    [anon_sym_EXPAND] = ACTIONS(91),
    [anon_sym_FIND] = ACTIONS(91),
    [anon_sym_FORMAT] = ACTIONS(91),
    [anon_sym_HELP] = ACTIONS(91),
    [anon_sym_IPCONFIG] = ACTIONS(91),
    [anon_sym_LABEL] = ACTIONS(91),
    [anon_sym_NET] = ACTIONS(91),
    [anon_sym_PING] = ACTIONS(91),
    [anon_sym_SHUTDOWN] = ACTIONS(91),
    [anon_sym_SORT] = ACTIONS(91),
    [anon_sym_SUBST] = ACTIONS(91),
    [anon_sym_SYSTEMINFO] = ACTIONS(91),
    [anon_sym_TASKKILL] = ACTIONS(91),
    [anon_sym_TASKLIST] = ACTIONS(91),
    [anon_sym_XCOPY] = ACTIONS(91),
    [anon_sym_TREE] = ACTIONS(91),
    [anon_sym_FC] = ACTIONS(91),
    [anon_sym_DISKPART] = ACTIONS(91),
    [anon_sym_TITLE] = ACTIONS(91),
    [anon_sym_ver] = ACTIONS(91),
    [anon_sym_assoc] = ACTIONS(91),
    [anon_sym_cd] = ACTIONS(91),
    [anon_sym_copy] = ACTIONS(91),
    [anon_sym_del] = ACTIONS(91),
    [anon_sym_dir] = ACTIONS(91),
    [anon_sym_date] = ACTIONS(91),
    [anon_sym_md] = ACTIONS(91),
    [anon_sym_move] = ACTIONS(91),
    [anon_sym_path] = ACTIONS(91),
    [anon_sym_prompt] = ACTIONS(91),
    [anon_sym_rd] = ACTIONS(91),
    [anon_sym_ren] = ACTIONS(91),
    [anon_sym_start] = ACTIONS(91),
    [anon_sym_time] = ACTIONS(91),
    [anon_sym_type] = ACTIONS(91),
    [anon_sym_vol] = ACTIONS(91),
    [anon_sym_attrib] = ACTIONS(91),
    [anon_sym_chkdsk] = ACTIONS(91),
    [anon_sym_choice] = ACTIONS(91),
    [anon_sym_cmd] = ACTIONS(91),
    [anon_sym_comp] = ACTIONS(91),
    [anon_sym_convert] = ACTIONS(91),
    [anon_sym_driverquery] = ACTIONS(91),
    [anon_sym_expand] = ACTIONS(91),
    [anon_sym_find] = ACTIONS(91),
    [anon_sym_format] = ACTIONS(91),
    [anon_sym_help] = ACTIONS(91),
    [anon_sym_ipconfig] = ACTIONS(91),
    [anon_sym_label] = ACTIONS(91),
    [anon_sym_net] = ACTIONS(91),
    [anon_sym_ping] = ACTIONS(91),
    [anon_sym_shutdown] = ACTIONS(91),
    [anon_sym_sort] = ACTIONS(91),
    [anon_sym_subst] = ACTIONS(91),
    [anon_sym_systeminfo] = ACTIONS(91),
    [anon_sym_taskkill] = ACTIONS(91),
    [anon_sym_tasklist] = ACTIONS(91),
    [anon_sym_xcopy] = ACTIONS(91),
    [anon_sym_tree] = ACTIONS(91),
    [anon_sym_fc] = ACTIONS(91),
    [anon_sym_diskpart] = ACTIONS(91),
    [anon_sym_title] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym_echooff] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_REM] = ACTIONS(95),
    [anon_sym_Rem] = ACTIONS(95),
    [anon_sym_rem] = ACTIONS(95),
    [anon_sym_SET] = ACTIONS(95),
    [anon_sym_Set] = ACTIONS(95),
    [anon_sym_set] = ACTIONS(95),
    [anon_sym_PERCENT] = ACTIONS(95),
    [anon_sym_ECHO] = ACTIONS(95),
    [anon_sym_IF] = ACTIONS(95),
    [anon_sym_GOTO] = ACTIONS(95),
    [anon_sym_EXIT] = ACTIONS(95),
    [anon_sym_FOR] = ACTIONS(97),
    [anon_sym_PAUSE] = ACTIONS(95),
    [anon_sym_CLS] = ACTIONS(95),
    [anon_sym_echo] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_goto] = ACTIONS(95),
    [anon_sym_exit] = ACTIONS(95),
    [anon_sym_for] = ACTIONS(97),
    [anon_sym_pause] = ACTIONS(95),
    [anon_sym_cls] = ACTIONS(95),
    [anon_sym_VER] = ACTIONS(95),
    [anon_sym_ASSOC] = ACTIONS(95),
    [anon_sym_CD] = ACTIONS(95),
    [anon_sym_COPY] = ACTIONS(95),
    [anon_sym_DEL] = ACTIONS(95),
    [anon_sym_DIR] = ACTIONS(95),
    [anon_sym_DATE] = ACTIONS(95),
    [anon_sym_MD] = ACTIONS(95),
    [anon_sym_MOVE] = ACTIONS(95),
    [anon_sym_PATH] = ACTIONS(95),
    [anon_sym_PROMPT] = ACTIONS(95),
    [anon_sym_RD] = ACTIONS(95),
    [anon_sym_REN] = ACTIONS(95),
    [anon_sym_START] = ACTIONS(95),
    [anon_sym_TIME] = ACTIONS(95),
    [anon_sym_TYPE] = ACTIONS(95),
    [anon_sym_VOL] = ACTIONS(95),
    [anon_sym_ATTRIB] = ACTIONS(95),
    [anon_sym_CHKDSK] = ACTIONS(95),
    [anon_sym_CHOICE] = ACTIONS(95),
    [anon_sym_CMD] = ACTIONS(95),
    [anon_sym_COMP] = ACTIONS(95),
    [anon_sym_CONVERT] = ACTIONS(95),
    [anon_sym_DRIVERQUERY] = ACTIONS(95),
    [anon_sym_EXPAND] = ACTIONS(95),
    [anon_sym_FIND] = ACTIONS(95),
    [anon_sym_FORMAT] = ACTIONS(95),
    [anon_sym_HELP] = ACTIONS(95),
    [anon_sym_IPCONFIG] = ACTIONS(95),
    [anon_sym_LABEL] = ACTIONS(95),
    [anon_sym_NET] = ACTIONS(95),
    [anon_sym_PING] = ACTIONS(95),
    [anon_sym_SHUTDOWN] = ACTIONS(95),
    [anon_sym_SORT] = ACTIONS(95),
    [anon_sym_SUBST] = ACTIONS(95),
    [anon_sym_SYSTEMINFO] = ACTIONS(95),
    [anon_sym_TASKKILL] = ACTIONS(95),
    [anon_sym_TASKLIST] = ACTIONS(95),
    [anon_sym_XCOPY] = ACTIONS(95),
    [anon_sym_TREE] = ACTIONS(95),
    [anon_sym_FC] = ACTIONS(95),
    [anon_sym_DISKPART] = ACTIONS(95),
    [anon_sym_TITLE] = ACTIONS(95),
    [anon_sym_ver] = ACTIONS(95),
    [anon_sym_assoc] = ACTIONS(95),
    [anon_sym_cd] = ACTIONS(95),
    [anon_sym_copy] = ACTIONS(95),
    [anon_sym_del] = ACTIONS(95),
    [anon_sym_dir] = ACTIONS(95),
    [anon_sym_date] = ACTIONS(95),
    [anon_sym_md] = ACTIONS(95),
    [anon_sym_move] = ACTIONS(95),
    [anon_sym_path] = ACTIONS(95),
    [anon_sym_prompt] = ACTIONS(95),
    [anon_sym_rd] = ACTIONS(95),
    [anon_sym_ren] = ACTIONS(95),
    [anon_sym_start] = ACTIONS(95),
    [anon_sym_time] = ACTIONS(95),
    [anon_sym_type] = ACTIONS(95),
    [anon_sym_vol] = ACTIONS(95),
    [anon_sym_attrib] = ACTIONS(95),
    [anon_sym_chkdsk] = ACTIONS(95),
    [anon_sym_choice] = ACTIONS(95),
    [anon_sym_cmd] = ACTIONS(95),
    [anon_sym_comp] = ACTIONS(95),
    [anon_sym_convert] = ACTIONS(95),
    [anon_sym_driverquery] = ACTIONS(95),
    [anon_sym_expand] = ACTIONS(95),
    [anon_sym_find] = ACTIONS(95),
    [anon_sym_format] = ACTIONS(95),
    [anon_sym_help] = ACTIONS(95),
    [anon_sym_ipconfig] = ACTIONS(95),
    [anon_sym_label] = ACTIONS(95),
    [anon_sym_net] = ACTIONS(95),
    [anon_sym_ping] = ACTIONS(95),
    [anon_sym_shutdown] = ACTIONS(95),
    [anon_sym_sort] = ACTIONS(95),
    [anon_sym_subst] = ACTIONS(95),
    [anon_sym_systeminfo] = ACTIONS(95),
    [anon_sym_taskkill] = ACTIONS(95),
    [anon_sym_tasklist] = ACTIONS(95),
    [anon_sym_xcopy] = ACTIONS(95),
    [anon_sym_tree] = ACTIONS(95),
    [anon_sym_fc] = ACTIONS(95),
    [anon_sym_diskpart] = ACTIONS(95),
    [anon_sym_title] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_echooff] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_REM] = ACTIONS(99),
    [anon_sym_Rem] = ACTIONS(99),
    [anon_sym_rem] = ACTIONS(99),
    [anon_sym_SET] = ACTIONS(99),
    [anon_sym_Set] = ACTIONS(99),
    [anon_sym_set] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_ECHO] = ACTIONS(99),
    [anon_sym_IF] = ACTIONS(99),
    [anon_sym_GOTO] = ACTIONS(99),
    [anon_sym_EXIT] = ACTIONS(99),
    [anon_sym_FOR] = ACTIONS(101),
    [anon_sym_PAUSE] = ACTIONS(99),
    [anon_sym_CLS] = ACTIONS(99),
    [anon_sym_echo] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_exit] = ACTIONS(99),
    [anon_sym_for] = ACTIONS(101),
    [anon_sym_pause] = ACTIONS(99),
    [anon_sym_cls] = ACTIONS(99),
    [anon_sym_VER] = ACTIONS(99),
    [anon_sym_ASSOC] = ACTIONS(99),
    [anon_sym_CD] = ACTIONS(99),
    [anon_sym_COPY] = ACTIONS(99),
    [anon_sym_DEL] = ACTIONS(99),
    [anon_sym_DIR] = ACTIONS(99),
    [anon_sym_DATE] = ACTIONS(99),
    [anon_sym_MD] = ACTIONS(99),
    [anon_sym_MOVE] = ACTIONS(99),
    [anon_sym_PATH] = ACTIONS(99),
    [anon_sym_PROMPT] = ACTIONS(99),
    [anon_sym_RD] = ACTIONS(99),
    [anon_sym_REN] = ACTIONS(99),
    [anon_sym_START] = ACTIONS(99),
    [anon_sym_TIME] = ACTIONS(99),
    [anon_sym_TYPE] = ACTIONS(99),
    [anon_sym_VOL] = ACTIONS(99),
    [anon_sym_ATTRIB] = ACTIONS(99),
    [anon_sym_CHKDSK] = ACTIONS(99),
    [anon_sym_CHOICE] = ACTIONS(99),
    [anon_sym_CMD] = ACTIONS(99),
    [anon_sym_COMP] = ACTIONS(99),
    [anon_sym_CONVERT] = ACTIONS(99),
    [anon_sym_DRIVERQUERY] = ACTIONS(99),
    [anon_sym_EXPAND] = ACTIONS(99),
    [anon_sym_FIND] = ACTIONS(99),
    [anon_sym_FORMAT] = ACTIONS(99),
    [anon_sym_HELP] = ACTIONS(99),
    [anon_sym_IPCONFIG] = ACTIONS(99),
    [anon_sym_LABEL] = ACTIONS(99),
    [anon_sym_NET] = ACTIONS(99),
    [anon_sym_PING] = ACTIONS(99),
    [anon_sym_SHUTDOWN] = ACTIONS(99),
    [anon_sym_SORT] = ACTIONS(99),
    [anon_sym_SUBST] = ACTIONS(99),
    [anon_sym_SYSTEMINFO] = ACTIONS(99),
    [anon_sym_TASKKILL] = ACTIONS(99),
    [anon_sym_TASKLIST] = ACTIONS(99),
    [anon_sym_XCOPY] = ACTIONS(99),
    [anon_sym_TREE] = ACTIONS(99),
    [anon_sym_FC] = ACTIONS(99),
    [anon_sym_DISKPART] = ACTIONS(99),
    [anon_sym_TITLE] = ACTIONS(99),
    [anon_sym_ver] = ACTIONS(99),
    [anon_sym_assoc] = ACTIONS(99),
    [anon_sym_cd] = ACTIONS(99),
    [anon_sym_copy] = ACTIONS(99),
    [anon_sym_del] = ACTIONS(99),
    [anon_sym_dir] = ACTIONS(99),
    [anon_sym_date] = ACTIONS(99),
    [anon_sym_md] = ACTIONS(99),
    [anon_sym_move] = ACTIONS(99),
    [anon_sym_path] = ACTIONS(99),
    [anon_sym_prompt] = ACTIONS(99),
    [anon_sym_rd] = ACTIONS(99),
    [anon_sym_ren] = ACTIONS(99),
    [anon_sym_start] = ACTIONS(99),
    [anon_sym_time] = ACTIONS(99),
    [anon_sym_type] = ACTIONS(99),
    [anon_sym_vol] = ACTIONS(99),
    [anon_sym_attrib] = ACTIONS(99),
    [anon_sym_chkdsk] = ACTIONS(99),
    [anon_sym_choice] = ACTIONS(99),
    [anon_sym_cmd] = ACTIONS(99),
    [anon_sym_comp] = ACTIONS(99),
    [anon_sym_convert] = ACTIONS(99),
    [anon_sym_driverquery] = ACTIONS(99),
    [anon_sym_expand] = ACTIONS(99),
    [anon_sym_find] = ACTIONS(99),
    [anon_sym_format] = ACTIONS(99),
    [anon_sym_help] = ACTIONS(99),
    [anon_sym_ipconfig] = ACTIONS(99),
    [anon_sym_label] = ACTIONS(99),
    [anon_sym_net] = ACTIONS(99),
    [anon_sym_ping] = ACTIONS(99),
    [anon_sym_shutdown] = ACTIONS(99),
    [anon_sym_sort] = ACTIONS(99),
    [anon_sym_subst] = ACTIONS(99),
    [anon_sym_systeminfo] = ACTIONS(99),
    [anon_sym_taskkill] = ACTIONS(99),
    [anon_sym_tasklist] = ACTIONS(99),
    [anon_sym_xcopy] = ACTIONS(99),
    [anon_sym_tree] = ACTIONS(99),
    [anon_sym_fc] = ACTIONS(99),
    [anon_sym_diskpart] = ACTIONS(99),
    [anon_sym_title] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(101),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_echooff] = ACTIONS(103),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_REM] = ACTIONS(103),
    [anon_sym_Rem] = ACTIONS(103),
    [anon_sym_rem] = ACTIONS(103),
    [anon_sym_SET] = ACTIONS(103),
    [anon_sym_Set] = ACTIONS(103),
    [anon_sym_set] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_ECHO] = ACTIONS(103),
    [anon_sym_IF] = ACTIONS(103),
    [anon_sym_GOTO] = ACTIONS(103),
    [anon_sym_EXIT] = ACTIONS(103),
    [anon_sym_FOR] = ACTIONS(105),
    [anon_sym_PAUSE] = ACTIONS(103),
    [anon_sym_CLS] = ACTIONS(103),
    [anon_sym_echo] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_exit] = ACTIONS(103),
    [anon_sym_for] = ACTIONS(105),
    [anon_sym_pause] = ACTIONS(103),
    [anon_sym_cls] = ACTIONS(103),
    [anon_sym_VER] = ACTIONS(103),
    [anon_sym_ASSOC] = ACTIONS(103),
    [anon_sym_CD] = ACTIONS(103),
    [anon_sym_COPY] = ACTIONS(103),
    [anon_sym_DEL] = ACTIONS(103),
    [anon_sym_DIR] = ACTIONS(103),
    [anon_sym_DATE] = ACTIONS(103),
    [anon_sym_MD] = ACTIONS(103),
    [anon_sym_MOVE] = ACTIONS(103),
    [anon_sym_PATH] = ACTIONS(103),
    [anon_sym_PROMPT] = ACTIONS(103),
    [anon_sym_RD] = ACTIONS(103),
    [anon_sym_REN] = ACTIONS(103),
    [anon_sym_START] = ACTIONS(103),
    [anon_sym_TIME] = ACTIONS(103),
    [anon_sym_TYPE] = ACTIONS(103),
    [anon_sym_VOL] = ACTIONS(103),
    [anon_sym_ATTRIB] = ACTIONS(103),
    [anon_sym_CHKDSK] = ACTIONS(103),
    [anon_sym_CHOICE] = ACTIONS(103),
    [anon_sym_CMD] = ACTIONS(103),
    [anon_sym_COMP] = ACTIONS(103),
    [anon_sym_CONVERT] = ACTIONS(103),
    [anon_sym_DRIVERQUERY] = ACTIONS(103),
    [anon_sym_EXPAND] = ACTIONS(103),
    [anon_sym_FIND] = ACTIONS(103),
    [anon_sym_FORMAT] = ACTIONS(103),
    [anon_sym_HELP] = ACTIONS(103),
    [anon_sym_IPCONFIG] = ACTIONS(103),
    [anon_sym_LABEL] = ACTIONS(103),
    [anon_sym_NET] = ACTIONS(103),
    [anon_sym_PING] = ACTIONS(103),
    [anon_sym_SHUTDOWN] = ACTIONS(103),
    [anon_sym_SORT] = ACTIONS(103),
    [anon_sym_SUBST] = ACTIONS(103),
    [anon_sym_SYSTEMINFO] = ACTIONS(103),
    [anon_sym_TASKKILL] = ACTIONS(103),
    [anon_sym_TASKLIST] = ACTIONS(103),
    [anon_sym_XCOPY] = ACTIONS(103),
    [anon_sym_TREE] = ACTIONS(103),
    [anon_sym_FC] = ACTIONS(103),
    [anon_sym_DISKPART] = ACTIONS(103),
    [anon_sym_TITLE] = ACTIONS(103),
    [anon_sym_ver] = ACTIONS(103),
    [anon_sym_assoc] = ACTIONS(103),
    [anon_sym_cd] = ACTIONS(103),
    [anon_sym_copy] = ACTIONS(103),
    [anon_sym_del] = ACTIONS(103),
    [anon_sym_dir] = ACTIONS(103),
    [anon_sym_date] = ACTIONS(103),
    [anon_sym_md] = ACTIONS(103),
    [anon_sym_move] = ACTIONS(103),
    [anon_sym_path] = ACTIONS(103),
    [anon_sym_prompt] = ACTIONS(103),
    [anon_sym_rd] = ACTIONS(103),
    [anon_sym_ren] = ACTIONS(103),
    [anon_sym_start] = ACTIONS(103),
    [anon_sym_time] = ACTIONS(103),
    [anon_sym_type] = ACTIONS(103),
    [anon_sym_vol] = ACTIONS(103),
    [anon_sym_attrib] = ACTIONS(103),
    [anon_sym_chkdsk] = ACTIONS(103),
    [anon_sym_choice] = ACTIONS(103),
    [anon_sym_cmd] = ACTIONS(103),
    [anon_sym_comp] = ACTIONS(103),
    [anon_sym_convert] = ACTIONS(103),
    [anon_sym_driverquery] = ACTIONS(103),
    [anon_sym_expand] = ACTIONS(103),
    [anon_sym_find] = ACTIONS(103),
    [anon_sym_format] = ACTIONS(103),
    [anon_sym_help] = ACTIONS(103),
    [anon_sym_ipconfig] = ACTIONS(103),
    [anon_sym_label] = ACTIONS(103),
    [anon_sym_net] = ACTIONS(103),
    [anon_sym_ping] = ACTIONS(103),
    [anon_sym_shutdown] = ACTIONS(103),
    [anon_sym_sort] = ACTIONS(103),
    [anon_sym_subst] = ACTIONS(103),
    [anon_sym_systeminfo] = ACTIONS(103),
    [anon_sym_taskkill] = ACTIONS(103),
    [anon_sym_tasklist] = ACTIONS(103),
    [anon_sym_xcopy] = ACTIONS(103),
    [anon_sym_tree] = ACTIONS(103),
    [anon_sym_fc] = ACTIONS(103),
    [anon_sym_diskpart] = ACTIONS(103),
    [anon_sym_title] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_echooff] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [anon_sym_REM] = ACTIONS(59),
    [anon_sym_Rem] = ACTIONS(59),
    [anon_sym_rem] = ACTIONS(59),
    [anon_sym_SET] = ACTIONS(59),
    [anon_sym_Set] = ACTIONS(59),
    [anon_sym_set] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_ECHO] = ACTIONS(59),
    [anon_sym_IF] = ACTIONS(59),
    [anon_sym_GOTO] = ACTIONS(59),
    [anon_sym_EXIT] = ACTIONS(59),
    [anon_sym_FOR] = ACTIONS(63),
    [anon_sym_PAUSE] = ACTIONS(59),
    [anon_sym_CLS] = ACTIONS(59),
    [anon_sym_echo] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_goto] = ACTIONS(59),
    [anon_sym_exit] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_pause] = ACTIONS(59),
    [anon_sym_cls] = ACTIONS(59),
    [anon_sym_VER] = ACTIONS(59),
    [anon_sym_ASSOC] = ACTIONS(59),
    [anon_sym_CD] = ACTIONS(59),
    [anon_sym_COPY] = ACTIONS(59),
    [anon_sym_DEL] = ACTIONS(59),
    [anon_sym_DIR] = ACTIONS(59),
    [anon_sym_DATE] = ACTIONS(59),
    [anon_sym_MD] = ACTIONS(59),
    [anon_sym_MOVE] = ACTIONS(59),
    [anon_sym_PATH] = ACTIONS(59),
    [anon_sym_PROMPT] = ACTIONS(59),
    [anon_sym_RD] = ACTIONS(59),
    [anon_sym_REN] = ACTIONS(59),
    [anon_sym_START] = ACTIONS(59),
    [anon_sym_TIME] = ACTIONS(59),
    [anon_sym_TYPE] = ACTIONS(59),
    [anon_sym_VOL] = ACTIONS(59),
    [anon_sym_ATTRIB] = ACTIONS(59),
    [anon_sym_CHKDSK] = ACTIONS(59),
    [anon_sym_CHOICE] = ACTIONS(59),
    [anon_sym_CMD] = ACTIONS(59),
    [anon_sym_COMP] = ACTIONS(59),
    [anon_sym_CONVERT] = ACTIONS(59),
    [anon_sym_DRIVERQUERY] = ACTIONS(59),
    [anon_sym_EXPAND] = ACTIONS(59),
    [anon_sym_FIND] = ACTIONS(59),
    [anon_sym_FORMAT] = ACTIONS(59),
    [anon_sym_HELP] = ACTIONS(59),
    [anon_sym_IPCONFIG] = ACTIONS(59),
    [anon_sym_LABEL] = ACTIONS(59),
    [anon_sym_NET] = ACTIONS(59),
    [anon_sym_PING] = ACTIONS(59),
    [anon_sym_SHUTDOWN] = ACTIONS(59),
    [anon_sym_SORT] = ACTIONS(59),
    [anon_sym_SUBST] = ACTIONS(59),
    [anon_sym_SYSTEMINFO] = ACTIONS(59),
    [anon_sym_TASKKILL] = ACTIONS(59),
    [anon_sym_TASKLIST] = ACTIONS(59),
    [anon_sym_XCOPY] = ACTIONS(59),
    [anon_sym_TREE] = ACTIONS(59),
    [anon_sym_FC] = ACTIONS(59),
    [anon_sym_DISKPART] = ACTIONS(59),
    [anon_sym_TITLE] = ACTIONS(59),
    [anon_sym_ver] = ACTIONS(59),
    [anon_sym_assoc] = ACTIONS(59),
    [anon_sym_cd] = ACTIONS(59),
    [anon_sym_copy] = ACTIONS(59),
    [anon_sym_del] = ACTIONS(59),
    [anon_sym_dir] = ACTIONS(59),
    [anon_sym_date] = ACTIONS(59),
    [anon_sym_md] = ACTIONS(59),
    [anon_sym_move] = ACTIONS(59),
    [anon_sym_path] = ACTIONS(59),
    [anon_sym_prompt] = ACTIONS(59),
    [anon_sym_rd] = ACTIONS(59),
    [anon_sym_ren] = ACTIONS(59),
    [anon_sym_start] = ACTIONS(59),
    [anon_sym_time] = ACTIONS(59),
    [anon_sym_type] = ACTIONS(59),
    [anon_sym_vol] = ACTIONS(59),
    [anon_sym_attrib] = ACTIONS(59),
    [anon_sym_chkdsk] = ACTIONS(59),
    [anon_sym_choice] = ACTIONS(59),
    [anon_sym_cmd] = ACTIONS(59),
    [anon_sym_comp] = ACTIONS(59),
    [anon_sym_convert] = ACTIONS(59),
    [anon_sym_driverquery] = ACTIONS(59),
    [anon_sym_expand] = ACTIONS(59),
    [anon_sym_find] = ACTIONS(59),
    [anon_sym_format] = ACTIONS(59),
    [anon_sym_help] = ACTIONS(59),
    [anon_sym_ipconfig] = ACTIONS(59),
    [anon_sym_label] = ACTIONS(59),
    [anon_sym_net] = ACTIONS(59),
    [anon_sym_ping] = ACTIONS(59),
    [anon_sym_shutdown] = ACTIONS(59),
    [anon_sym_sort] = ACTIONS(59),
    [anon_sym_subst] = ACTIONS(59),
    [anon_sym_systeminfo] = ACTIONS(59),
    [anon_sym_taskkill] = ACTIONS(59),
    [anon_sym_tasklist] = ACTIONS(59),
    [anon_sym_xcopy] = ACTIONS(59),
    [anon_sym_tree] = ACTIONS(59),
    [anon_sym_fc] = ACTIONS(59),
    [anon_sym_diskpart] = ACTIONS(59),
    [anon_sym_title] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(63),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym_echooff] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(107),
    [anon_sym_REM] = ACTIONS(107),
    [anon_sym_Rem] = ACTIONS(107),
    [anon_sym_rem] = ACTIONS(107),
    [anon_sym_SET] = ACTIONS(107),
    [anon_sym_Set] = ACTIONS(107),
    [anon_sym_set] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_ECHO] = ACTIONS(107),
    [anon_sym_IF] = ACTIONS(107),
    [anon_sym_GOTO] = ACTIONS(107),
    [anon_sym_EXIT] = ACTIONS(107),
    [anon_sym_FOR] = ACTIONS(109),
    [anon_sym_PAUSE] = ACTIONS(107),
    [anon_sym_CLS] = ACTIONS(107),
    [anon_sym_echo] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_goto] = ACTIONS(107),
    [anon_sym_exit] = ACTIONS(107),
    [anon_sym_for] = ACTIONS(109),
    [anon_sym_pause] = ACTIONS(107),
    [anon_sym_cls] = ACTIONS(107),
    [anon_sym_VER] = ACTIONS(107),
    [anon_sym_ASSOC] = ACTIONS(107),
    [anon_sym_CD] = ACTIONS(107),
    [anon_sym_COPY] = ACTIONS(107),
    [anon_sym_DEL] = ACTIONS(107),
    [anon_sym_DIR] = ACTIONS(107),
    [anon_sym_DATE] = ACTIONS(107),
    [anon_sym_MD] = ACTIONS(107),
    [anon_sym_MOVE] = ACTIONS(107),
    [anon_sym_PATH] = ACTIONS(107),
    [anon_sym_PROMPT] = ACTIONS(107),
    [anon_sym_RD] = ACTIONS(107),
    [anon_sym_REN] = ACTIONS(107),
    [anon_sym_START] = ACTIONS(107),
    [anon_sym_TIME] = ACTIONS(107),
    [anon_sym_TYPE] = ACTIONS(107),
    [anon_sym_VOL] = ACTIONS(107),
    [anon_sym_ATTRIB] = ACTIONS(107),
    [anon_sym_CHKDSK] = ACTIONS(107),
    [anon_sym_CHOICE] = ACTIONS(107),
    [anon_sym_CMD] = ACTIONS(107),
    [anon_sym_COMP] = ACTIONS(107),
    [anon_sym_CONVERT] = ACTIONS(107),
    [anon_sym_DRIVERQUERY] = ACTIONS(107),
    [anon_sym_EXPAND] = ACTIONS(107),
    [anon_sym_FIND] = ACTIONS(107),
    [anon_sym_FORMAT] = ACTIONS(107),
    [anon_sym_HELP] = ACTIONS(107),
    [anon_sym_IPCONFIG] = ACTIONS(107),
    [anon_sym_LABEL] = ACTIONS(107),
    [anon_sym_NET] = ACTIONS(107),
    [anon_sym_PING] = ACTIONS(107),
    [anon_sym_SHUTDOWN] = ACTIONS(107),
    [anon_sym_SORT] = ACTIONS(107),
    [anon_sym_SUBST] = ACTIONS(107),
    [anon_sym_SYSTEMINFO] = ACTIONS(107),
    [anon_sym_TASKKILL] = ACTIONS(107),
    [anon_sym_TASKLIST] = ACTIONS(107),
    [anon_sym_XCOPY] = ACTIONS(107),
    [anon_sym_TREE] = ACTIONS(107),
    [anon_sym_FC] = ACTIONS(107),
    [anon_sym_DISKPART] = ACTIONS(107),
    [anon_sym_TITLE] = ACTIONS(107),
    [anon_sym_ver] = ACTIONS(107),
    [anon_sym_assoc] = ACTIONS(107),
    [anon_sym_cd] = ACTIONS(107),
    [anon_sym_copy] = ACTIONS(107),
    [anon_sym_del] = ACTIONS(107),
    [anon_sym_dir] = ACTIONS(107),
    [anon_sym_date] = ACTIONS(107),
    [anon_sym_md] = ACTIONS(107),
    [anon_sym_move] = ACTIONS(107),
    [anon_sym_path] = ACTIONS(107),
    [anon_sym_prompt] = ACTIONS(107),
    [anon_sym_rd] = ACTIONS(107),
    [anon_sym_ren] = ACTIONS(107),
    [anon_sym_start] = ACTIONS(107),
    [anon_sym_time] = ACTIONS(107),
    [anon_sym_type] = ACTIONS(107),
    [anon_sym_vol] = ACTIONS(107),
    [anon_sym_attrib] = ACTIONS(107),
    [anon_sym_chkdsk] = ACTIONS(107),
    [anon_sym_choice] = ACTIONS(107),
    [anon_sym_cmd] = ACTIONS(107),
    [anon_sym_comp] = ACTIONS(107),
    [anon_sym_convert] = ACTIONS(107),
    [anon_sym_driverquery] = ACTIONS(107),
    [anon_sym_expand] = ACTIONS(107),
    [anon_sym_find] = ACTIONS(107),
    [anon_sym_format] = ACTIONS(107),
    [anon_sym_help] = ACTIONS(107),
    [anon_sym_ipconfig] = ACTIONS(107),
    [anon_sym_label] = ACTIONS(107),
    [anon_sym_net] = ACTIONS(107),
    [anon_sym_ping] = ACTIONS(107),
    [anon_sym_shutdown] = ACTIONS(107),
    [anon_sym_sort] = ACTIONS(107),
    [anon_sym_subst] = ACTIONS(107),
    [anon_sym_systeminfo] = ACTIONS(107),
    [anon_sym_taskkill] = ACTIONS(107),
    [anon_sym_tasklist] = ACTIONS(107),
    [anon_sym_xcopy] = ACTIONS(107),
    [anon_sym_tree] = ACTIONS(107),
    [anon_sym_fc] = ACTIONS(107),
    [anon_sym_diskpart] = ACTIONS(107),
    [anon_sym_title] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_echooff] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_REM] = ACTIONS(111),
    [anon_sym_Rem] = ACTIONS(111),
    [anon_sym_rem] = ACTIONS(111),
    [anon_sym_SET] = ACTIONS(111),
    [anon_sym_Set] = ACTIONS(111),
    [anon_sym_set] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_ECHO] = ACTIONS(111),
    [anon_sym_IF] = ACTIONS(111),
    [anon_sym_GOTO] = ACTIONS(111),
    [anon_sym_EXIT] = ACTIONS(111),
    [anon_sym_FOR] = ACTIONS(113),
    [anon_sym_PAUSE] = ACTIONS(111),
    [anon_sym_CLS] = ACTIONS(111),
    [anon_sym_echo] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_goto] = ACTIONS(111),
    [anon_sym_exit] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(113),
    [anon_sym_pause] = ACTIONS(111),
    [anon_sym_cls] = ACTIONS(111),
    [anon_sym_VER] = ACTIONS(111),
    [anon_sym_ASSOC] = ACTIONS(111),
    [anon_sym_CD] = ACTIONS(111),
    [anon_sym_COPY] = ACTIONS(111),
    [anon_sym_DEL] = ACTIONS(111),
    [anon_sym_DIR] = ACTIONS(111),
    [anon_sym_DATE] = ACTIONS(111),
    [anon_sym_MD] = ACTIONS(111),
    [anon_sym_MOVE] = ACTIONS(111),
    [anon_sym_PATH] = ACTIONS(111),
    [anon_sym_PROMPT] = ACTIONS(111),
    [anon_sym_RD] = ACTIONS(111),
    [anon_sym_REN] = ACTIONS(111),
    [anon_sym_START] = ACTIONS(111),
    [anon_sym_TIME] = ACTIONS(111),
    [anon_sym_TYPE] = ACTIONS(111),
    [anon_sym_VOL] = ACTIONS(111),
    [anon_sym_ATTRIB] = ACTIONS(111),
    [anon_sym_CHKDSK] = ACTIONS(111),
    [anon_sym_CHOICE] = ACTIONS(111),
    [anon_sym_CMD] = ACTIONS(111),
    [anon_sym_COMP] = ACTIONS(111),
    [anon_sym_CONVERT] = ACTIONS(111),
    [anon_sym_DRIVERQUERY] = ACTIONS(111),
    [anon_sym_EXPAND] = ACTIONS(111),
    [anon_sym_FIND] = ACTIONS(111),
    [anon_sym_FORMAT] = ACTIONS(111),
    [anon_sym_HELP] = ACTIONS(111),
    [anon_sym_IPCONFIG] = ACTIONS(111),
    [anon_sym_LABEL] = ACTIONS(111),
    [anon_sym_NET] = ACTIONS(111),
    [anon_sym_PING] = ACTIONS(111),
    [anon_sym_SHUTDOWN] = ACTIONS(111),
    [anon_sym_SORT] = ACTIONS(111),
    [anon_sym_SUBST] = ACTIONS(111),
    [anon_sym_SYSTEMINFO] = ACTIONS(111),
    [anon_sym_TASKKILL] = ACTIONS(111),
    [anon_sym_TASKLIST] = ACTIONS(111),
    [anon_sym_XCOPY] = ACTIONS(111),
    [anon_sym_TREE] = ACTIONS(111),
    [anon_sym_FC] = ACTIONS(111),
    [anon_sym_DISKPART] = ACTIONS(111),
    [anon_sym_TITLE] = ACTIONS(111),
    [anon_sym_ver] = ACTIONS(111),
    [anon_sym_assoc] = ACTIONS(111),
    [anon_sym_cd] = ACTIONS(111),
    [anon_sym_copy] = ACTIONS(111),
    [anon_sym_del] = ACTIONS(111),
    [anon_sym_dir] = ACTIONS(111),
    [anon_sym_date] = ACTIONS(111),
    [anon_sym_md] = ACTIONS(111),
    [anon_sym_move] = ACTIONS(111),
    [anon_sym_path] = ACTIONS(111),
    [anon_sym_prompt] = ACTIONS(111),
    [anon_sym_rd] = ACTIONS(111),
    [anon_sym_ren] = ACTIONS(111),
    [anon_sym_start] = ACTIONS(111),
    [anon_sym_time] = ACTIONS(111),
    [anon_sym_type] = ACTIONS(111),
    [anon_sym_vol] = ACTIONS(111),
    [anon_sym_attrib] = ACTIONS(111),
    [anon_sym_chkdsk] = ACTIONS(111),
    [anon_sym_choice] = ACTIONS(111),
    [anon_sym_cmd] = ACTIONS(111),
    [anon_sym_comp] = ACTIONS(111),
    [anon_sym_convert] = ACTIONS(111),
    [anon_sym_driverquery] = ACTIONS(111),
    [anon_sym_expand] = ACTIONS(111),
    [anon_sym_find] = ACTIONS(111),
    [anon_sym_format] = ACTIONS(111),
    [anon_sym_help] = ACTIONS(111),
    [anon_sym_ipconfig] = ACTIONS(111),
    [anon_sym_label] = ACTIONS(111),
    [anon_sym_net] = ACTIONS(111),
    [anon_sym_ping] = ACTIONS(111),
    [anon_sym_shutdown] = ACTIONS(111),
    [anon_sym_sort] = ACTIONS(111),
    [anon_sym_subst] = ACTIONS(111),
    [anon_sym_systeminfo] = ACTIONS(111),
    [anon_sym_taskkill] = ACTIONS(111),
    [anon_sym_tasklist] = ACTIONS(111),
    [anon_sym_xcopy] = ACTIONS(111),
    [anon_sym_tree] = ACTIONS(111),
    [anon_sym_fc] = ACTIONS(111),
    [anon_sym_diskpart] = ACTIONS(111),
    [anon_sym_title] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym_echooff] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(115),
    [anon_sym_REM] = ACTIONS(115),
    [anon_sym_Rem] = ACTIONS(115),
    [anon_sym_rem] = ACTIONS(115),
    [anon_sym_SET] = ACTIONS(115),
    [anon_sym_Set] = ACTIONS(115),
    [anon_sym_set] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_ECHO] = ACTIONS(115),
    [anon_sym_IF] = ACTIONS(115),
    [anon_sym_GOTO] = ACTIONS(115),
    [anon_sym_EXIT] = ACTIONS(115),
    [anon_sym_FOR] = ACTIONS(117),
    [anon_sym_PAUSE] = ACTIONS(115),
    [anon_sym_CLS] = ACTIONS(115),
    [anon_sym_echo] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_goto] = ACTIONS(115),
    [anon_sym_exit] = ACTIONS(115),
    [anon_sym_for] = ACTIONS(117),
    [anon_sym_pause] = ACTIONS(115),
    [anon_sym_cls] = ACTIONS(115),
    [anon_sym_VER] = ACTIONS(115),
    [anon_sym_ASSOC] = ACTIONS(115),
    [anon_sym_CD] = ACTIONS(115),
    [anon_sym_COPY] = ACTIONS(115),
    [anon_sym_DEL] = ACTIONS(115),
    [anon_sym_DIR] = ACTIONS(115),
    [anon_sym_DATE] = ACTIONS(115),
    [anon_sym_MD] = ACTIONS(115),
    [anon_sym_MOVE] = ACTIONS(115),
    [anon_sym_PATH] = ACTIONS(115),
    [anon_sym_PROMPT] = ACTIONS(115),
    [anon_sym_RD] = ACTIONS(115),
    [anon_sym_REN] = ACTIONS(115),
    [anon_sym_START] = ACTIONS(115),
    [anon_sym_TIME] = ACTIONS(115),
    [anon_sym_TYPE] = ACTIONS(115),
    [anon_sym_VOL] = ACTIONS(115),
    [anon_sym_ATTRIB] = ACTIONS(115),
    [anon_sym_CHKDSK] = ACTIONS(115),
    [anon_sym_CHOICE] = ACTIONS(115),
    [anon_sym_CMD] = ACTIONS(115),
    [anon_sym_COMP] = ACTIONS(115),
    [anon_sym_CONVERT] = ACTIONS(115),
    [anon_sym_DRIVERQUERY] = ACTIONS(115),
    [anon_sym_EXPAND] = ACTIONS(115),
    [anon_sym_FIND] = ACTIONS(115),
    [anon_sym_FORMAT] = ACTIONS(115),
    [anon_sym_HELP] = ACTIONS(115),
    [anon_sym_IPCONFIG] = ACTIONS(115),
    [anon_sym_LABEL] = ACTIONS(115),
    [anon_sym_NET] = ACTIONS(115),
    [anon_sym_PING] = ACTIONS(115),
    [anon_sym_SHUTDOWN] = ACTIONS(115),
    [anon_sym_SORT] = ACTIONS(115),
    [anon_sym_SUBST] = ACTIONS(115),
    [anon_sym_SYSTEMINFO] = ACTIONS(115),
    [anon_sym_TASKKILL] = ACTIONS(115),
    [anon_sym_TASKLIST] = ACTIONS(115),
    [anon_sym_XCOPY] = ACTIONS(115),
    [anon_sym_TREE] = ACTIONS(115),
    [anon_sym_FC] = ACTIONS(115),
    [anon_sym_DISKPART] = ACTIONS(115),
    [anon_sym_TITLE] = ACTIONS(115),
    [anon_sym_ver] = ACTIONS(115),
    [anon_sym_assoc] = ACTIONS(115),
    [anon_sym_cd] = ACTIONS(115),
    [anon_sym_copy] = ACTIONS(115),
    [anon_sym_del] = ACTIONS(115),
    [anon_sym_dir] = ACTIONS(115),
    [anon_sym_date] = ACTIONS(115),
    [anon_sym_md] = ACTIONS(115),
    [anon_sym_move] = ACTIONS(115),
    [anon_sym_path] = ACTIONS(115),
    [anon_sym_prompt] = ACTIONS(115),
    [anon_sym_rd] = ACTIONS(115),
    [anon_sym_ren] = ACTIONS(115),
    [anon_sym_start] = ACTIONS(115),
    [anon_sym_time] = ACTIONS(115),
    [anon_sym_type] = ACTIONS(115),
    [anon_sym_vol] = ACTIONS(115),
    [anon_sym_attrib] = ACTIONS(115),
    [anon_sym_chkdsk] = ACTIONS(115),
    [anon_sym_choice] = ACTIONS(115),
    [anon_sym_cmd] = ACTIONS(115),
    [anon_sym_comp] = ACTIONS(115),
    [anon_sym_convert] = ACTIONS(115),
    [anon_sym_driverquery] = ACTIONS(115),
    [anon_sym_expand] = ACTIONS(115),
    [anon_sym_find] = ACTIONS(115),
    [anon_sym_format] = ACTIONS(115),
    [anon_sym_help] = ACTIONS(115),
    [anon_sym_ipconfig] = ACTIONS(115),
    [anon_sym_label] = ACTIONS(115),
    [anon_sym_net] = ACTIONS(115),
    [anon_sym_ping] = ACTIONS(115),
    [anon_sym_shutdown] = ACTIONS(115),
    [anon_sym_sort] = ACTIONS(115),
    [anon_sym_subst] = ACTIONS(115),
    [anon_sym_systeminfo] = ACTIONS(115),
    [anon_sym_taskkill] = ACTIONS(115),
    [anon_sym_tasklist] = ACTIONS(115),
    [anon_sym_xcopy] = ACTIONS(115),
    [anon_sym_tree] = ACTIONS(115),
    [anon_sym_fc] = ACTIONS(115),
    [anon_sym_diskpart] = ACTIONS(115),
    [anon_sym_title] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(117),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_echooff] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_REM] = ACTIONS(119),
    [anon_sym_Rem] = ACTIONS(119),
    [anon_sym_rem] = ACTIONS(119),
    [anon_sym_SET] = ACTIONS(119),
    [anon_sym_Set] = ACTIONS(119),
    [anon_sym_set] = ACTIONS(119),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_ECHO] = ACTIONS(119),
    [anon_sym_IF] = ACTIONS(119),
    [anon_sym_GOTO] = ACTIONS(119),
    [anon_sym_EXIT] = ACTIONS(119),
    [anon_sym_FOR] = ACTIONS(121),
    [anon_sym_PAUSE] = ACTIONS(119),
    [anon_sym_CLS] = ACTIONS(119),
    [anon_sym_echo] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_goto] = ACTIONS(119),
    [anon_sym_exit] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_pause] = ACTIONS(119),
    [anon_sym_cls] = ACTIONS(119),
    [anon_sym_VER] = ACTIONS(119),
    [anon_sym_ASSOC] = ACTIONS(119),
    [anon_sym_CD] = ACTIONS(119),
    [anon_sym_COPY] = ACTIONS(119),
    [anon_sym_DEL] = ACTIONS(119),
    [anon_sym_DIR] = ACTIONS(119),
    [anon_sym_DATE] = ACTIONS(119),
    [anon_sym_MD] = ACTIONS(119),
    [anon_sym_MOVE] = ACTIONS(119),
    [anon_sym_PATH] = ACTIONS(119),
    [anon_sym_PROMPT] = ACTIONS(119),
    [anon_sym_RD] = ACTIONS(119),
    [anon_sym_REN] = ACTIONS(119),
    [anon_sym_START] = ACTIONS(119),
    [anon_sym_TIME] = ACTIONS(119),
    [anon_sym_TYPE] = ACTIONS(119),
    [anon_sym_VOL] = ACTIONS(119),
    [anon_sym_ATTRIB] = ACTIONS(119),
    [anon_sym_CHKDSK] = ACTIONS(119),
    [anon_sym_CHOICE] = ACTIONS(119),
    [anon_sym_CMD] = ACTIONS(119),
    [anon_sym_COMP] = ACTIONS(119),
    [anon_sym_CONVERT] = ACTIONS(119),
    [anon_sym_DRIVERQUERY] = ACTIONS(119),
    [anon_sym_EXPAND] = ACTIONS(119),
    [anon_sym_FIND] = ACTIONS(119),
    [anon_sym_FORMAT] = ACTIONS(119),
    [anon_sym_HELP] = ACTIONS(119),
    [anon_sym_IPCONFIG] = ACTIONS(119),
    [anon_sym_LABEL] = ACTIONS(119),
    [anon_sym_NET] = ACTIONS(119),
    [anon_sym_PING] = ACTIONS(119),
    [anon_sym_SHUTDOWN] = ACTIONS(119),
    [anon_sym_SORT] = ACTIONS(119),
    [anon_sym_SUBST] = ACTIONS(119),
    [anon_sym_SYSTEMINFO] = ACTIONS(119),
    [anon_sym_TASKKILL] = ACTIONS(119),
    [anon_sym_TASKLIST] = ACTIONS(119),
    [anon_sym_XCOPY] = ACTIONS(119),
    [anon_sym_TREE] = ACTIONS(119),
    [anon_sym_FC] = ACTIONS(119),
    [anon_sym_DISKPART] = ACTIONS(119),
    [anon_sym_TITLE] = ACTIONS(119),
    [anon_sym_ver] = ACTIONS(119),
    [anon_sym_assoc] = ACTIONS(119),
    [anon_sym_cd] = ACTIONS(119),
    [anon_sym_copy] = ACTIONS(119),
    [anon_sym_del] = ACTIONS(119),
    [anon_sym_dir] = ACTIONS(119),
    [anon_sym_date] = ACTIONS(119),
    [anon_sym_md] = ACTIONS(119),
    [anon_sym_move] = ACTIONS(119),
    [anon_sym_path] = ACTIONS(119),
    [anon_sym_prompt] = ACTIONS(119),
    [anon_sym_rd] = ACTIONS(119),
    [anon_sym_ren] = ACTIONS(119),
    [anon_sym_start] = ACTIONS(119),
    [anon_sym_time] = ACTIONS(119),
    [anon_sym_type] = ACTIONS(119),
    [anon_sym_vol] = ACTIONS(119),
    [anon_sym_attrib] = ACTIONS(119),
    [anon_sym_chkdsk] = ACTIONS(119),
    [anon_sym_choice] = ACTIONS(119),
    [anon_sym_cmd] = ACTIONS(119),
    [anon_sym_comp] = ACTIONS(119),
    [anon_sym_convert] = ACTIONS(119),
    [anon_sym_driverquery] = ACTIONS(119),
    [anon_sym_expand] = ACTIONS(119),
    [anon_sym_find] = ACTIONS(119),
    [anon_sym_format] = ACTIONS(119),
    [anon_sym_help] = ACTIONS(119),
    [anon_sym_ipconfig] = ACTIONS(119),
    [anon_sym_label] = ACTIONS(119),
    [anon_sym_net] = ACTIONS(119),
    [anon_sym_ping] = ACTIONS(119),
    [anon_sym_shutdown] = ACTIONS(119),
    [anon_sym_sort] = ACTIONS(119),
    [anon_sym_subst] = ACTIONS(119),
    [anon_sym_systeminfo] = ACTIONS(119),
    [anon_sym_taskkill] = ACTIONS(119),
    [anon_sym_tasklist] = ACTIONS(119),
    [anon_sym_xcopy] = ACTIONS(119),
    [anon_sym_tree] = ACTIONS(119),
    [anon_sym_fc] = ACTIONS(119),
    [anon_sym_diskpart] = ACTIONS(119),
    [anon_sym_title] = ACTIONS(119),
    [anon_sym_COLON] = ACTIONS(121),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_echooff] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_REM] = ACTIONS(123),
    [anon_sym_Rem] = ACTIONS(123),
    [anon_sym_rem] = ACTIONS(123),
    [anon_sym_SET] = ACTIONS(123),
    [anon_sym_Set] = ACTIONS(123),
    [anon_sym_set] = ACTIONS(123),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_ECHO] = ACTIONS(123),
    [anon_sym_IF] = ACTIONS(123),
    [anon_sym_GOTO] = ACTIONS(123),
    [anon_sym_EXIT] = ACTIONS(123),
    [anon_sym_FOR] = ACTIONS(125),
    [anon_sym_PAUSE] = ACTIONS(123),
    [anon_sym_CLS] = ACTIONS(123),
    [anon_sym_echo] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(123),
    [anon_sym_goto] = ACTIONS(123),
    [anon_sym_exit] = ACTIONS(123),
    [anon_sym_for] = ACTIONS(125),
    [anon_sym_pause] = ACTIONS(123),
    [anon_sym_cls] = ACTIONS(123),
    [anon_sym_VER] = ACTIONS(123),
    [anon_sym_ASSOC] = ACTIONS(123),
    [anon_sym_CD] = ACTIONS(123),
    [anon_sym_COPY] = ACTIONS(123),
    [anon_sym_DEL] = ACTIONS(123),
    [anon_sym_DIR] = ACTIONS(123),
    [anon_sym_DATE] = ACTIONS(123),
    [anon_sym_MD] = ACTIONS(123),
    [anon_sym_MOVE] = ACTIONS(123),
    [anon_sym_PATH] = ACTIONS(123),
    [anon_sym_PROMPT] = ACTIONS(123),
    [anon_sym_RD] = ACTIONS(123),
    [anon_sym_REN] = ACTIONS(123),
    [anon_sym_START] = ACTIONS(123),
    [anon_sym_TIME] = ACTIONS(123),
    [anon_sym_TYPE] = ACTIONS(123),
    [anon_sym_VOL] = ACTIONS(123),
    [anon_sym_ATTRIB] = ACTIONS(123),
    [anon_sym_CHKDSK] = ACTIONS(123),
    [anon_sym_CHOICE] = ACTIONS(123),
    [anon_sym_CMD] = ACTIONS(123),
    [anon_sym_COMP] = ACTIONS(123),
    [anon_sym_CONVERT] = ACTIONS(123),
    [anon_sym_DRIVERQUERY] = ACTIONS(123),
    [anon_sym_EXPAND] = ACTIONS(123),
    [anon_sym_FIND] = ACTIONS(123),
    [anon_sym_FORMAT] = ACTIONS(123),
    [anon_sym_HELP] = ACTIONS(123),
    [anon_sym_IPCONFIG] = ACTIONS(123),
    [anon_sym_LABEL] = ACTIONS(123),
    [anon_sym_NET] = ACTIONS(123),
    [anon_sym_PING] = ACTIONS(123),
    [anon_sym_SHUTDOWN] = ACTIONS(123),
    [anon_sym_SORT] = ACTIONS(123),
    [anon_sym_SUBST] = ACTIONS(123),
    [anon_sym_SYSTEMINFO] = ACTIONS(123),
    [anon_sym_TASKKILL] = ACTIONS(123),
    [anon_sym_TASKLIST] = ACTIONS(123),
    [anon_sym_XCOPY] = ACTIONS(123),
    [anon_sym_TREE] = ACTIONS(123),
    [anon_sym_FC] = ACTIONS(123),
    [anon_sym_DISKPART] = ACTIONS(123),
    [anon_sym_TITLE] = ACTIONS(123),
    [anon_sym_ver] = ACTIONS(123),
    [anon_sym_assoc] = ACTIONS(123),
    [anon_sym_cd] = ACTIONS(123),
    [anon_sym_copy] = ACTIONS(123),
    [anon_sym_del] = ACTIONS(123),
    [anon_sym_dir] = ACTIONS(123),
    [anon_sym_date] = ACTIONS(123),
    [anon_sym_md] = ACTIONS(123),
    [anon_sym_move] = ACTIONS(123),
    [anon_sym_path] = ACTIONS(123),
    [anon_sym_prompt] = ACTIONS(123),
    [anon_sym_rd] = ACTIONS(123),
    [anon_sym_ren] = ACTIONS(123),
    [anon_sym_start] = ACTIONS(123),
    [anon_sym_time] = ACTIONS(123),
    [anon_sym_type] = ACTIONS(123),
    [anon_sym_vol] = ACTIONS(123),
    [anon_sym_attrib] = ACTIONS(123),
    [anon_sym_chkdsk] = ACTIONS(123),
    [anon_sym_choice] = ACTIONS(123),
    [anon_sym_cmd] = ACTIONS(123),
    [anon_sym_comp] = ACTIONS(123),
    [anon_sym_convert] = ACTIONS(123),
    [anon_sym_driverquery] = ACTIONS(123),
    [anon_sym_expand] = ACTIONS(123),
    [anon_sym_find] = ACTIONS(123),
    [anon_sym_format] = ACTIONS(123),
    [anon_sym_help] = ACTIONS(123),
    [anon_sym_ipconfig] = ACTIONS(123),
    [anon_sym_label] = ACTIONS(123),
    [anon_sym_net] = ACTIONS(123),
    [anon_sym_ping] = ACTIONS(123),
    [anon_sym_shutdown] = ACTIONS(123),
    [anon_sym_sort] = ACTIONS(123),
    [anon_sym_subst] = ACTIONS(123),
    [anon_sym_systeminfo] = ACTIONS(123),
    [anon_sym_taskkill] = ACTIONS(123),
    [anon_sym_tasklist] = ACTIONS(123),
    [anon_sym_xcopy] = ACTIONS(123),
    [anon_sym_tree] = ACTIONS(123),
    [anon_sym_fc] = ACTIONS(123),
    [anon_sym_diskpart] = ACTIONS(123),
    [anon_sym_title] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(125),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_echooff] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [anon_sym_REM] = ACTIONS(127),
    [anon_sym_Rem] = ACTIONS(127),
    [anon_sym_rem] = ACTIONS(127),
    [anon_sym_SET] = ACTIONS(127),
    [anon_sym_Set] = ACTIONS(127),
    [anon_sym_set] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_ECHO] = ACTIONS(127),
    [anon_sym_IF] = ACTIONS(127),
    [anon_sym_GOTO] = ACTIONS(127),
    [anon_sym_EXIT] = ACTIONS(127),
    [anon_sym_FOR] = ACTIONS(129),
    [anon_sym_PAUSE] = ACTIONS(127),
    [anon_sym_CLS] = ACTIONS(127),
    [anon_sym_echo] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_goto] = ACTIONS(127),
    [anon_sym_exit] = ACTIONS(127),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_pause] = ACTIONS(127),
    [anon_sym_cls] = ACTIONS(127),
    [anon_sym_VER] = ACTIONS(127),
    [anon_sym_ASSOC] = ACTIONS(127),
    [anon_sym_CD] = ACTIONS(127),
    [anon_sym_COPY] = ACTIONS(127),
    [anon_sym_DEL] = ACTIONS(127),
    [anon_sym_DIR] = ACTIONS(127),
    [anon_sym_DATE] = ACTIONS(127),
    [anon_sym_MD] = ACTIONS(127),
    [anon_sym_MOVE] = ACTIONS(127),
    [anon_sym_PATH] = ACTIONS(127),
    [anon_sym_PROMPT] = ACTIONS(127),
    [anon_sym_RD] = ACTIONS(127),
    [anon_sym_REN] = ACTIONS(127),
    [anon_sym_START] = ACTIONS(127),
    [anon_sym_TIME] = ACTIONS(127),
    [anon_sym_TYPE] = ACTIONS(127),
    [anon_sym_VOL] = ACTIONS(127),
    [anon_sym_ATTRIB] = ACTIONS(127),
    [anon_sym_CHKDSK] = ACTIONS(127),
    [anon_sym_CHOICE] = ACTIONS(127),
    [anon_sym_CMD] = ACTIONS(127),
    [anon_sym_COMP] = ACTIONS(127),
    [anon_sym_CONVERT] = ACTIONS(127),
    [anon_sym_DRIVERQUERY] = ACTIONS(127),
    [anon_sym_EXPAND] = ACTIONS(127),
    [anon_sym_FIND] = ACTIONS(127),
    [anon_sym_FORMAT] = ACTIONS(127),
    [anon_sym_HELP] = ACTIONS(127),
    [anon_sym_IPCONFIG] = ACTIONS(127),
    [anon_sym_LABEL] = ACTIONS(127),
    [anon_sym_NET] = ACTIONS(127),
    [anon_sym_PING] = ACTIONS(127),
    [anon_sym_SHUTDOWN] = ACTIONS(127),
    [anon_sym_SORT] = ACTIONS(127),
    [anon_sym_SUBST] = ACTIONS(127),
    [anon_sym_SYSTEMINFO] = ACTIONS(127),
    [anon_sym_TASKKILL] = ACTIONS(127),
    [anon_sym_TASKLIST] = ACTIONS(127),
    [anon_sym_XCOPY] = ACTIONS(127),
    [anon_sym_TREE] = ACTIONS(127),
    [anon_sym_FC] = ACTIONS(127),
    [anon_sym_DISKPART] = ACTIONS(127),
    [anon_sym_TITLE] = ACTIONS(127),
    [anon_sym_ver] = ACTIONS(127),
    [anon_sym_assoc] = ACTIONS(127),
    [anon_sym_cd] = ACTIONS(127),
    [anon_sym_copy] = ACTIONS(127),
    [anon_sym_del] = ACTIONS(127),
    [anon_sym_dir] = ACTIONS(127),
    [anon_sym_date] = ACTIONS(127),
    [anon_sym_md] = ACTIONS(127),
    [anon_sym_move] = ACTIONS(127),
    [anon_sym_path] = ACTIONS(127),
    [anon_sym_prompt] = ACTIONS(127),
    [anon_sym_rd] = ACTIONS(127),
    [anon_sym_ren] = ACTIONS(127),
    [anon_sym_start] = ACTIONS(127),
    [anon_sym_time] = ACTIONS(127),
    [anon_sym_type] = ACTIONS(127),
    [anon_sym_vol] = ACTIONS(127),
    [anon_sym_attrib] = ACTIONS(127),
    [anon_sym_chkdsk] = ACTIONS(127),
    [anon_sym_choice] = ACTIONS(127),
    [anon_sym_cmd] = ACTIONS(127),
    [anon_sym_comp] = ACTIONS(127),
    [anon_sym_convert] = ACTIONS(127),
    [anon_sym_driverquery] = ACTIONS(127),
    [anon_sym_expand] = ACTIONS(127),
    [anon_sym_find] = ACTIONS(127),
    [anon_sym_format] = ACTIONS(127),
    [anon_sym_help] = ACTIONS(127),
    [anon_sym_ipconfig] = ACTIONS(127),
    [anon_sym_label] = ACTIONS(127),
    [anon_sym_net] = ACTIONS(127),
    [anon_sym_ping] = ACTIONS(127),
    [anon_sym_shutdown] = ACTIONS(127),
    [anon_sym_sort] = ACTIONS(127),
    [anon_sym_subst] = ACTIONS(127),
    [anon_sym_systeminfo] = ACTIONS(127),
    [anon_sym_taskkill] = ACTIONS(127),
    [anon_sym_tasklist] = ACTIONS(127),
    [anon_sym_xcopy] = ACTIONS(127),
    [anon_sym_tree] = ACTIONS(127),
    [anon_sym_fc] = ACTIONS(127),
    [anon_sym_diskpart] = ACTIONS(127),
    [anon_sym_title] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(129),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_echooff] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_REM] = ACTIONS(131),
    [anon_sym_Rem] = ACTIONS(131),
    [anon_sym_rem] = ACTIONS(131),
    [anon_sym_SET] = ACTIONS(131),
    [anon_sym_Set] = ACTIONS(131),
    [anon_sym_set] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_ECHO] = ACTIONS(131),
    [anon_sym_IF] = ACTIONS(131),
    [anon_sym_GOTO] = ACTIONS(131),
    [anon_sym_EXIT] = ACTIONS(131),
    [anon_sym_FOR] = ACTIONS(133),
    [anon_sym_PAUSE] = ACTIONS(131),
    [anon_sym_CLS] = ACTIONS(131),
    [anon_sym_echo] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(131),
    [anon_sym_exit] = ACTIONS(131),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_pause] = ACTIONS(131),
    [anon_sym_cls] = ACTIONS(131),
    [anon_sym_VER] = ACTIONS(131),
    [anon_sym_ASSOC] = ACTIONS(131),
    [anon_sym_CD] = ACTIONS(131),
    [anon_sym_COPY] = ACTIONS(131),
    [anon_sym_DEL] = ACTIONS(131),
    [anon_sym_DIR] = ACTIONS(131),
    [anon_sym_DATE] = ACTIONS(131),
    [anon_sym_MD] = ACTIONS(131),
    [anon_sym_MOVE] = ACTIONS(131),
    [anon_sym_PATH] = ACTIONS(131),
    [anon_sym_PROMPT] = ACTIONS(131),
    [anon_sym_RD] = ACTIONS(131),
    [anon_sym_REN] = ACTIONS(131),
    [anon_sym_START] = ACTIONS(131),
    [anon_sym_TIME] = ACTIONS(131),
    [anon_sym_TYPE] = ACTIONS(131),
    [anon_sym_VOL] = ACTIONS(131),
    [anon_sym_ATTRIB] = ACTIONS(131),
    [anon_sym_CHKDSK] = ACTIONS(131),
    [anon_sym_CHOICE] = ACTIONS(131),
    [anon_sym_CMD] = ACTIONS(131),
    [anon_sym_COMP] = ACTIONS(131),
    [anon_sym_CONVERT] = ACTIONS(131),
    [anon_sym_DRIVERQUERY] = ACTIONS(131),
    [anon_sym_EXPAND] = ACTIONS(131),
    [anon_sym_FIND] = ACTIONS(131),
    [anon_sym_FORMAT] = ACTIONS(131),
    [anon_sym_HELP] = ACTIONS(131),
    [anon_sym_IPCONFIG] = ACTIONS(131),
    [anon_sym_LABEL] = ACTIONS(131),
    [anon_sym_NET] = ACTIONS(131),
    [anon_sym_PING] = ACTIONS(131),
    [anon_sym_SHUTDOWN] = ACTIONS(131),
    [anon_sym_SORT] = ACTIONS(131),
    [anon_sym_SUBST] = ACTIONS(131),
    [anon_sym_SYSTEMINFO] = ACTIONS(131),
    [anon_sym_TASKKILL] = ACTIONS(131),
    [anon_sym_TASKLIST] = ACTIONS(131),
    [anon_sym_XCOPY] = ACTIONS(131),
    [anon_sym_TREE] = ACTIONS(131),
    [anon_sym_FC] = ACTIONS(131),
    [anon_sym_DISKPART] = ACTIONS(131),
    [anon_sym_TITLE] = ACTIONS(131),
    [anon_sym_ver] = ACTIONS(131),
    [anon_sym_assoc] = ACTIONS(131),
    [anon_sym_cd] = ACTIONS(131),
    [anon_sym_copy] = ACTIONS(131),
    [anon_sym_del] = ACTIONS(131),
    [anon_sym_dir] = ACTIONS(131),
    [anon_sym_date] = ACTIONS(131),
    [anon_sym_md] = ACTIONS(131),
    [anon_sym_move] = ACTIONS(131),
    [anon_sym_path] = ACTIONS(131),
    [anon_sym_prompt] = ACTIONS(131),
    [anon_sym_rd] = ACTIONS(131),
    [anon_sym_ren] = ACTIONS(131),
    [anon_sym_start] = ACTIONS(131),
    [anon_sym_time] = ACTIONS(131),
    [anon_sym_type] = ACTIONS(131),
    [anon_sym_vol] = ACTIONS(131),
    [anon_sym_attrib] = ACTIONS(131),
    [anon_sym_chkdsk] = ACTIONS(131),
    [anon_sym_choice] = ACTIONS(131),
    [anon_sym_cmd] = ACTIONS(131),
    [anon_sym_comp] = ACTIONS(131),
    [anon_sym_convert] = ACTIONS(131),
    [anon_sym_driverquery] = ACTIONS(131),
    [anon_sym_expand] = ACTIONS(131),
    [anon_sym_find] = ACTIONS(131),
    [anon_sym_format] = ACTIONS(131),
    [anon_sym_help] = ACTIONS(131),
    [anon_sym_ipconfig] = ACTIONS(131),
    [anon_sym_label] = ACTIONS(131),
    [anon_sym_net] = ACTIONS(131),
    [anon_sym_ping] = ACTIONS(131),
    [anon_sym_shutdown] = ACTIONS(131),
    [anon_sym_sort] = ACTIONS(131),
    [anon_sym_subst] = ACTIONS(131),
    [anon_sym_systeminfo] = ACTIONS(131),
    [anon_sym_taskkill] = ACTIONS(131),
    [anon_sym_tasklist] = ACTIONS(131),
    [anon_sym_xcopy] = ACTIONS(131),
    [anon_sym_tree] = ACTIONS(131),
    [anon_sym_fc] = ACTIONS(131),
    [anon_sym_diskpart] = ACTIONS(131),
    [anon_sym_title] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(133),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_echooff] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_REM] = ACTIONS(135),
    [anon_sym_Rem] = ACTIONS(135),
    [anon_sym_rem] = ACTIONS(135),
    [anon_sym_SET] = ACTIONS(135),
    [anon_sym_Set] = ACTIONS(135),
    [anon_sym_set] = ACTIONS(135),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_ECHO] = ACTIONS(135),
    [anon_sym_IF] = ACTIONS(135),
    [anon_sym_GOTO] = ACTIONS(135),
    [anon_sym_EXIT] = ACTIONS(135),
    [anon_sym_FOR] = ACTIONS(137),
    [anon_sym_PAUSE] = ACTIONS(135),
    [anon_sym_CLS] = ACTIONS(135),
    [anon_sym_echo] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_goto] = ACTIONS(135),
    [anon_sym_exit] = ACTIONS(135),
    [anon_sym_for] = ACTIONS(137),
    [anon_sym_pause] = ACTIONS(135),
    [anon_sym_cls] = ACTIONS(135),
    [anon_sym_VER] = ACTIONS(135),
    [anon_sym_ASSOC] = ACTIONS(135),
    [anon_sym_CD] = ACTIONS(135),
    [anon_sym_COPY] = ACTIONS(135),
    [anon_sym_DEL] = ACTIONS(135),
    [anon_sym_DIR] = ACTIONS(135),
    [anon_sym_DATE] = ACTIONS(135),
    [anon_sym_MD] = ACTIONS(135),
    [anon_sym_MOVE] = ACTIONS(135),
    [anon_sym_PATH] = ACTIONS(135),
    [anon_sym_PROMPT] = ACTIONS(135),
    [anon_sym_RD] = ACTIONS(135),
    [anon_sym_REN] = ACTIONS(135),
    [anon_sym_START] = ACTIONS(135),
    [anon_sym_TIME] = ACTIONS(135),
    [anon_sym_TYPE] = ACTIONS(135),
    [anon_sym_VOL] = ACTIONS(135),
    [anon_sym_ATTRIB] = ACTIONS(135),
    [anon_sym_CHKDSK] = ACTIONS(135),
    [anon_sym_CHOICE] = ACTIONS(135),
    [anon_sym_CMD] = ACTIONS(135),
    [anon_sym_COMP] = ACTIONS(135),
    [anon_sym_CONVERT] = ACTIONS(135),
    [anon_sym_DRIVERQUERY] = ACTIONS(135),
    [anon_sym_EXPAND] = ACTIONS(135),
    [anon_sym_FIND] = ACTIONS(135),
    [anon_sym_FORMAT] = ACTIONS(135),
    [anon_sym_HELP] = ACTIONS(135),
    [anon_sym_IPCONFIG] = ACTIONS(135),
    [anon_sym_LABEL] = ACTIONS(135),
    [anon_sym_NET] = ACTIONS(135),
    [anon_sym_PING] = ACTIONS(135),
    [anon_sym_SHUTDOWN] = ACTIONS(135),
    [anon_sym_SORT] = ACTIONS(135),
    [anon_sym_SUBST] = ACTIONS(135),
    [anon_sym_SYSTEMINFO] = ACTIONS(135),
    [anon_sym_TASKKILL] = ACTIONS(135),
    [anon_sym_TASKLIST] = ACTIONS(135),
    [anon_sym_XCOPY] = ACTIONS(135),
    [anon_sym_TREE] = ACTIONS(135),
    [anon_sym_FC] = ACTIONS(135),
    [anon_sym_DISKPART] = ACTIONS(135),
    [anon_sym_TITLE] = ACTIONS(135),
    [anon_sym_ver] = ACTIONS(135),
    [anon_sym_assoc] = ACTIONS(135),
    [anon_sym_cd] = ACTIONS(135),
    [anon_sym_copy] = ACTIONS(135),
    [anon_sym_del] = ACTIONS(135),
    [anon_sym_dir] = ACTIONS(135),
    [anon_sym_date] = ACTIONS(135),
    [anon_sym_md] = ACTIONS(135),
    [anon_sym_move] = ACTIONS(135),
    [anon_sym_path] = ACTIONS(135),
    [anon_sym_prompt] = ACTIONS(135),
    [anon_sym_rd] = ACTIONS(135),
    [anon_sym_ren] = ACTIONS(135),
    [anon_sym_start] = ACTIONS(135),
    [anon_sym_time] = ACTIONS(135),
    [anon_sym_type] = ACTIONS(135),
    [anon_sym_vol] = ACTIONS(135),
    [anon_sym_attrib] = ACTIONS(135),
    [anon_sym_chkdsk] = ACTIONS(135),
    [anon_sym_choice] = ACTIONS(135),
    [anon_sym_cmd] = ACTIONS(135),
    [anon_sym_comp] = ACTIONS(135),
    [anon_sym_convert] = ACTIONS(135),
    [anon_sym_driverquery] = ACTIONS(135),
    [anon_sym_expand] = ACTIONS(135),
    [anon_sym_find] = ACTIONS(135),
    [anon_sym_format] = ACTIONS(135),
    [anon_sym_help] = ACTIONS(135),
    [anon_sym_ipconfig] = ACTIONS(135),
    [anon_sym_label] = ACTIONS(135),
    [anon_sym_net] = ACTIONS(135),
    [anon_sym_ping] = ACTIONS(135),
    [anon_sym_shutdown] = ACTIONS(135),
    [anon_sym_sort] = ACTIONS(135),
    [anon_sym_subst] = ACTIONS(135),
    [anon_sym_systeminfo] = ACTIONS(135),
    [anon_sym_taskkill] = ACTIONS(135),
    [anon_sym_tasklist] = ACTIONS(135),
    [anon_sym_xcopy] = ACTIONS(135),
    [anon_sym_tree] = ACTIONS(135),
    [anon_sym_fc] = ACTIONS(135),
    [anon_sym_diskpart] = ACTIONS(135),
    [anon_sym_title] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(137),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_echooff] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [anon_sym_REM] = ACTIONS(139),
    [anon_sym_Rem] = ACTIONS(139),
    [anon_sym_rem] = ACTIONS(139),
    [anon_sym_SET] = ACTIONS(139),
    [anon_sym_Set] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_ECHO] = ACTIONS(139),
    [anon_sym_IF] = ACTIONS(139),
    [anon_sym_GOTO] = ACTIONS(139),
    [anon_sym_EXIT] = ACTIONS(139),
    [anon_sym_FOR] = ACTIONS(141),
    [anon_sym_PAUSE] = ACTIONS(139),
    [anon_sym_CLS] = ACTIONS(139),
    [anon_sym_echo] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_goto] = ACTIONS(139),
    [anon_sym_exit] = ACTIONS(139),
    [anon_sym_for] = ACTIONS(141),
    [anon_sym_pause] = ACTIONS(139),
    [anon_sym_cls] = ACTIONS(139),
    [anon_sym_VER] = ACTIONS(139),
    [anon_sym_ASSOC] = ACTIONS(139),
    [anon_sym_CD] = ACTIONS(139),
    [anon_sym_COPY] = ACTIONS(139),
    [anon_sym_DEL] = ACTIONS(139),
    [anon_sym_DIR] = ACTIONS(139),
    [anon_sym_DATE] = ACTIONS(139),
    [anon_sym_MD] = ACTIONS(139),
    [anon_sym_MOVE] = ACTIONS(139),
    [anon_sym_PATH] = ACTIONS(139),
    [anon_sym_PROMPT] = ACTIONS(139),
    [anon_sym_RD] = ACTIONS(139),
    [anon_sym_REN] = ACTIONS(139),
    [anon_sym_START] = ACTIONS(139),
    [anon_sym_TIME] = ACTIONS(139),
    [anon_sym_TYPE] = ACTIONS(139),
    [anon_sym_VOL] = ACTIONS(139),
    [anon_sym_ATTRIB] = ACTIONS(139),
    [anon_sym_CHKDSK] = ACTIONS(139),
    [anon_sym_CHOICE] = ACTIONS(139),
    [anon_sym_CMD] = ACTIONS(139),
    [anon_sym_COMP] = ACTIONS(139),
    [anon_sym_CONVERT] = ACTIONS(139),
    [anon_sym_DRIVERQUERY] = ACTIONS(139),
    [anon_sym_EXPAND] = ACTIONS(139),
    [anon_sym_FIND] = ACTIONS(139),
    [anon_sym_FORMAT] = ACTIONS(139),
    [anon_sym_HELP] = ACTIONS(139),
    [anon_sym_IPCONFIG] = ACTIONS(139),
    [anon_sym_LABEL] = ACTIONS(139),
    [anon_sym_NET] = ACTIONS(139),
    [anon_sym_PING] = ACTIONS(139),
    [anon_sym_SHUTDOWN] = ACTIONS(139),
    [anon_sym_SORT] = ACTIONS(139),
    [anon_sym_SUBST] = ACTIONS(139),
    [anon_sym_SYSTEMINFO] = ACTIONS(139),
    [anon_sym_TASKKILL] = ACTIONS(139),
    [anon_sym_TASKLIST] = ACTIONS(139),
    [anon_sym_XCOPY] = ACTIONS(139),
    [anon_sym_TREE] = ACTIONS(139),
    [anon_sym_FC] = ACTIONS(139),
    [anon_sym_DISKPART] = ACTIONS(139),
    [anon_sym_TITLE] = ACTIONS(139),
    [anon_sym_ver] = ACTIONS(139),
    [anon_sym_assoc] = ACTIONS(139),
    [anon_sym_cd] = ACTIONS(139),
    [anon_sym_copy] = ACTIONS(139),
    [anon_sym_del] = ACTIONS(139),
    [anon_sym_dir] = ACTIONS(139),
    [anon_sym_date] = ACTIONS(139),
    [anon_sym_md] = ACTIONS(139),
    [anon_sym_move] = ACTIONS(139),
    [anon_sym_path] = ACTIONS(139),
    [anon_sym_prompt] = ACTIONS(139),
    [anon_sym_rd] = ACTIONS(139),
    [anon_sym_ren] = ACTIONS(139),
    [anon_sym_start] = ACTIONS(139),
    [anon_sym_time] = ACTIONS(139),
    [anon_sym_type] = ACTIONS(139),
    [anon_sym_vol] = ACTIONS(139),
    [anon_sym_attrib] = ACTIONS(139),
    [anon_sym_chkdsk] = ACTIONS(139),
    [anon_sym_choice] = ACTIONS(139),
    [anon_sym_cmd] = ACTIONS(139),
    [anon_sym_comp] = ACTIONS(139),
    [anon_sym_convert] = ACTIONS(139),
    [anon_sym_driverquery] = ACTIONS(139),
    [anon_sym_expand] = ACTIONS(139),
    [anon_sym_find] = ACTIONS(139),
    [anon_sym_format] = ACTIONS(139),
    [anon_sym_help] = ACTIONS(139),
    [anon_sym_ipconfig] = ACTIONS(139),
    [anon_sym_label] = ACTIONS(139),
    [anon_sym_net] = ACTIONS(139),
    [anon_sym_ping] = ACTIONS(139),
    [anon_sym_shutdown] = ACTIONS(139),
    [anon_sym_sort] = ACTIONS(139),
    [anon_sym_subst] = ACTIONS(139),
    [anon_sym_systeminfo] = ACTIONS(139),
    [anon_sym_taskkill] = ACTIONS(139),
    [anon_sym_tasklist] = ACTIONS(139),
    [anon_sym_xcopy] = ACTIONS(139),
    [anon_sym_tree] = ACTIONS(139),
    [anon_sym_fc] = ACTIONS(139),
    [anon_sym_diskpart] = ACTIONS(139),
    [anon_sym_title] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(141),
  },
  [24] = {
    [anon_sym_echooff] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(145),
    [anon_sym_REM] = ACTIONS(147),
    [anon_sym_Rem] = ACTIONS(145),
    [anon_sym_rem] = ACTIONS(147),
    [anon_sym_SET] = ACTIONS(149),
    [anon_sym_Set] = ACTIONS(151),
    [anon_sym_set] = ACTIONS(149),
    [anon_sym_ECHO] = ACTIONS(153),
    [anon_sym_IF] = ACTIONS(153),
    [anon_sym_GOTO] = ACTIONS(153),
    [anon_sym_EXIT] = ACTIONS(153),
    [anon_sym_FOR] = ACTIONS(155),
    [anon_sym_PAUSE] = ACTIONS(153),
    [anon_sym_CLS] = ACTIONS(153),
    [anon_sym_echo] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_goto] = ACTIONS(153),
    [anon_sym_exit] = ACTIONS(153),
    [anon_sym_for] = ACTIONS(155),
    [anon_sym_pause] = ACTIONS(153),
    [anon_sym_cls] = ACTIONS(153),
    [anon_sym_VER] = ACTIONS(153),
    [anon_sym_ASSOC] = ACTIONS(153),
    [anon_sym_CD] = ACTIONS(153),
    [anon_sym_COPY] = ACTIONS(153),
    [anon_sym_DEL] = ACTIONS(153),
    [anon_sym_DIR] = ACTIONS(153),
    [anon_sym_DATE] = ACTIONS(153),
    [anon_sym_MD] = ACTIONS(153),
    [anon_sym_MOVE] = ACTIONS(153),
    [anon_sym_PATH] = ACTIONS(153),
    [anon_sym_PROMPT] = ACTIONS(153),
    [anon_sym_RD] = ACTIONS(153),
    [anon_sym_REN] = ACTIONS(153),
    [anon_sym_START] = ACTIONS(153),
    [anon_sym_TIME] = ACTIONS(153),
    [anon_sym_TYPE] = ACTIONS(153),
    [anon_sym_VOL] = ACTIONS(153),
    [anon_sym_ATTRIB] = ACTIONS(153),
    [anon_sym_CHKDSK] = ACTIONS(153),
    [anon_sym_CHOICE] = ACTIONS(153),
    [anon_sym_CMD] = ACTIONS(153),
    [anon_sym_COMP] = ACTIONS(153),
    [anon_sym_CONVERT] = ACTIONS(153),
    [anon_sym_DRIVERQUERY] = ACTIONS(153),
    [anon_sym_EXPAND] = ACTIONS(153),
    [anon_sym_FIND] = ACTIONS(153),
    [anon_sym_FORMAT] = ACTIONS(153),
    [anon_sym_HELP] = ACTIONS(153),
    [anon_sym_IPCONFIG] = ACTIONS(153),
    [anon_sym_LABEL] = ACTIONS(153),
    [anon_sym_NET] = ACTIONS(153),
    [anon_sym_PING] = ACTIONS(153),
    [anon_sym_SHUTDOWN] = ACTIONS(153),
    [anon_sym_SORT] = ACTIONS(153),
    [anon_sym_SUBST] = ACTIONS(153),
    [anon_sym_SYSTEMINFO] = ACTIONS(153),
    [anon_sym_TASKKILL] = ACTIONS(153),
    [anon_sym_TASKLIST] = ACTIONS(153),
    [anon_sym_XCOPY] = ACTIONS(153),
    [anon_sym_TREE] = ACTIONS(153),
    [anon_sym_FC] = ACTIONS(153),
    [anon_sym_DISKPART] = ACTIONS(153),
    [anon_sym_TITLE] = ACTIONS(153),
    [anon_sym_ver] = ACTIONS(153),
    [anon_sym_assoc] = ACTIONS(153),
    [anon_sym_cd] = ACTIONS(153),
    [anon_sym_copy] = ACTIONS(153),
    [anon_sym_del] = ACTIONS(153),
    [anon_sym_dir] = ACTIONS(153),
    [anon_sym_date] = ACTIONS(153),
    [anon_sym_md] = ACTIONS(153),
    [anon_sym_move] = ACTIONS(153),
    [anon_sym_path] = ACTIONS(153),
    [anon_sym_prompt] = ACTIONS(153),
    [anon_sym_rd] = ACTIONS(153),
    [anon_sym_ren] = ACTIONS(153),
    [anon_sym_start] = ACTIONS(153),
    [anon_sym_time] = ACTIONS(153),
    [anon_sym_type] = ACTIONS(153),
    [anon_sym_vol] = ACTIONS(153),
    [anon_sym_attrib] = ACTIONS(153),
    [anon_sym_chkdsk] = ACTIONS(153),
    [anon_sym_choice] = ACTIONS(153),
    [anon_sym_cmd] = ACTIONS(153),
    [anon_sym_comp] = ACTIONS(153),
    [anon_sym_convert] = ACTIONS(153),
    [anon_sym_driverquery] = ACTIONS(153),
    [anon_sym_expand] = ACTIONS(153),
    [anon_sym_find] = ACTIONS(153),
    [anon_sym_format] = ACTIONS(153),
    [anon_sym_help] = ACTIONS(153),
    [anon_sym_ipconfig] = ACTIONS(153),
    [anon_sym_label] = ACTIONS(153),
    [anon_sym_net] = ACTIONS(153),
    [anon_sym_ping] = ACTIONS(153),
    [anon_sym_shutdown] = ACTIONS(153),
    [anon_sym_sort] = ACTIONS(153),
    [anon_sym_subst] = ACTIONS(153),
    [anon_sym_systeminfo] = ACTIONS(153),
    [anon_sym_taskkill] = ACTIONS(153),
    [anon_sym_tasklist] = ACTIONS(153),
    [anon_sym_xcopy] = ACTIONS(153),
    [anon_sym_tree] = ACTIONS(153),
    [anon_sym_fc] = ACTIONS(153),
    [anon_sym_diskpart] = ACTIONS(153),
    [anon_sym_title] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(157),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_number,
    STATE(22), 2,
      sym_variable_reference,
      sym_string,
  [14] = 4,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_number,
    STATE(19), 2,
      sym_variable_reference,
      sym_string,
  [28] = 4,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_number,
    STATE(23), 2,
      sym_variable_reference,
      sym_string,
  [42] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_string_token1,
    STATE(30), 1,
      aux_sym_string_repeat1,
  [52] = 3,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_string_token1,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [62] = 3,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_string_token1,
    STATE(29), 1,
      aux_sym_string_repeat1,
  [72] = 2,
    ACTIONS(73), 1,
      anon_sym_SLASHA,
    ACTIONS(178), 1,
      sym_identifier,
  [79] = 2,
    ACTIONS(61), 1,
      anon_sym_SLASHA,
    ACTIONS(180), 1,
      sym_identifier,
  [86] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [90] = 1,
    ACTIONS(184), 1,
      anon_sym_EQ,
  [94] = 1,
    ACTIONS(186), 1,
      anon_sym_PERCENT,
  [98] = 1,
    ACTIONS(188), 1,
      sym_identifier,
  [102] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [106] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [110] = 1,
    ACTIONS(194), 1,
      aux_sym_comment_token1,
  [114] = 1,
    ACTIONS(196), 1,
      aux_sym_comment_token1,
  [118] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [122] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [126] = 1,
    ACTIONS(202), 1,
      sym_identifier,
  [130] = 1,
    ACTIONS(180), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 14,
  [SMALL_STATE(27)] = 28,
  [SMALL_STATE(28)] = 42,
  [SMALL_STATE(29)] = 52,
  [SMALL_STATE(30)] = 62,
  [SMALL_STATE(31)] = 72,
  [SMALL_STATE(32)] = 79,
  [SMALL_STATE(33)] = 86,
  [SMALL_STATE(34)] = 90,
  [SMALL_STATE(35)] = 94,
  [SMALL_STATE(36)] = 98,
  [SMALL_STATE(37)] = 102,
  [SMALL_STATE(38)] = 106,
  [SMALL_STATE(39)] = 110,
  [SMALL_STATE(40)] = 114,
  [SMALL_STATE(41)] = 118,
  [SMALL_STATE(42)] = 122,
  [SMALL_STATE(43)] = 126,
  [SMALL_STATE(44)] = 130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echooff, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echooff, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_echooff, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_echooff, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_reference, 3, 0, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_reference, 3, 0, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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

TS_PUBLIC const TSLanguage *tree_sitter_batch(void) {
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
