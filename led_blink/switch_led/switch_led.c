#include<reg51.h>

sbit LED=P2^0;
sbit SW=P1^0;

void main(){

	LED=0;
	SW=1;

	while(1){
		/*if(SW=0){LED=1;}*/
		   LED=~SW;
	}

}