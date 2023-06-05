#include <stdio.h>

int main() {
    int count = 1;

    // Print numbers from 1 to 5
    do {
        printf("%d ", count);
        count++;
    } while (count <= 5);

    return 0;
}