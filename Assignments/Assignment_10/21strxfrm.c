/***************************************************************
 * 21. strxfrm() = String Transformation for Locale-Based Comparison
 *
 * Header File:
 *      #include <string.h>
 *
 * Parameters:
 *      dest = Destination string where transformed result is stored
 *      src = Source string to be transformed
 *      n = Maximum number of characters to store in dest
 *
 * Returns:
 *      Number of characters required to store the transformed string
 *      (excluding '\0')
 *
 * Meaning / Working:
 *      strxfrm() transforms the source string into a form that can be
 *      compared using strcmp() according to the current locale.
 *      Usually used with strcoll() for accurate sorting/comparison.
 ***************************************************************/
#include <stdio.h>
#include <string.h>
#include <locale.h> // Required for setlocale()

int main() {
    char src[50], dest[50];
    size_t len;

    setlocale(LC_ALL, ""); // Enable locale-based rules

    printf("Enter a string = ");
    scanf("%49s", src); // Take input safely

    // Transform the string according to locale rules
    len = strxfrm(dest, src, sizeof(dest));

    printf("Transformed string (locale-based) = %s\n", dest);
    printf("Length of transformed string = %zu\n", len);

    return 0;
}

