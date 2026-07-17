#include<stdio.h>
#include"../zylib/zylib.h"
int main()
{
  int a,b,max;
  printf("The program gets two numbers and prints the greater\n");

  printf("The first number:\n");
  a=GetIntegerFromKeyboard();
  printf("The second number:\n");
  b=GetIntegerFromKeyboard();

  max=a>b?a:b;
  printf("The greater one is:\"%d\"\n",max);

  return 0;
}