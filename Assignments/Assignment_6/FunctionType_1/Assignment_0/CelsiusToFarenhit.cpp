#include<stdio.h>
//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
void farenhit();
int main()
{
	 farenhit();
}
void farenhit()
{
	int cels=37;
	float farenhit;
	
	farenhit=(cels*9.0/5)+32;  //9/5 in C (with integers) = 1 (because integer division truncates the decimal).
	printf("Farenhit =%f",farenhit); //use float (or double) and write 9.0/5 instead of 9/5.
	
}
