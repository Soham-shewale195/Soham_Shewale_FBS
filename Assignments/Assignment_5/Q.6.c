#include<stdio.h>
//Q.6. Print a half pyramid using numbers 
//Input: n = 5 
//Output: 
//1 
//12 
//123 
//1234 
//12345
void main()
{ 
	int i,j,k;   //            use 3 for loops.
	for(i=1;i<=5;i++)
	{
		 for(j=1;j<=i;j++)
		 {
		 	printf("%d",j);
		 }
		 printf("\n");
		 
	}
	
}
