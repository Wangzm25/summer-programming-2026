#include<stdio.h>
#include"../zylib/zylib.h"

int CountValue(
  const int a[],
  unsigned int n,
  int value
);

int MaxArray(const int a[],unsigned int n);

int FindValue(const int a[],unsigned int n,int value);

int CountValue(
  const int a[],
  unsigned int n,
  int value
)
{
  int count=0;
  unsigned int i;

  for(i=0;i<n;i++)
  {
    if(a[i]==value)
      count++;
  }

  return count;
}

int MaxArray(const int a[],unsigned int n)
{
  if(n==0)
    PrintErrorMessage(FALSE,"MaxArray: Illegal parameter.\n");

  int max=a[0];
  unsigned int i;

  for(i=1;i<n;i++)
  {
    if(a[i]>max)
      max=a[i];  
  }

  return max;
}

int FindValue(const int a[],unsigned int n,int value)
{
  unsigned int i;

  for(i=0;i<n;i++)
  {
    if(value==a[i])
      return i;
  }

  return -1;
}