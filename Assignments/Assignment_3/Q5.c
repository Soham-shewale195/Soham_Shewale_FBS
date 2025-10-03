#include<stdio.h>
//5 Check the given number is Armstrong number or not.. 
//Input: n = 153 
//Output: Armstrong
//An Armstrong number is a number equal to the sum of its digits raised to the power of the number of digits.

//code is only works for 3 digit num.
void main()
{
	int n=153,arm,temp,count=0,d1,d2,d3;
	
	temp=n; 
	
	d1=n/100; // 1
	d2=n/10%10;//  153/10 =15 %10 = 5
	d3=n%10;  // 3
	
// cout the digits
	temp=n; 
	while(temp>0)
	{
		temp=temp/10;
		
		count++;
	}
//	printf("%d %d %d",d1,d2,d3);
//	printf("%d",count);
	
	
	arm=d1*d1*d1+d2*d2*d2+d3*d3*d3;
	
	if(n==arm)
	{
		printf("Armstong : %d",arm);
	}
	else
	{
		printf("Not Armstong ");
	}
}
