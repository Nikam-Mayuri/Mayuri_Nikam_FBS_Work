#include <stdio.h>

// function declaration
void mystrrev(char str[]);

int main() {
    char str[] = "Hello World";

    mystrrev(str);   // reverse string

    printf("Reversed String: %s\n", str);

    return 0;
}

// function definition
void mystrrev(char str[]) {
    int i = 0, j = 0;
    char temp;

    // find length of string
    while (str[j] != '\0') {
        j++;
    }
    j--;  // last index of string (excluding '\0')

    // swap characters from both ends
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
