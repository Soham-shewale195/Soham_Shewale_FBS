/***************************************************************
 * 18. strdup() = String Duplication Function
 *
 * Parameters:
 *      str = Source string to duplicate
 *
 * Returns:
 *      Pointer to a newly allocated duplicate string
 *      (Memory is allocated dynamically using malloc)
 *
 * Meaning / Working:
 *      Creates a copy of the given string by allocating new memory.
 *      Copies all characters including '\0' and returns the new string.
 *      Must be freed manually using free() to avoid memory leak.
 ***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Needed for malloc() and free()

int main() {
    char str[] = "Duplicate this string";
    char *dup;

    dup = strdup(str); // strdup allocates memory and copies string

    printf("Original string = %s\n", str);
    printf("Duplicated string = %s\n", dup);

    free(dup); // Free memory to prevent memory leak

    return 0;
}

