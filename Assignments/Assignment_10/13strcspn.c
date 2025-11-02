/***************************************************************
 * 13. strcspn() – String Handling Function
 *
 * Parameters:
 *      str = Main string
 *      reject = Set of characters to search for
 *
 * Returns:
 *      Integer = Number of characters from start of str
 *                which are NOT in reject
 *
 * Meaning / Working:
 *      It checks how many characters from the beginning of str
 *      do NOT match any character in reject.
 *      Stops when a rejecting character is found.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello123world";
    char reject[] = "1234567890";

    int count = strcspn(str, reject);

    printf("Characters before any digit = %d\n", count);
    return 0;
}

