#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main() {
int gd=DETECT,gm;
int midx,midy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
cleardevice();
midx=getmaxx()/2;
midy=getmaxy()/2;
line(1, midx ,1920, midx);
line(midy ,1 ,midy,1280);
getch();
closegraph();
}