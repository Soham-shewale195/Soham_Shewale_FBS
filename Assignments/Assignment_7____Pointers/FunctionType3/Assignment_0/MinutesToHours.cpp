#include<stdio.h>
//7. Write a C program to convert given minutes into hours and remaining minutes.
// solving using functiontype 3(with para and w/o return type).
void time(int*);
int main()
{
	int min;
	printf("Enter the Minutes: ");
	scanf("%d",&min);
	
	time(&min);
}
void time(int* min)
{
	int hour,rem;
		
	hour=*min/60;
	rem=*min%60;
	
	printf("%d minutes :hour = %d and  minutes = %d",*min,hour,rem);
	
	
}














