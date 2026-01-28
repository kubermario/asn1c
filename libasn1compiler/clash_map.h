#ifndef CLASH_MAP_H
#define CLASH_MAP_H

#include <stdio.h>

// Simple structure for a clash map entry
typedef struct clash_map_entry_s {
    char type_name[128];
    char module_name[128];
} clash_map_entry_t;

// Loads the map file, returns number of entries, -1 on error
int load_clash_map(const char *filename, clash_map_entry_t **entries_out);

// Finds the preferred module for a type, returns NULL if not found
const char *find_preferred_module(const clash_map_entry_t *entries, int count, const char *type_name);

#endif // CLASH_MAP_H
