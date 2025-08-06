#include <stdio.h>
#include <math.h>

void printArmstrong() {
    int n, num, temp, rem, sum, digits;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d:\n", n);

    for (num = 1; num <= n; num++) {
        temp = num;
        digits = 0;

        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;
        sum = 0;
        while (temp != 0) {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
}
