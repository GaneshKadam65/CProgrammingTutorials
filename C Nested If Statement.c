#include <stdio.h>

int main() {
    int num = 15;

    if (num > 0) {
        printf("The number is positive.\n");

        if (num % 2 == 0) {
            printf("The number is even.\n");
        }
        else {
            printf("The number is odd.\n");
        }
    }
    else {
        printf("The number is non-positive.\n");
    }

    printf("End of program.\n");

    return 0;
}