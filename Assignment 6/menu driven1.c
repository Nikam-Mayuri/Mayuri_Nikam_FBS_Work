#include <stdio.h>

// Function declarations
int isEven(int n);
int isPrime(int n);
int isPalindrome(int n);
int checkSign(int n);
int reverse(int n);
int sumOfDigits(int n);

int main() {
    int num, choice, result;

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
            result = isEven(num);
            if (result)
                printf("Even Number\n");
            else
                printf("Odd Number\n");
            break;
        case 2:
            result = isPrime(num);
            if (result)
                printf("Prime Number\n");
            else
                printf("Not a Prime Number\n");
            break;
        case 3:
            result = isPalindrome(num);
            if (result)
                printf("Palindrome Number\n");
            else
                printf("Not a Palindrome\n");
            break;
        case 4:
            result = checkSign(num);
            if (result == 1)
                printf("Positive Number\n");
            else if (result == -1)
                printf("Negative Number\n");
            else
                printf("Zero\n");
            break;
        case 5:
            result = reverse(num);
            printf("Reversed Number: %d\n", result);
            break;
        case 6:
            result = sumOfDigits(num);
            printf("Sum of Digits: %d\n", result);
            break;
        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}

// Definitions
int isEven(int n) {
    return n % 2 == 0;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == n);
}

int checkSign(int n) {
    if (n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
}

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
