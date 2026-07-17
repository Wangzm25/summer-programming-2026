#include<stdio.h>
#include"../zylib/zylib.h"
int main(void)
{
  int year,month,days_of_month;
  BOOL leap;

  printf("Please input a year:\n");
  year=GetIntegerFromKeyboard();
  printf("Please input a month from 1 to 12:\n");
  month=GetIntegerFromKeyboard();

  if(month<1||month>12)
  {
    printf("month error!\n");
    return 1;
  }
  
  leap=year%400==0||year%4==0&&year%100!=0;

  switch(month)
  {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    days_of_month=31;
    break;

    case 4:case 6:case 9:case 11:
    days_of_month=31;
    break;

    case 2:
    days_of_month=28+(int)leap;
    break;

    default:
    return 1;
  }

  printf("Number of days in %04d//%02d is %d\n",year,month,days_of_month);

  return 0;

}