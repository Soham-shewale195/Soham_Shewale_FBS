#include<stdio.h>
//Write a C program to input five numbers and find their average.
float avg();
int main()
{
float a=avg();	
	printf("Average of 5 numbers :%f",a);
}
float avg()
{
		int a,b,c,d,e;
	float avg;
	
	printf("Enter 5 numbers : ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	avg=(a+b+c+d+e)/5;
	return avg;
	
}
//done
















