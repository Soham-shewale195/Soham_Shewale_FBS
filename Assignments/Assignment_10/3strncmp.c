/***************************************************************
 * 3. strncmp() – String Handling Function
 *
 * ?? Parameters:
 *      str1 ? First string to compare
 *      str2 ? Second string to compare
 *      n   ? Number of characters to compare
 *
 * ?? Returns:
 *      0   ? First n characters of both strings are equal
 *      < 0 ? str1 is smaller than str2 in first n characters
 *      > 0 ? str1 is greater than str2 in first n characters
 *
 * ?? Meaning / Working:
 *      Compares two strings but only up to the first 'n' characters.
 *      Stops comparing when:
 *         - Characters differ
 *         - 'n' characters are compared
 *         - A null character '\0' is found
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "computer";
    char str2[] = "comrade";
    int n = 3;

    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("First %d characters are equal.\n", n);
    }
    else if (result < 0) {
        printf("First %d characters of '%s' are smaller than '%s'.\n", n, str1, str2);
    }
    else {
        printf("First %d characters of '%s' are greater than '%s'.\n", n, str1, str2);
    }

    return 0;
}

