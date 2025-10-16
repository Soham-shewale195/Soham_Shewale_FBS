#include<stdio.h>
//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32
float farenhit();
int main()
{
	float f= farenhit();
	printf("Farenhit =%f",f); //use float (or double) and write 9.0/5 instead of 9/5.

}
float farenhit()
{
	int cels;
	printf("Enter the temp in celcious :");
	scanf("%d",&cels); 
	float farenhit;
	
	farenhit=(cels*9.0/5)+32;  //9/5 in C (with integers) = 1 (because integer division truncates the decimal).
	return farenhit;
}
