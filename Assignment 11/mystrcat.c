#include <stdio.h>

// function declaration
void mystrcat(char dest[], char src[]);

int main() {
    char str1[50] = "Hello";  // destination (big enough to hold both)
    char str2[] = " World";   // source

    mystrcat(str1, str2);  // append str2 to str1

    printf("Concatenated String: %s\n", str1);

    return 0;
}

// function definition
void mystrcat(char dest[], char src[]) {
    int i = 0, j = 0;

    // move to the end of dest string
    while (dest[i] != '\0') {
        i++;
    }

    // copy src to end of dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    // add null terminator
    dest[i] = '\0';
}
