#include<stdio.h>
#include<conio.h>
#define AND (x-y)&&(x+y)
void main()
{
int x,y;
clrscr();
printf("enter the value of x anf y\n");
scanf("%d%d",&x,&y);
printf("result is = %d",AND);
getch();
}