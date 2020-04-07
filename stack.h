#include <stdlib.h>
#include <stdio.h>

// Structure defining a stack
typedef struct
{
  int elements[100];
  int top;
  int size;
} stack;

//Q1
stack* new_stack();
//Q2
top(stack* st);
//Q3
size(stack* st);
//Q4
push(stack* st, int i);
//Q5
pop(stack* st);

//2

void print(stack* st);


