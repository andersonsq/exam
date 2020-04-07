#include <stdlib.h>
#include <stdio.h>
#include ”stack.h”

#define STACK_SIZE 10

// Structure defining a stack

struct stack
{
char elements[STACK_SIZE] ;
int top;
};

int main ( )
{
struct stack* st = newstack( );
push(’H’, i );
push(’e’, i);
push(’l’, i);

push(’l’, i);
push (’o’, i);
print(st);
reverseprint(st);
}
