#include<stdio.h>
#include"../zylib/zylib.h"

void Welcome(void);
int GetInteger(CSTRING prompt);
int Add(int x,int y);

int main(void)
{
  int a,b,sum;

  Welcome();
  
  a=GetInteger("The first number is:");
  b=GetInteger("The second number is:");

  sum=a+b;

  printf("The sum is %d.\n",sum);

  return 0;
}

void Welcome(void)
{
  printf("The program gets two integer,and output their sum.\n");
}

int GetInteger(CSTRING prompt)
{
  printf("%s",prompt);
  return GetIntegerFromKeyboard();
}

int Add(int x,int y)
{
  return x+y;
}