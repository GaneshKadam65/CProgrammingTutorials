#include <stdio.h>

void printNumber() {
	// auto int number = 42;  // auto variable
	static int number = 42;
	printf("Number: %d\n", number);
	number++;  // Modify the value of the auto variable
}

int main() {

	printNumber();  
	printNumber();  
	printNumber();  

	return 0;
}