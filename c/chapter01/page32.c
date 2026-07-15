#include<stdio.h>
int main()
{
  double g=9.80272;
  int a,b,c;

  a=g;
  b=(int)g*4;
  c=(int)(g*4);
  
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  
  return 0;
}