#include <reg51.h>
sbit led  =P1^0;
sbit led1=P1^1;
sbit led2=P1^2;
void delay(){
	int i,j;
	for(i=0;i<100;i++){
		
	for(j=0;j<100;j++){}
	}
	
}
void main(){
	P1=0x00;
	while(1){
		led=1;
		delay();
		led=0;
		delay();
		led1=1;
		delay();
		led1=0;
		delay();
		led2=1;
		delay();
		led2=0;
		delay();
		
	}
	
}