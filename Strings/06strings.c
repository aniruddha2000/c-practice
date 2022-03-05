/*
  Check if a character is a digit
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char c = '1';
  if (c >= 48 && c <= 57) {
    printf("This is a digit\n");
  } else {
    printf("This is not a digit\n");
  }

  printf("%c\n", c);

  return 0;
}
