#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

struct word {
    char *word_name;
    int word_type;
    struct word *next;
};

struct word *word_list = NULL;

int add_word(int type, const char *word) {
    struct word *wp = word_list;

    while (wp) {
        if (strcmp(wp->word_name, word) == 0) {
            return 0;
        }

        wp = wp->next;
    }

    wp = (struct word *)malloc(sizeof(struct word));

    if (!wp) {
        fprintf(stderr, "Memory Allocation failed.\n");
        return 0;
    }

    wp->word_name = strdup(word);

    if (!wp->word_name) {
        fprintf(stderr, "String duplication failed\n");
        free(wp);
        return 0; 
    }

    wp->word_type = type;
    wp->next = word_list;
    word_list = wp;

    return 1;
}

int lookup_word(const char *word) {
    struct word *wp = word_list;

    while (wp) {
        if (strcmp(wp->word_name, word) == 0) {
            return wp->word_type;
        }
        
        wp = wp->next;
    }

    return 0;
}