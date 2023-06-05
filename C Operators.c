#include<stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Arithmetic operators
    result = a + b;     // Addition
    printf("a + b = %d\n", result);

    result = a - b;     // Subtraction
    printf("a - b = %d\n", result);

    result = a * b;     // Multiplication
    printf("a * b = %d\n", result);

    result = a / b;     // Division
    printf("a / b = %d\n", result);

    result = a % b;     // Modulus
    printf("a %% b = %d\n", result);

    // Relational operators
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Logical operators
    printf("(a > b) && (b > c): %d\n", (a > b) && (b > c));
    printf("(a > b) || (b > c): %d\n", (a > b) || (b > c));
    printf("!(a > b): %d\n", !(a > b));

    // Assignment operators
    result += 5;        // result = result + 5
    printf("result += 5: %d\n", result);

    // Increment and decrement operators
    a++;               // Increment
    printf("a++: %d\n", a);

    b--;               // Decrement
    printf("b--: %d\n", b);

    // Bitwise operators
    result = a & b;     // Bitwise AND
    printf("a & b = %d\n", result);

    result = a | b;     // Bitwise OR
    printf("a | b = %d\n", result);

    result = a ^ b;     // Bitwise XOR
    printf("a ^ b = %d\n", result);

    result = ~a;        // Bitwise complement
    printf("~a = %d\n", result);

    result = a << 1;    // Left shift
    printf("a << 1 = %d\n", result);

    result = b >> 1;    // Right shift
    printf("b >> 1 = %d\n", result);

    // Ternary operator
    result = (a > b) ? a : b;
    printf("Result of ternary operator: %d\n", result);

    return 0;
}