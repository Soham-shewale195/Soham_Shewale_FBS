#include<stdio.h>
//Q.1) Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
//desired operations. 
void ope();
void main()
{
ope();
}
void ope()
{
		int a,b,ans;
	char ope;
	
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	
	printf("Enter any one operator (+,-,/,*,%):");
	scanf(" %c",&ope);
	
	if(ope == '+')
	{
		ans=a+b;
		printf("\nAnswer is :%d",ans);
	}
	else if(ope == '-')
	{
		ans=a-b;
		printf("\nAnswer is :%d",ans);
	}
	else if(ope == '/')
	{
		ans=a/b;
		printf("\nAnswer is :%d",ans);
	}
	else if(ope == '*')
	{
		ans=a*b;
		printf("\nAnswer is :%d",ans);
	}
	else if(ope == '%')
	{
		ans=a%b;
		printf("\nAnswer is :%d",ans);
	}
	else
	{
		printf("\nWrong input try angain !!");
	}
}
