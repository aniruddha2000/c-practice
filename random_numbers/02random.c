/*
  Random number generate in ranges
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_interval(int a, int b) {
  return rand() % (b - a) + a;
}

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  for (int i = 0; i < 4; i++) {
    printf("%d\n", rand() % 100);
  }
  printf("rand 50 - 150\n");
  for (int i = 0; i < 4; i++) {
    printf("%d\n", rand() % 100 + 50);
  }
  printf("rand 5 - 20\n");
  for (int i = 0; i < 4; i++) {
    printf("%d\n", rand_interval(5, 20));
  }

  return 0;
}
