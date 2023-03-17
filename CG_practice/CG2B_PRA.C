#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setfillstyle(XHATCH_FILL,GREEN);
line(100,100,300,100);
line(300,100,350,150);
line(350,150,150,150);
line(150,150,100,100);
line(100,100,70,150);
line(70,150,150,150);
floodfill(125,115,WHITE);
floodfill(75,145,WHITE);
circle(105,125,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(105,125,WHITE);
rectangle(70,150,350,300);
setfillstyle(BKSLASH_FILL,BLUE);
floodfill(200,200,WHITE);
setcolor(WHITE	);
line(150,150,150,300);


getch();
closegraph();


}