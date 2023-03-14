#include <reg51.h>
void delay(){
	int count=0;
	while(count!=500){//TO generate 1ms=fc66, 2ms =f8cc ,1s=2ms*500 times
	TMOD=0x01;//formula of delay==> required delay in ms/1.085milisecs ==>suctract from 65536==>convert to hex by dividing by 16
	TH0=0xF8;
	TL0=0xCC;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
	count++;
	}
}
void main(){
	while(1){
		P1=0x55;
		delay();
		P1=0xAA;
		delay();
		
	}
	
}