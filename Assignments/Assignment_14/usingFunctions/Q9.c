#include<stdio.h>
// Structure code: store and display the fan information.
//Q.9.Complex (real, imaginary) 
struct Complex
{
	float real;
	float imag;

};    // we have to use (;) at end of bracket.in struct.

void display(struct Complex f1,struct Complex f2)
{
	printf("\n Distance 1 detail :\n");
	printf("real = %.2f, Imaginary  = %.2f \n",f1.real,f1.imag);

	
	printf("\n Distance 2 detail :\n");
	printf("real = %.2f, Imaginary  = %.2f \n",f2.real,f2.imag);	
}
void main()
{
	struct Complex f1,f2;
	
	f1.real=19;
	f1.imag=5.34;

	printf("Enter real num:");
	scanf(" %f",&f2.real);
	printf("Enter imaginary num:");
	scanf(" %f",&f2.imag);

	display(f1,f2);

}

