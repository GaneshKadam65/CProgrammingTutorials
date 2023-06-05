int main() {
    int num = 10;
    int* ptr;  // Declare a pointer variable

    ptr = &num;  // Assign the address of num to the pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Dereferenced value of ptr: %d\n", *ptr);

    *ptr = 20;  // Modify the value of num through the pointer

    printf("Modified value of num: %d\n", num);

    return 0;
}