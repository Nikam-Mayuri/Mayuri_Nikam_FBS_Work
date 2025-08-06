#include <stdio.h>

int sumFirstLast(int num) {
    int last = num % 10;
    int first = num;

    while (first >= 10) {
        first /= 10;
    }

    return first + last;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sumFirstLast(n);
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}
