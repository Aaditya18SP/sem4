#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm,i;
int x,y,stepx,x1,stepy,y1;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
line(x,0,x,getmaxy());
line(0,y,getmaxx(),y);
outtextxy(x,y,"0");
outtextxy(x+50,y+2,"1");
outtextxy(x+100,y+2,"2");
outtextxy(x+150,y+2,"3");
outtextxy(x+200,y+2,"4");
outtextxy(x-50,y+2,"-1");
outtextxy(x-100,y+2,"-2");
outtextxy(x-150,y+2,"-3");
outtextxy(x-2,y+50,"-1");
outtextxy(x-2,y+100,"-2");
outtextxy(x-2,y-50,"1");
outtextxy(x-2,y-100,"2");
i=x;
x1=0;
while(i>0){
 line(x1+i,y-5,x1+i,y+5);
 i=i-50;
}
i=0;
x1=x;
while(i<getmaxx()){
 line(x1+i,y-5,x1+i,y+5);
 i=i+50;
}
i=y;
y1=0;
while(i>0){
 line(x-2,y1+i,x+2,y1+i);
 i=i-50;
}
i=0;
y1=y;
while(i<getmaxy()){
 line(x-2,y1+i,x+2,y1+i);
 i=i+50;
}


getch();
closegraph();


}