#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


typedef int boolean;
#define false 0
#define true 1
#define EMPTY 0
#define FULL 100

struct elem {
  char d;
  struct elem *next;
} ;


typedef struct elem elem;



struct stack {
int cnt;
elem *top;

};


typedef struct stack stack;



void inizializza(stack *stk);
void push (char d,stack *stk);
char pop(stack *stk);
char top(stack *stk);
boolean empty(stack *stk);
boolean full(stack *stk);
