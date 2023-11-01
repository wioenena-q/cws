#include <stdio.h>
#include "include/cws.h"

int main(void) {
  unsigned long len = cws_str_len("Hello World");
  printf("%lu\n", len);
}
