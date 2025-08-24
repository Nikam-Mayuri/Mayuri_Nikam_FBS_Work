#include <stdio.h>
#include <string.h>  // for strchr()

int main() {
    char str[100];
    char ch;
    char *pos;

    // input string
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read string with spaces

    getchar();  // clear buffer

    // input character
    printf("Enter a character to search: ");
    scanf("%c", &ch);

    // use strchr to search
    pos = strchr(str, ch);

    if (pos == NULL)
        printf("Character '%c' not found in string.\n", ch);
    else
        printf("Character '%c' found at position %ld.\n", 
               ch, (pos - str) + 1);

    return 0;
}
