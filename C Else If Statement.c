#include <stdio.h>

int main() {
    int num = -1;

    if (num > 0) {
        printf("The number is positive.\n");
    }
    else if (num < 0) {
        printf("The number is negative.\n");
    }
    else {
        printf("The number is zero.\n");
    }

    printf("End of program.\n");

    return 0;
}