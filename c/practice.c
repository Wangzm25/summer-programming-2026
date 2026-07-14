#include<stdio.h>
int main()
{
int a,b,sum;
printf("The program adds two integers.\n");
printf("The first number:");
scanf("%d",&a);
printf("The second number:");
scanf("%d",&b);
sum=a+b;
printf("%d+%d=%d\n",a,b,sum);
return 0;
}