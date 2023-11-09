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

char* cws_concat(const char* str, const char* str2) {
  unsigned long str_len = cws_str_len(str);
  unsigned long str2_len = cws_str_len(str2);
  unsigned long buf_len  = str_len + str2_len;

  char* buf = (char*) malloc(buf_len + 1);
  buf[buf_len + 1] = '\0';

  for (unsigned long i = 0; i < str_len; ++i) 
    buf[i] = str[i];

  for (unsigned long i = 0; i < str2_len; ++i)
    buf[i + str_len] = str2[i];
  
  return buf;
}

unsigned int cws_eq(const char* str1, const char* str2) {
  if (str1 == str2) return 1; // NULL?
  unsigned long len = cws_str_len(str1);

  for (unsigned long i = 0; i < len; ++i) {
    if (str1[i] != str2[i]) return 0;
  }

  return 1;
}

char cws_at(const char* str, unsigned long pos) {
  if (str == NULL) return '\0';
  return str[pos];
}
