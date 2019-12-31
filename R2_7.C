#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("enter year:");
scanf("%d",&yr);
if(yr%4==0){
if(yr%100==0){
if(yr%400==0)

printf("\n it is leap year");
else
printf("\n it is not leap year");
}
else{
printf("\n it is leap year");
}
}
else
printf("\n it is not leap year");
getch();
}