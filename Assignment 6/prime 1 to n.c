#include <stdio.h>

void printPrime(int n) {
    int i, j, isPrime;

    printf("Prime numbers from 1 to %d:\n", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
}
