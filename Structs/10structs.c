/*
  Integer overflow and underflow
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  unsigned int n = 250;
  for (int i = 0; i < 10; i++) {
    printf("%hhd | %hhX\n", n, n);
    n++;
  }

  return 0;
}
