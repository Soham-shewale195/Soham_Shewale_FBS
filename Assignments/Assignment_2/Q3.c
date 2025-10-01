#include<stdio.h>
//Q.3. Write a program to find greatest of three numbers using nested if-else.
void main()
{
	int a=20,b=40,c=30;
	
	if(a>b && a>c)
	{
		printf("A is greater  :%d",a);
	}
	else if(b>a && b>c)
	{
		printf("A is greater  :%d",b);
	}
	else if(c>a && c>b)
	{
		printf("A is greater  :%d",c);
	}
//	else if(a==b && b==c )
//	{
//		printf(" all three values are same.  ");
//	}
//	else if(a==b || b==c || a==c)
//	{
//		printf(" Any two values are same.  ");
//	}
	else
	{
		printf(" Wrong input  ");
	}
	
	
}
