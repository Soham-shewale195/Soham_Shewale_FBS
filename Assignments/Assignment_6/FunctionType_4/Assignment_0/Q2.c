#include<stdio.h>
// function program for //2. Write a C program to find the area of a circle. (area=PI*r*r)
float area(float);    // Function declaration.
void main()
{
	float r;
	printf("Enter the radius :");
	scanf("%f",&r);
	float area1=area(r);        // Function call.
	printf("Area of circle %f",area1);
}
float area(float r) // Function defination.
{
	
	float area,PI=3.14;
	
	area=PI*r*r;
	return area;

}
