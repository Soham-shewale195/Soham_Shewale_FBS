/***************************************************************
 * 19. strerror() = Error Handling String Function
 *
 * Parameters:
 *      errnum = Error number (usually from errno)
 *
 * Returns:
 *      Pointer to a string that describes the error
 *
 * Meaning / Working:
 *      Converts an error code (integer) into a human-readable
 *      error message string. Commonly used for debugging.
 *      Error codes are stored in global variable errno.
 ***************************************************************/
#include <stdio.h>
#include <string.h>
#include <errno.h>  // Required for errno

int main() {
    FILE *file;

    file = fopen("nonexistent.txt", "r"); // File does not exist

    if (file == NULL) {
        printf("Error opening file\n");
        printf("Error code = %d\n", errno);           // Prints error number
        printf("Error message = %s\n", strerror(errno)); // Converts code to message
    }

    return 0;
}

