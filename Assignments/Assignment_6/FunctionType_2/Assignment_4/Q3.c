#include<stdio.h>
//Q.3. Print perfect numbers in the given range 1 to n. 
//A Perfect Number is a number that is equal to the sum of its proper divisors (excluding the number itself).
void perfect();//fun declaration.
void main()
{
	perfect(); //fun call
}
void perfect() //fun defination
{
	int n;
	printf("Enter a number till you want to find perfect numbers: ");
	scanf("\n%d",&n); 
	int i,j,div,sum,temp;
	printf("Perfect numbers between 1 to %d :",n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{ 
			if(i%j==0 && i!=j)
			{
				sum=sum+j;
			}
//			printf("\nSum :%d",sum);
		}
		if(sum==i)
		{
			printf("\n%d",sum);
		}
	}
}
