#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,min=0,max=0,a[10];
for(i=0;i<=10;i++)
printf("enter the 10 elements in the array\n");
scanf("%d%d",&a[i]);
min=a[0];
max=a[10];
for(j=0;j<=10;j++){
if(min>a[i]){
min=a[j];
}
if(max<a[j]){
max=a[i];
}
}
printf("samllest element is:%d\n",min);
printf("largest element is:%d\n",max);
getch();
}
