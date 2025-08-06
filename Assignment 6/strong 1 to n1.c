#include <stdio.h>

int factorial(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++)
        f *= i;
    return f;
}

void printStrong() {
    int n, num, temp, rem, sum;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d:\n", n);
    for (num = 1; num <= n; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            rem = temp % 10;
            sum += factorial(rem);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
}
