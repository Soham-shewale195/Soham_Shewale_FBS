#include<stdio.h>
//Q.7. Take two array and add sum in third array 
//Example- 
//arr[5]= {1,2, 3, 4,5} 
//brr[5]={10,20,30, 40, 50} 
//crr[5]={11,22,33,44,55} 
void main()
{
	int arr[5],	brr[5],crr[5];

	
	
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
//	code logic :

	for(int i=0;i<5;i++)
	{
			crr[i]=arr[i]+brr[i];
	}
	
	// crr array :
	printf("Sum of two array :");
	for(int i=0;i<5;i++)
	{
		printf("  %d",crr[i]);
	}
}
