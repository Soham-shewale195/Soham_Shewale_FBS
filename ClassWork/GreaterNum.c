#include<stdio.h>
//Q.1 Find greater num among 3.
void main()
{
	int a=20,b=30,c=31;
	if(a>b)
	{
		if(a>c)
		{
			printf("A is greater.");
		}
		else
		{
			printf("C is greater.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is greater .");
		}
		else
		{
			printf("C is greater .");
		}
	}
}
