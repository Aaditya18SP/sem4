#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main(){
int newx1,newx2,newy1,newy2,newy3,sx,sy,x1,x2,y1,y2,y3;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
printf("enter x scaling factor:");
scanf("%d",&sx);
printf("enter y scaling factor:");
scanf("%d",&sy);
printf("FOR A TRIANGLE:\n");
printf("enter x1:");
scanf("%d",&x1);
printf("enter y1:");
scanf("%d",&y1);
printf("enter x2:");
scanf("%d",&x2);
printf("enter y2:");
scanf("%d",&y2);
printf("enter y3:");
scanf("%d",&y3);
line(x1,y1,x2,y2);
line(x2,y2,x1,y3);
line(x1,y3,x1,y1);
newx1=x1*sx;
newx2=x2*sx;
newy1=y1*sy;
newy2=y2*sy;
newy3=y3*sy;
line(newx1,newy1,newx2,newy2);
line(newx2,newy2,newx1,newy3);
line(newx1,newy3,newx1,newy1);
getch();
closegraph();


}