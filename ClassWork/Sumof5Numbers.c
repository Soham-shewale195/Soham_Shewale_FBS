void main()
{
	int r1,r2,r3,r4,r5,sum, num;
	
	num= 73285;
	
	r1=num%10;//5
	num=num/10;//7328
	r2=num%10;//8
	num=num/10;//732
	r3=num%10;//2
	num=num/10;//73
	r4=num%10;//3
	r5=num/10;//7
	
	sum = r1+r2+r3+r4+r5; // 25 .
	printf("Sum of num : %d",sum);	
}
