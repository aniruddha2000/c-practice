/*
  Declare an array of string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char array[3][50] = {
    "Hello", "test", "123"
  };

  printf("Srings are: \n%s\n%s\n%s\n", array[0], array[1], array[2]);

  return 0;
}
