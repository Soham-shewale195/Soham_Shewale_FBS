/***************************************************************
 * 9. strrchr() – String Handling Function
 *
 * ?? Parameters:
 *      str ? Input string to search
 *      ch  ? Character to find (last occurrence)
 *
 * ?? Returns:
 *      Pointer to the last occurrence of character in the string
 *      NULL ? If character is not found
 *
 * ?? Meaning / Working:
 *      Scans the string from end to start internally (right to left),
 *      and returns the address where the character appeared last.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    char ch = 'o';

    char *ptr = strrchr(str, ch);

    if (ptr !='\0') {
        printf("Last occurrence of '%c' is at position: %ld\n", ch, ptr - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}

