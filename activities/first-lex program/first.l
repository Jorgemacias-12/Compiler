%option noyywrap
%%
[ \t]+

soy|es|somos|nosotros|ustedes|tu|el { printf("%s: es un pronombre", yytext); }

[a-zA-Z]+ { printf("%s: no es un pronombre ", yytext); }

.|\n { ECHO; }
%%

int main() {
    yylex();
    return 0;
} 