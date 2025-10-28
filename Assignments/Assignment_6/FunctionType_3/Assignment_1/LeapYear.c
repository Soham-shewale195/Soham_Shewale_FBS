#include<stdio.h>
// Find  Even odd number
// leap year code
//Rule to check leap year:
//If a year is divisible by 4, it is usually a leap year.
//But, if the year is also divisible by 100, it is not a leap year.
//However, if the year is divisible by 400, it is a leap year.
void leap(int);
void main()
{
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	leap(year);
}
void leap(int year)
{	

	
	 if(year%400==0 )
	{
		printf("Leap year ");
	}
	else if( year%100==0 )
	{
		printf("Not a Leap year ");
	}
	else if (year%4==0 )
	{
		printf("Leap year ");
	}
	else
	{
		printf("Not a Leap year .");
	}
	
}
