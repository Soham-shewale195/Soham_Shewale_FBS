#include<stdio.h>
//
void main()
{
	int arr[5];
	
	printf("Enter 5 elements: ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("\n%d",arr[i]);
	}
}
