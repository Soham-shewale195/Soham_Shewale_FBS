#include<stdio.h>
//Q.Write a program to add alternate numbers from a given range.
//Example:
//Input: start = 1, end = 5
//Output: sum = 9

void main()
{
	int start,end,i,sum=0;
	
	printf("Enter start and end range :");
	scanf("%d%d",&start,&end);
	
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
		i++; // increment i by 1 so we can skip one value.
	}
	printf("%d",sum);
}
