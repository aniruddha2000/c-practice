/*
  Finding a character inside a string
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str[] = "Hello, friend";

  char *result = strchr(str, 'e');
  if (result) {
    printf("char was found\n");
    int pos = result - str;
    printf("PositionL %d\n", pos);
  } else {
    printf("char was not found\n");
  }
  return 0;
}
