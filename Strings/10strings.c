/*
  How to split strings
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str[] = "Let's break the string";

  char *piece = strtok(str, " ");

  while (piece != NULL) {
    printf("%s\n", piece);
    piece = strtok(NULL, " ");
  }

  return 0;
}
