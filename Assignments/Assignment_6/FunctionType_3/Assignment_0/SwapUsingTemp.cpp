#include<stdio.h>
//Write a C program to swap two numbers using a temporary third variable.

// we cant do this program using func type 2 cause func retun only single value.
void swap();
int main ()
{
swap();
}
void swap()
{
		int x ,y ,temp;
	printf("Enter the radius :");
	scanf("%d%d",&x,&y);
	 printf("\nValues before swaping  x = %d and y= %d",x,y);
	
	// swap without using 3rd variable 
	x= x+y;
	y= x-y;
	x= x-y;
	
//	temp= x;
//	x = y ;
//	y =temp ;
	
	 printf("\nValues After swaping x = %d and y= %d",x,y);
	
}
