%option noyywrap nodefault yylineno

%{
    #include "fb3-2.h"
    #include "fb3-2.tab.h"
    #include <stdio.h>
%}

EXP ([Ee][-+]?[0-9]+)

%%

"+"  { printf("[LEXER] Found: PLUS\n"); return '+'; }
"-"  { printf("[LEXER] Found: MINUS\n"); return '-'; }
"*"  { printf("[LEXER] Found: MULTIPLY\n"); return '*'; }
"/"  { printf("[LEXER] Found: DIVIDE\n"); return '/'; }
"("  { printf("[LEXER] Found: LPAREN\n"); return '('; }
")"  { printf("[LEXER] Found: RPAREN\n"); return ')'; }

"sqrt"  { printf("[LEXER] Found: FUNC SQRT\n"); yylval.fn = B_sqrt; return FUNC; }
"exp"   { printf("[LEXER] Found: FUNC EXP\n"); yylval.fn = B_exp; return FUNC; }
"log"   { printf("[LEXER] Found: FUNC LOG\n"); yylval.fn = B_log; return FUNC; }
"print" { printf("[LEXER] Found: FUNC PRINT\n"); yylval.fn = B_print; return FUNC; }

[a-zA-Z][a-zA-Z0-9]* {
    printf("[LEXER] Found: NAME %s\n", yytext);
    yylval.s = lookup(yytext);
    return NAME;
}

[0-9]+(\.[0-9]*)?{EXP}? {
    printf("[LEXER] Found: NUMBER %s\n", yytext);
    yylval.d = atof(yytext);
    return NUMBER;
}

\n { return EOL; }

. { printf("[LEXER] ERROR: Unrecognized character: %c\n", *yytext); yyerror("Character not identified: %c\n", *yytext); }

%%
