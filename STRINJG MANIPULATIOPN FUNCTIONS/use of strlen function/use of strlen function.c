#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
char str1[15];
clrscr();
printf("\n\n* ENTER YOUR NAME :-\n\n\n\n");
scanf("%s",&str1);
printf("\n\n\n* THE LENGTH OF YOUR NAME IS %d",strlen(str1));
getch();
}
