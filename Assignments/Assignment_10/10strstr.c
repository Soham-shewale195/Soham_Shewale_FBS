/***************************************************************
  * 10. strstr() – String Handling Function
 *
 * Parameters:
 *      str = Main string
 *      substr = Substring to search inside str
 *
 * Returns:
 *      Pointer to first occurrence of substr in str
 *      0 = If substring is not found
 *
 * Meaning / Working:
 *      Searches for substr in str.
 *      If found, returns address where substr starts.
 *      If not, returns 0.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, welcome to C programming";
    char substr[] = "welcome";

    char *ptr = strstr(str, substr);

    if (ptr != 0) {
        printf("Substring '%s' found at position: %ld\n", substr, ptr - str);
    } else {
        printf("Substring '%s' not found in the string.\n", substr);
    }

    return 0;
}

