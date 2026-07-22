#include<stdio.h>
#include"../zylib/zylib.h"

int SumDigits(int n);

int main(void)
{
  int n;
  printf("Please input an integer:\n");
  n=GetIntegerFromKeyboard();
  printf("The sum of all digits of %d is %d.\n",n,SumDigits(n));
  return 0;
}

int SumDigits(int n)
{
  int sum=0;
 
  while(n!=0)
  {
    sum += (n%10);
    n /= 10;
  }

  if(sum>=0)
    return sum;
  else
    return -sum;
}