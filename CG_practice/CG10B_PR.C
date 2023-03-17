#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main(){
 int gd=DETECT,gm,f=1;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");

 while(!kbhit()){
  if(f==1){
  circle(100,100,50);
 circle(80,80,10);
 circle(130,80,10);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(100,100,WHITE);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(80,80,WHITE);
 floodfill(130,80,WHITE);
 setcolor(BLACK);
 arc(100,100,220,320,20);
 setcolor(WHITE);
 delay(250);
 f=0;
 cleardevice();
  }
  else{
 circle(100,100,50);
 circle(80,80,10);
 circle(130,80,10);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(100,100,WHITE);
 setfillstyle(SOLID_FILL,BLACK);
 floodfill(80,80,WHITE);
 floodfill(130,80,WHITE);
 setcolor(BLACK);
 arc(100,130,30,140,20);
 setcolor(WHITE);
 f=1;
 delay(250);
 cleardevice();

  }



 }

 getch();
 closegraph();



}