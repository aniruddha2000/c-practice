/*
  unions in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union Example {
  long long num;
  char bytes[8];
} Example;

typedef union Data {
  int i;
  float f;
  char str[20];
} Data;

int main(int argc, char const *argv[]) {
  Example e;
  e.num = 17;
  printf("%lld\n", e.num);

  printf("Memory size of the union is %ld\n", sizeof(Example));

  for (int i = 0; i < 8; i++) {
    printf("%02hhx ", e.bytes[i]);
  }
  printf("\n");

  Data data;

  // data.i = 10;
  // data.f = 220.5;
  // strcpy(data.str, "C programming");

  // printf("data.i : %d\n", data.i);
  // printf("data.f : %f\n", data.f);
  // printf("data.str : %s\n", data.str);

  data.i = 10;
  printf("data.i : %d\n", data.i);

  data.f = 220.5;
  printf("data.f : %f\n", data.f);

  strcpy(data.str, "C Programming");
  printf("data.str : %s\n", data.str);

  return 0;
}
