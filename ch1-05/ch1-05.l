%{
    #include "ch1-05.tab.h"
    #include "symbol_table.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define LOOKUP 0

    int state;
%}

%%

\n { state = LOOKUP; }
\.\n { state = LOOKUP; }

^verb { state = VERB; }
^adj { state = ADJECTIVE; }
^adv { state = ADVERB; }
^noun { state = NOUN; }
^prep { state = PREPOSITION; }
^pron { state = PRONOUN; }
^conj { state = CONJUNCTION; }

[a-zA-Z]+ {
    if (state != LOOKUP) {
        add_word(state, yytext);
    } else {
        switch (lookup_word(yytext)) {
            case VERB: return VERB;
            case ADJECTIVE: return ADJECTIVE;
            case ADVERB: return ADVERB;
            case NOUN: return NOUN;
            case PREPOSITION: return PREPOSITION;
            case PRONOUN: return PRONOUN;
            case CONJUNCTION: return CONJUNCTION;
            default:
                printf("%s: don't recognize\n", yytext);
        }
    }
}

%%

int yywrap() {
    return 1;
}
