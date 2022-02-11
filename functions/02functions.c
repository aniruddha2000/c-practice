/*
  Return multiple value in functions
*/

#include <stdio.h>
#include <stdlib.h>

int sumAndProduct(int a, int b, int* sum, int* prod) {
  *sum = a + b;
  *prod = a * b;
}

int main(int argc, char const* argv[]) {
  int a = 2, b = 3, sum, prod;
  sumAndProduct(a, b, &sum, &prod);
  printf("Sum : %d, Prod : %d\n", sum, prod);
  printf("Sum : %d, Prod : %d\n", *(&sum), *(&prod));

  return 0;
}
