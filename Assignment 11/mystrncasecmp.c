#include <stdio.h>

// function declaration
int mystrncasecmp(const char str1[], const char str2[], int n);

int main() {
    char s1[] = "HELLO";
    char s2[] = "heLium";

    int result = mystrncasecmp(s1, s2, 3);  // compare first 3 chars

    if (result == 0)
        printf("First %d characters are equal (case-insensitive)\n", 3);
    else if (result < 0)
        printf("First %d characters: str1 < str2\n", 3);
    else
        printf("First %d characters: str1 > str2\n", 3);

    return 0;
}

// function definition
int mystrncasecmp(const char str1[], const char str2[], int n) {
    int i = 0;
    char c1, c2;

    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        // convert both to lowercase manually
        c1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? str1[i] + 32 : str1[i];
        c2 = (str2[i] >= 'A' && str2[i] <= 'Z') ? str2[i] + 32 : str2[i];

        if (c1 != c2) {
            return (c1 - c2);  // difference found
        }
        i++;
    }

    if (i < n) {
        // if one string ended before n chars
        return (str1[i] - str2[i]);
    }

    return 0; // equal up to n chars
}
