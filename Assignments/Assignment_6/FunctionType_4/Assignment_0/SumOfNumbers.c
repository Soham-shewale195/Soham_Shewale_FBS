#include <stdio.h>
//Write a C program to add two integers and display the result
int sum(int,int);
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	int sum1=sum(a,b);
	printf("Addition is = %d",sum1);
}
int sum(int a,int b)
{
	
	int sum=a+b;
	return sum;

}
