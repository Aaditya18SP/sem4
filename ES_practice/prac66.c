#include <reg51.h>
void main(){
int i;
for(i=0;i<1000;i++);
}
void main(){
while(1){
P0=0x01;
delay();

P0=0x04;
delay();
P0=0x02;
delay();
P0=0x08;
delay();

P0=0x01;
delay();
P0=0x02;
delay();
P0=0x08;
delay();
P0=0x04;
delay();


}

}