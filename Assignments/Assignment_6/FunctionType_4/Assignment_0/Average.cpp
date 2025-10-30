#include<stdio.h>
//Write a C program to input five numbers and find their average.

// func type 4(with returnType and with parameter).
float avg(float,float,float,float,float);
int main()
{
	float a,b,c,d,e;
	
	printf("Enter 5 numbers : ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	
	float average=avg(a,b,c,d,e);;
	printf("Average of 5 numbers :%.2f",average);
}
float avg(float q,float r,float x,float y,float z)
{
	float average;
	average=(q+r+x+y+z)/5;
	return average;
}
//done
















