#include<stdio.h>
//
void main()
{
	int a =10,b=20,c;
	int *x=&a;
	int *ptr=&b;
	*x=30;
	c=*ptr;
	ptr=x;
	int *y=ptr;
	a=*y+3;
	
	printf("\na :%d \nb: %d\n c:%d\n x:%d\n ptr: %d\n y:%d\n *x:%p\n *ptr:%p\n *y:%p",a,b,c,x,ptr,y,*x,*ptr,*y);
}

//----------------------------Explanation of above code ---------------------------------------->

//C Pointers: Code Execution Summary
//1. Initial Setup
//
//a = 10 (at address 2000)
//
//b = 20 (at address 3000)
//
//x = &a (so x stores 2000)
//
//ptr = &b (so ptr stores 3000)
//
//2. Execution Steps
//
//*x = 30;
//
//Finds what x points to (a) and changes its value to 30.
//
//Result: a is now 30.
//
//c = *ptr;
//
//Finds what ptr points to (b, which is 20) and copies that value into c.
//
//Result: c is now 20.
//
//ptr = x;
//
//Copies the value of the pointer x (which is 2000) into the pointer ptr.
//
//Result: ptr is now 2000. Both x and ptr point to a.
//
//int *y = ptr;
//
//Creates a new pointer y and copies the value of ptr (which is 2000) into it.
//
//Result: y is now 2000. All three pointers (x, ptr, y) point to a.
//
//a = *y + 3;
//
//Finds what y points to (a, which is 30), adds 3 (getting 33), and stores that result back into a.
//
//Result: a is now 33.
//
//3. Final printf Values
//
//Variables:
//
//a: 33
//
//b: 20
//
//c: 20
//
//Pointers (Addresses):
//
//x: 2000 (points to a)
//
//ptr: 2000 (points to a)
//
//y: 2000 (points to a)
//
//Values at Pointers (Dereferenced):
//
//*x: 33 (the value of a)
//
//*ptr: 33 (the value of a)
//
//*y: 33 (the value of a)
//
//4. printf Mismatch & Output
//
//The code has a mismatch between format specifiers and the variables provided.
//
//x:%d, ptr:%d, y:%d: You asked to print a pointer (address) using %d (for integers).
//
//Output: Prints the decimal value of the address: 2000, 2000, 2000.
//
//*x:%p, *ptr:%p, *y:%p: You asked to print an integer (value 33) using %p (for pointers/addresses).
//
//Output: Prints the integer 33 in hexadecimal format: 0x21, 0x21, 0x21.
//
//Final Output:
//
//a :33
//b: 20
// c:20
// x:2000
// ptr: 2000
// y:2000
// *x:0x21
// *ptr:0x21
// *y:0x21
