#include<stdio.h>
void main()
{
	int arr[5];
	int brr[7];
	int crr[10];
	
	// scan arrays:
	printf("elements of array A :");
	for(int i=0;i<5;i++)
	{
			scanf("%d",&arr[i]);
	}
	printf("elements of array B :");
	for(int i=0;i<7;i++)
	{
			scanf("%d",&brr[i]);
	}
	printf("elements of array C :");
	for(int i=0;i<10;i ++)
	{
			scanf("%d",&crr[i]);
	}
	
	// print arrays 
	printf("Enter 5 elements for array A :");
	for(int i=0;i<5;i++)
	{
			printf("%d",arr[i]);
			printf("\n");
	}
	printf("Enter  7 elements for array B :");
	for(int i=0;i<7;i++)
	{
			printf("%d",brr[i]);
			printf("\n");
	}
	printf("Enter 10 elements for array C :");
	for(int i=0;i<10;i++)
	{
			printf("%d",crr[i]);
			printf("\n");
	}
	

}
