#include<stdio.h>
// Find number is positive or not.
// functioon type 3 ,(with para without return type)
int EvenOdd(int);
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	int i=EvenOdd(num);	
	if(i==1)
	{
		printf("Number is Positive");
	}
	else
	{
			printf("Number is Negative");
	}
}
int EvenOdd(int num)
{
	
	if(num>=0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
