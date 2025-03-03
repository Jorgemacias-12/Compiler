%{
    #include <conio.h>
    #include <stdio.h>
    #include <string.h>
    
    int chars = 0;
    int words = 0;
    int lines = 1;
%}

%%
[a-zA-Z] { words++; chars += strlen(yytext); }
\n { chars++; lines++; }
. { chars++; }
%%

int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    yylex();

    printf("+--------------------------------------------------------------------------+\n");
    printf("| Lines %d       |  Words: %8d   | Chars: %4d                        |\n", lines, words, chars);
    printf("+--------------------------------------------------------------------------+\n");

    return 0;
}