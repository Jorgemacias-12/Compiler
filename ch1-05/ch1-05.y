%{
    #include <stdio.h>  
    #include <stdlib.h>
    #include "symbol_table.h"

    int yylex();
    void yyerror(const char *s);
    extern FILE *yyin;
    void load_words(const char *filename);
%}

%token NOUN PRONOUN VERB ADVERB ADJECTIVE PREPOSITION CONJUNCTION

%%

sentence: simple_sentence { printf("Parsed a simple sentence.\n"); }
        | compound_sentence { printf("Parsed a compound sentence.\n"); }
        ;

simple_sentence: subject verb object
              | subject verb object prep_phrase
              ;

compound_sentence: simple_sentence CONJUNCTION simple_sentence
                | compound_sentence CONJUNCTION simple_sentence
                ;

subject: NOUN
       | PRONOUN
       | ADJECTIVE subject
       ;

verb: VERB
    | ADVERB VERB
    | verb VERB
    ;

object: NOUN
       | ADJECTIVE object
       ;

prep_phrase: PREPOSITION NOUN
           ;

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error opening file: %s\n", argv[1]);
            return 1;
        }
    }

    printf("Processing file: %s\n", argv[1]);

    load_words("words.txt");

    yyparse();
    if (yyin) fclose(yyin);
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

void load_words(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Could not open dictionary: %s\n", filename);
        return;
    }

    char word[100];
    int type;
    while (fscanf(file, "%d %s", &type, word) == 2) {
        add_word(type, word);
    }

    fclose(file);
}