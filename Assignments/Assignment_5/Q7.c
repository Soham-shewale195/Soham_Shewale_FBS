#include<stdio.h>
//Q.7. Print a Floyd’s triangle pattern 
//Input: n = 4 
//Output: 
//1 
//2 3 
//4 5 6 
//7 8 9 10 
void main()
{ 
	int i,j,k,n=1;   //     use another variable to increate the n value.
	for(i=1;i<=4;i++)
	{
		 for(j=1;j<=i;j++)
		 {
		 	printf(" %d",n++);
		 }
		 printf("\n");
		 
	}
	
}
