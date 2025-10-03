#include<stdio.h>
//Q.4 Check the given number is prime or not. 
//Input: n = 7 
//Output: Prime
void main()
{
	int n= 7,flag=0;
	int i=2;
		while(i<=n/2) //  
		{
			if(n%i==0)
			{
				flag=1;
				break;  // stops here if condition true.
			}
			 i++;
		}
	if(flag==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}
