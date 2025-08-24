#include <stdio.h>

// function declaration
int mystrcmp(char str1[], char str2[]);

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    int result1 = mystrcmp(str1, str2);
    int result2 = mystrcmp(str1, str3);

    printf("Comparing \"%s\" and \"%s\" = %d\n", str1, str2, result1);
    printf("Comparing \"%s\" and \"%s\" = %d\n", str1, str3, result2);

    return 0;
}

// function definition
int mystrcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // difference in ASCII values
        }
        i++;
    }
    return str1[i] - str2[i]; // handles unequal lengths
}
