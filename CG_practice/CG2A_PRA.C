#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
 int gd=DETECT,gm;
 int maxx,x,maxy,y;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 maxx=getmaxx();
 x=maxx/2;
 maxy=getmaxy();
 y=maxy/2;
 line(x,0,x,maxy);
 line(0,y,maxx,y);
 circle(x/2,y/2,50);
 rectangle(x+50,50,x+150,y-50);
 ellipse(100,y+100,0,360,50,100);
 ellipse(x+100,y+100,0,180,80,75);

 getch();
 closegraph();




}