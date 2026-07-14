#include<stdio.h>
int main()
{
int a,c,sum;
printf("The program adds two integers.\n");
printf("The first number:");
scanf("%d",&a);
printf("The second number:");
scanf("%d",&c);
sum=a+c;
printf("%d+%d=%d\n",a,c,sum);
return 0;
}