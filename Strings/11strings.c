/*
    How to find a word inside a sentence
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char str[] = "I am from IIT Haldirams";
  char to_find[] = "IIT";
  if (strstr(str, to_find)) {
    printf("The word has been found\n");
  } else {
    printf("The word has not been found\n");
  }

  return 0;
}
