#include <stdio.h>

// function declaration
int mystrcasecmp(const char str1[], const char str2[]);

int main() {
    char s1[] = "Hello";
    char s2[] = "hello";

    int result = mystrcasecmp(s1, s2);  // compare ignoring case

    if (result == 0)
        printf("Strings are equal (ignoring case).\n");
    else if (result < 0)
        printf("First string is smaller (ignoring case).\n");
    else
        printf("First string is greater (ignoring case).\n");

    return 0;
}

// function definition
int mystrcasecmp(const char str1[], const char str2[]) {
    int i = 0;
    char c1, c2;

    while (str1[i] != '\0' && str2[i] != '\0') {
        // convert both characters to lowercase for comparison
        c1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? str1[i] + 32 : str1[i];
        c2 = (str2[i] >= 'A' && str2[i] <= 'Z') ? str2[i] + 32 : str2[i];

        if (c1 != c2)
            return (c1 - c2);

        i++;
    }

    // If one string ends before the other
    return str1[i] - str2[i];
}
