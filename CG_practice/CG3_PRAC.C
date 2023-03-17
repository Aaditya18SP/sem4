#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
int gd=DETECT,gm;
int x,y;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
circle(x,y,100);
circle(x,y,50);
delay(250);
cleardevice();
ellipse(x,y,0,360,150,75);
delay(250);
cleardevice();
line(x-10,y,x+10,y);
delay(250);
cleardevice();
rectangle(x-75,y-50,x+75,y+50);
delay(250);
cleardevice();
rectangle(x-50,y-50,x+50,y+50);





getch();
closegraph();



}