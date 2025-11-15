#include<stdio.h>
#include<stdlib.h>
//Q.4. Find odd and even among the numbers. 
void main()
{
	int *arr,odd[5],even[5];
	int o=0 , e=0;                      // we use o and e to increase count only if odd or even num occurs
	
	arr=(int *)malloc(sizeof(int) * 5);
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
//	sum
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0 )
		{
			even[e]=arr[i];
			e++;             // only increase count if even num comes.
		}
		else 
		{
			odd[o]=arr[i];
			o++;                   // only increase count if odd num comes.
		}
	}
	printf("\nEven numbers:");
	
	for(int i=0;i<e;i++)           // loop run e times.so garbage num dont print.
	{
		printf(" %d",even[i]);		
	}
	printf("\nOdd numbers:");
	for(int i=0;i<o;i++)             // loop run o times.so garbage num dont print.
	{
		printf(" %d",odd[i]);		
	}	
	
	free(arr);     // release the heap memory.
}
