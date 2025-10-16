#include<stdio.h>
//Q.2. Write a program to find the power of any number.
//Example:
//2^4 = 16

void main()
{
	int num,powr,sum=1;
	
	printf("Enter a number :");
	scanf("%d",&num);
	printf("Enter a power :");
	scanf("%d",&powr);

	for (int i=1;i<=powr;i++)
	{
		sum=sum*num;
	}
	printf("The power of given number : %d",sum);
	
}
