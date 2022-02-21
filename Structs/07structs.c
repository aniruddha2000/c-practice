/*
  Enumeration in C
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum Datatype {
  STACK_INT,
  STACK_CHAR,
  STACK_UINT64,
} Datatype;

typedef struct Stack {
  Datatype type;
  size_t size;
  void* data;
  void* top;
} Stack;

Stack stackCreate(size_t size, Datatype type) {
  size_t effectiveSize = 0;
  if (type == STACK_CHAR) {
    effectiveSize = size * sizeof(char);
  } else if (type == STACK_INT) {
    effectiveSize = size * sizeof(int);
  } else if (type == STACK_UINT64) {
    effectiveSize = size * sizeof(unsigned long long);
  }

  Stack s = {
      .type = type,
      .size = size,
      .data = malloc(effectiveSize),
      .top = NULL,
  };

  return s;
}

void stackDelete(Stack* s) {
  free(s->data);
  s->data = NULL;
}

int main(int argc, char const* argv[]) {
  Stack s = stackCreate(10, STACK_INT);
  int arr[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};

  for (int i = 0; i < 10; i++) {
    ((int*)s.data)[i] = arr[i];
    s.top = ((int*)s.data) + i;
  }

  stackDelete(&s);

  return 0;
}
