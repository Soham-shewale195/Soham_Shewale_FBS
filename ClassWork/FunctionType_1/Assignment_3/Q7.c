#include<stdio.h>
//Q.7 Find factorial of given number. 
//Input: n = 5 
//Output: 120
void main()
{
	int n=5 ,fac=1;
	int i=1;
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("Factorial :%d",fac);
	
}
