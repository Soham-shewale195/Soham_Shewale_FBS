#include<stdio.h>
//Q.6. Accept array and print only prime numbers of array.  
//A number is prime if:
//It is greater than 1.
//It can be divided evenly only by 1 and itself.

void prime(int arr[],int size)
{
	// prime num logic
	int pri[5];
	int p=0;
	for(int i=0;i<5;i++)   // increase arr index value
	{
//		int num=arr[i];   // storing arr value in other variable.
		int isprime=1;
		
		if(arr[i]<=1)
		{
			isprime=0;
			
		}
		else
		{
			for(int j=2;j<arr[i];j++)   // loop start from 2 ,cause 1 is not prime num.
			{
				if(arr[i]%j==0)    // divide arr with j num.
				{
					isprime=0;
					break;
				}
			}
		}
		if(isprime==1)
		{
			pri[p]=arr[i];
			p++;
		}		
	}
	// print prime num
	printf("Prime numbers :");
	for(int i=0;i<p;i++)
	{
		printf("  %d",pri[i]);
	}
	
}
void main()
{
	int arr[5];
	
	printf("Enter 5 numbers:");
	//for scan
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	prime(arr,5);

}

