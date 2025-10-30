#include<stdio.h>
//Q.5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
//is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 
//discount is 15% otherwise there is not discount. 
void discount();
void main()
{
	discount();
}
void discount()
{
		double price;
	float dis;
	char stud;
	
	printf("Enter the Price of Product :");
	scanf("%lf",&price);
	printf("Are you a student (y/n):");
	scanf(" %c",&stud);
	 
	if(stud=='y')
	{
		if(price>500)
		{
			dis= price*20/100;
			price=price-dis;
			
		}
		else
		{
			dis= price*10/100;
			price=price-dis;
		}
	}
	else if(stud=='n')
	{
		if(price>600)
		{
			dis= price*15/100;
			price=price-dis;
			
		}
		else
		{
			dis= 0;
			price=price-dis;
		}
	}
	else
	{
		printf("Wrong Input ");
	}
	printf("Final price is : %.2lf rs, and Discount : %.2f rs",price,dis);
	
}
