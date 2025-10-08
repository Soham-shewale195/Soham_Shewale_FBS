#include<stdio.h>
//Write a C program to input five numbers and find their average.
void avg();
int main()
{
	avg();	
}
void avg()
{
		int a,b,c,d,e;
	float avg;
	
	printf("Enter 5 numbers : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	avg=(a+b+c+d+e)/5;
	printf("Average of 5 numbers :%f",avg);
}
//done
















