#include <stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
int x1,y1,x2,y2,tx,ty;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter x translation:");
scanf("%d",&tx);
printf("enter y translation:");
scanf("%d",&ty);
printf("FOR A RECTANGLE:\n");
printf("enter x1:");
scanf("%d",&x1);
printf("enter y1:");
scanf("%d",&y1);
printf("enter x2:");
scanf("%d",&x2);
printf("enter y2:");
scanf("%d",&y2);
rectangle(x1,y1,x2,y2);
printf("translating a rectangle:\n");
rectangle(x1+tx,y1+ty,x2+tx,y2+ty);

getch();
closegraph();


}