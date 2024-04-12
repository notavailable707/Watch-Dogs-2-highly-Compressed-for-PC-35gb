#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main() {
int gd=DETECT,gm;
int x,y,radius;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;
radius=20;
for(radius=20;radius<=120;radius=radius+10){
circle(x,y,radius);
setcolor(radius/10);
}
outtextxy(10,100,"Circle at the Center Using the C Grphics:");
getch();
closegraph();
}