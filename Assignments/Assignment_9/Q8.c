#include<stdio.h>
//Q.8. Merge two arrays .
void merge(int arr[],int size,int brr[],int size1)
{
	//	code logic :
	int crr[10];
	for(int i=0;i<10;i++)
	{
		if(i<5)
			crr[i]=arr[i];
		else
		crr[i]=brr[i-5];   // it goes 5-5 =0 to 10-5=5 means last element.
	}
	
	// crr array :
	printf("Merge of two array :");
	for(int i=0;i<10;i++)
	{
		printf("  %d",crr[i]);
	}
}
void main()
{
	int arr[5],	brr[5];
		
	//for scan
	printf("Enter 5 numbers :");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter 5 numbers :");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	merge(arr,5,brr,5);

}

