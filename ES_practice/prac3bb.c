#include <reg51.h>
void delay(){
int i,j;
for(i=0;i<100;i++){
for(j=0;<100;j++){}
}
}
void main(){
while(1){
P1=0x55;
P3=P1;
delay();
P1=0xAA;
delay();
}


}