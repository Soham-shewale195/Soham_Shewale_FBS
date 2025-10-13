#include<stdio.h>
// Swap 2 numbers using function type 2 (with return type  and no parameter)
int swap();
void main()
{
	
	int a=swap();

	printf(" A =%d",a);

}
int swap()
{
	int a,b,temp;
	printf("Enter num for A:");
	scanf("%d",&a);
	printf("Enter num for B:");
	scanf("%d",&b);
	
	a=a+b;//10+20
	b=a-b; // 30-20=10
	a=a-b;//30-10=20
	
	return a;  // function type 2 return only 1 value , it can print multiple.
//	return b;
}
