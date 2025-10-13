#include<stdio.h>
//Q.9 Check the given number is Palindrome number or not. 
//Input: n = 121 
//Output: Palindrome  
// A palindrome number is a number that remains the same when its digits are reversed.
void pali();
void main()
{
	pali();
}
void pali()
{	
	
	int num,rev=0,rem;
	printf("Enter a number :");
	scanf("%d",&num);
	int temp=num;

	while(num>0)
	{
		rem=num%10;			 //remainder = 121 % 10 = 1
		rev=rev*10+rem;		// reversed = (0 * 10) + 1 = 1
		num=num/10;		   // num = 121 / 10 = 12
	}

	if(temp==rev)
	{
		printf("Palindrome num :%d",rev);
	}
	else 
	{
		printf("Not a Palindrome num: %d",rev);
	}
}
