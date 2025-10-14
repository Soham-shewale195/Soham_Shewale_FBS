#include<stdio.h>
//Q.5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he 
//is a student and he has purchased more than 500 than discount is 20% otherwise 
//discount is 10%.But if he is not a student then if he has purchased more than 600 
//discount is 15% otherwise there is not discount. 
double discount();
void main()
{
	double d=discount();
	printf("\nFinal price is : %.2lf rs, ",d);  // final price after ading discount .
}
double discount()
{
	double price;
	float dis;
	char stud;
	
	printf("Enter the Price of Product :");
	scanf("%lf",&price);
	printf("\nAre you a student (y/n):");
	scanf(" %c",&stud);
	 
	if(stud=='y')
	{
		if(price>500)
		{
			dis= price*20/100;
			price=price-dis;
			printf("\nDiscount : %.2f rs",dis);
			return price;
			
			
		}
		else
		{
			dis= price*10/100;
			price=price-dis;
			printf("\nDiscount : %.2f rs",dis);
				return price;
		}
	}
	else if(stud=='n')
	{
		if(price>600)
		{
			dis= price*15/100;
			price=price-dis;
			printf("\nDiscount : %.2f rs",dis);
				return price;
			
		}
		else
		{
			dis= 0;
			price=price-dis;
			printf("\nDiscount : %.2f rs",dis);
				return price;
		}
	}
	else
	{
		printf("Wrong Input ");
	}

	
}
