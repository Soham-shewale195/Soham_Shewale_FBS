#include<stdio.h>
//Q.1 Write a program to print even and odd numbers in a given range.
//Example 1:
//Input: start = 10, end = 25
//Output: odd: 11 13 15 17 19 21 23 25
//Example 2:
//Input: start = 1, end = 15
//Output: even: 2 4 6 8 10 12 14

void main()
{
	
	int start,end,i;
		printf("Give start and end range :");
		scanf("%d%d",&start,&end);
	printf("\nEven numbers :");
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
		printf("\nGive start and end range :");
		scanf("%d%d",&start,&end);
	printf("Odd numbers :");
	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
		}
	}
	
}
