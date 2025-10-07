#include<stdio.h>
//9. Print a hollow square pattern 
//Input: n = 4 
//Output: 
//*  *  *  * 
//*        *
//*        *  
//* 	   *
//* 	   *
//*  *  *  *
void main()
{ 
	int i,j,k,n=1;   //     use another variable to increate the n value.
	for(i=1;i<=4;i++)
	{
		 for(j=1;j<=4;j++)
		 {
		 	if(i==1 || j==1 || i==4 || j==4 )  // condition to print hollow square pattern.
		 	{
		 		printf(" *");
			}
		 	else
		 	{
		 		printf("  ");          //  added two space
			}
		 }
		 printf("\n");
		 
	}
	
}
