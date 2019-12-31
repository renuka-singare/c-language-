#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],i,j;
clrscr();
printf("enter the elements of matrix:\n");
for (i=0;i<3;i++){
for (j=0;j<3;j++) {
scanf("%d",&a[i][j]);
}
}
printf("\n the transpose of matrix is:\n");
for (i=0;i<3;i++) {
for (j=0;j<3;j++) {
b[i][j]=a[j][i];
printf("%d\t\t",b[i][j]);
}
printf("\n");
}
getch();
}