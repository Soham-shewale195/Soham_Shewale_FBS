// #include<stdio.h>
////Q.4 Check the given number is prime or not. 
////Input: n = 7 
////Output: Prime
//void main()
//{
//	int n= 7,flag=0;
//	int i=2;
//		while(i<=n/2) //  
//		{
//			if(n%i==0)
//			{
//				flag=1;
//				break;  // stops here if condition true.
//			}
//			 i++;
//		}
//	if(flag==0)
//	{
//		printf("Prime");
//	}
//	else
//	{
//		printf("Not Prime");
//	}
//}

//<------------------------using For loop--------------------------------------->
 #include<stdio.h>
//Q.4 Check the given number is prime or not. 
//Input: n = 7 
//Output: Prime
int isPrime();  // func declaration
void main()
{
	int flag=isPrime();    // func call.
	if(flag==0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}
int isPrime()   // func defination
{
	
	int n,flag=0;
	int i;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++) // strats from 2 cause 0 and 1 is not prime num.
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
	
}
