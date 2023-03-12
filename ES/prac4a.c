#include<reg51.h>
void send(char x); // Prototype of send() function.
void main(void)
{
TMOD = 0x20; // 0x20 is stored in TMODregister to set Timer1 in 8-
//Bit Auto-Reload Mode
TH1 = 0xFD; // TH1register is loaded with value 0xFD to generate
//baud rate of 9600
SCON = 0x50; // 0x50 is loaded into SCONregister to configure
//Timer1 in Mode 1.
TR1 = 1; // When TR = 1.
	
send('Y');
send('E');
send('S');
while(1);
}
void send(char x) // Send() function transmits the character passed to it
{
SBUF = x;
while(TI==0);
// Wait till transmission is finised i.e. wait until TI = 1
TI=0; // Clear TI flag
}