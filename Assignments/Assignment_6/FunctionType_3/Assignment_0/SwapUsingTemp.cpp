#include<stdio.h>
//Write a C program to swap two numbers using a temporary third variable.
// solving using functiontype 3(with para and w/o return type).
void swap(int,int);
int main ()
{
	int x,y;
	printf("Enter two integer values for X and y :");
	scanf("%d%d",&x,&y);
	
	swap(x,y);
}
void swap(int x, int y)
{
	int temp;
	printf("Values before swaping  x = %d and y= %d",x,y);
	temp= x;
	x = y ;
	y =temp ;
	
	 printf("\nValues After swaping x = %d and y= %d",x,y);
	
}
