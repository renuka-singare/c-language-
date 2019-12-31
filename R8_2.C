#include<stdio.h>
#include<conio.h>
#define AREA PI*r*r
void main()
{
float r,PI = 3.14;
clrscr();
printf("enter the readius of the circle:");
scanf("%f",&r);
printf("\n area of the circle = %f",AREA);
getch();
}