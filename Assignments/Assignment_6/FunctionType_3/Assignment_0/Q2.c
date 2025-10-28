#include<stdio.h>
// function program for //2. Write a C program to find the area of a circle. (area=PI*r*r)
void area(float);    // Function declaration.
void main()
{
	float r;
	printf("Enter the radius :");
	scanf("%f",&r);
	area(r);        // Function call.
}
void area(float r) // Function defination.
{
	
	float area,PI=3.14;
	
	area=PI*r*r;
	printf("Area of circle %f",area);
}
