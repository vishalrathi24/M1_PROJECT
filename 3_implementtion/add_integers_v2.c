#include "stdio.h"

)
int add_integers(int a,int b)
{
  int sum=a+b;
 return sum;
}

void test_add_integers();
{
    if (0==add_integers(0,0))
    printf ("add function works\n");
    else
    printf ("add function fails\n");
      
    if(30==add_integers(10,20))
    printf("add function works for positive no./n");
    else
    printf ("add function fails for positive no./n");

    if(-30==add_integers(-10,-20))
    printf ("add function works for negative no./n");
    else
    printf ("add function fails for negative no./n");
    return 0;  
}

