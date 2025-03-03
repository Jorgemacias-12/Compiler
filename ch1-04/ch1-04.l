%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    enum {
        LOOKUP = 0,
        VERB,
        ADJ,
        ADV,
        NOUN,
        PREP,
        PRON,
        CONJ
    };

    int state = LOOKUP;
    int add_word(int type, const char *word);
    int lookup_word(const char *word);
%}

%%

^[ \t]*\n   { state = LOOKUP; }

verb   { state = VERB; }
adj    { state = ADJ; }
adv    { state = ADV; }
noun   { state = NOUN; }
prep   { state = PREP; }
pron   { state = PRON; }
conj   { state = CONJ; }

[a-zA-Z]+ {
    if (state != LOOKUP) {
        add_word(state, yytext); 
    } else {
        int type = lookup_word(yytext);
        switch (type) {
            case VERB: printf("%s: verb\n", yytext); break;
            case ADJ: printf("%s: adjective\n", yytext); break;
            case ADV: printf("%s: adverb\n", yytext); break;
            case NOUN: printf("%s: noun\n", yytext); break;
            case PREP: printf("%s: preposition\n", yytext); break;
            case PRON: printf("%s: pronoun\n", yytext); break;
            case CONJ: printf("%s: conjunction\n", yytext); break;
            default:
                printf("%s: don't recognize\n", yytext);
                break;
        }
    }
}

.    ;

%%

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lookup_word(const char *word);
void print_word_list();
void free_word_list();

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
        fprintf(stderr, "Memory allocation failed\n");
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
    return LOOKUP;
}

void print_word_list() {
    struct word *wp = word_list;
    while (wp) {
        wp = wp->next;
    }
}

void free_word_list() {
    struct word *wp = word_list;
    while (wp) {
        struct word *next = wp->next;
        free(wp->word_name);
        free(wp);
        wp = next;
    }
}

int main() {
    word_list = NULL;
    yylex();
    free_word_list();
    return 0;
}

int yywrap() {
    return 1;
}