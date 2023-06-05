#include<stdio.h>

int age = 25;
float weight = 65.5;
char grade = 'A';
enum days { MON, TUE, WED, THU, FRI};
int numbers[5] = { 1, 2, 3, 4, 5 };

struct Person {
	char name[20];
	int age;
};

int main() {
	struct Person person1;
	person1.age = 30;

	int* ptr; // Pointer to an integer

	return 0;
}