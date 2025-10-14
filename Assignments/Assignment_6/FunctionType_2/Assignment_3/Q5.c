#include<stdio.h>
//5 Check the given number is Armstrong number or not.. 
//Input: n = 153 
//Output: Armstrong
//An Armstrong number is a number equal to the sum of its digits raised to the power of the number of digits.

//code is only works for 3 digit num.
int arm();
void main()
{
	int flag=arm();
	if(flag==0)
	{
		printf("Armstong ");
	}
	else
	{
		printf("Not Armstong ");
	}
}
int arm()
{
		int n,arm,temp,count=0,d1,d2,d3;
	printf("Enter a num to find armstrong num :");
	scanf("%d",n);
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
	int flag=0;
	if(n==arm)
	{
		flag=0;
		return flag;
	}
	else
	{
		flag++;
		return flag;
	}
}
//<------------------------------ Using for loop----------------------------->
//void armstrong();
//void main() 
//{
//	armstrong();
//}
//void armstrong()
//{
//	    int num = 153, original, remainder, n = 0, result = 0, i, j, power;
//    
//    original = num;
//
//    // Count number of digits
//    for(i = num; i != 0; i /= 10) {
//        n++;
//    }
//
//    // Calculate sum of digits raised to power n
//    for(i = num; i != 0; i /= 10) {
//        remainder = i % 10;
//
//        // compute remainder^n manually
//        power = 1;
//        for(j = 1; j <= n; j++) {
//            power = power * remainder;
//        }
//
//        result += power;   // result = result + power;
//    }
//
//    if(result == original)
//        printf("%d is an Armstrong number.\n", original);
//    else
//        printf("%d is not an Armstrong number.\n", original);
//}
