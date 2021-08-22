flags = []
started_flags = 0
text_print = ''
i_copy = ''
with open("include/constants/flags.h") as flag_file:
    for i, line in enumerate(flag_file.readlines(), 0):
        if i > 4:
            split = line.split(" ")
            if len(split) < 2:
                continue
            elif split[1] == "FLAGS_COUNT":
                break
            flags.append(split[1])
for i in flags:
    text_print += "static const u8 gDebugText_" + i + '[] = _("' + i.replace("FLAG_", "").title().replace("_", "-") + '");\n'
text_print += '\nstatic const u8 * const sDebug_FlagStrings[] =\n{\n'
for i in flags:
    i_copy = i
    if "HIDDEN_ITEM" in i:
        i_copy = '1000 + ' + i
    text_print += '\t[' + i_copy + '] = gDebugText_' + i + ',\n'
text_print += '}'
with open("src/data/flag_strings.c", "w", encoding="utf-8") as outFile:
    outFile.write(str(text_print))