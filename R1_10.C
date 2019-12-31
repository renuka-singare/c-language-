#include<stdio.h>
#include<conio.h>
void main()
{
float c,f=0;
clrscr();
printf("enter the tempreture in centegrate:");
scanf("%f",&c);
f=(1.8*c)+32;
printf("tempreture in farenhigth is:%f",f);
getch();
}
