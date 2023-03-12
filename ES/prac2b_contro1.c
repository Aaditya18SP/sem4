#include<reg51.h>
void main()
{
	void delay();
while (1){
P1 = 0X55;
	P2=P1;//Set up a hex value at port 2 of first controller
	delay();
	
}
 
}

void delay(){
	unsigned int i;
	for (i=0;i<1000;i++){
	}
	
}