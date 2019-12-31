#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter number");
scanf("%d",&n);
if(n %2==0)
{
printf("its even number %d",n);
}
else{
printf("its odd number %d",n);
}
getch();
}