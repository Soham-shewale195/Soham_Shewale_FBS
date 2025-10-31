#include<stdio.h>
//9. Write a C program to input the base and height of a triangle and calculate its area.
void area(float* ,float*);
int main()
{
	float b,h;
	
	printf("Enter Base and Height : ");
	scanf("%f %f",&b,&h);
	area(&b,&h);
}
void area(float* b, float* h)
{
	
	float area;
	area= ((*b)*(*h))*1/2; //   here *b,*h consist values of variable b and h  present at variables address. 
	
	printf("Area of Triangle : %f ",area);
	
	//output :Enter Base and Height :
	//4
	//5
	//Area of Triangle : 10.000000
}














