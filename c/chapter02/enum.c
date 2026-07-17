#include<stdio.h>
typedef enum
{
  Sun,
  Mon,
  Tus,
  Wed,
  Thu,
  Fri,
  Sat
} Weekday;

int main(void)
{
  Weekday today;
  today=Wed,
  printf("Sun=%d\n",Sun);
  printf("Thu=%d\n",Thu);
  printf("today=%d\n",today);

  return 0;
}