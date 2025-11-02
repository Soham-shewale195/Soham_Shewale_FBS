/***************************************************************
 * 4. strcpy() – String Handling Function
 *
 * ?? Parameters:
 *      dest ? Destination string (where data is copied)
 *      src  ? Source string (from where data is copied)
 *
 * ?? Returns:
 *      dest ? Returns the pointer to destination string
 *
 * ?? Meaning / Working:
 *      Copies the entire source string (including the null '\0')
 *      into the destination string.
 *      After execution, dest = src.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello World";
    char dest[50]; // Make sure destination is big enough

    strcpy(dest, src);

    printf("Source String: %s\n", src);
    printf("Copied to Destination: %s\n", dest);

    return 0;
}

