#include <stdio.h>

// function declaration
void mystrupper(char str[]);

int main() {
    char str[] = "Hello World";

    mystrupper(str);   // convert to uppercase

    printf("Uppercase String: %s\n", str);

    return 0;
}

// function definition
void mystrupper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {   // check if lowercase
            str[i] = str[i] - 32;               // convert to uppercase
        }
        i++;
    }
}
