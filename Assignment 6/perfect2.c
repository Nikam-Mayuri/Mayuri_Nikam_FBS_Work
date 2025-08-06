#include <stdio.h>

void isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is NOT a Perfect Number.\n", num);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    isPerfect(n);
    return 0;
}
