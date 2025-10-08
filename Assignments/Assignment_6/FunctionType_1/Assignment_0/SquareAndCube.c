#include<stdio.h>
//6. Write a C program to find the square and cube of a given number.
void num();
int main()
{
num();
}
void num()
{
		int num ;
	printf("Enter a number : ");
	scanf("%d",&num); // '&' is used to store value to its address.
	
	int squ = num*num;
	int cube = num*num*num;
	
	printf(" Sqaure of num : %d , Cube of num : %d",squ,cube);
}
