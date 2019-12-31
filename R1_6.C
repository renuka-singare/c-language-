#include<stdio.h>
#include<conio.h>
void main()
{
int w,h,area=0,parimeter=0;
clrscr();
printf("enter width & hight:");
scanf("%d%d",&w,&h);
area=w*h;
parimeter=2*(w+h);
printf("\n area is:%d",area);
printf("\n parimeter is:%d",parimeter);
getch();
}