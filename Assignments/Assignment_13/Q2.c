#include<stdio.h>
#include<stdlib.h>
//Q.2. Search the given number in array.  
void main()
{
	int* arr;
	int srch,count=0,ind;
	
	arr=(int*)malloc(5* sizeof(int));
	
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
			ind=i;
		}	
	}
	if(count>0)
	{
		printf(" Number is present at index :%d",ind);
	}
	else
	{
		printf(" Number is Not present");
	}
	
	free(arr);
}
