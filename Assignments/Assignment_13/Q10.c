#include<stdio.h>
#include<stdlib.h>
//Q.10. Sort the array.  
void main()
{
	int *arr,temp;
	
	arr= (int *)malloc(sizeof(int)* 5);
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	 
// code logic

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
	
	free(arr);
}
