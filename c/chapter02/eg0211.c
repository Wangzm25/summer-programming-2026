#include<stdio.h>
#include"../zylib/zylib.h"

int main(void)
{
  int i,n,sum=0;
  printf("Please input an integer:\n");
  n=GetIntegerFromKeyboard();

  for(i=1;i<=n;i++)
  {
    sum += i*i;
  }
  printf("The sum is %d\n",sum);

  return 0;
}