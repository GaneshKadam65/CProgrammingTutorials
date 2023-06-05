#include <stdio.h>
#include <string.h>

// Define a structure to represent a student
struct Student {
    int rollNumber;
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student1;
    struct Student student2;

    // Access and modify structure members
    student1.rollNumber = 101;
    strcpy(student1.name, "John");
    student1.age = 20;
    student1.marks = 85.5;

    // Access and modify structure members
    student2.rollNumber = 102;
    strcpy(student2.name, "Ajay");
    student2.age = 21;
    student2.marks = 90;

    // Display the student details
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    // Display the student details
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}