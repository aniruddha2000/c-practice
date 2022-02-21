/*
  pass structs in functions
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
  double x, y;
} Point;

void getMiddlePoint(const Point* a, Point* b, Point* out) {
  out->x = (a->x + b->x) / 2;
  out->y = (a->y + b->y) / 2;
}

int main(int argc, char const* argv[]) {
  Point p1 = {
      .x = 1,
      .y = 1};
  Point p2 = {
      .x = 3,
      .y = 2};

  Point middle;
  getMiddlePoint(&p1, &p2, &middle);

  printf("%lf %lf\n", middle.x, middle.y);

  return 0;
}
