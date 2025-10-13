#include<stdio.h>
//8 Check the given number is Strong number or not. 
//Input: n = 145 
//Output: Strong

//A Strong number is a number in which the sum of the factorials of its digits is equal to the number itself.
void strong();
void main()
{
	strong();
}
void strong()
{
		int n;
	printf("Enter a number :");
	scanf("%d",&n);

	int d1,d2,d3,fac1,fac2,fac3,str;
	d1=n/100;// 1
	d2=n/10%10;// 4
	d3=n%10; // 5
//	printf("%d %d %d",d1,d2,d3);
	int i=1;
	fac1=1; fac2=1; fac3=1;
	while(i<=d1 )
	{
		fac1=fac1*i;
		i++;
	}12
	i=1;
	while(i<=d2)
	{
		fac2=fac2*i;
		i++;
	}
	i=1;
	while(i<=d3)
	{
		fac3=fac3*i;
		i++;
	}
//		printf("%d %d %d",fac1,fac2,fac3);
	str=fac1+fac2+fac3;
	
	if(n==str)
	{
		printf("Strong : %d",str);
	}
	else
	{
		printf("Not Strong: %d",str);
	}
}
