#include<stdio.h>
//Q.9. Reverse the given array. 

void rev(int arr[],int size)
{
	//	code logic :
	printf("Reverse array :");
	for(int i=5;i>=1;i--)
	{
		printf("  %d",arr[i]);
	}
}
void main()
{
	int arr[5];

	//for scan
	printf("Enter 5 numbers :");
	for(int i=1;i<=5;i++)
	{
		scanf("%d",&arr[i]);
	}
	rev(arr,5);
}

