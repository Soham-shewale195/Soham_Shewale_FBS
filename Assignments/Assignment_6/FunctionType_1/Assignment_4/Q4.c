#include<stdio.h>
//Q.4. Print strong numbers in the given range 1 to n. 
// Definition: Sum of factorials of digits = the number.
// Examples: 145 = 1! + 4! + 5! = 145 .

void main()
{
	int n=165;
	int i,j,k,fact,sum,temp,digit;
	
	printf("Strong num between 1 to %d : ",n);

	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp!=0)
		{
			digit=temp%10; // extract last digit
			temp=temp/10;  // remove last digit
			
			// calculate factorial of digit
			fact=1;
			for(k=1;k<=digit;k++)
			{
				fact=fact*k;
			}
			
			sum=sum+fact;
		}
		
		if(sum==i)
		{
			printf("\n%d",i);
		}
	}
}
