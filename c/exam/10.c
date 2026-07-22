#include<stdio.h>

int SummAry(const int a[],unsigned int n);

int main(void)
{
  int a[5]={3,7,9,2,4};
  printf("Sum is %d\n",SummAry(a,5));
  return 0;
}

int SummAry(const int a[],unsigned int n)
{
  int sum=0;
  unsigned int i;

  for(i=0;i<n;i++)
  {
    sum += a[i];
  }

  return sum;
}