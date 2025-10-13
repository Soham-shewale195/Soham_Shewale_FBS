#include<stdio.h>
//Q.7 Find factorial of given number. 
//Input: n = 5 
//Output: 120
void fact();
void main()
{
	fact();	
}
void fact()
{
	int n ,fac=1;
	printf("Enter a number :");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("Factorial :%d",fac);
}
