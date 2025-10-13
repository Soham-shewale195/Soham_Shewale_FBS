	#include<stdio.h>
	//Q.5. Write a menu driven program to take a number for user and perform operations as follows. 
	//Press 1.To check number is even or odd. 
	//2.To check number is prime or not. 
	//3.To check number is pallindrome or not. 
	//4.To check number is positive, negative or zero. 
	//5.To reverse a number. 
	//6.To find sum of digits.
	
	void main()
	{
		int menu,n;
		printf("Press 1.To check number is even or odd.\n2.To check number is prime or not. \n3.To check number is pallindrome or not.\n4.To check number is positive, negative or zero. \n5.To reverse a number.\n6.To find sum of digits.");
		printf("\n\nEnter a number:");
		scanf("%d",&menu);
		
	if(menu==1)  //even odd
	{
			int num;
			printf("\nEnter a number:");
			scanf("%d",&num);
			
			if(num%2==0)
			{
				printf("\nNumber is Even");
			}
			else 
			{
					printf("\nNumber is Odd");
			}		
	}
	else if(menu==2)  // prime num
	{
//		void isPrime()
//		{
			
			int n,flag=0;
			int i;
			printf("\nEnter a number :");
			scanf("%d",&n);
			for(i=2;i<=n/2;i++) // strats from 2 cause 0 and 1 is not prime num.
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("\nPrime");
			}
			else
			{
				printf("\nNot Prime");
			}
//		}
	}
	else if(menu==3)  // palindrome num
	{
//		void pali()
//		{	
		
			int num,rev=0,rem;
			printf("\nEnter a number :");
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
				printf("\nPalindrome num :%d",rev);
			}
			else 
			{
				printf("\nNot a Palindrome num: %d",rev);
			}
//		}
	}
	else if(menu==4) //positive negative ,zero
	{
//		void EvenOdd()
//		{
			int num;
			printf("\nEnter a number:");
			scanf("%d",&num);
			
			if(num>0)
			{
				printf("\nNumber is Positive");
			}
			else if(num<0)
			{
					printf("\nNumber is Negative");
			}
			else 
			{
					printf("\nNumber is Nutral (0)");
			}
//		}
	}
	else if(menu==5)   // reverse a num
	{
			int num,rev=0,rem;
			printf("\nEnter a number :");
			scanf("%d",&num);
			int temp=num;
		
			while(num>0)
			{
				rem=num%10;			 //remainder = 121 % 10 = 1
				rev=rev*10+rem;		// reversed = (0 * 10) + 1 = 1
				num=num/10;		   // num = 121 / 10 = 12
			}
		printf("\nEnter a number :%d",rev);
				
	}
	else if(menu==6)   // sum of digit
	{
		int n,rem,LD,sum=0;
		printf("\nEnter a number :");
		scanf("%d",&n);
			
		while(n>0) // condition.
		{
			rem=n%10;// 5
			sum=sum+rem;
			n=n/10;// 1234  // decrement 
	
		}
	
		printf("\n Sum of digits is :%d",sum);
	}
	else
	{
		printf("\nWrong Input ");
	}
		
}
