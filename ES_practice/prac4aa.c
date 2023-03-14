#include <reg51.h>
void send(char x){
SBUF=x;
while(TI==0);
TI=0;
}
void main(){
TMOD=0x20;
TH1=0xFD;
SCON=0x50;
TR1=1;
send('h');
send('e');
send('l');
send('l');
send('o');
while(1);

}

