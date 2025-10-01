#include <stdio.h> 
// Q.2 WAP to check if the year is leap or not . 
void main()
{
	int year=1900;
	
	if(year%400 == 0 )
	{
		printf("  Leap year .");		
	}
	else if(year%100 == 0)
	{
		printf(" not Leap year .");	
	}
	else if (year%4 == 0)
	{
		printf("  Leap year .");
	}
	else
	{
		printf(" not Leap year .");
	}
}
