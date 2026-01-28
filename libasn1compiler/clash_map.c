#include "clash_map.h"
#include <stdlib.h>
#include <string.h>

int load_clash_map(const char *filename, clash_map_entry_t **entries_out) {
    FILE *f = fopen(filename, "r");
    if (!f) return -1;
    int cap = 32, count = 0;
    clash_map_entry_t *entries = malloc(sizeof(clash_map_entry_t) * cap);
    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char *hash = strchr(line, '#');
        if (hash) *hash = '\0'; // Remove comments
        char *colon = strchr(line, ':');
        if (!colon) continue;
        *colon = '\0';
        char *type = line;
        char *module = colon + 1;
        // Trim whitespace
        while (*type == ' ' || *type == '\t') type++;
        while (*module == ' ' || *module == '\t') module++;
        char *end = module + strlen(module) - 1;
        while (end > module && (*end == '\n' || *end == '\r' || *end == ' ' || *end == '\t')) *end-- = '\0';
        end = type + strlen(type) - 1;
        while (end > type && (*end == ' ' || *end == '\t')) *end-- = '\0';
        if (!*type || !*module) continue;
        if (count >= cap) {
            cap *= 2;
            entries = realloc(entries, sizeof(clash_map_entry_t) * cap);
        }
        strncpy(entries[count].type_name, type, sizeof(entries[count].type_name)-1);
        strncpy(entries[count].module_name, module, sizeof(entries[count].module_name)-1);
        entries[count].type_name[sizeof(entries[count].type_name)-1] = '\0';
        entries[count].module_name[sizeof(entries[count].module_name)-1] = '\0';
        count++;
    }
    fclose(f);
    *entries_out = entries;
    return count;
}

const char *find_preferred_module(const clash_map_entry_t *entries, int count, const char *type_name) {
    for (int i = 0; i < count; ++i) {
        if (strcmp(entries[i].type_name, type_name) == 0) {
            return entries[i].module_name;
        }
    }
    return NULL;
}
