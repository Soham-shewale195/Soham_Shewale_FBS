#include <stdio.h>

// Defining structure using typedef
typedef struct complex {
    int real, img;
} complex;

// Function to input (store) complex number
complex store() {
    complex temp;
    printf("Enter real part: ");
    scanf("%d", &temp.real);
    printf("Enter imaginary part: ");
    scanf("%d", &temp.img);
    return temp;
}

// Function to display a complex number
void display(complex cmp) {
    printf("%d + %di", cmp.real, cmp.img);
}

void main() {
    complex c1, c2, c3;

    printf("Enter first complex number:\n");
    c1 = store();

    printf("\nEnter second complex number:\n");
    c2 = store();

    // Adding two complex numbers
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;

    // Displaying results
    printf("\nFirst complex number: ");
    display(c1);

    printf("\nSecond complex number: ");
    display(c2);

    printf("\nSum of complex numbers: ");
    display(c3);
}

