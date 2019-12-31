#include<stdio.h>
#include<GRAPHICS.H>
#include<conio.h>
void main()
{
int gd = DETECT,gm,x=25,y=25,font=0;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(font=0;font<=10;font++){
settextstyle(font,HORIZ_DIR,4);
outtextstyle(x,y,"text with diffrent text");
y=y+25;
}
getch();
closegraph();
}