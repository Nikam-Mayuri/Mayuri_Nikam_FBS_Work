#include <stdio.h>

const char* checkLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return "Leap Year";
    else
        return "Not a Leap Year";
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("%d is %s.\n", year, checkLeapYear(year));
    return 0;
}
