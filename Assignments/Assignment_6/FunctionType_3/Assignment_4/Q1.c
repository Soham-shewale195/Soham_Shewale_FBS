#include<stdio.h>
//Q.1. Print armstrong numbers in the given range 1 to n. 
void arm();
int main()
{
	arm();
}
void arm()
{
	int n;
	printf("Enter a number till you find armstrong numbers: ");
	scanf("%d",&n); 
	int i,temp,temp2,j,sum=0,rem,count,power;
	printf("Armstrong number betn 1 to %d are :\n",n);
	
	for(i=1;i<=n;i++)
	{
		temp=i;
		count=0;
		sum=0;
		
		//count digits
		temp2=temp;
		while(temp2 !=0)
		{
//		
		count++; //3
		temp2=temp2/10;
	}	
	// Calculate sum of digits raised to 'count'
		temp2=temp;
	while(temp2 != 0)
	{
		rem=temp2%10;//3  gives last digit
		power=1;
		
		for(j=1;j<=count;j++)
		{
			power=power*rem;
			
		}
	sum=sum+power;
	temp2= temp2/10;   //  removes last digit
	}

    // Check Armstrong condition
	if(sum==i)
	{
		printf("\n %d",i);
	}
  }
}
