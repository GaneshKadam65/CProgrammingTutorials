// Preprocessor directives
#include <stdio.h>

// Function declarations
int add(int a, int b);

// Global declarations
int globalVariable = 10;

// Main function
int main() {
    // Statements and expressions
    int x = 5;
    int y = 3;
    int sum = add(x, y);

    printf("The sum is %d\n", sum);

    return 0;
}

// User-defined function
int add(int a, int b) {
    return a + b;
}