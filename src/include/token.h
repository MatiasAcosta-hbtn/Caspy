#ifndef TAC_TOKEN_H
#define TAC_TOKEN_H
typedef struct TOKEN_STRUCT
{
 char * value;
 enum
 {
  TOKEN_ID,
  TOKEN_EQUALS,
  TOKEN_LPAREN,
  TOKEN_RPAREN,
  TOKEN_LBRACE,
  TOKEN_RBRACE,
  TOKEN_COLON,
  TOKEN_COMMAL,
  TOKEN_LT,
  TOKEN_GT,
  TOKEN_ARROW_RIGHT,
  TOKEN_INT,
  TOKEN,SEMI
 } type;
} token_T;
token_T *init_token(char *value, int type);

#endif
