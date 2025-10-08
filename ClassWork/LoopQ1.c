#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            if (i + j == 4)
                break;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

