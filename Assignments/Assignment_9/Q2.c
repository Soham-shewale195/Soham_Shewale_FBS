#include<stdio.h>
//Q.2. Search the given number in array.  
void search (int arr[],int size,int srch)
{
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(srch==arr[i] )
		{
			count++;
		}	
	}
	if(count>0)
	{
		printf(" Number is present ,count: %d",count);
	}
	else
	{
		printf(" Number is Not present");
	}
}
void main()
{
	int arr[5],srch;
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a search number form array: ");
	scanf("%d",&srch);
	search(arr,5,srch);
}

