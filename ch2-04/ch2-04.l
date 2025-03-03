%{
    #include <stdio.h>
    #include <stdlib.h>

    unsigned verbose;
    char *progName;
%}

%option noyywrap

%%
-h | 
"-?" | 
-help { printf("usage is: %s [-help | -h | -? ] [-verbose | -v] [(-file| -f) filename]\n", progName); }

-v |
-verbose { printf("Verbose mode is on\n"); verbose = 1; }

%%


int main(int argc, char **argv) {
    progName = *argv;
    yylex();
    return 0;
}
