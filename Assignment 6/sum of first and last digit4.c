#include <stdio.h>

void sumFirstLast() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int last = num % 10;
    int first = num;

    while (first >= 10) {
        first /= 10;
    }

    printf("Sum of first and last digit: %d\n", first + last);
}

int main() {
    sumFirstLast();
    return 0;
}
