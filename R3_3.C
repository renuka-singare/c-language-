#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,t;
clrscr();
printf("enter a number to cheak if it is a palindrom or not:\n");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(n==r)
printf("%d is a palindrom num ber.\n",n);
else
printf("%d isnot a palindram no.\n",n);
getch();
}
