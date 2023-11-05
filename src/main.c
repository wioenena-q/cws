#include <stdio.h>
#include "include/cws.h"
#include <assert.h>
#include <string.h>

void test_cws_str_len();
void test_cws_char_index_of();

int main(void) {
  test_cws_str_len();
}

void test_cws_str_len() {
  const char* str= "Hello World!";
  unsigned long len = cws_str_len(str);
  assert(len == strlen(str));
}

void test_cws_char_index_of() {
  const char* str = "Hello World!";
  long index = cws_char_index_of(str, 'o');
  assert(index == 4);
}
