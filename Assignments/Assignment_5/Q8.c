#include<stdio.h>
//8. Print a pattern of stars in diamond shape 
//Input: n = 4 
//Output: 
//* 
//** 
//*** 
//**** 
//*** 
//** 
//*
void main()
{ 
	int i,j,k,l,n=4;   //     
	for(i=1;i<=n;i++)  // first nested for loop to print first triangle.
	{
		 for(j=1;j<=i;j++)
		 {
		 	printf(" *");
		 }
		 
		 printf("\n");
	}
	
	for(i=1;i<=n;i++)   // second nested for loop to print second triangle.
	{
		 for(k=n;k>=i+1;k--)
		 {
		 	printf(" *");
		 }
		 
		 printf("\n");
	}
	
}
