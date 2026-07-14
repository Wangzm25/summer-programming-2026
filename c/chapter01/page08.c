#include <stdio.h>
int main()
{
float a,b,sum;
printf("计算两个数之乘积\n");
printf("输入第一个数：\n");
scanf("%f",&a);
printf("输入第二个数：\n");
scanf("%f",&b);
sum=a*b;
printf("%f*%f=%f\n",a,b,sum);
return 0;  
}