#include<stdio.h>
#include<conio.h>
void main()
{
int sp,cp,res;
clrscr();
printf("enter cost price & selling price:");
scanf("%d%d",&sp,&cp);
if(sp>cp){
res=sp-cp;
printf("profit is: %d",res);
}
else if(cp>sp){
res=cp-sp;
printf("loss is: %d",res);
}
else{
printf("no profit and no loss");
}
getch();
}
