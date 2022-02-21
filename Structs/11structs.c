/*
  Infinite loop through integer overflow
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int arr[256];
  for (unsigned char i = 0; i < 256; i++) {
    arr[i] = -5;
    printf("%d ", arr[i]);
  }

  return 0;
}
