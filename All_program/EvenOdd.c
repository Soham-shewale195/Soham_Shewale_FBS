#include<stdio.h>
// Find  Even odd number
int main()
{
//	int num;
//	printf("Enter a number:");
//	scanf("%d",&num);
//	
//	if(num%2==0)
//	{
//		printf("Number is Even");
//	}
//	else
//	{
//		printf("Number is Odd");
//	}

//	int age;
//	printf("Enter age:");
//	scanf("%d",&age);
//	
//	if(age>=18)
//	{
//		printf("Eligible to vote");
//	}
//	else
//	{
//		printf("Not-Eligible to vote");
//	}

//	int num;
//	printf("Enter a number:");
//	scanf("%d",&num);
//	
//	if(num>=0)
//	{
//		printf("Number is Positive");
//	}
//	else
//	{
//			printf("Number is Negative");
//	}

// leap year code
//Rule to check leap year:
//If a year is divisible by 4, it is usually a leap year.
//But, if the year is also divisible by 100, it is not a leap year.
//However, if the year is divisible by 400, it is a leap year.

//	int year;
//	printf("Enter a year:");
//	scanf("%d",&year);
//	
//	if(year%4==0 && year!=100 || year%400==0)
//	{
//		printf("Leap year ");
//	}
//	else
//	{
//			printf("Not a Leap year .");
//	}
	

// find the number is PALINDROME:
//A palindrome is a word, number, phrase, or sequence that reads the same forward and backward (ignoring spaces, punctuation, and capitalization in some cases).
//Examples of palindromes:
//1)Words = madam, level, radar, civic
//Numbers = 121, 1331, 12321
//Phrases = nurses run, never odd or even

	int num,r1,r2,r3,rev,p1;
	printf("Enter a three digit number :");
	scanf("%d",&num);//732
	
	r1=num%10;//2
	p1=num/10;//73
	r2=p1%10;//3
	r3=p1/10;//7
	
	rev=r1*100+r2*10+r3*1; // only work on three digit value.
	
	
	if(rev==num)  // also write as if(num%10 == num%100) only works on 3 digit value.
	{
		printf("Number is Palindrome ");
	}
	else
	{
		printf("Number is Not Palindrome");
	}
	
}
