#include<stdio.h>
#include<conio.h>
void main()
{
int w,h;
int res=0;
char c='a';
clrscr();
printf("\n area of rectangle");
printf("\n parimeter of rectangle=p");
printf("\n daigonal of rectangle=d");
printf("\nenter width &higth of ractangle");
scanf("%d%d",&w,&h);
switch(c){
case'a':
res=w*h;
break;
case'p':
res=2*w+2*h;
break;
case'd':
res=sqrt(w*w+h*h);
break;
default:
printf("\n invalid input");
break;
}
printf("\n result is %d",res);
getch();
}