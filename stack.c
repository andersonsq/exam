#include "stack.h"

struct stack* new_stack()
{
  stack* st = (stack*) malloc(sizeof(stack));
  st->top = -1;
  st->size = 0;
  return st;
}

// Access the top element of stack st
int top(stack* st)
{
  return st->elements[st->top];
}

// Returns the size of stack st
int size(stack* st)
{
  return st->size;
}

// Push the element i on the stack st
void push(stack* st, int i)
{
  st->top++;
  st->size++;
  st->elements[st->top] = i;
}

// Pop the top element from the stack
int pop(stack* st)
{
  int element = top(st);
  st->top--;
  st->size--;
  return element;
}

