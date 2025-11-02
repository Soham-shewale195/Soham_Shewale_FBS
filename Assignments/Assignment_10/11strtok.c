/***************************************************************
 * 11. strtok() – String Handling Function
 *
 * Parameters:
 *      str = String to be split (tokenized)
 *      delim = Characters used as separators (like space, comma, etc.)
 *
 * Returns:
 *      Pointer to the first token found in the string
 *      0 = If no more tokens are found
 *
 * Meaning / Working:
 *      It breaks a string into multiple parts (tokens) based on delimiters.
 *      First call uses the original string, next calls use 0 to continue.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello,how,are,you";
    char *token;

    token = strtok(str, ",");  // First token

    while (token != 0) {
        printf("%s\n", token);
        token = strtok(0, ","); // Continue tokenizing
    }

    return 0;
}

