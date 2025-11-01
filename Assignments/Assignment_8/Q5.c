#include<stdio.h>
//Q.5. Print alternate elements in array.  
void main()
{
	int arr[5];
	
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate numbers:");
	for(int i=0;i<5;i++)
	{
		if(i%2==0)
		{
			printf("  %d",arr[i]);
		}
	}
}
