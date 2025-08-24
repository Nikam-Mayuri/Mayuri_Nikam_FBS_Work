#include <stdio.h>

// function declaration
char* mystrrchr(char str[], char ch);

int main() {
    char str[] = "Hello World";
    char ch = 'o';

    char *ptr = mystrrchr(str, ch);  // search for last occurrence

    if (ptr != NULL)
        printf("Last occurrence of '%c' found at: %s\n", ch, ptr);
    else
        printf("Character '%c' not found in string.\n", ch);

    return 0;
}

// function definition
char* mystrrchr(char str[], char ch) {
    char *last = NULL;  // to store last found position
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            last = &str[i];  // update whenever match found
        }
        i++;
    }

    return last;  // may be NULL if not found
}
