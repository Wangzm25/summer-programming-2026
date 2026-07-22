#include<stdio.h>
#include"../zylib/zylib.h"

BOOL IsPrime(int n);

int main(void)
{
  int n;
  printf("Please input an integer:\n");
  n=GetIntegerFromKeyboard();

  if(IsPrime(n))
    printf("%d is a prime\n",n);
  else
    printf("%d is not a prime\n",n);

  return 0;
}

BOOL IsPrime(int n)
{
  if(n<=1)
  return FALSE;
  
  int i=2;
  while(i<n)
  {
    if(n%i!=0)
      i++;
    else
      return FALSE;
  }
  return TRUE;
}