#include<reg51.h>
void delay()
{
	int i, j;
	for(i = 0; i <= 1000; i++)
	{
		for(j = 0; j < 100; j++)
		{
		}
	}
}

void main()
{
	while(1)
	{
		
		//clockwise
		P2=0x01;
		delay();
		P2 = 0x02;
		delay();
		P2 = 0x04;
		delay();
		P2 = 0x08;
		delay();
	}
}