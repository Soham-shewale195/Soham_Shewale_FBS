#include<stdio.h>
//Q.3. Print an inverted right-angled triangle pattern 
//Input: n = 5 
//Output: 
//***** 
//**** 
//*** 
//** 
//* 
void main()
{
	int i,j;
	for(i=5;i>=0;i--)
	{
		 for( j=i;j>=0;j--) // j is depend on i.
		 {
		 	printf(" *");
		 }
		 printf("\n");
	}
}
