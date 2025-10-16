#include<stdio.h>
// function program for //2. Write a C program to find the area of a circle. (area=PI*r*r)
float area();  // Function declaration.
void main()
{
	float a=area();    // Function call.
	printf("Area of circle %f",a);
}
float area() // Function defination.
{
	
	float area,r;
	float PI=3.14;
	printf("Enter the radius :");
	scanf("%f",&r);

	
	area=PI*r*r;
	return area;
}
