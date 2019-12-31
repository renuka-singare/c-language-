#include<graphics.h>
#include<conio.h>
void main()
{
int gd = DETECT,gm,x=25,y=25,font=0;
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(font=0;font<=0;font++){
settextstyle(font,HORIZ_DIR,4);
outtextxy(x,y,"text with deffrent text");
y=y+25;
}
getch();
closegraph();
}