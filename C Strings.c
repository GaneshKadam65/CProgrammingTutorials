
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[40];

    // String Length
    int len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // String Copy
    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // String Concatenation
    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    // String Comparison
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("str1 and str2 are equal\n");
    }
    else if (cmp < 0) {
        printf("str1 is less than str2\n");
    }
    else {
        printf("str1 is greater than str2\n");
    }

    // String Search
    char* ptr = strstr(str1, "Wo");
    if (ptr != NULL) {
        printf("Found 'Wo' in str1 at index: %d\n", ptr - str1);
    }
    else {
        printf("Could not find 'Wo' in str1\n");
    }

    return 0;
}