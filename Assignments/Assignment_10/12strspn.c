/***************************************************************
 * 12. strspn() – String Handling Function
 *
 * Parameters:
 *      str = Main string
 *      accept = Set of characters to check
 *
 * Returns:
 *      Integer = Number of characters from the start of str
 *                 that are only from the accept set
 *
 * Meaning / Working:
 *      It checks how many characters from the beginning of str
 *      are present in accept. Stops when a character not in
 *      accept is found.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345abc678";
    char accept[] = "1234567890";

    int count = strspn(str, accept);

    printf("Initial number of digits = %d\n", count);
    return 0;
}

