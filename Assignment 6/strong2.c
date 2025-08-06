#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

void checkStrong(int num) {
    int temp = num, sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is not a Strong Number.\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkStrong(num);
    return 0;
}
