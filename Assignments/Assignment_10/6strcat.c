/***************************************************************
 * 6. strcat() – String Handling Function
 *
 * ?? Parameters:
 *      dest ? Destination string (must have enough space)
 *      src  ? Source string to append to destination
 *
 * ?? Returns:
 *      dest ? Pointer to destination string
 *
 * ?? Meaning / Working:
 *      Appends the source string at the end of the destination string.
 *      It finds the '\0' in dest and then copies src including '\0'.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello";
    char src[] = " World";

    strcat(dest, src);

    printf("After concatenation: %s\n", dest);

    return 0;
}

