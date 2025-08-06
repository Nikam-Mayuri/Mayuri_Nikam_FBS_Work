#include <stdio.h>

// Function declarations
void checkEvenOdd();
void checkPrime();
void checkPalindrome();
void checkSign();
void reverseNumber();
void sumDigits();

void main() {
    int choice;

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
            checkEvenOdd();
            break;
        case 2:
            checkPrime();
            break;
        case 3:
            checkPalindrome();
            break;
        case 4:
            checkSign();
            break;
        case 5:
            reverseNumber();
            break;
        case 6:
            sumDigits();
            break;
        default:
            printf("Invalid choice!\n");
    }
}

// Function definitions

void checkEvenOdd() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

void checkPrime() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
}

void checkPalindrome() {
    int n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (rev == n)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome\n");
}

void checkSign() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        printf("Positive Number\n");
    else if (n < 0)
        printf("Negative Number\n");
    else
        printf("Zero\n");
}

void reverseNumber() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed Number: %d\n", rev);
}

void sumDigits() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of Digits: %d\n", sum);
}
