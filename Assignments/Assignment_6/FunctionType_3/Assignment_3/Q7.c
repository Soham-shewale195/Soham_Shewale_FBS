#include<stdio.h>
//Q.7 Find factorial of given number. 
//Input: n = 5 
//Output: 120
int fact();   // func declaration.
void main()
{
	int f=fact();  // func call
	printf("Factorial :%d",f);
		
}
int fact() //func definnation
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
	return fac;

}
