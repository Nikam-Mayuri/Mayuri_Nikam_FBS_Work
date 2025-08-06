#include <stdio.h>

const char* checkPalindrome(int num)
{
    if (num < 100 || num > 999)
        return "Invalid: Not a 3-digit number";

    int reversed = 0, temp = num;
    while (temp > 0)
    {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
    }

    return (num == reversed) ? "Palindrome" : "Not Palindrome";
}

int main()
{
    int number;
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    printf("%d is %s.\n", number, checkPalindrome(number));
    return 0;
}
