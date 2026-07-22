#include<stdio.h>
#include"../zylib/zylib.h"

int CountDigits(int n);

int main(void)
{
  int n;
  printf("Please input an integer:\n");
  n=GetIntegerFromKeyboard();
  printf("%d has %d digit(s)\n",n,CountDigits(n));
  return 0;
}

int CountDigits(int n)
{
  if(n==0)
    return 1;
  
  int count=0;

  while(n!=0)
  {
    count+=1;
    n /= 10;
  }
  return count;
}