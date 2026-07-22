#include<stdio.h>
#include"../zylib/zylib.h"

int Absolute(int x);

int main(void)
{
  int n;
  printf("Please input an integer:\n");
  n=GetIntegerFromKeyboard();
  printf("Absolute number:%d\n",Absolute(n));
  return 0;
}

int Absolute(int x)
{
  if(x>=0)
    return x;
  else
    return -x;
}