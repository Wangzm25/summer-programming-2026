#include<stdio.h>
#include"../zylib/zylib.h"

void swap(int x,int y);

int main(void)
{
  int a=10,b=20;
  printf("Before Swap:a=%d,b=%d\n",a,b);
  swap(a,b);
  printf("After Swap:a=%d,b=%d\n",a,b);
  return 0;
}

void swap(int x,int y)
{
  int t;
  printf("In swap before:x=%d,y=%d\n",x,y);
  t=x;
  x=y;
  y=t;
  printf("In swap after:x=%d,y=%d\n",x,y);
}