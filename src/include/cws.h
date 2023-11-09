#ifndef CWS_H
#define CWS_H
#ifndef NULL
#define NULL (void*)0
#endif
#include <stdlib.h>


#define CWS_CHAR_TO_ASCII_CODE(c) (int) c
#define CWS_ASCII_CODE_TO_CHAR(c) (char) c

unsigned long cws_str_len(const char* str);
long cws_char_index_of(const char* str, const char c);
long cws_index_of(const char* str, const char* s_str);
char* cws_concat(const char* str, const char* str2);
unsigned int cws_eq(const char* str1, const char* str2);
char cws_at(const char* str, unsigned long pos);
#endif
