#include <stdio.h>

// function declaration
void mystrncat(char dest[], const char src[], int n);

int main() {
    char str1[50] = "Hello";   // destination (big enough)
    char str2[] = " World!";

    mystrncat(str1, str2, 3);  // append first 3 chars of str2

    printf("Concatenated String: %s\n", str1);

    return 0;
}

// function definition
void mystrncat(char dest[], const char src[], int n) {
    int i = 0, j = 0;

    // move to end of dest
    while (dest[i] != '\0') {
        i++;
    }

    // copy at most n chars from src
    while (src[j] != '\0' && j < n) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // null terminate
    dest[i] = '\0';
}
