#include "stack.h"



void inizializza(stack *stk)
{
  stk->cnt=0;
  stk->top=NULL;
}

void push (char d,stack *stk)
{
  elem *p;
  p=malloc(sizeof(elem));
  p->d=d;
  p->next=stk->top;
  stk->top=p;
  stk->cnt++;
}



char pop(stack *stk)
{
  char r;
  elem *p;

  r=stk->top->d;
  p=stk->top;
  stk->top=stk->top->next;
  stk->cnt--;
  free(p);
  return r;
}


char top(stack *stk)
{
  char r;
  r=stk->top->d;
  return r;
}
boolean empty(stack *stk)
{
  int c;
  c=stk->cnt;
  return ((boolean) (c==EMPTY));
}
boolean full(stack *stk)
{
int c;
c=stk->cnt;
return ((boolean) (c==FULL));
}
