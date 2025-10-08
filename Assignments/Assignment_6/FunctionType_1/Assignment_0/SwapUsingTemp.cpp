#include<stdio.h>
//Write a C program to swap two numbers using a temporary third variable.
void swap();
int main ()
{
swap();
}
void swap()
{
		int x=2 ,y=6 ,temp;
	
	 printf("Values before swaping  x = %d and y= %d",x,y);

	temp= x;
	x = y ;
	y =temp ;
	
	 printf("\nValues After swaping x = %d and y= %d",x,y);
	
}
