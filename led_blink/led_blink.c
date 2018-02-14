#include<reg51.h>

sbit led=P1^0;

void DELAY_ms(unsigned int ms_Count)
{
    unsigned int i,j;
    for(i=0;i<ms_Count;i++)
    {
        for(j=0;j<100;j++);
    }
}

void main(){
	led =0;
	while(1){
		led = 1;
		DELAY_ms(1000);
		led = 0;
		DELAY_ms(1000);
		}
}
