//
// Created by slahmer on 11/16/19.
//

#ifndef BLASTER_DEFS_H
#define BLASTER_DEFS_H

#include "symbol.h"
#include "generator.h"
#define EXPR 88888

int line_counter;

int yyerror(const char *str);
int yywrap(void);
int yyparse(void);
int yylex(void);
//void yy_flush_buffer(YY_BUFFER_STATE  b);
//#define YY_FLUSH_BUFFER yy_flush_buffer( YY_CURRENT_BUFFER )

extern void yyrestart(FILE * input_file );

//TODO ALL public functions


#endif //BLASTER_DEFS_H
