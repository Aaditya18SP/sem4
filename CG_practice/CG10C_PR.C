#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm,x=0;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

while(x<(getmaxx()-200)||!kbhit()){
line(0,240,getmaxx(),240);
rectangle(100+x,100,200+x,200);
circle(120+x,220,20);
circle(180+x,220,20);
setfillstyle(HATCH_FILL,RED);
floodfill(150+x,150,WHITE);
setfillstyle(LINE_FILL,BLUE);
floodfill(120+x,220,WHITE);
floodfill(180+x,220,WHITE);
x=x+5;
delay(250);
cleardevice();
}
getch();
closegraph();







}