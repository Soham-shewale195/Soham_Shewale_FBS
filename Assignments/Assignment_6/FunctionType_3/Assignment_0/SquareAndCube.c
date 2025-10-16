#include<stdio.h>
//6. Write a C program to find the square and cube of a given number.
int num();
void main()
{
	int squ=num();
	printf("\nSqaure of num : %d",squ);
}
int num()
{
	int num ;
	printf("Enter a number : ");
	scanf("%d",&num); // '&' is used to store value to its address.
	
	int squ = num*num;
	int cube = num*num*num;
	printf("\ncube of num : %d",cube);
	return squ;     // func can return only on value.
	
}
