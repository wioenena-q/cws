#include "include/cws.h"

unsigned long cws_str_len(const char* str) {
  if (str == NULL) return 0;

  unsigned long length = 0;
  while(str[++length] != '\0');

  return length;
}
