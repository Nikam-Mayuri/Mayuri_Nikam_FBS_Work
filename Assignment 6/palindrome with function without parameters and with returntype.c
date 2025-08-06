#include <stdio.h>

// Function declaration
int getNumber();  // No parameters, returns the number

int main()
{
    int num, reversed = 0, temp, digit;

    // Get number from function
    num = getNumber();

    // Check if it's a 3-digit number
    if (num < 100 || num > 999)
    {
        printf("Error: Please enter a 3-digit number.\n");
        return 1;
    }

    temp = num;  // Store original number

    // Reverse the number
    while (num > 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    // Check for palindrome
    if (temp == reversed)
        printf("%d is a Palindrome number.\n", temp);
    else
        printf("%d is NOT a Palindrome number.\n", temp);

    return 0;
}

// Function definition
int getNumber()
{
    int n;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    return n;
}
