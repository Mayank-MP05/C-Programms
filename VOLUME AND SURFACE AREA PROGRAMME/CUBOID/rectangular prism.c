#include <stdio.h>
#include <conio.h>

void main()

{
float l,b,h,sa,vol;
clrscr();

printf("\t * ENTER THE LENGTH OF THE PRISM :-   ");
scanf("%f",&l);

printf("\n\t * ENTER THE BREADTH OF THE PRISM :-  ");
scanf("%f",&b);

printf("\n\t * ENTER THE HIEGHT OF THE PRISM :-   ");
scanf("%f",&h);

vol=l*b*h;
sa=2*(l*b)+2*(b*h)+2*(h*l);

printf("\n\n\n\t\t # VOLUME OF THE RECTANGULAR PRISM IS %.2f",vol);
printf("\n\n\n\t\t # SURFACE AREA OF THE RECTANGULAR PRISM IS %.2f",sa);


getch();
}
