#include<stdio.h>
// Find number is positive or not.
// functioon type 3 ,(with para without return type)
void EvenOdd(int);
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	EvenOdd(num);	
}
void EvenOdd(int num)
{
	
	if(num>=0)
	{
		printf("Number is Positive");
	}
	else
	{
			printf("Number is Negative");
	}
}
