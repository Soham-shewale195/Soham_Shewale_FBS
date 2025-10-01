void main()
{
	int sum=0,rem;
	int num=12345; // initialize
	while(num>0)  // condition
	{
		rem=num%10;
		sum= sum+rem;
		num= num/10; // decrement.
	}	
	
	printf("Sum is: %d",sum);
}
