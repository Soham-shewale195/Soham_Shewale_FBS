#include<stdio.h>
//Q.2.  Accept three sides of a triangle from the user and determine whether the triangle is 
//equilateral, isosceles, or scalene. 

//Equilateral: All three sides equal 
//Isosceles: Any two sides equal (but not all three equal, else it’s equilateral).
//Scalene: All sides different 

// In this prob we declare function above main function ,so we dont have to declare func delcaration.
void triangle(float* a,float* b,float* c)  
{
	
	if(*a+*b>*c && *b+*c>*a && *a+*c>*b )
	{
		if(*a==*b && *b==*c)
		{
			printf("Its a Equilateral triangle .");
		}
		else if(*a==*b || *b==*c || *a==*c)
		{
				printf("Its a Isosceles triangle .");
		}
		else
		{
			printf("Its a Scelene triangle .");
		}
	}
	else 
	{
		printf("Its not a triangle .");
	}
}
void main()
{
	float a,b,c;
	
	printf("Enter sides of trinagle :");
	scanf("%f%f%f",&a,&b,&c);
	triangle(&a,&b,&c);
}

