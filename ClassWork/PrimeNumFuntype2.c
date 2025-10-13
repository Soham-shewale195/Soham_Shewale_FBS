#include<stdio.h>
//prime number using function type 2(no retun/with datatype)
int isprime(); //func declaration.
void main()
{
	
	if(isprime())  // if checks if is 1 or 0 , (if condition)always checks its 0 or non-zero.
		printf("Prime Number");
	else
		printf("Not a Prime Number");
	
}
int isprime()  // give int data type in funcType2. // func defination.
{
	int num,i;
	printf("Enter a number :");
	scanf("%d",&num);
	
	for(i=2;i<num/2;i++) //i<=num/2 means for efficiency.
	{
		if(num%i==0 ) // i can use either (&& num!=i) or(i<=num/2 in forloop) to find prime num.
			return 1 ; // stops if any divisor appears.
		
		return 0;
	}
}
