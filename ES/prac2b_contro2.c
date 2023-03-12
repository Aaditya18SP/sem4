#include <reg52.h>
void delay(){
	unsigned int i;
	for( i=0;i<1000;i++);
	
}
void main(){
	while(1){
		P2=P1;
		delay();
	}
	
	
}