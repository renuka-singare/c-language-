#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,n,si=0,ci=0;
printf("enter principle,rate&time:");
scanf("%d%d%d",&p,&r,&t);
si=p*r*t/100;
ci=p*(1+si)-p;
printf("\nsimple interst is:%d",si);
printf("\ncompound interst is:%d",ci);
getch();
}