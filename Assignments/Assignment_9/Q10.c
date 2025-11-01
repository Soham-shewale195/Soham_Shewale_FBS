#include<stdio.h>
//Q.10. Sort the array.  

void sort (int arr[],int size)
{
	// code logic
	int temp;
	for(int i=0;i<5;i++)
	{
		for (int j=i+1 ;j<5; j++)   // start from next element.
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}	
		}
	}
	
	// print final array:
	printf("Sorted Array:");
	for(int i=0;i<5;i++)
	{
		printf("  %d",arr[i]);
	}
}
void main()
{
	int arr[5];
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,5);
}

