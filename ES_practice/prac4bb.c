#include <reg51.h>
#include <reg51.h>
void delay(){
int i,j;
for(i=0;i<100;i++){
for(j=0;j<100;j++){}}
}
void main(){
	int i;
	int num[]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
for(i=0;i<10;i++){
	P0=num[i];
	delay();
}
}

/*void delay(){
int i;
for(i=0;i<10000;i++){}
}
void main(){
int num[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
int i,j;
while(1){
for(i=0;i<10;i++){
P0=num[i];
for(j=0;j<10;j++){
P2=num[i];
delay();
}
}

}
}
*/
