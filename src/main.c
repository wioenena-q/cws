#include <stdio.h>
#include "include/cws.h"
#include <assert.h>
#include <string.h>

void test_cws_str_len();

int main(void) {
  test_cws_str_len();
}

void test_cws_str_len() {
  const char* str= "Hello World!";
  unsigned long len = cws_str_len(str);
  assert(len == strlen(str));
}
