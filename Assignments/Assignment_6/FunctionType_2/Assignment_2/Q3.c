#include<stdio.h>
//Q.3. Write a program to find greatest of three numbers using nested if-else.
int great();
void main()
{
	int g=great();
	if(g==0)
	{
		printf("A is greater ");
	}
	else if(g==1)
	{
		printf("B is greater ");
	}
	else if(g==2)
	{
		printf("C is greater ");
	}
}
int great()
{
	int a,b,c,count=0;
	printf("Enter values of A ,B and C repectively :");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		count=0;
		return count;
	}
	else if(b>a && b>c)
	{
		count++;
		return count;
	}
	else if(c>a && c>b)
	{
		count=2;
		return count;
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

