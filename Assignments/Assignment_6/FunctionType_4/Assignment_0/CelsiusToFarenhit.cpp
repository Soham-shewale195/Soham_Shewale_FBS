#include<stdio.h>
//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
// func type 4(with returnType and with parameter).

float farenhit(float); // func declaration
int main()
{
	float cels;
	
	printf("Enter Temperature in Celcious:");
	scanf("%f",&cels);
	
	float faren=farenhit(cels);   // func call.
	printf("Farenhit =%f",faren);  //use float (or double) and write 9.0/5 instead of 9/5.
}
float farenhit(float temp)  // func defination
{
	float faren;
	faren=(temp*9.0/5)+32;  //9/5 in C (with integers) = 1 (because integer division truncates the decimal).
 	return faren;
	
}
