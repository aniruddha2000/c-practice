/*
  Return a string from a function
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *getString(char *str) {
  strcpy(str, "test");
}

int main(int argc, char const *argv[]) {
  char s[50];
  getString(s);
  s[0] = 'p';
  printf("%s\n", s);

  return 0;
}
