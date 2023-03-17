#include <stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
int xc,yc,x,y,p,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

printf("enter x coord of center:");
scanf("%d",&xc);
printf("enter y coord of center:");
scanf("%d",&yc);
printf("enter radius:");
scanf("%d",&r);
p=1-r;
x=0;
y=r;
while(x!=y){
putpixel(xc+x,yc+y,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc+y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc-y,yc-x,WHITE);
if(p<=0){
x=x+1;
y=y;
p=p+(2*x)+2;

}
else{
x=x+1;
y=y-1;
p=p+(2*x)-(2*y)+1;

}
}
getch();
closegraph();


}