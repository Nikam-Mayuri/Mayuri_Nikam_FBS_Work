#include <stdio.h>
#include <string.h>

// function declaration
void removeChar(char str[], int index);

int main() {
    char str[100];
    int n;

    // input string
    printf("Enter a string: ");
    scanf("%s", str);

    // input index
    printf("Enter index to remove (0-based): ");
    scanf("%d", &n);

    // check valid index
    if (n < 0 || n >= strlen(str)) {
        printf("Invalid index!\n");
    } else {
        removeChar(str, n);  // call function
        printf("String after removal: %s\n", str);
    }

    return 0;
}

// function definition
void removeChar(char str[], int index) {
    int len = strlen(str);

    for (int i = index; i < len; i++) {
        str[i] = str[i + 1];  // shift left
    }
}
