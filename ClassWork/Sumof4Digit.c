#include<stdio.h>

int main()
{
	int num=7328;
	int r1,r2,r3,p1,p2,r4,sum;
	
	r1=num%10; //8
	p1= num/10; // 732
	r2=p1%10;// 2
	p2= p1/10 ;//73
	r3=p2%10;//3
	r4=p2/10;//7
	
	sum= r1+r2+r3+r4;
	printf("Sum is :%d",sum);
}

