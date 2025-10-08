#include<stdio.h>
//9. Write a C program to input the base and height of a triangle and calculate its area.
void area();
int main()
{
	area();
}
void area()
{
		float b,h,area;
	
	printf("Enter Base and Height : ");
	scanf("%f %f",&b,&h);
	
	area= (b*h)*1/2;
	
	printf("Area of Triangle : %f ",area);
	
	//output :Enter Base and Height :
	//4
	//5
	//Area of Triangle : 10.000000
}














