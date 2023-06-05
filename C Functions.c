#include <stdio.h>

// Function declaration
int addNumbers(int a, int b = 15) {
    int sum = a + b;
    return sum;
}

int main() {
    int num1 = 5, num2 = 10;
    int result = addNumbers(10); // Function call

    printf("The sum is: %d\n", result);
    return 0;
}