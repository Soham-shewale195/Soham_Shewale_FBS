#include<stdio.h>
//
void main()
{
	printf("Start");
	abc();
	xyz();
	pqr();
	printf("\nend");
}
void abc()
{
	printf("\nHello");
	xyz();
}
void xyz()
{
	pqr();
	printf("\nFirstBit");

}
void pqr()
{
	printf("\nSolutions");

}
