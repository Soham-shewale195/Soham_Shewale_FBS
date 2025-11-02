/***************************************************************
 * 14. strpbrk() – String Handling Function
 *
 * Parameters:
 *      str = Main string
 *      accept = Set of characters to search for
 *
 * Returns:
 *      Pointer = Address of the first matching character in str
 *      0 = If none of the characters are found
 *
 * Meaning / Working:
 *      It searches for the first character in str that matches
 *      any character from accept.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "welcome123toC";
    char accept[] = "0123456789";

    char *ptr = strpbrk(str, accept);

    if (ptr != 0) {
        printf("First matching character = %c at position %ld\n", *ptr, ptr - str);
    } else {
        printf("No matching characters found.\n");
    }

    return 0;
}

