#include <reg51.h>
void delay(){
	int i,j;
	for(i=0;i<10000;i++){
		for(j=0;j<10;j++){
		}
	}
}
void main(){
int number[]={0xC0,0XF9,0xA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X90};
unsigned int i,j;
for(i=0;i<10;i++){
	delay();
P0=number[i];
for(j=0;j<10;j++){
	P2=number[j];
	delay();
}
}
}