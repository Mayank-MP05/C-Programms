#include<stdio.h>
#include<conio.h>

void main()

{
float radius,angle,area;
clrscr();
printf("\t\t\tENTER THE RADIUS OF CIRCLE :-");
scanf("%f",&radius);

printf("\n\n\n\n\t\t\tENTER THE MEASURE OF SECTER :-");
scanf("%f",&angle);

area=angle/360*22/7*radius*radius;

printf("\n\n\n\n\n\n\t\t\tAREA OF THE SECTER OF CIRCLE IS %0.2f",area);
getch();
}
