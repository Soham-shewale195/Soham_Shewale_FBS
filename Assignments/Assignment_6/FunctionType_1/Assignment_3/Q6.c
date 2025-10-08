#include<stdio.h>
//Q.6 Check the given number is Perfect number or not. 
//Input: n = 28 
//Output: Perfect
//If n is a number, and the sum of all divisors of n except n itself equals n, then n is a perfect number.
//Divisors of 6 (excluding 6 itself) ? 1, 2, 3
//Sum : 1 + 2 + 3 = 6 ( Perfect number)
void main()
{
	int n=28,sum=0;
	int i=1;
	while(i<=n)
	{
		if(n%i==0 && i!=n)
		{
			sum= sum+i;
		}
		i++;
	}
	
//	printf("sum:%d",sum);
	if(n==sum)
	{
		printf("Perfect num");
	}
	else
	{
		printf("Not Perfect num");
	}
	
}
