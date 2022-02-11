/*
  Functions in C
*/

#include <stdio.h>
#include <stdlib.h>

void fibo(int number) {
  int n1, n2, x;
  n1 = 0, n2 = 1;
  for (int i = 0; i < number; i++) {
    x = n2;
    n2 = n1 + n2;
    n1 = x;
  }
  printf("%dth number is %d\n", number, n2);
}

int main(int argc, char const *argv[]) {
  fibo(8);
  fibo(10);

  return 0;
}
