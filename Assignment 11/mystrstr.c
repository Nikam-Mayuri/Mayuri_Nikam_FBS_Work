#include <stdio.h>

// function declaration
char* mystrstr(char str[], char substr[]);

int main() {
    char str[] = "Hello World";
    char substr[] = "World";

    char *result = mystrstr(str, substr);  // find substring

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found.\n");

    return 0;
}

// function definition
char* mystrstr(char str[], char substr[]) {
    int i, j;

    if (substr[0] == '\0')  // empty substring
        return str;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        // check if substring matches
        while (str[i + j] != '\0' && substr[j] != '\0' && str[i + j] == substr[j]) {
            j++;
        }

        if (substr[j] == '\0') {  // full match found
            return &str[i];
        }
    }
    return NULL;  // not found
}
