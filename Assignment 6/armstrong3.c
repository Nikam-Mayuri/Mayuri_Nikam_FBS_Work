#include <stdio.h>

int isArmstrong() {
    int num, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == original;
}

int main() {
    if (isArmstrong())
        printf("It is an Armstrong number.\n");
    else
        printf("It is NOT an Armstrong number.\n");
    return 0;
}
