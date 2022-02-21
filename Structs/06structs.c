/*
  Enumeration in C
*/

#include <stdbool.h>
#include <stdio.h>

typedef enum Color {
  RED,
  BLUE,
} Color;

int main(int argc, char const *argv[]) {
  Color c = BLUE;
  printf("%d\n", c);
  return 0;
}
