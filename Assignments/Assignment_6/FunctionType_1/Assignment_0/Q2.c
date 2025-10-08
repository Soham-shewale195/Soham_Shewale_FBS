#include<stdio.h>
// function program for //2. Write a C program to find the area of a circle. (area=PI*r*r)
void area();  // Function declaration.
void main()
{
	area();    // Function call.
}
void area() // Function defination.
{
	
	float area,r;
	float PI=3.14;
	r=5 ;
	
	area=PI*r*r;
	printf("Area of circle %f",area);
}
