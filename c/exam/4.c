#include <stdio.h>
#include "../zylib/zylib.h"

BOOL IsInRange(int x, int low, int high);

int main(void)
{
  int x, low, high;

  printf("Input x, low and high:\n");
  x = GetIntegerFromKeyboard();
  low = GetIntegerFromKeyboard();
  high = GetIntegerFromKeyboard();

  if(IsInRange(x, low, high))
    printf("%d is in the range.\n", x);
  else
    printf("%d is not in the range.\n", x);

  return 0;
}

BOOL IsInRange(int x,int low,int high)
{
  return x>=low&&x<=high;
}