#include<stdio.h>
//7. Write a C program to convert given minutes into hours and remaining minutes.
int main()
{
	int min,hour,rem;
	
	printf("Enter the Minutes: ");
	scanf("%d",&min);
	
	hour=min/60;
	rem=min%60;
	
	printf("%d minutes : %d hour and %d minutes",min,hour,rem);
	
	
}















