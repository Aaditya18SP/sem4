#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
float m;
int x1,y1,x2,y2,plotx,ploty;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter x1:");
scanf("%d",&x1);
printf("enter y1:");
scanf("%d",&y1);
printf("enter x2:");
scanf("%d",&x2);
printf("enter y2:");
scanf("%d",&y2);
m=(y2-y1)/(x2-x1);
while(x1!=x2){
 if(m<1){
 x1=x1+1;
 y1=y1+m;
 plotx=(int)(x1+1);
 ploty=(int)(y1+1);

 }
 else if(m>1){
 x1=x1+m;
 y1=y1+1;
 plotx=(int)(x1+1);
 ploty=(int)(y1+1);
 }
 else{
  x1=x1+1;
 y1=y1+1;
 plotx=(int)(x1+1);
 ploty=(int)(y1+1);


 }

 putpixel(plotx,ploty,WHITE);
}
getch();
closegraph();





}