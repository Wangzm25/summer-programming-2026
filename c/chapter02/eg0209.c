#include<stdio.h>
#include"../zylib/zylib.h"
int main(void)
{
  int n,sum=0;
  printf("Please input an integer(or input 0 to stop):\n");
  n=GetIntegerFromKeyboard();

  while(n)
  {
    sum=sum+n;
    printf("Please input the next integer:\n");
    n=GetIntegerFromKeyboard();
  }

  printf("The sum is %d\n",sum);

  return 0;
}
