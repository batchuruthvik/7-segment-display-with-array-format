#include<regx51.h>
#define SRHSegment P2
void delay();
void main(){
	SRHSegment=0xc0; delay();  //0
	SRHSegment=0xF9; delay();  //1
	SRHSegment=0xA4; delay();  //2
	SRHSegment=0xB0; delay();   //3
	SRHSegment=0x99; delay();  //4
	SRHSegment=0x92; delay();  //5
	SRHSegment=0x82; delay();  //6
	SRHSegment=0xF8; delay();  //7
	SRHSegment=0x80; delay();  //8
	SRHSegment=0x90; delay();  //9
}
void delay()
{
	int i,j;
	for(i=0;i<500;i++)
   {
		 for(j=0;j<500;j++);
	 }
 }
