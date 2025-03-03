%{
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>

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
    unsigned fileName;
    char *progName;

    static char *unput_buffer = NULL;
    static size_t unput_buffer_size = 0;
    static size_t unput_buffer_pos = 0;
%}

%s FNAME

%%
[ ]+
<FNAME>

-h |
"-?" |
-help { printf("Usage is:  %s [-help | -h | -? ] [-verbose | -v][(-file|-f) filename\n]", progName); }

-v |
-verbose { printf("Verbose mode is on\n"); verbose = 1; }

-f |
-file { BEGIN FNAME; fileName = 1; }

<FNAME>[^ ]+ { printf("Used file %s\n", yytext); BEGIN 0; fileName = 2; }
%%

char **targv;
char **arglim;

int main(int argc, char **argv) {
    progName = *argv;
    targv = argv + 1;
    arglim = argv + argc;
    
    yylex();
    
    if (fileName < 2) {
        printf("No file provided\n");
    }

    free(unput_buffer);

    return 0;
}

static unsigned offset = 0;

int custom_input(void) {
    char c; 
    
    if (unput_buffer_pos > 0) { 
        return unput_buffer[--unput_buffer_pos]; 
    } 
    
    if (targv >= arglim) { 
        return 0; 
    }

    if ((c = targv[0][offset++]) != '\0') { 
        return c; 
    } 

    targv++; 
    offset = 0; 
    return ' '; 
} 

void custom_unput(int ch) { 
    if (ch == 0) { 
        return; 
    } 

    if (unput_buffer_pos >= unput_buffer_size) { 
        unput_buffer_size = unput_buffer_size == 0 ? 16 : unput_buffer_size * 2; 
        unput_buffer = (char *)realloc(unput_buffer, unput_buffer_size); 
        
        if (unput_buffer == NULL) { 
            fprintf(stderr, "Memory allocation failed in aunput\n"); 
            exit(EXIT_FAILURE); 
        } 
    } 
    unput_buffer[unput_buffer_pos++] = (char) ch; 
}

int yywrap() {
    return 1;
}

void unput(int ch) {
    custom_unput(ch);
}
