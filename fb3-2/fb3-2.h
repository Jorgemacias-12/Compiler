#ifndef FB3_2
#define FB3_2

extern int yylineno;
void yyerror(char *s, ...);

struct symbol {
    char *name;
    double value;
    struct ast *func;
    struct symlist *syms;
};

struct symbol *lookup(char *);

struct symlist {
    struct symbol *sym;
    struct symlist *next;
};

struct symlist *newsymlist(struct symbol *sym, struct symlist *next);
void symlistfree(struct symlist *sl);

enum bifs {
    B_sqrt = 1,
    B_exp,
    B_log,
    B_print,
};

struct ast {
    int nodetype;
    struct ast *l;
    struct ast *r;  // <-- Se agrega este campo para corregir los errores
    enum bifs functype;
};

// Se agrega `struct fncall`
struct fncall {
    int nodetype;
    struct ast *l;
    enum bifs functype;
};

// Se corrige `struct ufncall`
struct ufncall {
    int nodetype;
    struct ast *l;
    struct symbol *s;
};

struct flow {
    int nodetype;
    struct ast *cond;
    struct ast *tl;
    struct ast *el;
};

struct numval  {
    int nodetype;
    double number;
};

struct symref {
    int nodetype;
    struct symbol *s;
};

struct symasgn {
    int nodetype;
    struct symbol *s;
    struct ast *v;
};

struct ast *newast(int nodetype, struct ast *l, struct ast *r); 
struct ast *newcmp(int cmptype, struct ast *l, struct ast *r); 
struct ast *newfunc(int functype, struct ast *l); 
struct ast *newcall(struct symbol *s, struct ast *l); 
struct ast *newref(struct symbol *s); 
struct ast *newasgn(struct symbol *s, struct ast *v); 
struct ast *newnum(double d); 
struct ast *newflow(int nodetype, struct ast *cond, struct ast *tl, struct ast *tr); 
void dodef(struct symbol *name, struct symlist *syms, struct ast *stmts); 
double eval(struct ast *); 
void treefree(struct ast *); 
extern int yylineno; 
void yyerror(char *s, ...); 

#endif
