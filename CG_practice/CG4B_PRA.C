#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
int x1,y1,x2,y2,p,delx,dely;
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
delx=x2-x1;
dely= y2-y1;
p=(2*dely)-delx;
while(x1!=x2){
if(p<0){
x1=x1+1;
p=p+(2*dely);

}
else{
 x1=x1+1;
 y1=y1+1;
 p=p+(2*dely)-(2*delx);
}
 putpixel(x1,y1,WHITE);
}


getch();
closegraph();



}