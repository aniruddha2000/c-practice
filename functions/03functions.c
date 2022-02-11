/*
  function pointers
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int a, int b) {
  return a + b;
}

int prod(int a, int b) {
  return a * b;
}

void shouldNotChange(int (*operation)(int, int)) {
  srand(time(NULL));
  int a = rand() % 10;
  int b = rand() % 10;
  printf("The result of the opration %d & %d is %d\n", a, b, operation(a, b));
}

int main(int argc, char const* argv[]) {
  shouldNotChange(&sum);
  shouldNotChange(&prod);
  return 0;
}
