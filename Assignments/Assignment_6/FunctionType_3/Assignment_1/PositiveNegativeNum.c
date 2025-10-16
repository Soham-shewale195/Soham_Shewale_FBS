#include<stdio.h>
// Find  Even odd number
int EvenOdd();
int main()
{
	int eo=EvenOdd();	
	if(eo==0)
	{
		printf("Number is Positive");
	}
	else
	{
			printf("Number is Negative");
	}
}
int EvenOdd()
{
	int num,count=0;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>=0)
	{
		count=0;
		return count;
	}
	else
	{
		count++;
		return count;
	}
}
