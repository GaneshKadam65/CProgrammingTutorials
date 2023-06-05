#include <stdio.h>

#define PI 3.14159    // Symbolic constant for pi

int main() {
	const int max_value = 100;   // Constant variable for maximum value

	int radius = 5;
	float area = PI * radius * radius;  // Calculating the area of a circle using a constant

	printf("The area of the circle with radius %d is %.2f\n", radius, area);

	char letter = 'A';   // Character literal
	printf("The character is %c\n", letter);

	char message[] = "Hello, World!";   // String literal
	printf("The message is: %s\n", message);

	enum Days { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
	enum Days today = WEDNESDAY;   // Enumeration constant

	printf("Today is day number %d\n", today);

	return 0;
}