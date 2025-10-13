#include<stdio.h>
// Find  Even odd number
// leap year code
//Rule to check leap year:
//If a year is divisible by 4, it is usually a leap year.
//But, if the year is also divisible by 100, it is not a leap year.
//However, if the year is divisible by 400, it is a leap year.
int leap();
int main()
{

	int l=leap();
	if(l==0)
	{
		printf("Leap year ");
	}
	else
	{
		printf("Not a Leap year .");
	}
}
int leap()
{	
	int year,count=0;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%4==0 && year!=100 || year%400==0)
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
