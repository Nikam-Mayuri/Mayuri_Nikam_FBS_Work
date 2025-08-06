#include <stdio.h>

int isPrime() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        return 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    if (isPrime())
        printf("It is a Prime number.\n");
    else
        printf("It is NOT a Prime number.\n");

    return 0;
}
