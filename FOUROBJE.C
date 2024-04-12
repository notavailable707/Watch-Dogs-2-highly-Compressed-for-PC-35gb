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
line(1, midy ,1280, midy) ;
line(midx ,1 ,midx ,1920);
circle(130,130,70);
outtextxy(50,40,"Circle:");
bar3d(400,90,530,190,20,21);
outtextxy(390,40,"3D Bar:");
ellipse(130,370,0,360,45,80);
outtextxy(40,265,"Ellipse Full:");
ellipse(490,360,180,360,45,80);
outtextxy(410,265,"Ellipse half:");
getch();
closegraph();
}