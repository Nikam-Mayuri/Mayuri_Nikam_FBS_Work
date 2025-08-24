#include <stdio.h>

// function declaration
void mystrlower(char str[]);

int main() {
    char str[] = "HELLO WORLD";

    mystrlower(str);   // convert to lowercase

    printf("Lowercase String: %s\n", str);

    return 0;
}

// function definition
void mystrlower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {   // check if uppercase
            str[i] = str[i] + 32;               // convert to lowercase
        }
        i++;
    }
}
