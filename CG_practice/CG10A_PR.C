#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main(){
int gd=DETECT,gm;
int font=4,direction=2,size=6,color=3,x=480,y=300;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

while(!kbhit()){
 settextstyle(random(font),random(size),random(direction));
 setcolor(random(color));
 outtextxy(random(x),random(y),"helloo");
 delay(250);

}
getch();
closegraph();


}
