/*
  Macro use preprocessor stack
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
#define PRODUCT(X, Y) (X) * (Y)

int main(int argc, char const *argv[]) {
  int arr[SIZE];
  for (int i = 0; i < SIZE; i++) {
    arr[i] = i * 2;
  }

  for (int i = 0; i < SIZE; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  printf("%d\n", PRODUCT(9, 8));

  int a = 2, b = 6;
  printf("%d\n", PRODUCT(a + 1, b));

  return 0;
}
