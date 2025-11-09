#include<stdio.h>
// Structure code: store and display the fan information.
//Q.7.Time (hour, min, sec)  
struct Time
{
	int hour;
	int min;
	int sec;
};    // we have to use (;) at end of bracket.in struct.

void display(struct Time f1,struct Time f2)
{
	printf("\n Time one detail :\n");
	printf("Hour =%d\n",f1.hour);
	printf("Min  =%d\n",f1.min);
	printf("Sec =%d\n",f1.sec);
	
	printf("\n Time two detail :\n");
	printf("Hour =%d\n",f2.hour);
	printf("Min  =%d\n",f2.min);
	printf("Sec =%d\n",f2.sec);
}

void main()
{
	struct Time f1,f2;
	
	f1.hour=19;
	f1.min=5;
	f1.sec=60;
	
	printf("Enter Hours:");
	scanf(" %d",&f2.hour);
	printf("Enter min:");
	scanf(" %d",&f2.min);
	printf("Enter sec:");
	scanf(" %d",&f2.sec);
	display(f1,f2);

}

