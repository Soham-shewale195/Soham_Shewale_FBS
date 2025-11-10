#include<stdio.h>
//write a program in c to find elements in two arrays
//eg.arr=1 2 3 4 5 
//   brr=1 7 8 3 2
// opt:1 2 3 
void main()
{
	int arr[5],brr[5],crr[5];
	
	printf("Enter the elements in arr:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements in brr:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	printf("Common elements are:");
	for(int i=0;i<5;i++) // arr[i]
	{
		for(int j=0;j<5;j++)  // brr[j]
		{
			if(arr[i]==brr[j])  // here arr[i] is cheked with every element in brr.
			{
				printf(" %d",arr[i]);
				break;
			}
		}
	}
	
}
