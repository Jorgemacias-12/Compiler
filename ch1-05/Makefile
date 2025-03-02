CC=gcc
FLEX=flex
BISON=yacc
PARSER=ch1-05.y
LEXER=ch1-05.l
SYMBOL_TABLE=symbol_table.c
EXECUTABLE=ch1-05

all: $(EXECUTABLE)

$(EXECUTABLE): lex.yy.c ch1-05.tab.c $(SYMBOL_TABLE)
	$(CC) -o $(EXECUTABLE) lex.yy.c ch1-05.tab.c $(SYMBOL_TABLE) -lm -mconsole

lex.yy.c: $(LEXER)
	$(FLEX) $(LEXER)

ch1-05.tab.c ch1-05.tab.h: $(PARSER)
	$(BISON) -d $(PARSER)

clean:
	rm -f lex.yy.c ch1-05.tab.c ch1-05.tab.h $(EXECUTABLE)
