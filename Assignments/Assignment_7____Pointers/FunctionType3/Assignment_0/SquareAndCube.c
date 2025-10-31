#include<stdio.h>
//6. Write a C program to find the square and cube of a given number.
// solving using functiontype 3(with para and w/o return type).
void num1(int*);
void main()
{
	int num ;
	printf("Enter a number : ");
	scanf("%d",&num); // '&' is used to store value to its address.
	num1(&num);
}
void num1(int* num)
{

	int squ = (*num)*(*num);            //here num consist values present in address of variable.
	int cube = (*num)*(*num)*(*num);      //here num consist values present in address of variable.
	
	printf(" Sqaure of num : %d , Cube of num : %d",squ,cube);
}
