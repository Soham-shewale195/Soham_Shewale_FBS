#include<stdio.h>
// Find the Number is Palindrome or not?
//A palindrome is a word, number, phrase, or sequence that reads the
//same forward and backward (ignoring spaces, punctuation, and capitalization in some cases).

//Examples of palindromes:
//1)Words = madam, level, radar, civic
//Numbers = 121, 1331, 12321
//Phrases = nurses run, never odd or even

// we cant do code using func type 2 ,cause func only return 1 value.
int three();
int four();
void main()
{	
	int t= three();
	  if(t==0) 
	{
		printf("\nNumber is Palindrome ");
	}
	else
	{
		printf("\nNumber is Not Palindrome");
	}
	
	int f= four();
	 if(f==0)  
	{
		printf("\nNumber is Palindrome ");
	}
	else
	{
		printf("\nNumber is Not Palindrome");
	}
}
int three()
{
//below code only works for three digit number.

	int num,r1,r2,r3,rev,p1,count=0;
	printf("\nEnter a three digit number :");
	scanf("%d",&num);//732
	
	r1=num%10;//2
	p1=num/10;//73
	r2=p1%10;//3
	r3=p1/10;//7
	
	rev=r1*100+r2*10+r3*1; // only work on three digit value.
	
	
	if(rev==num)  // also write as if(num%10 == num%100) only works on 3 digit value.
	{
		count=0;
		return count;
	}
	else
	{
		count++;
		return count;
	}	
}
int four()
{
		//below code only works for three digit number.
	int num,r1,r2,r3,r4,rev,count=0;
	int p1,p2;
	printf("\nEnter a four digit number :");
	scanf("%d",&num);//1234
	
	r1=num%10;//4
	p1=num/10;//123
	r2=p1%10;//3
	p2=p1/10;//12
	r3= p2%10; //2
	r4=p2/10;// 1
	
	rev=r1*1000+r2*100+r3*10+r4*1; // only work on three digit value.

	if(rev==num)  // also write as if(num%10 == num%100) only works on 3 digit value.
	{
		count=0;
		return count;
	}
	else
	{
		count++;
	}
	
}
