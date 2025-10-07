#include<stdio.h>
//Q.4. pyramid pattern 
//Input: n = 5 
//Output: 
//    * 
//   * * 
//  * * * 
// * * * * 
//* * * * *
void main()
{ 
	int i,j,k;   //            use 3 for loops.
	for(i=1;i<=5;i++)
	{
		 for(j=1;j<=5-i;j++)
		 {
		 	printf(" ");
		 }
		 for(k=1;k<=i;k++)
		 {
		 	printf(" *");
		 }
		 
		 printf("\n");
		 
	}
	
}
