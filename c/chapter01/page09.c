#include <stdio.h>
#include "../zylib/zylib.h"
int main()
{
STRING name;
printf("Your name:\n");
name=GetStringFromKeyboard();
printf("%s,hello!\n",name);
return 0;
}