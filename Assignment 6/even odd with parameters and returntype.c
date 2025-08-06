#include <stdio.h>

const char* checkEvenOdd(int num)
{
    return (num % 2 == 0) ? "Even" : "Odd";
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d is %s.\n", number, checkEvenOdd(number));
    return 0;
}
