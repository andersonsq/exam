#include "stack.h"

stack* new_stack()
{
  stack* st = (stack*) malloc(sizeof(stack));
  st->top = -1;
  st->size = 0;
  return st;
}