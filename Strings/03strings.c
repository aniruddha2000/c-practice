/*
    How to copy text in C
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char text1[50];
  char text2[] = "hello";
  char text3[] = "Hello world";

  //   strcpy(text1, text3);
  strncpy(text1, text3, strlen(text3) + 1);

  printf("%s\n%s\n%s\n", text1, text2, text3);
  return 0;
}
