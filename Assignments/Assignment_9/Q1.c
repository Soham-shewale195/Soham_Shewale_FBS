#include<stdio.h>
//Q.1. Find minimum and maximum number in array. 

void minmax(int arr[],int size)
{
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
		if(max<arr[i] )
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	
	}
		printf("Max number: %d",max);
		printf("\nMin number: %d",min);	
}
void main()
{
	int arr[5],min,max;
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	minmax(arr,5);
	
}


	

