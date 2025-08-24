#include <stdio.h>
#include <string.h>

int main() {
    char str[100], newStr[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // input with spaces

    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {      // ???? even index ???? characters ???
            newStr[j] = str[i];
            j++;
        }
    }
    newStr[j] = '\0';   // null terminator ????? ????? ??

    printf("String after removing odd index characters: %s\n", newStr);

    return 0;
}
