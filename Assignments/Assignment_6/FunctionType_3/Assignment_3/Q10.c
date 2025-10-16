#include<stdio.h>
//10 Find Sum of first and last digit of given number. 
//Input: n = 12345 
//Output: 6 (1 + 5)
int sum();
void main()
{
	int s=sum();
	printf("\nSum of First and Last digit of Num : %d",s);
}
int sum()
{
	int n,FD,LD,sum=0;
	printf("Enter a number :");
	scanf("%d",&n);
	
	LD=n%10; // 5
	
	while(n>0) // condition.
	{
		FD=n%10;// 5
		n=n/10;// 1234  // decrement 
		
	}
	printf("\nFirst digit : %d ,last digit : %d",FD,LD);
	sum=FD+LD;
	return sum;	


}
