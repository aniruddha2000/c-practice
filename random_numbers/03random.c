/*
  Floating point Random number generate
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_double() {
  return ((double)rand()) / ((double)RAND_MAX);
}

double rand_double_interval(double a, double b) {
  return rand_double() * (b - a) + a;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  for (int i = 0; i < 4; i++) {
    printf("%lf\n", rand_double());
  }
  printf("Number between 0 - 5\n");
  for (int i = 0; i < 4; i++) {
    printf("%lf\n", rand_double() * 5);
  }
  printf("Number between 5 - 10\n");
  for (int i = 0; i < 4; i++) {
    printf("%lf\n", rand_double_interval(5, 10));
  }

  return 0;
}
