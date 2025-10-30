#include<stdio.h>
// Find  Even odd number
// leap year code
//Rule to check leap year:
//If a year is divisible by 4, it is usually a leap year.
//But, if the year is also divisible by 100, it is not a leap year.
//However, if the year is divisible by 400, it is a leap year.
// Solving this question using Func Type 4 (with para ,with datatype).
int leap(int);
void main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	int i=leap(year);
	
	if( i==1)
	{
		printf("Leap year ");
	}
	else
	{
		printf("Not a Leap year .");
	}
}
int leap(int year)
{	

	
	 if(year%400==0 )
	{
		return 1;
	}
	else if( year%100==0 )
	{
		return 0;
	}
	else if (year%4==0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
