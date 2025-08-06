#include <stdio.h>

void isPrime(int n) {
    if (n <= 1) {
        printf("%d is NOT a Prime number.\n", n);
        return;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            printf("%d is NOT a Prime number.\n", n);
            return;
        }
    }
    printf("%d is a Prime number.\n", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPrime(num);

    return 0;
}
