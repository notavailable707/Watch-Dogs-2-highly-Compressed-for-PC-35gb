#include<graphics.h>
#include<conio.h>

void main() {
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 circle(100,100,60);
 rectangle(350,100,420,200);
 rectangle(150,200,200,250);
 arc(400,230,0,360,70);
 bar3d(350,250,490,350,22,3);

 getch();
 closegraph();
}
