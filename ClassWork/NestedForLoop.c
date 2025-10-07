#include<stdio.h>
//
void main()
{
	int a=10,b=20,c=1,i,j;
	for( i=1;i<=3;i++)
	{
		c=c+a+b;
		for( j=1;j<=3;j++)
		{
			a=b+i;
			b=i+j;
		}
	}
	printf("a =%d,b=%d ,C=%d",a,b,c);
}
