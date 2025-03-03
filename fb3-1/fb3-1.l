%{
    #include "fb3-1.h"
    #include "fb3-1.tab.h"
%}

%option noyywrap nodefault yylineno

EXP ([Ee][-+]?[0-9]+)

%%
"+"  { return '+'; }
"-"  { return '-'; }
"*"  { return '*'; }
"/"  { return '/'; }
"|"  { return '|'; }
"("  { return '('; }
")"  { return ')'; }

[0-9]+"."[0-9]*{EXP}? |
"."?[0-9]+{EXP}? { 
    yylval.d = atof(yytext); 
    return NUMBER; 
}
\n { return EOL; }
"//".*
[ \t] { }
. { yyerror("Not recognized character %c\n", *yytext); }
%%