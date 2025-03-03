CC=gcc
FLEX=flex
BISON=yacc
PARSER=fb3-2.y
LEXER=fb3-2.l
EXECUTABLE=fb3-2


all: $(EXECUTABLE)

$(EXECUTABLE): lex.yy.c fb3-2.tab.c
	$(CC) -o $(EXECUTABLE) lex.yy.c fb3-2.tab.c -lm -mconsole

lex.yy.c: $(LEXER)
	$(FLEX) $(LEXER)

fb3-2.tab.c fb3-2.tab.h: $(PARSER)
	$(BISON) -d $(PARSER)

clean:
	rm -rf lex.yy.c fb3-2.tab.c fb3-2.tab.h $(EXECUTABLE)