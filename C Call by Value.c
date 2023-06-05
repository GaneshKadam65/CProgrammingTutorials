#include <stdio.h>

void changeValue(int num) {
    num = 10; // Modify the parameter value
}

int main() {
    int number = 5;

    printf("Before function call: %d\n", number);
    changeValue(number); // Call the function
    printf("After function call: %d\n", number);

    return 0;
}