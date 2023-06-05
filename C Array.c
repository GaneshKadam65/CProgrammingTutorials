#include <stdio.h>

int main() 
{
    // Declaration and initialization of an integer array
    int numbers[5] = { 10, 20, 30, 40, 50 };

    // Accessing and printing array elements
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Modifying array element
    numbers[2] = 35;

    // Accessing and printing modified array elements
    printf("Modified array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}