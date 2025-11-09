#include<stdio.h>
// Structure code: store and display the fan information.
//Q.6.Date (date, month, year) 
struct Date
{
	int date;
	int month;
	int year;
};    // we have to use (;) at end of bracket.in struct.
void display(struct Date f1,struct Date f2)
{
	printf("\n Date one detail :\n");
	printf("Date of Birth =%d/%d/%d\n",f1.date,f1.month,f1.year);
//	printf("month no =%d\n",f1.month);
//	printf("Target no =%d\n",f1.year);
	
	printf("\n Date two detail :\n");
	printf("Date of Birth =%d/%d/%d",f2.date,f2.month,f2.year);
//	printf("month no =%d\n",f2.month);
//	printf("year no =%d\n",f2.year);
}
void main()
{
	struct Date f1,f2;
	
	f1.date=19;
	f1.month=05;
	f1.year=2003;
	
	printf("Enter date:");
	scanf(" %d",&f2.date);
	printf("Enter month:");
	scanf(" %d",&f2.month);
	printf("Enter year:");
	scanf(" %d",&f2.year);
display(f1,f2);

}

