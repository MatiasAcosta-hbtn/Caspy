#ifndef TAC_LEXER_H
#define TAC_LEXER_H
#include "token.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct LEXER_STRUCT
{
 char *src;
 char c;
 unsigned int i;
} lexer_T;
lexer_T *init_lexer(char *src);
void lexer_advance(lexer_T *lexer);
void lexer_skip_whitespace(lexer_T *lexer);
token_T *lexer_parse_id(lexer_T *lexer);
token_T *lexer_next_token(lexer_T *lexer);
#endif