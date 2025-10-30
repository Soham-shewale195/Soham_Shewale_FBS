#include<stdio.h>
//9. Write a C program to input the base and height of a triangle and calculate its area.
float area(float ,float);
int main()
{
	float b,h;
	
	printf("Enter Base and Height : ");
	scanf("%f %f",&b,&h);
	float area1=area(b,h);
	
	printf("Area of Triangle : %f ",area1);
}
float area(float b, float h)
{
	
	float area;
	area= (b*h)*1/2;
	return area;

	
	//output :Enter Base and Height :
	//4
	//5
	//Area of Triangle : 10.000000
}














