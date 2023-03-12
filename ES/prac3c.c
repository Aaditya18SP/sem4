#include <reg51.h>
void delay(){
TMOD = 0x01;
TH0=0xFC;
TL0=0x66;
TR0=1;
while(TF0==0);
TF0=1;

}
void main(){
 while(1){
	P1=0x55;
	delay();
	P1=0xAA;
	delay();
}
}
