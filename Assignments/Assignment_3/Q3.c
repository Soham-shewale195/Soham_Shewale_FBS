#include<stdio.h>
//Q.3 Sum of numbers in given range. 
//Find sum of numbers from start to end. 
//Input: start = 1, end = 5 
//Output: 15
void main()
{
	int s=1,e=5,sum=0;
	
	int i=1;
	while(i<=5)
	{
		sum= sum+i;
		i++;
	}
		printf("Sum :%d",sum);
}
