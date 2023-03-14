#include <reg51.h>
/*void delay(){
int i;
for(i=0;i<1000;i++);
}*/
void main(){
P2=0x00;
while(1){
while(P2<0xFF){
P2+=0x05;
//delay();
}
while(P2>0x00){
P2-=0x05;

}


}

}