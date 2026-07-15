#include<stdio.h>
#include"../zylib/zylib.h"
int main()
{
  const int divisor=3;
  int number;
  int quotient;
  int remainder;

  printf("Please input a positive integer:\n");
  number = GetIntegerFromKeyboard();
  quotient = number / divisor;
  remainder = number % divisor;

  printf("%d / %d=%d\n",number,divisor,quotient);
  printf("%d %% %d=%d\n",number,divisor,remainder);

  return 0;
}