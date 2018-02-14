#include<reg51.h>

void main(){

	P1=0x00;
	P2=0x00;

	while(1){
		  if(P1==0x01){
		  	P2=0xFF;
		  }
		  else if(P1==0x00){
		  	P2=0x00;
		  }
	}

}