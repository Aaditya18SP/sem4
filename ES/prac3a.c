#include<reg52.h>
void delay(unsigned int i){
	unsigned int j;
for(j=0;j<i;j++);
}
void main(){
P1=00000000;
while(1){
P1++;
delay(10000);
}

}