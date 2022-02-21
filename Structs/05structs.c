/*
  Anonymous unions
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct CustomFloat {
  bool isExtended;
  union {
    float val;
    double valExtended;
  };
} CustomFloat;

int main(int argc, char const *argv[]) {
  CustomFloat cf, cf2;

  cf.isExtended = false;
  cf.val = 12.5f;

  cf2.isExtended = true;
  cf2.valExtended = 0.25;

  printf("%f %lf\n", cf.val, cf2.valExtended);
  printf("%p %p\n", &cf.val, &cf.valExtended);
  printf("%llu\n", sizeof(CustomFloat));

  return 0;
}
