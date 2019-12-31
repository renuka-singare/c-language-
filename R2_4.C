#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("enter any character");
scanf("%c",&c);

if(c>='A'&&c<='Z'){
printf("upper case %c",c);
}
if(c>='a'&&c<='z'){
printf("lower case %c",c);
}
else{
printf("special case %c",c);
}
getch();
}