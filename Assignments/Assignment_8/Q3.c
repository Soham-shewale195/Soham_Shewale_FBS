#include<stdio.h>
//Q.3. Find sum of all numbers. 
void main()
{
		int arr[5],sum;
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
//	sum
	for(int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of all elements: %d",sum);
	
}
