#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void main(){
 int gd=DETECT,gm;
 int x1,y1,x2,y2;
 double deg,degrad,newx2,newy2;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 printf("enter x1 :");
 scanf("%d",&x1);
 printf("enter y1 :");
 scanf("%d",&y1);
 printf("enter x2 :");
 scanf("%d",&x2);
 printf("enter y2 :");
 scanf("%d",&y2);

 printf("enter degree :");
 scanf("%lf",&deg);
// deg=(360.000000 - deg);
 degrad=(deg*(3.14/180));
 printf("degree is:%lf and degree in radian is:%lf\n",deg,degrad);
 //anticlockwise
 newx2= (x2 * cos(degrad)) - (y2 * sin(degrad));
 newy2= (x2 * sin(degrad)) + (y2 * cos(degrad));
 printf("x2=%lf  ,  y2=%lf\n",newx2,newy2);


 //clockwise
 /*
   newx2=(x2*cos(degrad)) +  (y2 * sin(degrad));
   newy2= (x2 * (-sin(degrad))) + (y2 * cos(degrad));
   */

 line(x1,y1,x2,y2);
 line(x1,y1,ceil(newx2),ceil(newy2));
 getch();
 closegraph();

}