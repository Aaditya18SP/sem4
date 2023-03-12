#include<reg52.h>
sbit led = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;


void delay(){
int i,j;
for(i=0;i<10;i++){
for(j=0;j<2000;j++){
}
}
}
void main(){
	led=0;
led2=0;
led3=0;
	
while(1){
led=0;
delay();
led=1;
delay();
led=0;

led2=0;
delay();
led2=1;
delay();
	led2=0;

led3=0;
delay();
led3=1;
delay();
led3=0;
}
}