#include<stdio.h>
#include"../zylib/zylib.h"

int main(void)
{
  int year;
  BOOL leap;

  printf("Please input a year:\n");
  year=GetIntegerFromKeyboard();
  leap=(year%400==0)||(year%4==0&&year%100!=0);
  printf("%d\n",leap);

  return 0;
}