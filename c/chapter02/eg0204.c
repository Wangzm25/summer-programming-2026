#include<stdio.h>
#include"../zylib/zylib.h"
int main(void)
{
  int n,result;
  printf("Please input an integer:\n");
  n=GetIntegerFromKeyboard();
  if (n%2==0)
  { 
    result=n/2;
    printf("%d\n",result);
  }
  else
  {
    result=3*n+1;
    printf("%d\n",result);
  }

  return 0;
}