#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main(){
int i=0,j=0,f=50;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

//first time ball bounces straight down , ie perpendicular to surface
while(i<=(getmaxy()-100)){
cleardevice();
circle(50,50+i,50);
i=i+50;
delay(40);
}
//now ball moves both in horizontal and vertical
//i for vertical, j for horizontal

while(j<=(getmaxx()-200)){
 //ball coming up
while(i>=50){
cleardevice();
circle(50+j,i,50);
j=j+10;
i=i-50;
delay(40);
}

//ball going down
while(i<=(getmaxy()-100)){
cleardevice();
circle(50+j,50+i,50);
j=j+10;
i=i+50;
delay(40);
}
}
getch();
closegraph();
}