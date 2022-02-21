/*
  interger type conversion
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  // 2 byte 2^14
  short int x = 16384;

  // 4 byte 2^30
  int y = 1073741824;

  printf("%hd %d\n", x, y);

  return 0;
}
