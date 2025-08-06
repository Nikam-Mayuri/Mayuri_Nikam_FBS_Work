#include <stdio.h>

// Function declaration (no parameters, returns a character)
char getCharacter();

int main()
{
    char ch;

    // Call the function to get the character
    ch = getCharacter();

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character '%c' is Uppercase.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character '%c' is Lowercase.\n", ch);
    }
    else
    {
        printf("The character '%c' is not an alphabet letter.\n", ch);
    }

    return 0;
}

// Function definition
char getCharacter()
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);  // Space before %c handles any leftover newline
    return c;
}
