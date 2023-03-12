#include <reg51.h>
void delay(){
TMOD=0x01;
TL0=0xFC;
TH0=0x65;
TR0=1;
while(TF0==0);
TR0=0;
TF0=0;
}

void main(){
 while(1){
 P1=0xFF;
 delay();
 P1=0x00;
 delay();
 
 }


}