/***************************************************************
 * 15. memcmp() – Memory Handling Function
 *
 * Parameters:
 *      ptr1 = First memory block to compare
 *      ptr2 = Second memory block to compare
 *      n = Number of bytes to compare
 *
 * Returns:
 *      0 = First n bytes of both blocks are equal
 *      < 0 = ptr1 is smaller than ptr2 in first different byte
 *      > 0 = ptr1 is greater than ptr2 in first different byte
 *
 * Meaning / Working:
 *      Compares memory byte by byte (not only strings).
 *      Useful for raw memory comparison.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Helli";

    int result = memcmp(str1, str2, 5);

    if (result == 0) {
        printf("Both memory blocks are equal.\n");
    } else if (result < 0) {
        printf("str1 is smaller than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}

