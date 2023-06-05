#include <stdio.h>

void changeValue(int* num) {
    *num = 10; // Modify the value pointed to by the pointer
}

int main() {
    int number = 5;

    printf("Before function call: %d\n", number);
    changeValue(&number); // Pass the address of number as an argument
    printf("After function call: %d\n", number);

    return 0;
}