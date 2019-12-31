#include<stdio.h>
#include<conio.h>
int main(){
int p,r,t,si=0,ci=0;
clrscr();
printf("enter p,r,t:");
scanf("%d%d%d",&p,&r,&t);
si=p*r*t/100;
ci=p*(1+si)-p;
printf("\nsimple intrest is:%d",si);
printf("\n compound intrest is:%d",ci);
getch();
}

