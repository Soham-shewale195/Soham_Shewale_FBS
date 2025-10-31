#include<stdio.h>
//Q.1) Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
//desired operations. 
void ope1(int*,int*,char*);
void main()
{
	int a,b;
	char ope;
	
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	
	printf("Enter any one operator (+,-,/,*,%%):");
	scanf(" %c",&ope);
	ope1(&a,&b,&ope);
}
void ope1(int* a,int* b,char* ope)
{
	int ans;
	if(*ope == '+')
	{
		ans=*a+*b;
		printf("\nAnswer is :%d",ans);
	}
	else if(*ope == '-')
	{
		ans=*a-*b;
		printf("\nAnswer is :%d",ans);
	}
	else if(*ope == '/')
	{
		ans=(*a)/(*b);
		printf("\nAnswer is :%d",ans);
	}
	else if(*ope == '*')
	{
		ans=(*a)*(*b);
		printf("\nAnswer is :%d",ans);
	}
	else if(*ope == '%')
	{
		ans=(*a)%(*b);
		printf("\nAnswer is :%d",ans);
	}
	else
	{
		printf("\nWrong input try angain !!");
	}
}
