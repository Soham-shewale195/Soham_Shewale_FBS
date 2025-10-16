#include<stdio.h>
//Q.1. Write a program to print factors of number in given range.
//e.g Range 10 to 15

//10 = 1, 2, 5, 10  
//11 = 1, 11  
//12 = 1, 2, 3, 4, 6, 12  
//13 = 1, 13  
//14 = 1, 2, 7, 14  
//15 = 1, 3, 5, 15

void main()
{
	int start,end,fact=0;
	printf("Enter the range between you want the factorials of num :");
	scanf("%d%d",&start,&end);
	
	for(int i=start;i<=end;i++)
	{
		printf("\n%d :",i);
		for(int j=1;j<=i;j++)
		{
		
			if(i%j==0)
			{
				printf(" %d",j);
			}
		}
		printf("\n");
		
	}
}
