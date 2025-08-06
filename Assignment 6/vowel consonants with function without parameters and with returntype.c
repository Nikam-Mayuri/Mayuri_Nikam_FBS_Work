#include <stdio.h>

// Function declaration (no parameters, returns the entered character)
char getChar();

int main()
{
    char ch;

    // Call the function to get the character
    ch = getChar();

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        // Convert uppercase to lowercase for simplicity
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The character '%c' is a Vowel.\n", ch);
        }
        else
        {
            printf("The character '%c' is a Consonant.\n", ch);
        }
    }
    else
    {
        printf("Invalid input! Please enter an alphabet character.\n");
    }

    return 0;
}

// Function definition
char getChar()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);  // Note: space before %c to consume any leftover newline
    return c;
}
