#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,count=0;
clrscr();
printf("enter n:");
scanf("%d",&n);
count=n*2-1;
for(i=1;i<=count;i++){
for(j=1;j<=count;j++){
if(j==i||(j==count-i+1)){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}
getch();
}