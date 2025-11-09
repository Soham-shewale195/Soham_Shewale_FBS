#include<stdio.h>
// Structure code: store and display the fan information.
//Q.8.Distance ( feet, inch) 
struct Distance
{
	float feet;
	float inch;

};    // we have to use (;) at end of bracket.in struct.

void display(struct Distance f1,struct Distance f2)
{
	printf("\n Distance 1 detail :\n");
	printf("feet = %.2f, Min  = %.2f \n",f1.feet,f1.inch);

	
	printf("\n Distance 2 detail :\n");
	printf("feet = %.2f, Min  = %.2f \n",f2.feet,f2.inch);
}
void main()
{
	struct Distance f1,f2;
	
	f1.feet=19;
	f1.inch=5.34;

	printf("Enter feet:");
	scanf(" %f",&f2.feet);
	printf("Enter inch:");
	scanf(" %f",&f2.inch);

display(f1,f2);
	

}

