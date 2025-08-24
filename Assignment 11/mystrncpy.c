#include <stdio.h>

// function declaration
void mystrncpy(char dest[], char src[], int n);

int main() {
    char str1[20];               // destination (empty initially)
    char str2[] = "Programming"; // source

    mystrncpy(str1, str2, 5);    // copy first 5 characters of str2 into str1

    printf("After mystrncpy: %s\n", str1);

    return 0;
}

// function definition
void mystrncpy(char dest[], char src[], int n) {
    int i;

    // copy at most n characters
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // if n is more than src length, pad with '\0'
    dest[i] = '\0';
}
