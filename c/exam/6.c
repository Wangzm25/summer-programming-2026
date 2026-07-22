#include<stdio.h>
#include"../zylib/zylib.h"

BOOL IsTriangle(int a,int b,int c)
{
  return (a>0&&b>0&&c>0)&&(a+b>c&&b+c>a&&c+a>b);
}