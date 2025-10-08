#include<stdio.h>
// Find  Even odd number
void EvenOdd();
int main()
{
	EvenOdd();	
}
void EvenOdd()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>=0)
	{
		printf("Number is Positive");
	}
	else
	{
			printf("Number is Negative");
	}
}
