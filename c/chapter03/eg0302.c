#include<stdio.h>
#include"../zylib/zylib.h"

int Compare(int x,int y);
BOOL Isleap(int year);

int main(void)
{
  int a,b,year;
  
  printf("Input two integers:\n");

  a=GetIntegerFromKeyboard();
  b=GetIntegerFromKeyboard();
  
  printf("Compare result:%d\n",Compare(a,b));

  printf("Please input a year:\n");
  year=GetIntegerFromKeyboard();
  
  if(Isleap(year))
  printf("%d is a leap year.\n",year);
  else
  printf("%d is not a leap year.\n",year);

  return 0;
}

int Compare(int x,int y)
{
  if(x==y)
  return 0;
  else if(x>y)
  return 1;
  else
  return -1;
}

BOOL Isleap(int year)
{
  return year%400==0||year%4==0&&year%100!=0;
}