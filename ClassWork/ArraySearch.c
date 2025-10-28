#include<stdio.h>
//
void main()
{
	int n,found=0,i,index;
	int arr[5];
	//get 5 elemets
	printf("Enter 5 elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	//get element to search for
	printf("Enter a  search element :");
	scanf("%d",&n);
	
	for( i=0;i<5;i++)
	{
		if(n==arr[i]) // compare elements with num.
		{
			found=1;  
			index=i;   // current index.
			break ;  // after found element , loop breaks.
		}
	}
	if(found==1)
	{
		printf("Element is present at index : %d",index);
	}
	else
	{
		printf("Element is not present");
	}
		
}
