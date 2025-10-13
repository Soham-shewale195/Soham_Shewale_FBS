#include <stdio.h>
//Write a C program to add two integers and display the result
int sum();
int main()
{
	int s=sum();
	printf("Addition is = %d",s);
}
int sum()
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);

	int sum=a+b;
	return sum;
	
}
