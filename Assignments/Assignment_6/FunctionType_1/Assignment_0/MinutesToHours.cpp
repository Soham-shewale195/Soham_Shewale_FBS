#include<stdio.h>
//7. Write a C program to convert given minutes into hours and remaining minutes.
void time();
int main()
{
time();
}
void time()
{
		int min,hour,rem;
	
	printf("Enter the Minutes: ");
	scanf("%d",&min);
	
	hour=min/60;
	rem=min%60;
	
	printf("%d minutes :hour = %d and  minutes = %d",min,hour,rem);
	
	
}














