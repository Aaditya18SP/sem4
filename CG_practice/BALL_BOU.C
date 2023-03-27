#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main(){
int i=0,j=0,f=50;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//while(j<=(maxx()-100)){
while(i<=(getmaxy()-100)){
cleardevice();
circle(50,50+i,50);
i=i+50;
delay(40);
}

j=0;
 while(j<=(getmaxx()-200)&& f<=(getmaxy()-100)){
while(i>=f){
cleardevice();
circle(50+j,i,50);
j=j+10;
i=i-50;
delay(40);
}
f=f+50;
while(i<=(getmaxy()-100)){
cleardevice();
circle(50+j,f+i,50);
j=j+10;
i=i+50;
delay(40);
}
/*
if(f==(getmaxy()-100)){
cleardevice();
while(!kbhit()){
circle(j,f,50);
}
}
*/

}


getch();
closegraph();



}