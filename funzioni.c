#include "stack.h"



int main (void)
{
  char str[]="mi chiamo joanna kelly!";
  int i;
  stack s;

  inizializza(&s);
  printf("la stringa contiene %s \n",str);
  for (i=0;str[i]!='\0';i++)
  {
    if (!full(&s))
    {
      push(str[i],&s);
    }
  }
  printf("dallo stack : \n");
  while(!empty(&s))
  {
    putchar(pop(&s));
  }
  putchar('\n');

  return 0;

}
