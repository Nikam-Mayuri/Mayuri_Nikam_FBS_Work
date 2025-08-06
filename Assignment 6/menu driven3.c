#include <stdio.h>

// Function declarations
int getNumber();
int checkEvenOdd();
int checkPrime();
int checkPalindrome();
int checkSign();
int reverseNumber();
int sumDigits();

int main() {
    int choice, result;

    printf("\nChoose Operation:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime\n");
    printf("3. Check Palindrome\n");
    printf("4. Check Sign (Positive/Negative/Zero)\n");
    printf("5. Reverse the Number\n");
    printf("6. Sum of Digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = checkEvenOdd();
            printf(result ? "Even Number\n" : "Odd Number\n");
            break;
        case 2:
            result = checkPrime();
            printf(result ? "Prime Number\n" : "Not a Prime Number\n");
            break;
        case 3:
            result = checkPalindrome();
            printf(result ? "Palindrome Number\n" : "Not a Palindrome\n");
            break;
        case 4:
            result = checkSign();
            if (result == 1)
                printf("Positive Number\n");
            else if (result == -1)
                printf("Negative Number\n");
            else
                printf("Zero\n");
            break;
        case 5:
            result = reverseNumber();
            printf("Reversed Number: %d\n", result);
            break;
        case 6:
            result = sumDigits();
            printf("Sum of Digits: %d\n", result);
            break;
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}

// Function to get input from user
int getNumber() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int checkEvenOdd() {
    int n = getNumber();
    return n % 2 == 0;
}

int checkPrime() {
    int n = getNumber();
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int checkPalindrome() {
    int n = getNumber(), rev = 0, temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == n);
}

int checkSign() {
    int n = getNumber();
    if (n > 0)
        return 1;
    else if (n < 0)
        return -1;
    else
        return 0;
}

int reverseNumber() {
    int n = getNumber(), rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int sumDigits() {
    int n = getNumber(), sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
