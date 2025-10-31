#include<stdio.h>
//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32

void farenhit(int*); // func declaration
int main()
{
	int cels;
	printf("Enter temprature in Celcious:");
	scanf("%d",&cels);
	 farenhit(&cels);   // func call.
}
void farenhit(int* temp)  // func defination
{
	float faren;
	faren=(*temp*9.0/5)+32;  //9/5 in C (with integers) = 1 (because integer division truncates the decimal).
	printf("Farenhit =%f",faren); //use float (or double) and write 9.0/5 instead of 9/5.
	
}
