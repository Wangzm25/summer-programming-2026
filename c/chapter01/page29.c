#include<stdio.h>
#include"../zylib/zylib.h"
int main()
{
int n;
double d,sum;
STRING name;
printf("输入你的名字：\n");
name = GetStringFromKeyboard();
printf("Hello,\"%s\"\n",name);
printf("输入整数n:\n");
n = GetIntegerFromKeyboard();
printf("输入实数d:\n");
d = GetRealFromKeyboard();
sum=n+d;
printf("%d+%lf=%lf\n",n,d,sum);

return 0;
}