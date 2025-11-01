#include<stdio.h>
//Q.2. Search the given number in array.  
void main()
{
	int arr[5],srch,count=0;
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a search number form array: ");
	scanf("%d",&srch);
	 
//   search logic 
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
