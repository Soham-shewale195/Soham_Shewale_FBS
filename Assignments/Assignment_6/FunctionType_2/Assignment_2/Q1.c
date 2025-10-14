#include<stdio.h>
//Q.1) Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the 
//desired operations. 
int ope();
void main()
{
	int o=ope();
	printf("\nAnswer is :%d",o);
}
int ope()
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
		return ans;
	}
	else if(ope == '-')
	{
		ans=a-b;
		return ans;
	}
	else if(ope == '/')
	{
		ans=a/b;
		return ans;
	}
	else if(ope == '*')
	{
		ans=a*b;
		return ans;
	}
	else if(ope == '%')
	{
		ans=a%b;
		return ans;
	}
	else
	{
		printf("\nWrong input try angain !!");
	}
}
