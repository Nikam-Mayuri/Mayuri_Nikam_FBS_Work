#include <stdio.h>

const char* checkCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return "Uppercase";
    else if (ch >= 'a' && ch <= 'z')
        return "Lowercase";
    else
        return "Not an alphabet";
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("'%c' is %s.\n", ch, checkCase(ch));
    return 0;
}
