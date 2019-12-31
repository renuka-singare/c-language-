#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,avg=0,count=0;
clrscr();
printf("even numbers between 20 to 40:\n");
for(i=20;i<=40;i++)
{
if(i%2==0)
{
printf("%d\n",i);
 }
sum=sum+i;
count++;
printf("\n sum is:%d",sum);
avg=sum/count;
printf("\n  avg is:",avg);
}
getch();
}

















