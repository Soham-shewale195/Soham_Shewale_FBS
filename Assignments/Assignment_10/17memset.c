/***************************************************************
 * 17. memset() = Memory Handling Function
 *
 * Parameters:
 *      str = Pointer to the memory block to fill
 *      ch = Character/byte value to set
 *      n = Number of bytes to fill
 *
 * Returns:
 *      str = Pointer to the modified memory block
 *
 * Meaning / Working:
 *      Fills the first n bytes of the memory block pointed to by str
 *      with the specified character/byte value ch.
 *      Commonly used to reset memory or initialize arrays.
 ***************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Hello, World!";

    printf("Before memset = %s\n", str);

    memset(str, '*', 5); // Replace first 5 characters with '*'

    printf("After memset = %s\n", str);

    return 0;
}

