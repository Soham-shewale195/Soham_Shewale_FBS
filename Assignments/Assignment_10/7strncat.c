/***************************************************************
 * 7. strncat() – String Handling Function
 *
 * ?? Parameters:
 *      dest ? Destination string (must have enough space)
 *      src  ? Source string to append
 *      n    ? Number of characters to append from source
 *
 * ?? Returns:
 *      dest ? Pointer to the destination string
 *
 * ?? Meaning / Working:
 *      Appends only the first 'n' characters of src to the end of dest.
 *      Then it automatically adds a null terminator '\0' at the end.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "Hello";
    char src[] = "World123";
    
    strncat(dest, src, 5); // Append first 5 characters of src

    printf("After strncat: %s\n", dest);

    return 0;
}

