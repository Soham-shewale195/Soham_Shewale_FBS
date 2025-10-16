#include<stdio.h>
//Q.9 Check the given number is Palindrome number or not. 
//Input: n = 121 
//Output: Palindrome  
// A palindrome number is a number that remains the same when its digits are reversed.
int pali();
void main()
{
	int p=pali();
	if(p==1)
	{
		printf("Palindrome number ");
	}
	else 
	{
		printf("Not a Palindrome number ");
	}
	
}
int pali()
{	
	
	int num,rev=0,rem;
	printf("Enter a number :");
	scanf("%d",&num);
	int temp=num;

	while(temp>0)
	{
		rem=temp%10;			 //remainder = 121 % 10 = 1
		rev=rev*10+rem;		// reversed = (0 * 10) + 1 = 1
		temp=temp/10;		   // num = 121 / 10 = 12
	}
	return num==rev;  // It returns either 0 or 1.


}
