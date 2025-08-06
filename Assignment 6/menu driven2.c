#include <stdio.h>

// Function declarations
void isEven(int n);
void isPrime(int n);
void isPalindrome(int n);
void checkSign(int n);
void reverse(int n);
void sumOfDigits(int n);

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

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
            isEven(num);
            break;
        case 2:
            isPrime(num);
            break;
        case 3:
            isPalindrome(num);
            break;
        case 4:
            checkSign(num);
            break;
        case 5:
            reverse(num);
            break;
        case 6:
            sumOfDigits(num);
            break;
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}

// Definitions
void isEven(int n) {
    if (n % 2 == 0)
