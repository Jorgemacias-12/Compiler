%{
#include <stdio.h>
%}

%%

is |
am |
are |
were |
was |
be |
being |
been |
do |
does |
did |
will |
would |
should |
can |
could |
has |
have |
had |
go {
    printf("%s: is a verb\n", yytext);
}

very |
sharply |
gently |
quietly |
calmly |
angrily {
    printf("%s: is an adverb\n", yytext);
}

to |
from |
behind |
below |
between {
    printf("%s: is a preposition\n", yytext);
}

if |
then |
and |
but |
or {
    printf("%s: is a conjunction\n", yytext);
}

their |
our |
your |
his |
her |
its {
    printf("%s: is an adjective\n", yytext);
}

I |
you |
he |
she |
we |
they {
    printf("%s: is a pronoun\n", yytext);
}

[a-zA-Z]+ {
    printf("%s: don't recognize, might be a noun\n", yytext);
}

[\n] {
    ECHO;
}

%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
