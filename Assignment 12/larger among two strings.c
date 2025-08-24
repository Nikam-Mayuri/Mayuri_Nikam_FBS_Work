#include <stdio.h>

// function declaration
char* largerString(char str1[], char str2[]);

int main() {
    char s1[100], s2[100];
    char *larger;

    // input strings
    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // call function
    larger = largerString(s1, s2);

    printf("Larger string is: %s\n", larger);

    return 0;
}

// function definition
char* largerString(char str1[], char str2[]) {
    int len1 = 0, len2 = 0;

    // find length of first string
    while (str1[len1] != '\0')
        len1++;

    // find length of second string
    while (str2[len2] != '\0')
        len2++;

    if (len1 >= len2)
        return str1;
    else
        return str2;
}
