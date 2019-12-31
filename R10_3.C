#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd =DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(WHITE);
getch();
closegraph();
}