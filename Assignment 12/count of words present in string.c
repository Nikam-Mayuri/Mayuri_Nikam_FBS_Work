#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, words = 0;

    // input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline character (??? user enter ???? ??)
    str[strcspn(str, "\n")] = '\0';

    // count words
    for (i = 0; str[i] != '\0'; i++) {
        // ??? current char space ?? ?? previous char space ???? ??
        if ((str[i] == ' ' || str[i] == '\t') && (i > 0 && str[i-1] != ' ' && str[i-1] != '\t')) {
            words++;
        }
    }

    // last word ?? ????? ?? ??? string ???? ???? ??
    if (strlen(str) > 0 && str[0] != ' ')
        words++;

    printf("Number of words = %d\n", words);

    return 0;
}
