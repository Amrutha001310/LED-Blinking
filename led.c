#include<lpc21xx.h>
void delay(int n){
	int i,j;
  for(i=0;i<=n;i++){
     for(j=0;j<=268;j++);
  }
}
int main(){
	int i;
	PINSEL0=0x00;
	IODIR0=0xffff;
	while(1){
		for(i=12;i<=15;i++){
			IOSET0=1<<i;
			delay(1000);
		}
		for(i=12;i<=15;i++){
			IOCLR0=1<<i;
			delay(1000);
		}
	}
}
	
   
	