CC=gcc
FLEX=flex
BISON=yacc
PARSER=fb3-1.y
LEXER=fb3-1.l
EXECUTABLE=fb3-1

all: $(EXECUTABLE)

$(EXECUTABLE): lex.yy.c fb3-1.tab.c
	$(CC) -o $(EXECUTABLE) lex.yy.c fb3-1.tab.c -lm -mconsole

lex.yy.c: $(LEXER)
	$(FLEX) $(LEXER)

fb3-1.tab.c fb3-1.tab.h: $(PARSER)
	$(BISON) -d $(PARSER)

clean:
	rm -rf lex.yy.c fb3-1.tab.c fb3-1.tab.h $(EXECUTABLE)