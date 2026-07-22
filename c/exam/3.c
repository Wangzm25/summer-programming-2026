#include <stdio.h>
#include "../zylib/zylib.h"

BOOL IsEven(int x);
BOOL IsLeap(int year);

int main(void)
{
  int n, year;

  printf("Please input an integer:\n");
  n = GetIntegerFromKeyboard();

  if(IsEven(n))
    printf("%d is even.\n", n);
  else
    printf("%d is odd.\n", n);

  printf("Please input a year:\n");
  year = GetIntegerFromKeyboard();

  if(IsLeap(year))
    printf("%d is a leap year.\n", year);
  else
    printf("%d is not a leap year.\n", year);

  return 0;
}

BOOL IsEven(int x)
{
  return x%2==0;
}

BOOL IsLeap(int year)
{
  return year%400==0||year%4==0&&year%100!=0;
}