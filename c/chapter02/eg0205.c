#include<stdio.h>
#include"../zylib/zylib.h"

typedef enum
{
  Sun,
  Mon,
  Tue,
  Wed,
  Thu,
  Fri,
  Sat
} Weekday;

int main(void)
{
  int date;
  const Weekday date_1=Fri;
  Weekday weekday;

  printf("Please input a date from 1 to 31:\n");
  date=GetIntegerFromKeyboard();

  if(date<1||date>31)
  {
    printf("Error\n");
    return 1;
  }

  weekday=(Weekday)((int)date_1+date-1)%7;

  printf("Calendar 2016//07\n");
  printf("--------------------------\n");
  printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
  printf("--------------------------\n");

  if(weekday==Sun)
  {
    printf("%2d\n",date);
  }
  else if(weekday==Mon)
  {
    printf("%6d\n",date);
  }
  else if (weekday==Tue)
    {
    printf("%10d\n", date);
    }
  else if (weekday==Wed)
    {
    printf("%14d\n", date);
    }
  else if (weekday==Thu)
    {
    printf("%18d\n", date);
    }
  else if (weekday==Fri)
    {
    printf("%22d\n", date);
    }
  else
    {
    printf("%26d\n", date);
    }
  printf("--------------------------\n");

 return 0;
}