%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

int custom_input(void);

#undef YY_INPUT
#define YY_INPUT(buf, result, max_size) \
{ \
    int c = custom_input(); \
    result = (c == 0) ? YY_NULL : (buf[0] = c, 1); \
}

#undef unput
void unput(int ch);
unsigned verbose;
char *progName;
%}

%%
-h |
"-?" |
-help { printf("Usage: %s [-help | -h | -?] [-verbose| -v] [(file | -f)] filename\n", progName); }
-v |
-verbose { printf("Verbose mode is on\n"); verbose = 1; }
%%

char **targv;
char **argvlim;

int main(int argc, char **argv) {
    progName = *argv;
    targv = argv + 1;
    argvlim = argv + argc;
    yylex();
}

static unsigned offset = 0;

int custom_input(void) {
    char c;

    if (targv >= argvlim) {
        return (0);
    }

    if ((c = targv[0][offset++]) != '\0') {
        return (c);
    }

    targv++;
    offset = 0;
    return (' ');
}

void custom_unput(int ch) {
    if (ch == 0) {
        return;
    }

    if (offset) {
        offset--;
        return;
    }

    targv--;
    offset = strlen(*targv);
}

int yywrap() {
    return 1;
}