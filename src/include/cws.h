#ifndef CWS_H
#define CWS_H
#ifndef NULL
#define NULL (void*)0
#endif
#include <stdlib.h>

unsigned long cws_str_len(const char* str);
long cws_char_index_of(const char* str, const char c);
long cws_index_of(const char* str, const char* s_str);
#endif
