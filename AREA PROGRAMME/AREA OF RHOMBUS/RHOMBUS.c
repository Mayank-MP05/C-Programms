#include<stdio.h>
#include<conio.h>

void main()

{

float side,hieght,area;
clrscr();
printf("\t\t\tENTER THE SIDE OF RHOMBUS :-");
scanf("%f",&side);

printf("\n\n\n\n\t\t\tENTER THE HIEGHT OR ALTITUDE OF RHOMBUS :-");
scanf("%f",&hieght);

area =side * hieght;

printf("\n\n\n\n\n\n\t\t\tAREA OF THE RHOMBUS IS %.2f",area);
getch();
}
