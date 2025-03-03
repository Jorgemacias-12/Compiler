%option noyywrap
%%
[ \t]+

soy|es|somos|nosotros|ustedes|tu|el { printf("%s: es un pronombre\n", yytext); }

[a-zA-Z]+ { printf("%s: no es un pronombre \n", yytext); }

.|\n { ECHO; }
%%

int main() {
    yylex();
    return 0;
}