/***************************************************************
 * 2. strcmp() – String Handling Function
 *
 * ?? Parameters:
 *      str1 ? First string to compare
 *      str2 ? Second string to compare
 *
 * ?? Returns:
 *      0   ? str1 is equal to str2
 *      < 0 ? str1 is smaller (comes before str2 in dictionary/ASCII)
 *      > 0 ? str1 is greater (comes after str2 in dictionary/ASCII)
 *
 * ?? Meaning / Working:
 *      Compares both strings character by character.
 *      Stops when characters are different or a null character '\0' is found.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    }
    else if (result < 0) {
        printf("'%s' is smaller than '%s'.\n", str1, str2);
    }
    else {
        printf("'%s' is greater than '%s'.\n", str1, str2);
    }

    return 0;
}

