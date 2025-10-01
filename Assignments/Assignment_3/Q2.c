#include<stdio.h>
//Q.2 Print table for given number. 
//Input: n = 5 
//Output: 5 10 15 20 25 30 35 40 45 50
void main()
{
	int n=5,table;
	
	int i=1;
	while(i<=10)
	{
		table = i*n;
		printf("\n%d",table);
		i++;
	}
}
