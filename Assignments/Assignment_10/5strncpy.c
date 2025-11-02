/***************************************************************
 * 5. strncpy() – String Handling Function
 *
 * ?? Parameters:
 *      dest ? Destination string (where we copy)
 *      src  ? Source string (from where we copy)
 *      n    ? Number of characters to copy
 *
 * ?? Returns:
 *      dest ? Pointer to the destination string
 *
 * ?? Meaning / Working:
 *      Copies only the first 'n' characters from source to destination.
 *      If src length < n, the remaining part is filled with '\0'.
 *      Useful for controlled copying to avoid overflow.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Programming";
    char dest[20];

    strncpy(dest, src, 7); // Copy first 7 characters
    dest[7] = '\0';        // Manually add null terminator for safe output

    printf("Source String: %s\n", src);
    printf("Copied (first 7 chars): %s\n", dest);

    return 0;
}

