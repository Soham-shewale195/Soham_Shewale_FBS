#include<stdio.h>
//8. Write a C program to input the length and width of a rectangle and find its perimeter (boundary length).
// solving using functiontype 3(with para and w/o return type).
void peri(float*,float*);
int main()
{
	float len,width;
	
	printf("Enter Length and Width : ");
	scanf("%f %f",&len,&width); // use %f for float . (&) is used to store value at its location.
	 peri(&len,&width);
}
void peri(float* len,float* width)
{
	
	float peri;
	
	peri=2*(*len+*width); 
	
	printf("Perimeter of Rectangle : %f",peri);
	

}
