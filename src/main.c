#include <stdio.h>
#include "include/cws.h"
#include <assert.h>
#include <string.h>

void test_cws_str_len();
void test_cws_char_index_of();
void test_cws_index_of();
void test_cws_char_to_ascii_code();
void test_cws_ascii_code_to_char();
void test_cws_concat();
void test_cws_eq();
void test_cws_at();
void test_cws_ends_with();
void test_cws_to_uppercase();
void test_cws_to_lowercase();

int main(void) {
  test_cws_str_len();
  test_cws_char_index_of();
  test_cws_index_of();
  test_cws_char_to_ascii_code();
  test_cws_ascii_code_to_char();
  test_cws_concat();
  test_cws_eq();
  test_cws_at();
}

void test_cws_str_len() {
  const char* str= "Hello World!";
  unsigned long len = cws_str_len(str);
  assert(len == strlen(str));
  assert(cws_str_len(NULL) == 0);
}

void test_cws_char_index_of() {
  const char* str = "Hello World!";
  assert(cws_char_index_of(str, 'o') == 4);
  assert(cws_char_index_of(str, 'H') == 0);
  assert(cws_char_index_of(str, 'd') == 10);
  assert(cws_char_index_of(str, '!') == 11);
  assert(cws_char_index_of(NULL, '!') == -1);
}

void test_cws_index_of() {
  const char* str = "Hello World!";
  assert(cws_index_of(str, "Hello") == 0);
  assert(cws_index_of(str, "llo") == 2);
  assert(cws_index_of(str, "World!") == 6);
  assert(cws_index_of(str, "???") == -1);
  assert(cws_index_of(NULL, "World!") == -1);
}

void test_cws_char_to_ascii_code() {
  assert(CWS_CHAR_TO_ASCII_CODE('A') == 65);
}

void test_cws_ascii_code_to_char() {
  assert(CWS_ASCII_CODE_TO_CHAR(65) == 'A');
}

void test_cws_concat() {
  assert(cws_eq(cws_concat("Hello", " World!"), "Hello World!") == 1);
}

void test_cws_eq() {
  assert(cws_eq(NULL, NULL) == 1);
  assert(cws_eq("Hello", "World") == 0);
  assert(cws_eq("Hello", "Hello") == 1);
}

void test_cws_at() {
  assert(cws_at(NULL, 1) == 0);
  assert(cws_at("Hello World!", 1) == 'e');
  assert(cws_at("Hello World!", cws_char_index_of("Hello World!", '!')) == '!');
}

void test_cws_ends_with() {
  assert(cws_ends_with(NULL, NULL) == 0);
  assert(cws_ends_with("Hello World!", "World!") == 1);
  assert(cws_ends_with("Hello World!", "Hello") == 0);
}

void test_cws_to_uppercase() {
  assert(cws_to_uppercase(NULL) == NULL);
  assert(cws_eq(cws_to_uppercase("Hello World!"), "HELLO WORLD!") == 1);
}
void test_cws_to_lowercase() {
  assert(cws_to_lowercase(NULL) == NULL);
  assert(cws_eq(cws_to_lowercase("HELLO WORLD!"), "hello world!") == 1);
}
