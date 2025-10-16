#include<stdio.h>
//Q.2.  Accept three sides of a triangle from the user and determine whether the triangle is 
//equilateral, isosceles, or scalene. 

//Equilateral: All three sides equal 
//Isosceles: Any two sides equal (but not all three equal, else it’s equilateral).
//Scalene: All sides different 
int triangle();
void main()
{
	int t=triangle();
		if(t==0)
		{
			printf("Its a Equilateral triangle .");
		}
		else if(t==1)
		{
			printf("Its a Isosceles triangle .");
		}
		else
		{
			printf("Its a Scelene triangle .");
		}
}
int triangle()
{
		float a,b,c;
	int count=0;
	printf("Enter sides of trinagle :");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a+b>c && b+c>a && a+c>b )
	{
		if(a==b && b==c)
		{
			count=0;
			return count;
		}
		else if(a==b || b==c || a==c)
		{
			count++;
			return count;
		}
		else
		{
			count=2;
			return count;
		}
	}
	else 
	{
		printf("Its not a triangle .");
	}
}
