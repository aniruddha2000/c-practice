/*
    Pointer assignment vs strcpy in C
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str;
int num;

void create() {
  num = 100;
  str = malloc(sizeof(char) * num);
}

void process() {
  char example[100] = "this is a test";
  str = example;
  // strcpy(str, example);
  printf("%s\n", str);
}

int main(int argc, char const *argv[]) {
  create();
  process();
  free(str);
  return 0;
}
