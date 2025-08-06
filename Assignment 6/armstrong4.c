#include <stdio.h>

void isArmstrong() {
    int num, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

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
    isArmstrong();
    return 0;
}
