#include <stdio.h>
int main()
{
double a,b,sum;
printf("把输入的两个数加起来\n");
printf("输入第一个数\n");
scanf("%lf",&a);
printf("输入第二个数\n");
scanf("%lf",&b);
sum=a+b;
printf("%lf+%lf=%lf\n",a,b,sum);
return 0;
}