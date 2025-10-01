#include<stdio.h>
//Q.3 print last two digit of num e.g i/p=223410 ,o/p =10.
void main()
{
	int num =223410,LT; // LT = Last Two
	LT=num%100;
	
	printf("Last two digit's are : %d",LT);
}
