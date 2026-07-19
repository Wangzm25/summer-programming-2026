#include<stdio.h>
#include"../zylib/zylib.h"

int main(void)
{
  int n,count=0,sum=0;

  while(TRUE)
  {
    count += 1;
    printf("Number %d:\n",count);
    n=GetIntegerFromKeyboard();
    
    if(n==0)
    {
      break;
    }

    if(n<0)
    {
      continue;
    }

    sum += n;
  }

  printf("The sum is %d\n",sum);

  return 0;
}