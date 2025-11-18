#include<stdio.h>
//Que 2: Check if the array is palindrome or not (not using function )

void main()
{
	int size;
	printf("Enter the Size of array: ");
	scanf("%d",&size);
	
	int arr[size], temp[size];
	printf("Enter the values in array: ");
	for (int i=0;i<size;i++)
	{
			scanf(" %d",&arr[i]);
	}
	
	// reverse array
		int j=0;
		for(int i=size-1;i>=0;i--)
		{
			temp[j]=arr[i];
			j++;
		}
		
	//condition check
		int count=1;
		for (int i=0;i<size;i++)
		{
			if(arr[i]!=temp[i])
			{
				count=0;
				break;
			}
		}	
	
	// print output
	if(count== 1)
	printf("Its a palindrome array .");
	else 
	printf("Its not a palindrome array .");
}
