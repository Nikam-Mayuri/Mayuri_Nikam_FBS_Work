#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // spaces ???? ???? input ????

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '#';   // space ?? special symbol (#) ?? ??? ??
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
