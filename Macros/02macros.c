/*
  Macros with parameter
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_VAR(X) \
  printf(#X " is %d at address %p\n", X, &X);

#define SWAP(A, B) A ^= B ^= A ^= B;

int main(int argc, char const *argv[]) {
  // int a = 3;
  // PRINT_VAR(a);
  // PRINT_VAR(5);
  int a = 3, b = 5;
  SWAP(a, b);
  printf("%d %d", a, b);
  return 0;
}
