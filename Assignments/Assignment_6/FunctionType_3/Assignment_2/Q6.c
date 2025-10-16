#include<stdio.h>
//Q.6. Accept a number and check if it is divisible by 3, 5, or both. 
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by 
//both" or” Divisible by None”) 
int divisible();
void main()
{
	int d=divisible();
	if(d==0)
		printf("Divisible by both .");
	else if(d==1 )
		printf("Divisible by 3 but not by 5.");
	else if(d==2 )
		printf("Divisible by 5 but not by 3.");				
	else
		printf("Divisible by None.");
}
int divisible()
{
	int num,count=0;
	printf("Enter a num :");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0)
		{
			count=0;
			return count;
		}
	else if(num%3==0 )
		{
			count++;
			return count;
		}
	else if(num%5==0 )
		{
			count=2;
			return count;
		}			
	else
		{
			count=3;
			return count;
		}
	
}
