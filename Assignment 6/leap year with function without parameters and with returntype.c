#include <stdio.h>

// Function declaration (no parameters, returns the year entered)
int getYear();

int main()
{
    int year;

    // Get year from function
    year = getYear();

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}

// Function definition
int getYear()
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    return y;
}
