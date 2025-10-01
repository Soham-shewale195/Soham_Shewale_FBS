#include<stdio.h>
// Q.1 convert time entered in hr,min and sec into total sec.
void main()
{
	int hr=2,min=25,sec=45;
	int Tsec;
	
	hr= hr*60*60;
	min=min*60;
	
	Tsec= hr+min+sec;
	printf("Total Seconds :%d",Tsec);  // 8745 .
}
