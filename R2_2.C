#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n1,n2;
int res=0;
char c='+';

clrscr();
printf("\n tne list of opretions");
printf("\n addition=+");
printf("\n subtraction=-");
printf("\n multiplication=*");
printf("\n division=/");
printf("\n modulus=%");
printf("\n power=p");
printf("\n factorial=f");

printf("\n enter two no:");
scanf("%d%d",&n1,&n2) ;
switch(c){
case'+':
res=n1+n2;
break;
case'-':
res=n1-n2;
break;
case'*':
res=n1*n2;
break;
case'/':
res=n1/n2;
break;
case'%':
res=n1%n2;
break;
case'p':
res=pow(n1,n2);
break;
default:
printf("\plz enter valid input.........!!!!!!");
break;
}
printf("\n result is %d",res);
getch();
}


