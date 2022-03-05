/*
    Compare strings in C
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str1[] = "abcd1";
  char str2[] = "abcd4";

  printf("%d\n", memcmp(str1, str2, 5));
  return 0;
}
