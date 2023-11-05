#include "include/cws.h"

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
