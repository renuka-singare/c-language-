#include<stdio.h>
#include<conio.h>
void main()
{
int r,area=0,cir=0;
float PI=3.14;
printf("enter the radius");
scanf("%d",&r);
area=PI*r*r;
cir=2*PI*r;
printf("\n area is %d",area);
printf("\n circumference is %d",cir);
getch();
}