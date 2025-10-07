#include<stdio.h>
//Q.10. Print a hollow square with diagonal pattern 
//Input: n = 5 
//Output: 
//*  *  *  *  * 
//*  *        *  
//*     *     *
//*        *  *  
//*  *  *  *  *
void main()
{ 
	int i,j,k,n=5;   
	for(i=1;i<=n;i++)
	{
		 for(j=1;j<=n;j++)
		 {
		 	if(i==1 || j==1 || i==n || j==n || i==j )  // (i==j)condition used to print diagonal in hollow square pattern.
		 	{
		 		printf(" *");
			}
		 	else
		 	{
		 		printf("  ");          //  added two space beacuse (" *") here 1 space is used before star .
			}
		 }
		 printf("\n");
		 
	}
	
}
