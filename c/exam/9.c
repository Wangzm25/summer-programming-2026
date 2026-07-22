#include<stdio.h>
#include"../zylib/zylib.h"

unsigned int Gcd(unsigned int x,unsigned int y);

int main(void)
{
  unsigned int a,b;
  printf("Please input two unsigned integers:\n");
  a=GetIntegerFromKeyboard();
  b=GetIntegerFromKeyboard();

  printf("Gcd is %u\n",Gcd(a,b));
  return 0;
}

unsigned int Gcd(unsigned int x,unsigned int y)
{
  unsigned int t;
  while(y)
  {
    t=x%y;
    x=y;
    y=t; 
  }

  return x;
}