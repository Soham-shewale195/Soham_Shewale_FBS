#include<stdio.h>
//8. Write a C program to input the length and width of a rectangle and find its perimeter (boundary length).
void peri();
int main()
{
	 peri();
}
void peri()
{
	float len,width;
	float peri;
	
	printf("Enter Length and Width : ");
	scanf("%f %f",&len,&width); // use %f for float . (&) is used to store value at its location.
	
	peri=2*(len+width);
	
	printf("Perimeter of Rectangle : %f",peri);
	

}
