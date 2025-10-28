#include<stdio.h>
// q. sum of array elements.
void main()
{
	int arr[5];
	int sum=0;
	printf("Enter 5 elements:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for( int i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
		printf("sum of array: %d",sum);
}
