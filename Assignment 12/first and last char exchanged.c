#include <stdio.h>
#include <string.h>

int main() {
    char str[100], newStr[100];
    int len;

    // input string
    printf("Enter a string: ");
    scanf("%s", str);   // easy input (no spaces)

    len = strlen(str);

    // copy original string into newStr
    strcpy(newStr, str);

    // swap first and last characters if length > 1
    if (len > 1) {
        char temp = newStr[0];
        newStr[0] = newStr[len - 1];
        newStr[len - 1] = temp;
    }

    printf("Original String: %s\n", str);
    printf("New String     : %s\n", newStr);

    return 0;
}
