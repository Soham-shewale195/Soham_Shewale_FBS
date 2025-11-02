/***************************************************************
 * 20. sprintf() = String Formatting Function
 *
 * Parameters:
 *      str = Destination string where formatted output is stored
 *      format = Format specifiers (like printf)
 *      ... = Additional values to format and insert
 *
 * Returns:
 *      Number of characters written to the string (excluding '\0')
 *
 * Meaning / Working:
 *      Works like printf, but instead of printing on screen,
 *      it stores the formatted output into a string.
 ***************************************************************/
#include <stdio.h>

int main() {
    char str[100];
    int age = 20;
    float marks = 89.5;

    // Format and store values into string
    int count = sprintf(str, "Age = %d, Marks = %.2f", age, marks);

    printf("Formatted string = %s\n", str);
    printf("Characters written = %d\n", count);

    return 0;
}

