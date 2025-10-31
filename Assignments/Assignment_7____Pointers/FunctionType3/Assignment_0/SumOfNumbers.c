#include <stdio.h>
//Write a C program to add two integers and display the result
void sum(int*,int*);
void main()
{
	int a,b;
	printf("Enter two  number : ");
	scanf("%d%d",&a,&b);
	
	sum(&a,&b);
}
void sum(int* a,int* b)
{
	
	int sum=*a+*b;
	
	printf("Addition of %d and %d = %d",*a,*b,sum);
}
