#include<stdio.h>
//Q.5.inverted pyramid pattern 
//Input: n = 5 
//Output: 
// * * * * * 
//  * * * *  
//   * * *  
//    * *  
//     *    
void main()
{ 
	int i,j,k;   //            use 3 for loops.
	for(i=1;i<=5;i++)
	{
		 for(j=1;j<=i;j++)
		 {
		 	printf(" ");
		 }
		 for(k=i;k<=5;k++)
		 {
		 	printf(" *");
		 }
		 
		 printf("\n");
		 
	}
	
}
