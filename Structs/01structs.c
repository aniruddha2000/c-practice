/*
  typedef in c
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
  double x, y;
} Point;

int main(int argc, char const *argv[]) {
  Point p;
  p.x = 0.24;
  p.y = 0.78;
  printf("%lf %lf", p.x, p.y);

  return 0;
}
