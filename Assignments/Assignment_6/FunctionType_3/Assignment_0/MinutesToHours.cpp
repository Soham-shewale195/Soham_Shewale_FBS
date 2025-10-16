#include<stdio.h>
//7. Write a C program to convert given minutes into hours and remaining minutes.

int time();
int main()
{
	int t= time();
	printf("hour = %d ",t);
}
int time()
{
		int min,hour,rem;
	
	printf("Enter the Minutes: ");
	scanf("%d",&min);
	
	hour=min/60;
	rem=min%60;
	
	return hour;  // function return only one value . 

}














