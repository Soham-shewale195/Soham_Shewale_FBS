#include<stdio.h>
//6. Write a C program to find the square and cube of a given number.
// solving using functiontype 3(with para and w/o return type).
int num1(int);
void main()
{
	int num ;
	printf("Enter a number : ");
	scanf("%d",&num); // '&' is used to store value to its address.
	int cube=num1(num);
	printf(" Cube of num : %d",cube);
}
int num1(int num)
{

	int squ = num*num;
	int cube = num*num*num;

	printf(" Sqaure of num : %d ",squ);
		return cube;
}
