#include<stdio.h>
//logical operators 

int main()
{
//	int c = 12&&0;//  always give 1 answer if values are not zero (0).
//	printf("%d",c);  //output = 0
	
//	int x= printf("first bit");
//	printf("%d",x); //output =first bit9
	 
//	int  d= printf("first bit") > printf("hello");
//	printf("%d",d);  // output = first bithello1

//	int  d= printf("firstbit") || printf("hello");
//	printf("%d",d);  // output = (firstbit1) , if space in first bit then ans= (first bit9)
	
//	int c = 12 && 0 && printf("firstbit") ; // after 1 false value stops copile code and give ans.
//	printf("%d",c);  //output = 0
	
//	int e = 12 && 0 && printf("firstbit") || 13>1 ; // after 1 false value directly jump to another logical operator (like from && to ||).
//	printf("%d",e);  //output = 1
	
//	int f = 12 && 0 && printf("hello") || 13>1 && printf("hello"); // after 1 false value directly jump to another logical operator (like from && to ||).
//	printf("%d",f);  //output = hello1
	
	int z = 10+printf("hello") > printf("fbs") && printf("abc") - printf("pqr") && 10 + printf("xyz") || printf("lmnop");
	printf("%d",z);  //output = hellofbsabcpqrlmnop1
}
