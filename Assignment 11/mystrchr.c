#include <stdio.h>

// function declaration
char* mystrchr(char str[], char ch);

int main() {
    char str[] = "Hello World";
    char ch = 'o';

    char *ptr = mystrchr(str, ch);  // search for character

    if (ptr != NULL)
        printf("First occurrence of '%c' found at: %s\n", ch, ptr);
    else
        printf("Character '%c' not found in string.\n", ch);

    return 0;
}

// function definition
char* mystrchr(char str[], char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return &str[i];   // return pointer to first match
        }
        i++;
    }
    return NULL;  // character not found
}
