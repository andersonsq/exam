#include <stdlib.h>
#include <stdio.h>

// Structure defining a stack
typedef struct
{
  int elements[100];
  int top;
  //int size;
} stack;

struct stack* new_stack();