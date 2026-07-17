#include<stdio.h>
#include"../zylib/zylib.h"
int main(void)
{
  int score;
  printf("Please input your score:\n");
  score=GetIntegerFromKeyboard();

  if(score>=0&&score<=100)
  {
    if(score>=60)
    {
      printf("PASS!\n");
    }
    else
    {
      printf("FAIL!\n");
    }
  }
  else
  {
    printf("Score Error!\n");
  }

  return 0;
}