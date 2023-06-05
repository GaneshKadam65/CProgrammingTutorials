#include <stdio.h>

int globalVar = 10; // Global variable

void testFunction() {
    int localVar = 5; // Local variable

    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    testFunction();

    // Attempting to access the local variable here will result in an error

    printf("Global variable: %d\n", globalVar);

    return 0;
}