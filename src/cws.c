#include "include/cws.h"
#include <stdio.h>

unsigned long cws_str_len(const char* str) {
  if (str == NULL) return 0;

  unsigned long length = 0;
  while(str[++length] != '\0');

  return length;
}

long cws_char_index_of(const char* str, const char c) {
  if (str == NULL) return -1;
  
  long i = 0;
  
  while (1) {
    char current = str[i];
    if (current == '\0') return -1;
    if (current == c) return i;

    ++i;
  }

  return -1;
}

long cws_index_of(const char* str, const char* s_str) {
  if (str == NULL) return -1;
  unsigned long str_len = cws_str_len(str);
  unsigned long s_len = cws_str_len(s_str);
  for (unsigned long i = 0; i < str_len; ++i) {
    unsigned long j = 0;
    for (j = 0; j < s_len; ++j) {
      if (str[i + j] != s_str[j]) break;
    }

    if (j == s_len) return i;
  }

  return -1;
}
