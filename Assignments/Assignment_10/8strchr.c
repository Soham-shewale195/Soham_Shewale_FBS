/***************************************************************
 * 8. strchr() – String Handling Function
 *
 * ?? Parameters:
 *      str ? Input string to search in
 *      ch  ? Character to find (first occurrence)
 *
 * ?? Returns:
 *      Pointer to the first occurrence of ch in str
 *      NULL ? If character is not found
 *
 * ?? Meaning / Working:
 *      Searches from left to right in the string for the given character.
 *      Returns the address where the character is first found.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char ch = 'o';

    char *ptr = strchr(str, ch);

    if (ptr !='\0') {
        printf("Character '%c' found at position: %ld\n", ch, ptr - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}

