#include<stdio.h>
//Q.2 Print table for given number. 
//Input: n = 5 
//Output: 5 10 15 20 25 30 35 40 45 50
void table();
void main()
{
	table();
}
void table()
{
	int n=5,table;
	int i;
	for (i=1;i<=10;i++)
	{
		table = i*n;
		printf("\n%d",table);
	}

//	int i=1;
//	while(i<=10)
//	{
//		table = i*n;
//		printf("\n%d",table);
//		i++;
//	}
		
}
