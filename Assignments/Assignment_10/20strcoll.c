/***************************************************************
 * 20. strcoll() = String Comparison Using Locale
 *
 * Header File:
 *      #include <string.h>
 *
 * Parameters:
 *      str1 = First string to compare
 *      str2 = Second string to compare
 *
 * Returns:
 *      0 = Strings are equal based on current locale rules
 *      < 0 = str1 is less than str2
 *      > 0 = str1 is greater than str2
 *
 * Meaning / Working:
 *      strcoll() compares two strings based on the current system locale.
 *      Works similar to strcmp(), but follows language-specific sorting rules.
 ***************************************************************/
#include <stdio.h>
#include <string.h>
#include <locale.h> // Required for setlocale()

int main() {
    char str1[50], str2[50];
    int result;

    setlocale(LC_ALL, ""); // Enables locale-based comparison

    printf("Enter first string = ");
    scanf("%49s", str1);   // Takes input safely (avoids gets)

    printf("Enter second string = ");
    scanf("%49s", str2);

    result = strcoll(str1, str2);

    if (result == 0)
        printf("Result = Strings are equal\n");
    else if (result < 0)
        printf("Result = str1 is less than str2\n");
    else
        printf("Result = str1 is greater than str2\n");

    return 0;
}

