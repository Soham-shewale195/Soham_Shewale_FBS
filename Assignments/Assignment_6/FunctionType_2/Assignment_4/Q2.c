#include<stdio.h>
//Q.2. Print prime numbers in the given range 1 to n.
void prime();
void main()
{
	prime();
}
void prime()
{
	int n, i,j, flag=0;
	printf("Enter a number till you want to find prime numbers: ");
	scanf("\n%d",&n); 
	printf("Prime number between 1 to %d are :\n",n);	
	for(i=2;i<=n;i++) // i=2, cause 0 & 1 are not prime num.
	{
		flag=0;   // reset for each i
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)  // checks if i can divide or not.
			{
				flag=1; // not a prime
				break;
			}
		}
		if(flag==0) // means i is prime
		{
			printf("\n%d",i);
		}
	}
}




