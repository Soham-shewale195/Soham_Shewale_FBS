#include<stdio.h>
// q. Average  of array elements.
void main()
{
	int arr[5];
	int sum=0;
	float avg;
	printf("Enter 5 elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for( int i=0;i<5;i++)
	{
		sum=sum+arr[i];
		avg=sum/5;
	}
		printf("Avg of array: %f",avg);
}
