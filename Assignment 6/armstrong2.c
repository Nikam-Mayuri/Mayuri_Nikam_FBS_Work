#include <stdio.h>

void isArmstrong(int num) {
    int original = num, sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isArmstrong(n);
    return 0;
}
