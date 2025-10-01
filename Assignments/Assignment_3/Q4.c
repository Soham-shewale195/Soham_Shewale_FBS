#include<stdio.h>
//Q.4 Check the given number is prime or not. 
//Input: n = 7 
//Output: Prime
void main()
{
	int n= 7,i,a=0;
	
	if(n==0 || n==1)
	{
		a=0;
	}
	else
	{
		i=2;
		while(i<=n/2) // 
		{
			if(n%i==0)
			{
				a=0;
				break;
			}
			else 
			{
				a=1;
			}
			 i++;
		}
	}
	if(a)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
	
}
