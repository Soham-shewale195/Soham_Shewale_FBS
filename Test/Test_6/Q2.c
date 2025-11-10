#include<stdio.h>
// Q.2 Write a program in C to Find the maximum number in Array?
void main()
{
	int arr[5],max;
	printf("Enter elements in arr: ");
	for(int i=0;i<5;i++)
	{
		scanf(" %d",&arr[i]);		
	}
	max=arr[0];
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];	
		}	
	}
	printf("Maximum number in array is : %d",max);
	

}
