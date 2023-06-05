#include <stdio.h>

// Define a union to represent a variable that can be either an //integer or a float
union Number {
    int intValue;
    float floatValue;
};

int main() {
    // Declare a union variable
    union Number num;

    // Store an integer value in the union
    num.intValue = 42;

    // Access and display the integer value
    printf("Integer value: %d\n", num.intValue);

    // Store a float value in the union
    num.floatValue = 3.14;

    // Access and display the float value
    printf("Float value: %.2f\n", num.floatValue);

    // Access and display the integer value after storing a float value
    printf("Integer value after storing a float: %d\n", num.intValue);

    return 0;
}