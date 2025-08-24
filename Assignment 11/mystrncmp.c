#include <stdio.h>

// function declaration
int mystrncmp(char str1[], char str2[], int n);

int main() {
    char str1[] = "Hello";
    char str2[] = "Helium";

    int result = mystrncmp(str1, str2, 3);  // compare first 3 chars

    if (result == 0)
        printf("First 3 characters are equal.\n");
    else if (result > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}

// function definition
int mystrncmp(char str1[], char str2[], int n) {
    int i = 0;

    while (i < n && str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];  // return difference
        i++;
    }

    if (i < n)  // if one string ended earlier
        return str1[i] - str2[i];

    return 0;  // equal till n characters
}
