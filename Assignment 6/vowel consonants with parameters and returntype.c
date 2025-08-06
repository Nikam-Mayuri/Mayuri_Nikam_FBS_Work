#include <stdio.h>

const char* checkVowelConsonant(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? "Vowel" : "Consonant";
    }
    return "Invalid Input";
}

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("'%c' is %s.\n", ch, checkVowelConsonant(ch));
    return 0;
}
