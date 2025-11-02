/***************************************************************
 * 16. memcpy() – Memory Handling Function
 *
 * Parameters:
 *      dest = Destination memory block
 *      src = Source memory block
 *      n = Number of bytes to copy
 *
 * Returns:
 *      dest = Pointer to destination memory block
 *
 * Meaning / Working:
 *      Copies n bytes from src to dest.
 *      Used for copying raw memory (not only strings).
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Memory Copy Example";
    char dest[50];

    memcpy(dest, src, strlen(src) + 1); // +1 to include '\0'

    printf("Source = %s\n", src);
    printf("Destination (after memcpy) = %s\n", dest);

    return 0;
}

