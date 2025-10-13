#include<stdio.h>
//10 Find Sum of first and last digit of given number. 
//Input: n = 12345 
//Output: 6 (1 + 5)
void sum();
void main()
{
	sum();
}
void sum()
{
//	int n,FD,LD,sum=0;
//	printf("Enter a number :");
//	scanf("%d",&n);
//	
//	LD=n%10; // 5
//	
//	while(n>0) // condition.
//	{
//		FD=n%10;// 5
//		n=n/10;// 1234  // decrement 
//		
//	}
//	printf("First digit : %d ,last digit : %d",FD,LD);
//	sum=FD+LD;
//	printf("\n Sum is :%d",sum);	

	int n,rem,LD,sum=0;
	printf("Enter a number :");
	scanf("%d",&n);
	
//	LD=n%10; // 5
	
	while(n>0) // condition.
	{
		rem=n%10;// 5
		sum=sum+rem;
		n=n/10;// 1234  // decrement 
		
	}

	printf("\n Sum of digits is :%d",sum);
}
