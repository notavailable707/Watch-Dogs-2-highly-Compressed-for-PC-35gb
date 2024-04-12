#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void main() {
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
rectangle(200,250,500,475);
rectangle(150,250,200,475);
line(150,250,175,190);
line(175,190,200,250);
line(175,190,460,190);
getch();
closegraph();


}