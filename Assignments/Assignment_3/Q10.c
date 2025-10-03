#include<stdio.h>
//10 Find Sum of first and last digit of given number. 
//Input: n = 12345 
//Output: 6 (1 + 5)
void main()
{
	int n= 12345,FD,LD,sum=0;
	LD=n%10; // 5
	
	while(n>0) // condition.
	{
		FD=n%10;// 5
		n=n/10;// 1234  // decrement 
		
	}
	printf("First digit : %d ,last digit : %d",FD,LD);
	sum=FD+LD;
	printf("\n Sum is :%d",sum);
}
