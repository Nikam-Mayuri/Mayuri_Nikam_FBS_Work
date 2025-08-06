#include <stdio.h>

int sumFirstLast() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int last = num % 10;
    int first = num;

    while (first >= 10) {
        first /= 10;
    }

    return first + last;
}

int main() {
    int sum = sumFirstLast();
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}
