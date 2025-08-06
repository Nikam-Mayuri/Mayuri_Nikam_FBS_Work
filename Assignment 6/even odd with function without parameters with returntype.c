#include <stdio.h>

// Function declaration (no parameters, returns an int)
int getNumber();

int main()
{
    int num;

    // Call the function and store returned value
    num = getNumber();

    // Check even or odd
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}

// Function definition
int getNumber()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}
