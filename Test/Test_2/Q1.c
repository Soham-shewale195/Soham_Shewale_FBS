#include<stdio.h>
//Q.1 WAP to calculate electricity bill for 1-50 units =30rs/unit,
//for 51-150 units= 40 rs/unit , for 151 and above units =50 rs /unit. 
void main()
{
	int Ebill=65, Tbill;
	
	if(Ebill>=1 && Ebill<=50)
	{
		Tbill=Ebill*30;
	}
	else if(Ebill>=51 && Ebill<=150)
	{
		Tbill=Ebill*40;
	}
	else 
	{
		Tbill=Ebill*50;
	}

	printf("Total Electricity bill is : %d",Tbill);
	
}
