#include <stdio.h>
#include <conio.h>

int max(int,int,int);
void main()
{
int x,y,z,op;
clrscr();
printf("\nENTER THE NUMBERS :-\n\n\n");
scanf("%d%d%d",&x,&y,&z);
op=max(x,y,z);
printf("\n\n\n%d IS THE LARGEST ",op);
getch();
}
int max(int a,int b,int c)
{

if(a>b && a>c)
return a;
else if(b>c && b>a)
return b;
else
return c;
}
