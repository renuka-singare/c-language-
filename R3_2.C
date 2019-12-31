#include<stdio.h>
#include<conio.h>
void main()
{
int n,first=0,second=0,next,c;
clrscr();
printf("enter the enter of terms\n");
scanf("%d",&n);
printf("first%d terms of fibonaci series are:\n",n);
for(c=0;c<n;c++)
{
if(c<=1)
next =c;
else
{
next =first+second;
first = second;
second = next;
}
printf("%d\n",next);
}
getch();
}